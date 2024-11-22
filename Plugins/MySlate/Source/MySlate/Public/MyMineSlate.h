#pragma once

#include "CoreMinimal.h"
#include"Widgets/SCompoundWidget.h"
class SMyMineSlate:public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SMyMineSlate)
	{}
	SLATE_END_ARGS()

		void Construct(const FArguments& InArgs);

};

