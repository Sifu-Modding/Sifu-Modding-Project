#include "SCLevelScriptActor.h"

ASCLevelScriptActor::ASCLevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bContainsSaveData = false;
    this->m_ContextualDialogLines = NULL;
    this->m_WorldConversationSegments = NULL;
}




