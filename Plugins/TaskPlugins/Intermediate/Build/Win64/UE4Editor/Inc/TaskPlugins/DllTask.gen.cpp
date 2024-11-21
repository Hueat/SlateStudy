// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TaskPlugins/Public/DllTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDllTask() {}
// Cross Module References
	TASKPLUGINS_API UClass* Z_Construct_UClass_ADllTask_NoRegister();
	TASKPLUGINS_API UClass* Z_Construct_UClass_ADllTask();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_TaskPlugins();
// End Cross Module References
	DEFINE_FUNCTION(ADllTask::execHelloDll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelloDll();
		P_NATIVE_END;
	}
	void ADllTask::StaticRegisterNativesADllTask()
	{
		UClass* Class = ADllTask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HelloDll", &ADllTask::execHelloDll },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADllTask_HelloDll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADllTask_HelloDll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dll" },
		{ "ModuleRelativePath", "Public/DllTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADllTask_HelloDll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADllTask, nullptr, "HelloDll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADllTask_HelloDll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADllTask_HelloDll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADllTask_HelloDll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADllTask_HelloDll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADllTask_NoRegister()
	{
		return ADllTask::StaticClass();
	}
	struct Z_Construct_UClass_ADllTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADllTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TaskPlugins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADllTask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADllTask_HelloDll, "HelloDll" }, // 877680100
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADllTask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DllTask.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DllTask.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADllTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADllTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADllTask_Statics::ClassParams = {
		&ADllTask::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADllTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADllTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADllTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADllTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADllTask, 1350909739);
	template<> TASKPLUGINS_API UClass* StaticClass<ADllTask>()
	{
		return ADllTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADllTask(Z_Construct_UClass_ADllTask, &ADllTask::StaticClass, TEXT("/Script/TaskPlugins"), TEXT("ADllTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADllTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
