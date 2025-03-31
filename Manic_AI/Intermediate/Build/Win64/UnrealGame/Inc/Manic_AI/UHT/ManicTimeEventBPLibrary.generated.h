// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ManicTimeEventBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EManicTimeEventResult : uint8;
struct FManicGameTime;
#ifdef MANIC_AI_ManicTimeEventBPLibrary_generated_h
#error "ManicTimeEventBPLibrary.generated.h already included, missing '#pragma once' in ManicTimeEventBPLibrary.h"
#endif
#define MANIC_AI_ManicTimeEventBPLibrary_generated_h

#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimeEventBPLibrary_h_27_SPARSE_DATA
#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimeEventBPLibrary_h_27_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimeEventBPLibrary_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimeEventBPLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execManicTimeEvent);


#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimeEventBPLibrary_h_27_ACCESSORS
#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimeEventBPLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManicTimeEventBPLibrary(); \
	friend struct Z_Construct_UClass_UManicTimeEventBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UManicTimeEventBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Manic_AI"), NO_API) \
	DECLARE_SERIALIZER(UManicTimeEventBPLibrary)


#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimeEventBPLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UManicTimeEventBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManicTimeEventBPLibrary(UManicTimeEventBPLibrary&&); \
	NO_API UManicTimeEventBPLibrary(const UManicTimeEventBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManicTimeEventBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManicTimeEventBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UManicTimeEventBPLibrary) \
	NO_API virtual ~UManicTimeEventBPLibrary();


#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimeEventBPLibrary_h_24_PROLOG
#define FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimeEventBPLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimeEventBPLibrary_h_27_SPARSE_DATA \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimeEventBPLibrary_h_27_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimeEventBPLibrary_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimeEventBPLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimeEventBPLibrary_h_27_ACCESSORS \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimeEventBPLibrary_h_27_INCLASS_NO_PURE_DECLS \
	FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimeEventBPLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MANIC_AI_API UClass* StaticClass<class UManicTimeEventBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimeEventBPLibrary_h


#define FOREACH_ENUM_EMANICTIMEEVENTRESULT(op) \
	op(EManicTimeEventResult::NotReached) \
	op(EManicTimeEventResult::Reached) 

enum class EManicTimeEventResult : uint8;
template<> struct TIsUEnumClass<EManicTimeEventResult> { enum { Value = true }; };
template<> MANIC_AI_API UEnum* StaticEnum<EManicTimeEventResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
