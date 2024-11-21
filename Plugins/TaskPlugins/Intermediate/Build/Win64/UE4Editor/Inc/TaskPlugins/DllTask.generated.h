// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TASKPLUGINS_DllTask_generated_h
#error "DllTask.generated.h already included, missing '#pragma once' in DllTask.h"
#endif
#define TASKPLUGINS_DllTask_generated_h

#define SlateStudy_Plugins_TaskPlugins_Source_TaskPlugins_Public_DllTask_h_11_SPARSE_DATA
#define SlateStudy_Plugins_TaskPlugins_Source_TaskPlugins_Public_DllTask_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHelloDll);


#define SlateStudy_Plugins_TaskPlugins_Source_TaskPlugins_Public_DllTask_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHelloDll);


#define SlateStudy_Plugins_TaskPlugins_Source_TaskPlugins_Public_DllTask_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADllTask(); \
	friend struct Z_Construct_UClass_ADllTask_Statics; \
public: \
	DECLARE_CLASS(ADllTask, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TaskPlugins"), NO_API) \
	DECLARE_SERIALIZER(ADllTask)


#define SlateStudy_Plugins_TaskPlugins_Source_TaskPlugins_Public_DllTask_h_11_INCLASS \
private: \
	static void StaticRegisterNativesADllTask(); \
	friend struct Z_Construct_UClass_ADllTask_Statics; \
public: \
	DECLARE_CLASS(ADllTask, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TaskPlugins"), NO_API) \
	DECLARE_SERIALIZER(ADllTask)


#define SlateStudy_Plugins_TaskPlugins_Source_TaskPlugins_Public_DllTask_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADllTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADllTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADllTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADllTask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADllTask(ADllTask&&); \
	NO_API ADllTask(const ADllTask&); \
public:


#define SlateStudy_Plugins_TaskPlugins_Source_TaskPlugins_Public_DllTask_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADllTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADllTask(ADllTask&&); \
	NO_API ADllTask(const ADllTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADllTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADllTask); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADllTask)


#define SlateStudy_Plugins_TaskPlugins_Source_TaskPlugins_Public_DllTask_h_11_PRIVATE_PROPERTY_OFFSET
#define SlateStudy_Plugins_TaskPlugins_Source_TaskPlugins_Public_DllTask_h_8_PROLOG
#define SlateStudy_Plugins_TaskPlugins_Source_TaskPlugins_Public_DllTask_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SlateStudy_Plugins_TaskPlugins_Source_TaskPlugins_Public_DllTask_h_11_PRIVATE_PROPERTY_OFFSET \
	SlateStudy_Plugins_TaskPlugins_Source_TaskPlugins_Public_DllTask_h_11_SPARSE_DATA \
	SlateStudy_Plugins_TaskPlugins_Source_TaskPlugins_Public_DllTask_h_11_RPC_WRAPPERS \
	SlateStudy_Plugins_TaskPlugins_Source_TaskPlugins_Public_DllTask_h_11_INCLASS \
	SlateStudy_Plugins_TaskPlugins_Source_TaskPlugins_Public_DllTask_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SlateStudy_Plugins_TaskPlugins_Source_TaskPlugins_Public_DllTask_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SlateStudy_Plugins_TaskPlugins_Source_TaskPlugins_Public_DllTask_h_11_PRIVATE_PROPERTY_OFFSET \
	SlateStudy_Plugins_TaskPlugins_Source_TaskPlugins_Public_DllTask_h_11_SPARSE_DATA \
	SlateStudy_Plugins_TaskPlugins_Source_TaskPlugins_Public_DllTask_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	SlateStudy_Plugins_TaskPlugins_Source_TaskPlugins_Public_DllTask_h_11_INCLASS_NO_PURE_DECLS \
	SlateStudy_Plugins_TaskPlugins_Source_TaskPlugins_Public_DllTask_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TASKPLUGINS_API UClass* StaticClass<class ADllTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SlateStudy_Plugins_TaskPlugins_Source_TaskPlugins_Public_DllTask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
