// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ManicObsAvoidance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MANIC_AI_ManicObsAvoidance_generated_h
#error "ManicObsAvoidance.generated.h already included, missing '#pragma once' in ManicObsAvoidance.h"
#endif
#define MANIC_AI_ManicObsAvoidance_generated_h

#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicObsAvoidance_h_31_SPARSE_DATA
#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicObsAvoidance_h_31_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicObsAvoidance_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicObsAvoidance_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicObsAvoidance_h_31_ACCESSORS
#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicObsAvoidance_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManicObsAvoidance(); \
	friend struct Z_Construct_UClass_UManicObsAvoidance_Statics; \
public: \
	DECLARE_CLASS(UManicObsAvoidance, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Manic_AI"), NO_API) \
	DECLARE_SERIALIZER(UManicObsAvoidance)


#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicObsAvoidance_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManicObsAvoidance(UManicObsAvoidance&&); \
	NO_API UManicObsAvoidance(const UManicObsAvoidance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManicObsAvoidance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManicObsAvoidance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UManicObsAvoidance) \
	NO_API virtual ~UManicObsAvoidance();


#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicObsAvoidance_h_28_PROLOG
#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicObsAvoidance_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicObsAvoidance_h_31_SPARSE_DATA \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicObsAvoidance_h_31_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicObsAvoidance_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicObsAvoidance_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicObsAvoidance_h_31_ACCESSORS \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicObsAvoidance_h_31_INCLASS_NO_PURE_DECLS \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicObsAvoidance_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MANIC_AI_API UClass* StaticClass<class UManicObsAvoidance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicObsAvoidance_h


#define FOREACH_ENUM_ETARGETTYPE(op) \
	op(ETargetType::BlackboardLocation) \
	op(ETargetType::BlackboardActor) \
	op(ETargetType::StaticActor) 

enum class ETargetType : uint8;
template<> struct TIsUEnumClass<ETargetType> { enum { Value = true }; };
template<> MANIC_AI_API UEnum* StaticEnum<ETargetType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
