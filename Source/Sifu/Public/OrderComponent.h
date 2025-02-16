#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SCPoolableActorComponent.h"
#include "Buffer.h"
#include "EOrderAccessMode.h"
#include "EOrderType.h"
#include "OrderInfosInstanceMap.h"
#include "OrderTransformData.h"
#include "OrderType.h"
#include "Templates/SubclassOf.h"
#include "OrderComponent.generated.h"

class UOrderDB;
class UOrderDBSet;
class UOrderDelegateHandler;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UOrderComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UOrderDBSet>> m_OrderDBs;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOrderInfosInstanceMap m_OrderServiceInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FOrderType, UOrderDelegateHandler*> m_OrderDelegateHandler;
    
public:
    UOrderComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateOrder(uint8 _uiOrderId, EOrderType _eOrderType, FBuffer _ReplicatedBuffer, FUniqueNetIdRepl _callerPlayerId);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPlayOrder(EOrderType _eOrderType, uint8 _uiForcedID, FBuffer _ReplicatedBuffer, int64 _iTimeLaunch, uint8 _uiAfterOrder, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster, uint8 _uiOrderIDToInsertBefore, uint8 _uiReplaceInSequence);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCancelOrderByType(const FOrderType& _OrderType, bool _bCancelFirstOnly, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bFromServer, bool _bIncludeChildType);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCancelOrderByIDList(const TArray<uint8>& _OrderIDList, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bFromServer);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCancelOrderByID(uint8 _uiOrderId, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster, bool _bFromServer);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MultiCastUpdateOrder(uint8 _uiOrderId, EOrderType _eOrderType, FBuffer _ReplicatedBuffer, FUniqueNetIdRepl _callerPlayerId);
    
    UFUNCTION(NetMulticast, Reliable)
    void MultiCastPlayOrder(EOrderType _eOrderType, uint8 _uiForcedID, FBuffer _ReplicatedBuffer, int64 _iTimeLaunch, uint8 _uiAfterOrder, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster, uint8 _uiOrderIDToInsertBefore, uint8 _uiReplaceInSequence);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MultiCastFirstOrderTransformData(uint8 _uiOrderId, FOrderTransformData _orderTransformData);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void MultiCastCancelOrderByType(const FOrderType& _OrderType, bool _bCancelFirstOnly, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, const TArray<uint8>& _orderIdExceptions, bool _bIncludeChildType);
    
    UFUNCTION(NetMulticast, Reliable)
    void MultiCastCancelOrderByIDList(const TArray<uint8>& _OrderIDList, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId);
    
    UFUNCTION(NetMulticast, Reliable)
    void MultiCastCancelOrderByID(uint8 _uiOrderId, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOrderDelegateHandler* GetOrderDelegates(const FOrderType& _OrderType);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPlayOrderRejected(uint8 _uiOrderId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsOrderRunningWithID(uint8 _uiID, EOrderAccessMode _eAccessMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsOrderRunning(const FOrderType& _OrderType, EOrderAccessMode _eAccessMode, bool _bStillInRunningPhase, bool _bIncludeChildType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsLastActionOrderPlayedInMirror() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<uint8> BPF_GetRunningAndPendingActionOrders(bool _bStillInRunningPhase) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOrderType BPF_GetOrderTypeFromOrderID(uint8 _uiOrderId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 BPF_GetOrderIDFromType(EOrderType _eOrderType, bool& _bFound, EOrderAccessMode _eAccessMode, bool _bStillInRunningPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOrderDelegateHandler* BPF_GetOrderDelegates(EOrderType _eOrderType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOrderDB* BPF_GetOrderDB(FOrderType _OrderType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 BPF_GetLastActionOrderId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOrderType BPF_GetBPOrderTypeFromOrderID(uint8 _uiOrderId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOrderDelegateHandler* BPF_GetBPOrderDelegates(FName _BPOrderType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_CancelAllOrders();
    

    // Fix for true pure virtual functions not being implemented
};

