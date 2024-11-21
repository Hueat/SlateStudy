
#include "TestButton.h"

void STestButton::Construct(const FArguments& InArgs)
{
	ChildSlot
		[
			SNew(SButton)
		];
}