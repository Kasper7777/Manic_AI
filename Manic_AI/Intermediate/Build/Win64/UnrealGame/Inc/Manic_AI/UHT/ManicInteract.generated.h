// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ManicInteract.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MANIC_AI_ManicInteract_generated_h
#error "ManicInteract.generated.h already included, missing '#pragma once' in ManicInteract.h"
#endif
#define MANIC_AI_ManicInteract_generated_h

#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicInteract_h_28_SPARSE_DATA
#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicInteract_h_28_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicInteract_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicInteract_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicInteract_h_28_ACCESSORS
#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicInteract_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManicInteract(); \
	friend struct Z_Construct_UClass_UManicInteract_Statics; \
public: \
	DECLARE_CLASS(UManicInteract, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Manic_AI"), NO_API) \
	DECLARE_SERIALIZER(UManicInteract)


#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicInteract_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManicInteract(UManicInteract&&); \
	NO_API UManicInteract(const UManicInteract&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManicInteract); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManicInteract); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UManicInteract) \
	NO_API virtual ~UManicInteract();


#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicInteract_h_25_PROLOG
#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicInteract_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicInteract_h_28_SPARSE_DATA \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicInteract_h_28_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicInteract_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicInteract_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicInteract_h_28_ACCESSORS \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicInteract_h_28_INCLASS_NO_PURE_DECLS \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicInteract_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MANIC_AI_API UClass* StaticClass<class UManicInteract>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicInteract_h


#define FOREACH_ENUM_EINTERACTTARGETTYPE(op) \
	op(EInteractTargetType::BlackboardActor) \
	op(EInteractTargetType::StaticActor) 

enum class EInteractTargetType : uint8;
template<> struct TIsUEnumClass<EInteractTargetType> { enum { Value = true }; };
template<> MANIC_AI_API UEnum* StaticEnum<EInteractTargetType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
