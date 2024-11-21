// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "MySlateStyle.h"

class FMySlateCommands : public TCommands<FMySlateCommands>
{
public:

	FMySlateCommands()
		: TCommands<FMySlateCommands>(TEXT("MySlate"), NSLOCTEXT("Contexts", "MySlate", "MySlate Plugin"), NAME_None, FMySlateStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};