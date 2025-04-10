// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ManicClockPluginBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FManicGameTime;
#ifdef MANIC_AI_ManicClockPluginBPLibrary_generated_h
#error "ManicClockPluginBPLibrary.generated.h already included, missing '#pragma once' in ManicClockPluginBPLibrary.h"
#endif
#define MANIC_AI_ManicClockPluginBPLibrary_generated_h

#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicClockPluginBPLibrary_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FManicGameTime_Statics; \
	MANIC_AI_API static class UScriptStruct* StaticStruct();


template<> MANIC_AI_API UScriptStruct* StaticStruct<struct FManicGameTime>();

#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicClockPluginBPLibrary_h_33_SPARSE_DATA
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicClockPluginBPLibrary_h_33_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicClockPluginBPLibrary_h_33_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicClockPluginBPLibrary_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTickManicClockAndGet); \
	DECLARE_FUNCTION(execSetInGameClockTime);


#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicClockPluginBPLibrary_h_33_ACCESSORS
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicClockPluginBPLibrary_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManicClockPluginBPLibrary(); \
	friend struct Z_Construct_UClass_UManicClockPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UManicClockPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Manic_AI"), NO_API) \
	DECLARE_SERIALIZER(UManicClockPluginBPLibrary)


#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicClockPluginBPLibrary_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UManicClockPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManicClockPluginBPLibrary(UManicClockPluginBPLibrary&&); \
	NO_API UManicClockPluginBPLibrary(const UManicClockPluginBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManicClockPluginBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManicClockPluginBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UManicClockPluginBPLibrary) \
	NO_API virtual ~UManicClockPluginBPLibrary();


#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicClockPluginBPLibrary_h_30_PROLOG
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicClockPluginBPLibrary_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicClockPluginBPLibrary_h_33_SPARSE_DATA \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicClockPluginBPLibrary_h_33_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicClockPluginBPLibrary_h_33_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicClockPluginBPLibrary_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicClockPluginBPLibrary_h_33_ACCESSORS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicClockPluginBPLibrary_h_33_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicClockPluginBPLibrary_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MANIC_AI_API UClass* StaticClass<class UManicClockPluginBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicClockPluginBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
