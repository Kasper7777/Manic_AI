// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ManicTimetableNodeBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UManicTimetableNode;
class UObject;
struct FManicTime;
#ifdef MANIC_AI_ManicTimetableNodeBPLibrary_generated_h
#error "ManicTimetableNodeBPLibrary.generated.h already included, missing '#pragma once' in ManicTimetableNodeBPLibrary.h"
#endif
#define MANIC_AI_ManicTimetableNodeBPLibrary_generated_h

#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimetableNodeBPLibrary_h_15_SPARSE_DATA
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimetableNodeBPLibrary_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimetableNodeBPLibrary_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimetableNodeBPLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindActiveTimetableSlot); \
	DECLARE_FUNCTION(execCreateTimetableNode);


#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimetableNodeBPLibrary_h_15_ACCESSORS
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimetableNodeBPLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManicTimetableNodeBPLibrary(); \
	friend struct Z_Construct_UClass_UManicTimetableNodeBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UManicTimetableNodeBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Manic_AI"), NO_API) \
	DECLARE_SERIALIZER(UManicTimetableNodeBPLibrary)


#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimetableNodeBPLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UManicTimetableNodeBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManicTimetableNodeBPLibrary(UManicTimetableNodeBPLibrary&&); \
	NO_API UManicTimetableNodeBPLibrary(const UManicTimetableNodeBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManicTimetableNodeBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManicTimetableNodeBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UManicTimetableNodeBPLibrary) \
	NO_API virtual ~UManicTimetableNodeBPLibrary();


#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimetableNodeBPLibrary_h_12_PROLOG
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimetableNodeBPLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimetableNodeBPLibrary_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimetableNodeBPLibrary_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimetableNodeBPLibrary_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimetableNodeBPLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimetableNodeBPLibrary_h_15_ACCESSORS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimetableNodeBPLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimetableNodeBPLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MANIC_AI_API UClass* StaticClass<class UManicTimetableNodeBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimetableNodeBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
