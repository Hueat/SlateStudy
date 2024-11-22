#pragma once

#include "CoreMinimal.h"
#include"Widgets/SCompoundWidget.h"
class SMySlateButton:public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SMySlateButton)
	{}
	SLATE_END_ARGS()

		void Construct(const FArguments& InArgs);

};

