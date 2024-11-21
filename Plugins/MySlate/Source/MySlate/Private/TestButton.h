#pragma once

#include "CoreMinimal.h"
#include"Widgets/SCompoundWidget.h"
class STestButton:public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(STestButton)
	{}
	SLATE_END_ARGS()

		void Construct(const FArguments& InArgs);

};

