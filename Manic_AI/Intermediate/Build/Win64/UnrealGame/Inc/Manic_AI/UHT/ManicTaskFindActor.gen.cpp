// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manic_AI/Public/ManicTaskFindActor.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManicTaskFindActor() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	MANIC_AI_API UClass* Z_Construct_UClass_UManicTaskFindActor();
	MANIC_AI_API UClass* Z_Construct_UClass_UManicTaskFindActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Manic_AI();
// End Cross Module References
	void UManicTaskFindActor::StaticRegisterNativesUManicTaskFindActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManicTaskFindActor);
	UClass* Z_Construct_UClass_UManicTaskFindActor_NoRegister()
	{
		return UManicTaskFindActor::StaticClass();
	}
	struct Z_Construct_UClass_UManicTaskFindActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetActorKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetClassKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetClassKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocationKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocationKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManicTaskFindActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Manic_AI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskFindActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Behaviour Tree Task that finds the closest actor of a given class (specified in the Blackboard),\n * then stores that actor and optionally its location in the Blackboard.\n */" },
		{ "IncludePath", "ManicTaskFindActor.h" },
		{ "ModuleRelativePath", "Public/ManicTaskFindActor.h" },
		{ "ToolTip", "Behaviour Tree Task that finds the closest actor of a given class (specified in the Blackboard),\nthen stores that actor and optionally its location in the Blackboard." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskFindActor_Statics::NewProp_TargetActorKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "// Blackboard key selector for storing the found Actor reference\n" },
		{ "ModuleRelativePath", "Public/ManicTaskFindActor.h" },
		{ "ToolTip", "Blackboard key selector for storing the found Actor reference" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManicTaskFindActor_Statics::NewProp_TargetActorKey = { "TargetActorKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskFindActor, TargetActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindActor_Statics::NewProp_TargetActorKey_MetaData), Z_Construct_UClass_UManicTaskFindActor_Statics::NewProp_TargetActorKey_MetaData) }; // 3137324432
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskFindActor_Statics::NewProp_TargetClassKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "// Blackboard key selector that provides the class of actor to find.\n// **Ensure the Blackboard asset defines this key as a Class or Object type and that a value is set before running this task.**\n" },
		{ "ModuleRelativePath", "Public/ManicTaskFindActor.h" },
		{ "ToolTip", "Blackboard key selector that provides the class of actor to find.\n**Ensure the Blackboard asset defines this key as a Class or Object type and that a value is set before running this task.**" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManicTaskFindActor_Statics::NewProp_TargetClassKey = { "TargetClassKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskFindActor, TargetClassKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindActor_Statics::NewProp_TargetClassKey_MetaData), Z_Construct_UClass_UManicTaskFindActor_Statics::NewProp_TargetClassKey_MetaData) }; // 3137324432
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskFindActor_Statics::NewProp_TargetLocationKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "// Optional: Blackboard key selector to store the found actor's location (must be of Vector type in the Blackboard)\n" },
		{ "ModuleRelativePath", "Public/ManicTaskFindActor.h" },
		{ "ToolTip", "Optional: Blackboard key selector to store the found actor's location (must be of Vector type in the Blackboard)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManicTaskFindActor_Statics::NewProp_TargetLocationKey = { "TargetLocationKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskFindActor, TargetLocationKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindActor_Statics::NewProp_TargetLocationKey_MetaData), Z_Construct_UClass_UManicTaskFindActor_Statics::NewProp_TargetLocationKey_MetaData) }; // 3137324432
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManicTaskFindActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskFindActor_Statics::NewProp_TargetActorKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskFindActor_Statics::NewProp_TargetClassKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskFindActor_Statics::NewProp_TargetLocationKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManicTaskFindActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManicTaskFindActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManicTaskFindActor_Statics::ClassParams = {
		&UManicTaskFindActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UManicTaskFindActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindActor_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UManicTaskFindActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UManicTaskFindActor()
	{
		if (!Z_Registration_Info_UClass_UManicTaskFindActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManicTaskFindActor.OuterSingleton, Z_Construct_UClass_UManicTaskFindActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManicTaskFindActor.OuterSingleton;
	}
	template<> MANIC_AI_API UClass* StaticClass<UManicTaskFindActor>()
	{
		return UManicTaskFindActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManicTaskFindActor);
	UManicTaskFindActor::~UManicTaskFindActor() {}
	struct Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManicTaskFindActor, UManicTaskFindActor::StaticClass, TEXT("UManicTaskFindActor"), &Z_Registration_Info_UClass_UManicTaskFindActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManicTaskFindActor), 3891610619U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindActor_h_686596789(TEXT("/Script/Manic_AI"),
		Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
