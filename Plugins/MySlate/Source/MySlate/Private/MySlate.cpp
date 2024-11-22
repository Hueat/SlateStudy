// Copyright Epic Games, Inc. All Rights Reserved.

#include "MySlate.h"
#include "MySlateStyle.h"
#include "MySlateCommands.h"
#include "MyMineSlate.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "ToolMenus.h"
#include"TestButton.h"
static const FName MySlateTabName("MySlate");

#define LOCTEXT_NAMESPACE "FMySlateModule"

void FMySlateModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FMySlateStyle::Initialize();
	FMySlateStyle::ReloadTextures();

	FMySlateCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FMySlateCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FMySlateModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FMySlateModule::RegisterMenus));
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(MySlateTabName, FOnSpawnTab::CreateRaw(this, &FMySlateModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FMySlateTabTitle", "MySlate"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);
}

void FMySlateModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FMySlateStyle::Shutdown();

	FMySlateCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(MySlateTabName);
}

TSharedRef<SDockTab> FMySlateModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	FText WidgetText = FText::Format(
		LOCTEXT("WindowWidgetText", "Add code to {0} in {1} to override this window's contents"),
		FText::FromString(TEXT("FMySlateModule::OnSpawnPluginTab")),
		FText::FromString(TEXT("MySlate.cpp"))
		);

	return SNew(SDockTab)
		[
			SAssignNew(mineSlate,SMyMineSlate)
		];
		// .TabRole(ETabRole::NomadTab)
		// [
		// 	// Put your tab content here!
		// 	SNew(SBox)
		// 	.HAlign(HAlign_Center)
		// 	.VAlign(VAlign_Center)
		// 	[
		// 		SNew(STestButton)
		// 	]
		// ];
}

void FMySlateModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->TryInvokeTab(MySlateTabName);
}

void FMySlateModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FMySlateCommands::Get().OpenPluginWindow, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("Settings");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FMySlateCommands::Get().OpenPluginWindow));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMySlateModule, MySlate)