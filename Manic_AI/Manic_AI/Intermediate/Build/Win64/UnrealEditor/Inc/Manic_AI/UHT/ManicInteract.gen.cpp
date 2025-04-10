// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manic_AI/Public/ManicInteract.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManicInteract() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MANIC_AI_API UClass* Z_Construct_UClass_UManicInteract();
	MANIC_AI_API UClass* Z_Construct_UClass_UManicInteract_NoRegister();
	MANIC_AI_API UEnum* Z_Construct_UEnum_Manic_AI_EInteractTargetType();
	UPackage* Z_Construct_UPackage__Script_Manic_AI();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInteractTargetType;
	static UEnum* EInteractTargetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInteractTargetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInteractTargetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Manic_AI_EInteractTargetType, (UObject*)Z_Construct_UPackage__Script_Manic_AI(), TEXT("EInteractTargetType"));
		}
		return Z_Registration_Info_UEnum_EInteractTargetType.OuterSingleton;
	}
	template<> MANIC_AI_API UEnum* StaticEnum<EInteractTargetType>()
	{
		return EInteractTargetType_StaticEnum();
	}
	struct Z_Construct_UEnum_Manic_AI_EInteractTargetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Manic_AI_EInteractTargetType_Statics::Enumerators[] = {
		{ "EInteractTargetType::BlackboardActor", (int64)EInteractTargetType::BlackboardActor },
		{ "EInteractTargetType::StaticActor", (int64)EInteractTargetType::StaticActor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Manic_AI_EInteractTargetType_Statics::Enum_MetaDataParams[] = {
		{ "BlackboardActor.DisplayName", "Blackboard Actor" },
		{ "BlackboardActor.Name", "EInteractTargetType::BlackboardActor" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ManicInteract.h" },
		{ "StaticActor.DisplayName", "Static Actor" },
		{ "StaticActor.Name", "EInteractTargetType::StaticActor" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Manic_AI_EInteractTargetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Manic_AI,
		nullptr,
		"EInteractTargetType",
		"EInteractTargetType",
		Z_Construct_UEnum_Manic_AI_EInteractTargetType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Manic_AI_EInteractTargetType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Manic_AI_EInteractTargetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Manic_AI_EInteractTargetType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Manic_AI_EInteractTargetType()
	{
		if (!Z_Registration_Info_UEnum_EInteractTargetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInteractTargetType.InnerSingleton, Z_Construct_UEnum_Manic_AI_EInteractTargetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInteractTargetType.InnerSingleton;
	}
	void UManicInteract::StaticRegisterNativesUManicInteract()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManicInteract);
	UClass* Z_Construct_UClass_UManicInteract_NoRegister()
	{
		return UManicInteract::StaticClass();
	}
	struct Z_Construct_UClass_UManicInteract_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetActorKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticTargetActor_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticTargetActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWaitAfterInteraction_MetaData[];
#endif
		static void NewProp_bWaitAfterInteraction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitAfterInteraction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManicInteract_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Manic_AI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManicInteract_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicInteract_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A simple Behaviour Tree task that calls PerformGenericAction on ManicAiController.\n * No fallback logic - if we fail to cast the AIController, the node fails immediately.\n */" },
		{ "IncludePath", "ManicInteract.h" },
		{ "ModuleRelativePath", "Public/ManicInteract.h" },
		{ "ToolTip", "A simple Behaviour Tree task that calls PerformGenericAction on ManicAiController.\nNo fallback logic - if we fail to cast the AIController, the node fails immediately." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManicInteract_Statics::NewProp_TargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicInteract_Statics::NewProp_TargetType_MetaData[] = {
		{ "Category", "Interact" },
		{ "Comment", "// Decide where we get our interactable actor from\n" },
		{ "ModuleRelativePath", "Public/ManicInteract.h" },
		{ "ToolTip", "Decide where we get our interactable actor from" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UManicInteract_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicInteract, TargetType), Z_Construct_UEnum_Manic_AI_EInteractTargetType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicInteract_Statics::NewProp_TargetType_MetaData), Z_Construct_UClass_UManicInteract_Statics::NewProp_TargetType_MetaData) }; // 425604483
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicInteract_Statics::NewProp_TargetActorKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "// If TargetType == BlackboardActor, pick the blackboard key\n" },
		{ "ModuleRelativePath", "Public/ManicInteract.h" },
		{ "ToolTip", "If TargetType == BlackboardActor, pick the blackboard key" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManicInteract_Statics::NewProp_TargetActorKey = { "TargetActorKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicInteract, TargetActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicInteract_Statics::NewProp_TargetActorKey_MetaData), Z_Construct_UClass_UManicInteract_Statics::NewProp_TargetActorKey_MetaData) }; // 3137324432
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicInteract_Statics::NewProp_StaticTargetActor_MetaData[] = {
		{ "AllowedClasses", "Actor" },
		{ "Category", "Interact" },
		{ "Comment", "// If TargetType == StaticActor, pick the actor from the node details\n" },
		{ "ModuleRelativePath", "Public/ManicInteract.h" },
		{ "ToolTip", "If TargetType == StaticActor, pick the actor from the node details" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UManicInteract_Statics::NewProp_StaticTargetActor = { "StaticTargetActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicInteract, StaticTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicInteract_Statics::NewProp_StaticTargetActor_MetaData), Z_Construct_UClass_UManicInteract_Statics::NewProp_StaticTargetActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicInteract_Statics::NewProp_ActionName_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "// The name of the action (e.g. \"Interact\", \"Sit\", etc.)\n" },
		{ "ModuleRelativePath", "Public/ManicInteract.h" },
		{ "ToolTip", "The name of the action (e.g. \"Interact\", \"Sit\", etc.)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UManicInteract_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicInteract, ActionName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicInteract_Statics::NewProp_ActionName_MetaData), Z_Construct_UClass_UManicInteract_Statics::NewProp_ActionName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicInteract_Statics::NewProp_InteractionDuration_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "// If > 0, we wait that many seconds before finishing\n" },
		{ "ModuleRelativePath", "Public/ManicInteract.h" },
		{ "ToolTip", "If > 0, we wait that many seconds before finishing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicInteract_Statics::NewProp_InteractionDuration = { "InteractionDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicInteract, InteractionDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicInteract_Statics::NewProp_InteractionDuration_MetaData), Z_Construct_UClass_UManicInteract_Statics::NewProp_InteractionDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicInteract_Statics::NewProp_bWaitAfterInteraction_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "// If true, we remain in progress for InteractionDuration\n" },
		{ "ModuleRelativePath", "Public/ManicInteract.h" },
		{ "ToolTip", "If true, we remain in progress for InteractionDuration" },
	};
#endif
	void Z_Construct_UClass_UManicInteract_Statics::NewProp_bWaitAfterInteraction_SetBit(void* Obj)
	{
		((UManicInteract*)Obj)->bWaitAfterInteraction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManicInteract_Statics::NewProp_bWaitAfterInteraction = { "bWaitAfterInteraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UManicInteract), &Z_Construct_UClass_UManicInteract_Statics::NewProp_bWaitAfterInteraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicInteract_Statics::NewProp_bWaitAfterInteraction_MetaData), Z_Construct_UClass_UManicInteract_Statics::NewProp_bWaitAfterInteraction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManicInteract_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicInteract_Statics::NewProp_TargetType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicInteract_Statics::NewProp_TargetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicInteract_Statics::NewProp_TargetActorKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicInteract_Statics::NewProp_StaticTargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicInteract_Statics::NewProp_ActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicInteract_Statics::NewProp_InteractionDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicInteract_Statics::NewProp_bWaitAfterInteraction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManicInteract_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManicInteract>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManicInteract_Statics::ClassParams = {
		&UManicInteract::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UManicInteract_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UManicInteract_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicInteract_Statics::Class_MetaDataParams), Z_Construct_UClass_UManicInteract_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManicInteract_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UManicInteract()
	{
		if (!Z_Registration_Info_UClass_UManicInteract.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManicInteract.OuterSingleton, Z_Construct_UClass_UManicInteract_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManicInteract.OuterSingleton;
	}
	template<> MANIC_AI_API UClass* StaticClass<UManicInteract>()
	{
		return UManicInteract::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManicInteract);
	UManicInteract::~UManicInteract() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicInteract_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicInteract_h_Statics::EnumInfo[] = {
		{ EInteractTargetType_StaticEnum, TEXT("EInteractTargetType"), &Z_Registration_Info_UEnum_EInteractTargetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 425604483U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicInteract_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManicInteract, UManicInteract::StaticClass, TEXT("UManicInteract"), &Z_Registration_Info_UClass_UManicInteract, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManicInteract), 3269083464U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicInteract_h_366153784(TEXT("/Script/Manic_AI"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicInteract_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicInteract_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicInteract_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicInteract_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
