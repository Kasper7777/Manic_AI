// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manic_AI/Public/ManicTaskFindSpotInArea.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManicTaskFindSpotInArea() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MANIC_AI_API UClass* Z_Construct_UClass_UManicTaskFindSpotInArea();
	MANIC_AI_API UClass* Z_Construct_UClass_UManicTaskFindSpotInArea_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Manic_AI();
// End Cross Module References
	void UManicTaskFindSpotInArea::StaticRegisterNativesUManicTaskFindSpotInArea()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManicTaskFindSpotInArea);
	UClass* Z_Construct_UClass_UManicTaskFindSpotInArea_NoRegister()
	{
		return UManicTaskFindSpotInArea::StaticClass();
	}
	struct Z_Construct_UClass_UManicTaskFindSpotInArea_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaCenter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AreaCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocationKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocationKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugSphere_MetaData[];
#endif
		static void NewProp_bDrawDebugSphere_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugSphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugSphereRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugSphereRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Manic_AI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A Behaviour Tree task that finds a reachable location within a specified area \n * (defined by AreaCenter + SearchRadius) and writes it to a Blackboard key. \n * Does NOT move the AI\xe2\x80\x94just sets the Blackboard variable so subsequent tasks \n * can use it (e.g., a MoveTo node).\n */" },
		{ "IncludePath", "ManicTaskFindSpotInArea.h" },
		{ "ModuleRelativePath", "Public/ManicTaskFindSpotInArea.h" },
		{ "ToolTip", "A Behaviour Tree task that finds a reachable location within a specified area\n(defined by AreaCenter + SearchRadius) and writes it to a Blackboard key.\nDoes NOT move the AI\xe2\x80\x94just sets the Blackboard variable so subsequent tasks\ncan use it (e.g., a MoveTo node)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_AreaCenter_MetaData[] = {
		{ "Category", "Area" },
		{ "Comment", "/** The centre of the area to search. If zero, we fall back to the AI Pawn\xe2\x80\x99s location. */" },
		{ "ModuleRelativePath", "Public/ManicTaskFindSpotInArea.h" },
		{ "ToolTip", "The centre of the area to search. If zero, we fall back to the AI Pawn\xe2\x80\x99s location." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_AreaCenter = { "AreaCenter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskFindSpotInArea, AreaCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_AreaCenter_MetaData), Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_AreaCenter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_SearchRadius_MetaData[] = {
		{ "Category", "Area" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Radius around AreaCenter in which to search for a reachable point. */" },
		{ "ModuleRelativePath", "Public/ManicTaskFindSpotInArea.h" },
		{ "ToolTip", "Radius around AreaCenter in which to search for a reachable point." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskFindSpotInArea, SearchRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_SearchRadius_MetaData), Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_SearchRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "Category", "Area" },
		{ "Comment", "/** Optional offset to add to the found location (e.g. to nudge the final position). */" },
		{ "ModuleRelativePath", "Public/ManicTaskFindSpotInArea.h" },
		{ "ToolTip", "Optional offset to add to the found location (e.g. to nudge the final position)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskFindSpotInArea, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_LocationOffset_MetaData), Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_LocationOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_TargetLocationKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** Blackboard key to store the found location. Must be a Vector key. */" },
		{ "ModuleRelativePath", "Public/ManicTaskFindSpotInArea.h" },
		{ "ToolTip", "Blackboard key to store the found location. Must be a Vector key." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_TargetLocationKey = { "TargetLocationKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskFindSpotInArea, TargetLocationKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_TargetLocationKey_MetaData), Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_TargetLocationKey_MetaData) }; // 3137324432
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_bDrawDebugSphere_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** If true, draws debug spheres/lines so you can visualise the chosen spot. */" },
		{ "ModuleRelativePath", "Public/ManicTaskFindSpotInArea.h" },
		{ "ToolTip", "If true, draws debug spheres/lines so you can visualise the chosen spot." },
	};
#endif
	void Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_bDrawDebugSphere_SetBit(void* Obj)
	{
		((UManicTaskFindSpotInArea*)Obj)->bDrawDebugSphere = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_bDrawDebugSphere = { "bDrawDebugSphere", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UManicTaskFindSpotInArea), &Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_bDrawDebugSphere_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_bDrawDebugSphere_MetaData), Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_bDrawDebugSphere_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_DebugSphereRadius_MetaData[] = {
		{ "Category", "Debug" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Radius of the debug sphere (if bDrawDebugSphere is enabled). */" },
		{ "EditCondition", "bDrawDebugSphere" },
		{ "ModuleRelativePath", "Public/ManicTaskFindSpotInArea.h" },
		{ "ToolTip", "Radius of the debug sphere (if bDrawDebugSphere is enabled)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_DebugSphereRadius = { "DebugSphereRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskFindSpotInArea, DebugSphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_DebugSphereRadius_MetaData), Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_DebugSphereRadius_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_AreaCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_SearchRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_LocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_TargetLocationKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_bDrawDebugSphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::NewProp_DebugSphereRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManicTaskFindSpotInArea>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::ClassParams = {
		&UManicTaskFindSpotInArea::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::Class_MetaDataParams), Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UManicTaskFindSpotInArea()
	{
		if (!Z_Registration_Info_UClass_UManicTaskFindSpotInArea.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManicTaskFindSpotInArea.OuterSingleton, Z_Construct_UClass_UManicTaskFindSpotInArea_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManicTaskFindSpotInArea.OuterSingleton;
	}
	template<> MANIC_AI_API UClass* StaticClass<UManicTaskFindSpotInArea>()
	{
		return UManicTaskFindSpotInArea::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManicTaskFindSpotInArea);
	UManicTaskFindSpotInArea::~UManicTaskFindSpotInArea() {}
	struct Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindSpotInArea_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindSpotInArea_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManicTaskFindSpotInArea, UManicTaskFindSpotInArea::StaticClass, TEXT("UManicTaskFindSpotInArea"), &Z_Registration_Info_UClass_UManicTaskFindSpotInArea, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManicTaskFindSpotInArea), 1286940759U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindSpotInArea_h_2153287715(TEXT("/Script/Manic_AI"),
		Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindSpotInArea_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindSpotInArea_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
