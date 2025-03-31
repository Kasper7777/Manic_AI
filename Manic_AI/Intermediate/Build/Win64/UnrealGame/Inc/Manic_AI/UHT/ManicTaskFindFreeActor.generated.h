// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ManicTaskFindFreeActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MANIC_AI_ManicTaskFindFreeActor_generated_h
#error "ManicTaskFindFreeActor.generated.h already included, missing '#pragma once' in ManicTaskFindFreeActor.h"
#endif
#define MANIC_AI_ManicTaskFindFreeActor_generated_h

#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FManicTaskFindFreeActorMemory_Statics; \
	MANIC_AI_API static class UScriptStruct* StaticStruct();


template<> MANIC_AI_API UScriptStruct* StaticStruct<struct FManicTaskFindFreeActorMemory>();

#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_41_SPARSE_DATA
#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_41_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_41_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_41_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_41_ACCESSORS
#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManicTaskFindFreeActor(); \
	friend struct Z_Construct_UClass_UManicTaskFindFreeActor_Statics; \
public: \
	DECLARE_CLASS(UManicTaskFindFreeActor, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Manic_AI"), NO_API) \
	DECLARE_SERIALIZER(UManicTaskFindFreeActor)


#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManicTaskFindFreeActor(UManicTaskFindFreeActor&&); \
	NO_API UManicTaskFindFreeActor(const UManicTaskFindFreeActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManicTaskFindFreeActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManicTaskFindFreeActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UManicTaskFindFreeActor) \
	NO_API virtual ~UManicTaskFindFreeActor();


#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_38_PROLOG
#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_41_SPARSE_DATA \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_41_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_41_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_41_ACCESSORS \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_41_INCLASS_NO_PURE_DECLS \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MANIC_AI_API UClass* StaticClass<class UManicTaskFindFreeActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h


#define FOREACH_ENUM_EFREEACTORWRITEMODE(op) \
	op(EFreeActorWriteMode::ActorOnly) \
	op(EFreeActorWriteMode::LocationOnly) \
	op(EFreeActorWriteMode::ActorAndLocation) 

enum class EFreeActorWriteMode : uint8;
template<> struct TIsUEnumClass<EFreeActorWriteMode> { enum { Value = true }; };
template<> MANIC_AI_API UEnum* StaticEnum<EFreeActorWriteMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
