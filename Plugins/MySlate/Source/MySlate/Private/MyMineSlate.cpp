#pragma once
#include "MyMineSlate.h"
#define LOCTEXT_NAMESPACE "MyMineSlate"
void SMyMineSlate::Construct(const FArguments& InArgs)
{
	ChildSlot
	[
		SNew(SVerticalBox)
		+SVerticalBox::Slot()
		[
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			[
				SNew(SCheckBox)
			]
			+SHorizontalBox::Slot()
			[
				SNew(SCheckBox)
			]
		]
	];
}
#undef LOCTEXT_NAMESPACE