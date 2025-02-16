#include "ConditionTargetWeightEvaluation.h"

UConditionTargetWeightEvaluation::UConditionTargetWeightEvaluation() {
    this->m_eOperator = EWeightBinaryOperator::Add;
}

FString UConditionTargetWeightEvaluation::GetEditorDesc(const FConditionOnTargetWeightEvaluation& _eval) {
    return TEXT("");
}


