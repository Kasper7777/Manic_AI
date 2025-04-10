// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ManicServiceSetTimeKey.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MANIC_AI_ManicServiceSetTimeKey_generated_h
#error "ManicServiceSetTimeKey.generated.h already included, missing '#pragma once' in ManicServiceSetTimeKey.h"
#endif
#define MANIC_AI_ManicServiceSetTimeKey_generated_h

#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicServiceSetTimeKey_h_21_SPARSE_DATA
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicServiceSetTimeKey_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicServiceSetTimeKey_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicServiceSetTimeKey_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicServiceSetTimeKey_h_21_ACCESSORS
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicServiceSetTimeKey_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManicServiceSetTimeKey(); \
	friend struct Z_Construct_UClass_UManicServiceSetTimeKey_Statics; \
public: \
	DECLARE_CLASS(UManicServiceSetTimeKey, UBTService, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Manic_AI"), NO_API) \
	DECLARE_SERIALIZER(UManicServiceSetTimeKey)


#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicServiceSetTimeKey_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManicServiceSetTimeKey(UManicServiceSetTimeKey&&); \
	NO_API UManicServiceSetTimeKey(const UManicServiceSetTimeKey&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManicServiceSetTimeKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManicServiceSetTimeKey); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UManicServiceSetTimeKey) \
	NO_API virtual ~UManicServiceSetTimeKey();


#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicServiceSetTimeKey_h_18_PROLOG
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicServiceSetTimeKey_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicServiceSetTimeKey_h_21_SPARSE_DATA \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicServiceSetTimeKey_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicServiceSetTimeKey_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicServiceSetTimeKey_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicServiceSetTimeKey_h_21_ACCESSORS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicServiceSetTimeKey_h_21_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicServiceSetTimeKey_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MANIC_AI_API UClass* StaticClass<class UManicServiceSetTimeKey>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicServiceSetTimeKey_h


#define FOREACH_ENUM_EMANICTIMETABLESOURCE(op) \
	op(EManicTimetableSource::UseNode) \
	op(EManicTimetableSource::UseController) 

enum class EManicTimetableSource : uint8;
template<> struct TIsUEnumClass<EManicTimetableSource> { enum { Value = true }; };
template<> MANIC_AI_API UEnum* StaticEnum<EManicTimetableSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
