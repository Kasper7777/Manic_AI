// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ManicTaskMoveToTarget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MANIC_AI_ManicTaskMoveToTarget_generated_h
#error "ManicTaskMoveToTarget.generated.h already included, missing '#pragma once' in ManicTaskMoveToTarget.h"
#endif
#define MANIC_AI_ManicTaskMoveToTarget_generated_h

#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FManicTaskMoveToTargetMemory_Statics; \
	MANIC_AI_API static class UScriptStruct* StaticStruct();


template<> MANIC_AI_API UScriptStruct* StaticStruct<struct FManicTaskMoveToTargetMemory>();

#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_36_SPARSE_DATA
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_36_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_36_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_36_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_36_ACCESSORS
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManicTaskMoveToTarget(); \
	friend struct Z_Construct_UClass_UManicTaskMoveToTarget_Statics; \
public: \
	DECLARE_CLASS(UManicTaskMoveToTarget, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Manic_AI"), NO_API) \
	DECLARE_SERIALIZER(UManicTaskMoveToTarget)


#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManicTaskMoveToTarget(UManicTaskMoveToTarget&&); \
	NO_API UManicTaskMoveToTarget(const UManicTaskMoveToTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManicTaskMoveToTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManicTaskMoveToTarget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UManicTaskMoveToTarget) \
	NO_API virtual ~UManicTaskMoveToTarget();


#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_33_PROLOG
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_36_SPARSE_DATA \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_36_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_36_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_36_ACCESSORS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_36_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MANIC_AI_API UClass* StaticClass<class UManicTaskMoveToTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h


#define FOREACH_ENUM_EMOVETOKEYMODE(op) \
	op(EMoveToKeyMode::UseActor) \
	op(EMoveToKeyMode::UseLocation) \
	op(EMoveToKeyMode::Auto) 

enum class EMoveToKeyMode : uint8;
template<> struct TIsUEnumClass<EMoveToKeyMode> { enum { Value = true }; };
template<> MANIC_AI_API UEnum* StaticEnum<EMoveToKeyMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
