// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicManicNeedsComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNeedData;
#ifdef MANIC_AI_DynamicManicNeedsComponent_generated_h
#error "DynamicManicNeedsComponent.generated.h already included, missing '#pragma once' in DynamicManicNeedsComponent.h"
#endif
#define MANIC_AI_DynamicManicNeedsComponent_generated_h

#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNeedData_Statics; \
	MANIC_AI_API static class UScriptStruct* StaticStruct();


template<> MANIC_AI_API UScriptStruct* StaticStruct<struct FNeedData>();

#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h_56_DELEGATE \
MANIC_AI_API void FOnAnyNeedThreshold_DelegateWrapper(const FMulticastScriptDelegate& OnAnyNeedThreshold, FName CrossedNeedName);


#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h_62_DELEGATE \
MANIC_AI_API void FOnAllNeedsUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnAllNeedsUpdated, TArray<FNeedData> const& UpdatedNeeds);


#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h_81_SPARSE_DATA
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h_81_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h_81_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetNeedDirectionByName); \
	DECLARE_FUNCTION(execSetNeedTickRateByName); \
	DECLARE_FUNCTION(execSetNeedThresholdByName); \
	DECLARE_FUNCTION(execGetNeedValueByName); \
	DECLARE_FUNCTION(execSetNeedValueByName); \
	DECLARE_FUNCTION(execResetNeedByName); \
	DECLARE_FUNCTION(execRemoveNeedAtIndex); \
	DECLARE_FUNCTION(execAddNeed); \
	DECLARE_FUNCTION(execTickAllNeeds);


#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h_81_ACCESSORS
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicManicNeedsComponent(); \
	friend struct Z_Construct_UClass_UDynamicManicNeedsComponent_Statics; \
public: \
	DECLARE_CLASS(UDynamicManicNeedsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Manic_AI"), NO_API) \
	DECLARE_SERIALIZER(UDynamicManicNeedsComponent)


#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h_81_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamicManicNeedsComponent(UDynamicManicNeedsComponent&&); \
	NO_API UDynamicManicNeedsComponent(const UDynamicManicNeedsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicManicNeedsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicManicNeedsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDynamicManicNeedsComponent) \
	NO_API virtual ~UDynamicManicNeedsComponent();


#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h_78_PROLOG
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h_81_SPARSE_DATA \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h_81_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h_81_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h_81_ACCESSORS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h_81_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MANIC_AI_API UClass* StaticClass<class UDynamicManicNeedsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
