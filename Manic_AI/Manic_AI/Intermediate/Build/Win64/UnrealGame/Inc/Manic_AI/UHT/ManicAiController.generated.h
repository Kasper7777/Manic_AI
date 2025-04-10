// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ManicAiController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 class AActor;
class AActor;
struct FBlackboardKeySelector;
#ifdef MANIC_AI_ManicAiController_generated_h
#error "ManicAiController.generated.h already included, missing '#pragma once' in ManicAiController.h"
#endif
#define MANIC_AI_ManicAiController_generated_h

#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_20_SPARSE_DATA
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetActivityKeyOnBlackboard);


#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_20_ACCESSORS
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_20_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAManicAiController(); \
	friend struct Z_Construct_UClass_AManicAiController_Statics; \
public: \
	DECLARE_CLASS(AManicAiController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Manic_AI"), NO_API) \
	DECLARE_SERIALIZER(AManicAiController)


#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AManicAiController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AManicAiController(AManicAiController&&); \
	NO_API AManicAiController(const AManicAiController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AManicAiController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AManicAiController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AManicAiController) \
	NO_API virtual ~AManicAiController();


#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_17_PROLOG
#define FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_20_SPARSE_DATA \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_20_ACCESSORS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_20_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_20_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MANIC_AI_API UClass* StaticClass<class AManicAiController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
