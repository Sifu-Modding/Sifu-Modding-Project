#include "PerPlatformRichTextBlock.h"

UPerPlatformRichTextBlock::UPerPlatformRichTextBlock() : URichTextBlock(FObjectInitializer::Get()) {
    this->NormalTextStyleSet = NULL;
    this->SmallScreenTextStyleSet = NULL;
}


