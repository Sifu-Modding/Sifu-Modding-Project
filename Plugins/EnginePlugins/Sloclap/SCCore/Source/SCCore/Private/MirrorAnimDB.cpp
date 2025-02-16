#include "MirrorAnimDB.h"

UMirrorAnimDB::UMirrorAnimDB() {
    this->m_UberSkeleton = NULL;
}

FName UMirrorAnimDB::BPF_GetTwinsBoneName(const FName& _boneName) {
    return NAME_None;
}


