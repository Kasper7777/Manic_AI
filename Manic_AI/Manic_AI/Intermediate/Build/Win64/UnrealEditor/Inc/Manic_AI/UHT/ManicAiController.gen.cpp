// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manic_AI/Public/ManicAiController.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "Manic_AI/Public/FManicTime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManicAiController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MANIC_AI_API UClass* Z_Construct_UClass_AManicAiController();
	MANIC_AI_API UClass* Z_Construct_UClass_AManicAiController_NoRegister();
	MANIC_AI_API UScriptStruct* Z_Construct_UScriptStruct_FManicTime();
	UPackage* Z_Construct_UPackage__Script_Manic_AI();
// End Cross Module References
	DEFINE_FUNCTION(AManicAiController::execSetActivityKeyOnBlackboard)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Activity);
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_TargetKey);
		P_GET_TMAP_REF(FString,TSoftObjectPtr<AActor>,Z_Param_Out_ActivityActorMap);
		P_GET_PROPERTY(FIntProperty,Z_Param_TickDelay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActivityKeyOnBlackboard(Z_Param_Activity,Z_Param_Out_TargetKey,Z_Param_Out_ActivityActorMap,Z_Param_TickDelay);
		P_NATIVE_END;
	}
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
		UClass* Class = AManicAiController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetActivityKeyOnBlackboard", &AManicAiController::execSetActivityKeyOnBlackboard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "Comment", "/** Original plugin event for interactions (unchanged) */" },
		{ "ModuleRelativePath", "Public/ManicAiController.h" },
		{ "ToolTip", "Original plugin event for interactions (unchanged)" },
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
	struct Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics
	{
		struct ManicAiController_eventSetActivityKeyOnBlackboard_Parms
		{
			FString Activity;
			FBlackboardKeySelector TargetKey;
			TMap<FString,TSoftObjectPtr<AActor> > ActivityActorMap;
			int32 TickDelay;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Activity_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Activity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetKey;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ActivityActorMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActivityActorMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivityActorMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ActivityActorMap;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TickDelay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::NewProp_Activity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::NewProp_Activity = { "Activity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicAiController_eventSetActivityKeyOnBlackboard_Parms, Activity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::NewProp_Activity_MetaData), Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::NewProp_Activity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::NewProp_TargetKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::NewProp_TargetKey = { "TargetKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicAiController_eventSetActivityKeyOnBlackboard_Parms, TargetKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::NewProp_TargetKey_MetaData), Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::NewProp_TargetKey_MetaData) }; // 3137324432
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::NewProp_ActivityActorMap_ValueProp = { "ActivityActorMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::NewProp_ActivityActorMap_Key_KeyProp = { "ActivityActorMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::NewProp_ActivityActorMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::NewProp_ActivityActorMap = { "ActivityActorMap", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicAiController_eventSetActivityKeyOnBlackboard_Parms, ActivityActorMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::NewProp_ActivityActorMap_MetaData), Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::NewProp_ActivityActorMap_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::NewProp_TickDelay = { "TickDelay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicAiController_eventSetActivityKeyOnBlackboard_Parms, TickDelay), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::NewProp_Activity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::NewProp_TargetKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::NewProp_ActivityActorMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::NewProp_ActivityActorMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::NewProp_ActivityActorMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::NewProp_TickDelay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "ManicAi" },
		{ "Comment", "/**\n     * The single Blueprint function you want:\n     * Looks up an actor for the given activity string in ActivityActorMap,\n     * attempts to load it, and sets the Blackboard key. \n     * \n     * Optionally uses TickDelay to skip setting each call (only once every N calls).\n     *\n     * @param Activity          Name of the activity to find (e.g. \"History\").\n     * @param TargetKey         Blackboard key to set with the found actor.\n     * @param ActivityActorMap  Map of (String -> SoftObjectPtr<AActor>) to search.\n     * @param TickDelay         If > 0, wait that many calls before updating again.\n     */" },
		{ "CPP_Default_TickDelay", "0" },
		{ "ModuleRelativePath", "Public/ManicAiController.h" },
		{ "ToolTip", "The single Blueprint function you want:\nLooks up an actor for the given activity string in ActivityActorMap,\nattempts to load it, and sets the Blackboard key.\n\nOptionally uses TickDelay to skip setting each call (only once every N calls).\n\n@param Activity          Name of the activity to find (e.g. \"History\").\n@param TargetKey         Blackboard key to set with the found actor.\n@param ActivityActorMap  Map of (String -> SoftObjectPtr<AActor>) to search.\n@param TickDelay         If > 0, wait that many calls before updating again." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AManicAiController, nullptr, "SetActivityKeyOnBlackboard", nullptr, nullptr, Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::ManicAiController_eventSetActivityKeyOnBlackboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::ManicAiController_eventSetActivityKeyOnBlackboard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard_Statics::FuncParams);
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControllerTimetable_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerTimetable_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ControllerTimetable;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ActivityMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActivityMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivityMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ActivityMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AManicAiController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Manic_AI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AManicAiController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AManicAiController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AManicAiController_PerformGenericAction, "PerformGenericAction" }, // 3291701839
		{ &Z_Construct_UFunction_AManicAiController_SetActivityKeyOnBlackboard, "SetActivityKeyOnBlackboard" }, // 541229175
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AManicAiController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManicAiController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A simplified AI Controller that:\n *  - Keeps PerformGenericAction (original plugin event)\n *  - Keeps ControllerTimetable\n *  - Has a TMap of (String -> SoftActor)\n *  - Provides *only* one Blueprint function to set the Blackboard key from that map\n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ManicAiController.h" },
		{ "ModuleRelativePath", "Public/ManicAiController.h" },
		{ "ToolTip", "A simplified AI Controller that:\n - Keeps PerformGenericAction (original plugin event)\n - Keeps ControllerTimetable\n - Has a TMap of (String -> SoftActor)\n - Provides *only* one Blueprint function to set the Blackboard key from that map" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AManicAiController_Statics::NewProp_ControllerTimetable_Inner = { "ControllerTimetable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FManicTime, METADATA_PARAMS(0, nullptr) }; // 2525359673
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManicAiController_Statics::NewProp_ControllerTimetable_MetaData[] = {
		{ "Category", "Timetable" },
		{ "Comment", "/** Original optional Timetable array (unchanged) */" },
		{ "ModuleRelativePath", "Public/ManicAiController.h" },
		{ "ToolTip", "Original optional Timetable array (unchanged)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AManicAiController_Statics::NewProp_ControllerTimetable = { "ControllerTimetable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManicAiController, ControllerTimetable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManicAiController_Statics::NewProp_ControllerTimetable_MetaData), Z_Construct_UClass_AManicAiController_Statics::NewProp_ControllerTimetable_MetaData) }; // 2525359673
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AManicAiController_Statics::NewProp_ActivityMap_ValueProp = { "ActivityMap", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AManicAiController_Statics::NewProp_ActivityMap_Key_KeyProp = { "ActivityMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManicAiController_Statics::NewProp_ActivityMap_MetaData[] = {
		{ "Category", "Manic AI" },
		{ "Comment", "/**\n     * A TMap storing (ActivityString -> SoftActorReference).\n     * e.g. \"History\" -> TSoftObjectPtr of a chair\n     */" },
		{ "ModuleRelativePath", "Public/ManicAiController.h" },
		{ "ToolTip", "A TMap storing (ActivityString -> SoftActorReference).\ne.g. \"History\" -> TSoftObjectPtr of a chair" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AManicAiController_Statics::NewProp_ActivityMap = { "ActivityMap", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManicAiController, ActivityMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManicAiController_Statics::NewProp_ActivityMap_MetaData), Z_Construct_UClass_AManicAiController_Statics::NewProp_ActivityMap_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AManicAiController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManicAiController_Statics::NewProp_ControllerTimetable_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManicAiController_Statics::NewProp_ControllerTimetable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManicAiController_Statics::NewProp_ActivityMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManicAiController_Statics::NewProp_ActivityMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManicAiController_Statics::NewProp_ActivityMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AManicAiController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AManicAiController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AManicAiController_Statics::ClassParams = {
		&AManicAiController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AManicAiController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AManicAiController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManicAiController_Statics::Class_MetaDataParams), Z_Construct_UClass_AManicAiController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AManicAiController_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AManicAiController, AManicAiController::StaticClass, TEXT("AManicAiController"), &Z_Registration_Info_UClass_AManicAiController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AManicAiController), 638295289U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_4104256499(TEXT("/Script/Manic_AI"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicAiController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
