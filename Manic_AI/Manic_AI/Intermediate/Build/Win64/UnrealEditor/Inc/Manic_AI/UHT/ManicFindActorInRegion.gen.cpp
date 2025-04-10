// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manic_AI/Public/ManicFindActorInRegion.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManicFindActorInRegion() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MANIC_AI_API UClass* Z_Construct_UClass_UManicFindActorInRegion();
	MANIC_AI_API UClass* Z_Construct_UClass_UManicFindActorInRegion_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Manic_AI();
// End Cross Module References
	void UManicFindActorInRegion::StaticRegisterNativesUManicFindActorInRegion()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManicFindActorInRegion);
	UClass* Z_Construct_UClass_UManicFindActorInRegion_NoRegister()
	{
		return UManicFindActorInRegion::StaticClass();
	}
	struct Z_Construct_UClass_UManicFindActorInRegion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomLocation_MetaData[];
#endif
		static void NewProp_bUseCustomLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomSearchLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomSearchLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchLocationKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SearchLocationKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailabilityFlagName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AvailabilityFlagName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoundActorKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FoundActorKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoundActorLocationKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FoundActorLocationKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAttempts_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAttempts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetryInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RetryInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugDraw_MetaData[];
#endif
		static void NewProp_bEnableDebugDraw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugDraw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugDrawColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManicFindActorInRegion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Manic_AI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManicFindActorInRegion_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicFindActorInRegion_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Behaviour Tree Task that finds an actor of a specified class within a region (centre + radius).\n * The region centre can come from a Blackboard key (e.g. set by a previous task) or be manually specified.\n * It filters candidates to those with a specified boolean flag (e.g. \"bIsFree\") set to true.\n * The found actor is stored in a Blackboard key (object type) and its location optionally in a vector key.\n * The task retries the search a configurable number of times if no candidate is found.\n * Optionally, it draws debug spheres (in a user-selectable colour) to visualise the search area and selection.\n */" },
		{ "IncludePath", "ManicFindActorInRegion.h" },
		{ "ModuleRelativePath", "Public/ManicFindActorInRegion.h" },
		{ "ToolTip", "Behaviour Tree Task that finds an actor of a specified class within a region (centre + radius).\nThe region centre can come from a Blackboard key (e.g. set by a previous task) or be manually specified.\nIt filters candidates to those with a specified boolean flag (e.g. \"bIsFree\") set to true.\nThe found actor is stored in a Blackboard key (object type) and its location optionally in a vector key.\nThe task retries the search a configurable number of times if no candidate is found.\nOptionally, it draws debug spheres (in a user-selectable colour) to visualise the search area and selection." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_bUseCustomLocation_MetaData[] = {
		{ "Category", "Search" },
		{ "Comment", "/** If true, use the CustomSearchLocation as the region centre; otherwise, use the Blackboard key. */" },
		{ "ModuleRelativePath", "Public/ManicFindActorInRegion.h" },
		{ "ToolTip", "If true, use the CustomSearchLocation as the region centre; otherwise, use the Blackboard key." },
	};
#endif
	void Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_bUseCustomLocation_SetBit(void* Obj)
	{
		((UManicFindActorInRegion*)Obj)->bUseCustomLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_bUseCustomLocation = { "bUseCustomLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UManicFindActorInRegion), &Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_bUseCustomLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_bUseCustomLocation_MetaData), Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_bUseCustomLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_CustomSearchLocation_MetaData[] = {
		{ "Category", "Search" },
		{ "Comment", "/** Manually specified region centre (used if bUseCustomLocation is true). */" },
		{ "EditCondition", "bUseCustomLocation" },
		{ "ModuleRelativePath", "Public/ManicFindActorInRegion.h" },
		{ "ToolTip", "Manually specified region centre (used if bUseCustomLocation is true)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_CustomSearchLocation = { "CustomSearchLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicFindActorInRegion, CustomSearchLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_CustomSearchLocation_MetaData), Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_CustomSearchLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_SearchLocationKey_MetaData[] = {
		{ "Category", "Search" },
		{ "Comment", "/** Blackboard key providing the region centre (used if bUseCustomLocation is false). Must be a Vector. */" },
		{ "EditCondition", "!bUseCustomLocation" },
		{ "ModuleRelativePath", "Public/ManicFindActorInRegion.h" },
		{ "ToolTip", "Blackboard key providing the region centre (used if bUseCustomLocation is false). Must be a Vector." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_SearchLocationKey = { "SearchLocationKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicFindActorInRegion, SearchLocationKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_SearchLocationKey_MetaData), Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_SearchLocationKey_MetaData) }; // 3137324432
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_SearchRadius_MetaData[] = {
		{ "Category", "Search" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Radius around the region centre (in Unreal units) within which to search for a candidate actor. */" },
		{ "ModuleRelativePath", "Public/ManicFindActorInRegion.h" },
		{ "ToolTip", "Radius around the region centre (in Unreal units) within which to search for a candidate actor." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicFindActorInRegion, SearchRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_SearchRadius_MetaData), Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_SearchRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/** The class of actor to search for in the region. Only actors of this class (or subclass) are considered. */" },
		{ "ModuleRelativePath", "Public/ManicFindActorInRegion.h" },
		{ "ToolTip", "The class of actor to search for in the region. Only actors of this class (or subclass) are considered." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicFindActorInRegion, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_ActorClass_MetaData), Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_ActorClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_AvailabilityFlagName_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/** Name of the boolean property on candidate actors that indicates availability.\n\x09 * Only actors with this flag true will be considered. Default is \"bIsFree\". */" },
		{ "ModuleRelativePath", "Public/ManicFindActorInRegion.h" },
		{ "ToolTip", "Name of the boolean property on candidate actors that indicates availability.\nOnly actors with this flag true will be considered. Default is \"bIsFree\"." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_AvailabilityFlagName = { "AvailabilityFlagName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicFindActorInRegion, AvailabilityFlagName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_AvailabilityFlagName_MetaData), Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_AvailabilityFlagName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_FoundActorKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** Blackboard key where the found actor will be stored (object type). */" },
		{ "ModuleRelativePath", "Public/ManicFindActorInRegion.h" },
		{ "ToolTip", "Blackboard key where the found actor will be stored (object type)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_FoundActorKey = { "FoundActorKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicFindActorInRegion, FoundActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_FoundActorKey_MetaData), Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_FoundActorKey_MetaData) }; // 3137324432
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_FoundActorLocationKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** Optional Blackboard key to store the found actor's location (vector type). */" },
		{ "ModuleRelativePath", "Public/ManicFindActorInRegion.h" },
		{ "ToolTip", "Optional Blackboard key to store the found actor's location (vector type)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_FoundActorLocationKey = { "FoundActorLocationKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicFindActorInRegion, FoundActorLocationKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_FoundActorLocationKey_MetaData), Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_FoundActorLocationKey_MetaData) }; // 3137324432
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_MaxAttempts_MetaData[] = {
		{ "Category", "Search" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Maximum number of search attempts (including the first) before failing the task. */" },
		{ "ModuleRelativePath", "Public/ManicFindActorInRegion.h" },
		{ "ToolTip", "Maximum number of search attempts (including the first) before failing the task." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_MaxAttempts = { "MaxAttempts", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicFindActorInRegion, MaxAttempts), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_MaxAttempts_MetaData), Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_MaxAttempts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_RetryInterval_MetaData[] = {
		{ "Category", "Search" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Time interval (in seconds) between retry attempts. */" },
		{ "ModuleRelativePath", "Public/ManicFindActorInRegion.h" },
		{ "ToolTip", "Time interval (in seconds) between retry attempts." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_RetryInterval = { "RetryInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicFindActorInRegion, RetryInterval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_RetryInterval_MetaData), Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_RetryInterval_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_bEnableDebugDraw_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** If true, debug spheres will be drawn to visualise the search region and candidate actor location. */" },
		{ "ModuleRelativePath", "Public/ManicFindActorInRegion.h" },
		{ "ToolTip", "If true, debug spheres will be drawn to visualise the search region and candidate actor location." },
	};
#endif
	void Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_bEnableDebugDraw_SetBit(void* Obj)
	{
		((UManicFindActorInRegion*)Obj)->bEnableDebugDraw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_bEnableDebugDraw = { "bEnableDebugDraw", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UManicFindActorInRegion), &Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_bEnableDebugDraw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_bEnableDebugDraw_MetaData), Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_bEnableDebugDraw_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_DebugDrawColor_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Colour to use for debug drawing (choose a colour other than green). */" },
		{ "EditCondition", "bEnableDebugDraw" },
		{ "ModuleRelativePath", "Public/ManicFindActorInRegion.h" },
		{ "ToolTip", "Colour to use for debug drawing (choose a colour other than green)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_DebugDrawColor = { "DebugDrawColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicFindActorInRegion, DebugDrawColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_DebugDrawColor_MetaData), Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_DebugDrawColor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManicFindActorInRegion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_bUseCustomLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_CustomSearchLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_SearchLocationKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_SearchRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_AvailabilityFlagName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_FoundActorKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_FoundActorLocationKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_MaxAttempts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_RetryInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_bEnableDebugDraw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicFindActorInRegion_Statics::NewProp_DebugDrawColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManicFindActorInRegion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManicFindActorInRegion>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManicFindActorInRegion_Statics::ClassParams = {
		&UManicFindActorInRegion::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UManicFindActorInRegion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UManicFindActorInRegion_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicFindActorInRegion_Statics::Class_MetaDataParams), Z_Construct_UClass_UManicFindActorInRegion_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManicFindActorInRegion_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UManicFindActorInRegion()
	{
		if (!Z_Registration_Info_UClass_UManicFindActorInRegion.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManicFindActorInRegion.OuterSingleton, Z_Construct_UClass_UManicFindActorInRegion_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManicFindActorInRegion.OuterSingleton;
	}
	template<> MANIC_AI_API UClass* StaticClass<UManicFindActorInRegion>()
	{
		return UManicFindActorInRegion::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManicFindActorInRegion);
	UManicFindActorInRegion::~UManicFindActorInRegion() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicFindActorInRegion_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicFindActorInRegion_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManicFindActorInRegion, UManicFindActorInRegion::StaticClass, TEXT("UManicFindActorInRegion"), &Z_Registration_Info_UClass_UManicFindActorInRegion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManicFindActorInRegion), 1380075788U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicFindActorInRegion_h_1993016618(TEXT("/Script/Manic_AI"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicFindActorInRegion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicFindActorInRegion_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
