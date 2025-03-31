// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manic_AI/Public/ManicTaskGoToLocation.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManicTaskGoToLocation() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MANIC_AI_API UClass* Z_Construct_UClass_UManicTaskGoToLocation();
	MANIC_AI_API UClass* Z_Construct_UClass_UManicTaskGoToLocation_NoRegister();
	MANIC_AI_API UScriptStruct* Z_Construct_UScriptStruct_FManicTaskGoToLocationMemory();
	UPackage* Z_Construct_UPackage__Script_Manic_AI();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManicTaskGoToLocationMemory;
class UScriptStruct* FManicTaskGoToLocationMemory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManicTaskGoToLocationMemory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManicTaskGoToLocationMemory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManicTaskGoToLocationMemory, (UObject*)Z_Construct_UPackage__Script_Manic_AI(), TEXT("ManicTaskGoToLocationMemory"));
	}
	return Z_Registration_Info_UScriptStruct_ManicTaskGoToLocationMemory.OuterSingleton;
}
template<> MANIC_AI_API UScriptStruct* StaticStruct<FManicTaskGoToLocationMemory>()
{
	return FManicTaskGoToLocationMemory::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManicTaskGoToLocationMemory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManicTaskGoToLocationMemory_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure to hold per-instance memory for this task. */" },
		{ "ModuleRelativePath", "Public/ManicTaskGoToLocation.h" },
		{ "ToolTip", "Structure to hold per-instance memory for this task." },
	};
#endif
	void* Z_Construct_UScriptStruct_FManicTaskGoToLocationMemory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManicTaskGoToLocationMemory>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManicTaskGoToLocationMemory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manic_AI,
		nullptr,
		&NewStructOps,
		"ManicTaskGoToLocationMemory",
		nullptr,
		0,
		sizeof(FManicTaskGoToLocationMemory),
		alignof(FManicTaskGoToLocationMemory),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManicTaskGoToLocationMemory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FManicTaskGoToLocationMemory_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManicTaskGoToLocationMemory()
	{
		if (!Z_Registration_Info_UScriptStruct_ManicTaskGoToLocationMemory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManicTaskGoToLocationMemory.InnerSingleton, Z_Construct_UScriptStruct_FManicTaskGoToLocationMemory_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManicTaskGoToLocationMemory.InnerSingleton;
	}
	void UManicTaskGoToLocation::StaticRegisterNativesUManicTaskGoToLocation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManicTaskGoToLocation);
	UClass* Z_Construct_UClass_UManicTaskGoToLocation_NoRegister()
	{
		return UManicTaskGoToLocation::StaticClass();
	}
	struct Z_Construct_UClass_UManicTaskGoToLocation_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcceptanceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxWaitTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWaitTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManicTaskGoToLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Manic_AI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskGoToLocation_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskGoToLocation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ManicTaskGoToLocation.h" },
		{ "ModuleRelativePath", "Public/ManicTaskGoToLocation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_AreaCenter_MetaData[] = {
		{ "Category", "Area" },
		{ "Comment", "/** The centre of the designated area. Set this directly on the node in the Behavior Tree editor. */" },
		{ "ModuleRelativePath", "Public/ManicTaskGoToLocation.h" },
		{ "ToolTip", "The centre of the designated area. Set this directly on the node in the Behavior Tree editor." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_AreaCenter = { "AreaCenter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskGoToLocation, AreaCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_AreaCenter_MetaData), Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_AreaCenter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_SearchRadius_MetaData[] = {
		{ "Category", "Area" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Radius around AreaCenter in which to search for a navigable point. */" },
		{ "ModuleRelativePath", "Public/ManicTaskGoToLocation.h" },
		{ "ToolTip", "Radius around AreaCenter in which to search for a navigable point." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskGoToLocation, SearchRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_SearchRadius_MetaData), Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_SearchRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "Category", "Area" },
		{ "Comment", "/** Optional 3D offset to adjust the final location. */" },
		{ "ModuleRelativePath", "Public/ManicTaskGoToLocation.h" },
		{ "ToolTip", "Optional 3D offset to adjust the final location." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskGoToLocation, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_LocationOffset_MetaData), Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_LocationOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_TargetLocationKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** Blackboard key where the resulting location will be stored. */" },
		{ "ModuleRelativePath", "Public/ManicTaskGoToLocation.h" },
		{ "ToolTip", "Blackboard key where the resulting location will be stored." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_TargetLocationKey = { "TargetLocationKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskGoToLocation, TargetLocationKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_TargetLocationKey_MetaData), Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_TargetLocationKey_MetaData) }; // 3137324432
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_bDrawDebugSphere_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** If true, draws a debug sphere at the chosen location. */" },
		{ "ModuleRelativePath", "Public/ManicTaskGoToLocation.h" },
		{ "ToolTip", "If true, draws a debug sphere at the chosen location." },
	};
#endif
	void Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_bDrawDebugSphere_SetBit(void* Obj)
	{
		((UManicTaskGoToLocation*)Obj)->bDrawDebugSphere = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_bDrawDebugSphere = { "bDrawDebugSphere", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UManicTaskGoToLocation), &Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_bDrawDebugSphere_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_bDrawDebugSphere_MetaData), Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_bDrawDebugSphere_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_DebugSphereRadius_MetaData[] = {
		{ "Category", "Debug" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Size of the debug sphere if bDrawDebugSphere is enabled. */" },
		{ "ModuleRelativePath", "Public/ManicTaskGoToLocation.h" },
		{ "ToolTip", "Size of the debug sphere if bDrawDebugSphere is enabled." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_DebugSphereRadius = { "DebugSphereRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskGoToLocation, DebugSphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_DebugSphereRadius_MetaData), Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_DebugSphereRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_AcceptanceRadius_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Acceptance radius to consider the NPC has reached the target location. */" },
		{ "ModuleRelativePath", "Public/ManicTaskGoToLocation.h" },
		{ "ToolTip", "Acceptance radius to consider the NPC has reached the target location." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskGoToLocation, AcceptanceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_AcceptanceRadius_MetaData), Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_AcceptanceRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_MaxWaitTime_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Maximum time (in seconds) to wait for the NPC to reach the target location before reattempting. */" },
		{ "ModuleRelativePath", "Public/ManicTaskGoToLocation.h" },
		{ "ToolTip", "Maximum time (in seconds) to wait for the NPC to reach the target location before reattempting." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_MaxWaitTime = { "MaxWaitTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskGoToLocation, MaxWaitTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_MaxWaitTime_MetaData), Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_MaxWaitTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManicTaskGoToLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_AreaCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_SearchRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_LocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_TargetLocationKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_bDrawDebugSphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_DebugSphereRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_AcceptanceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskGoToLocation_Statics::NewProp_MaxWaitTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManicTaskGoToLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManicTaskGoToLocation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManicTaskGoToLocation_Statics::ClassParams = {
		&UManicTaskGoToLocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UManicTaskGoToLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskGoToLocation_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskGoToLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_UManicTaskGoToLocation_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskGoToLocation_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UManicTaskGoToLocation()
	{
		if (!Z_Registration_Info_UClass_UManicTaskGoToLocation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManicTaskGoToLocation.OuterSingleton, Z_Construct_UClass_UManicTaskGoToLocation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManicTaskGoToLocation.OuterSingleton;
	}
	template<> MANIC_AI_API UClass* StaticClass<UManicTaskGoToLocation>()
	{
		return UManicTaskGoToLocation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManicTaskGoToLocation);
	UManicTaskGoToLocation::~UManicTaskGoToLocation() {}
	struct Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskGoToLocation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskGoToLocation_h_Statics::ScriptStructInfo[] = {
		{ FManicTaskGoToLocationMemory::StaticStruct, Z_Construct_UScriptStruct_FManicTaskGoToLocationMemory_Statics::NewStructOps, TEXT("ManicTaskGoToLocationMemory"), &Z_Registration_Info_UScriptStruct_ManicTaskGoToLocationMemory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManicTaskGoToLocationMemory), 1525791966U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskGoToLocation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManicTaskGoToLocation, UManicTaskGoToLocation::StaticClass, TEXT("UManicTaskGoToLocation"), &Z_Registration_Info_UClass_UManicTaskGoToLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManicTaskGoToLocation), 3584829692U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskGoToLocation_h_494201093(TEXT("/Script/Manic_AI"),
		Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskGoToLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskGoToLocation_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskGoToLocation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskGoToLocation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
