// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manic_AI/Public/ManicAiController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManicAiController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MANIC_AI_API UClass* Z_Construct_UClass_AManicAiController();
	MANIC_AI_API UClass* Z_Construct_UClass_AManicAiController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Manic_AI();
// End Cross Module References
	struct ManicAiController_eventPerformGenericAction_Parms
	{
		FName ActionName;
		AActor* OptionalActor;
	};
	static FName NAME_AManicAiController_PerformGenericAction = FName(TEXT("PerformGenericAction"));
	void AManicAiController::PerformGenericAction(FName ActionName, AActor* OptionalActor)
	{
		ManicAiController_eventPerformGenericAction_Parms Parms;
		Parms.ActionName=ActionName;
		Parms.OptionalActor=OptionalActor;
		ProcessEvent(FindFunctionChecked(NAME_AManicAiController_PerformGenericAction),&Parms);
	}
	void AManicAiController::StaticRegisterNativesAManicAiController()
	{
	}
	struct Z_Construct_UFunction_AManicAiController_PerformGenericAction_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AManicAiController_PerformGenericAction_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicAiController_eventPerformGenericAction_Parms, ActionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AManicAiController_PerformGenericAction_Statics::NewProp_OptionalActor = { "OptionalActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicAiController_eventPerformGenericAction_Parms, OptionalActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AManicAiController_PerformGenericAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AManicAiController_PerformGenericAction_Statics::NewProp_ActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AManicAiController_PerformGenericAction_Statics::NewProp_OptionalActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AManicAiController_PerformGenericAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Interact" },
		{ "Comment", "/**\n\x09 * Called by the ManicInteract Behaviour Tree task to perform an interaction.\n\x09 * @param ActionName - Name of the action (e.g. \"Interact\", \"Sit\", etc.).\n\x09 * @param OptionalActor - The actor to interact with (can be nullptr).\n\x09 */" },
		{ "ModuleRelativePath", "Public/ManicAiController.h" },
		{ "ToolTip", "Called by the ManicInteract Behaviour Tree task to perform an interaction.\n@param ActionName - Name of the action (e.g. \"Interact\", \"Sit\", etc.).\n@param OptionalActor - The actor to interact with (can be nullptr)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AManicAiController_PerformGenericAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AManicAiController, nullptr, "PerformGenericAction", nullptr, nullptr, Z_Construct_UFunction_AManicAiController_PerformGenericAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AManicAiController_PerformGenericAction_Statics::PropPointers), sizeof(ManicAiController_eventPerformGenericAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AManicAiController_PerformGenericAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AManicAiController_PerformGenericAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AManicAiController_PerformGenericAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(ManicAiController_eventPerformGenericAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AManicAiController_PerformGenericAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AManicAiController_PerformGenericAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AManicAiController);
	UClass* Z_Construct_UClass_AManicAiController_NoRegister()
	{
		return AManicAiController::StaticClass();
	}
	struct Z_Construct_UClass_AManicAiController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AManicAiController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Manic_AI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AManicAiController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AManicAiController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AManicAiController_PerformGenericAction, "PerformGenericAction" }, // 3900694847
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AManicAiController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManicAiController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom AI Controller that provides a generic interaction function.\n * You will override PerformGenericAction in Blueprint to define your interaction logic.\n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ManicAiController.h" },
		{ "ModuleRelativePath", "Public/ManicAiController.h" },
		{ "ToolTip", "Custom AI Controller that provides a generic interaction function.\nYou will override PerformGenericAction in Blueprint to define your interaction logic." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AManicAiController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AManicAiController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AManicAiController_Statics::ClassParams = {
		&AManicAiController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManicAiController_Statics::Class_MetaDataParams), Z_Construct_UClass_AManicAiController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AManicAiController()
	{
		if (!Z_Registration_Info_UClass_AManicAiController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AManicAiController.OuterSingleton, Z_Construct_UClass_AManicAiController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AManicAiController.OuterSingleton;
	}
	template<> MANIC_AI_API UClass* StaticClass<AManicAiController>()
	{
		return AManicAiController::StaticClass();
	}
	AManicAiController::AManicAiController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AManicAiController);
	AManicAiController::~AManicAiController() {}
	struct Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AManicAiController, AManicAiController::StaticClass, TEXT("AManicAiController"), &Z_Registration_Info_UClass_AManicAiController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AManicAiController), 43293712U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_2470340712(TEXT("/Script/Manic_AI"),
		Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
