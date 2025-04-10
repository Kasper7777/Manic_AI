// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manic_AI/Public/ManicTaskFindFreeActor.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManicTaskFindFreeActor() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MANIC_AI_API UClass* Z_Construct_UClass_UManicTaskFindFreeActor();
	MANIC_AI_API UClass* Z_Construct_UClass_UManicTaskFindFreeActor_NoRegister();
	MANIC_AI_API UEnum* Z_Construct_UEnum_Manic_AI_EFreeActorWriteMode();
	MANIC_AI_API UScriptStruct* Z_Construct_UScriptStruct_FManicTaskFindFreeActorMemory();
	UPackage* Z_Construct_UPackage__Script_Manic_AI();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManicTaskFindFreeActorMemory;
class UScriptStruct* FManicTaskFindFreeActorMemory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManicTaskFindFreeActorMemory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManicTaskFindFreeActorMemory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManicTaskFindFreeActorMemory, (UObject*)Z_Construct_UPackage__Script_Manic_AI(), TEXT("ManicTaskFindFreeActorMemory"));
	}
	return Z_Registration_Info_UScriptStruct_ManicTaskFindFreeActorMemory.OuterSingleton;
}
template<> MANIC_AI_API UScriptStruct* StaticStruct<FManicTaskFindFreeActorMemory>()
{
	return FManicTaskFindFreeActorMemory::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManicTaskFindFreeActorMemory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManicTaskFindFreeActorMemory_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Memory structure used to store the start time and the random delay for the task. */" },
		{ "ModuleRelativePath", "Public/ManicTaskFindFreeActor.h" },
		{ "ToolTip", "Memory structure used to store the start time and the random delay for the task." },
	};
#endif
	void* Z_Construct_UScriptStruct_FManicTaskFindFreeActorMemory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManicTaskFindFreeActorMemory>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManicTaskFindFreeActorMemory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manic_AI,
		nullptr,
		&NewStructOps,
		"ManicTaskFindFreeActorMemory",
		nullptr,
		0,
		sizeof(FManicTaskFindFreeActorMemory),
		alignof(FManicTaskFindFreeActorMemory),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManicTaskFindFreeActorMemory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FManicTaskFindFreeActorMemory_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManicTaskFindFreeActorMemory()
	{
		if (!Z_Registration_Info_UScriptStruct_ManicTaskFindFreeActorMemory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManicTaskFindFreeActorMemory.InnerSingleton, Z_Construct_UScriptStruct_FManicTaskFindFreeActorMemory_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManicTaskFindFreeActorMemory.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFreeActorWriteMode;
	static UEnum* EFreeActorWriteMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFreeActorWriteMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFreeActorWriteMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Manic_AI_EFreeActorWriteMode, (UObject*)Z_Construct_UPackage__Script_Manic_AI(), TEXT("EFreeActorWriteMode"));
		}
		return Z_Registration_Info_UEnum_EFreeActorWriteMode.OuterSingleton;
	}
	template<> MANIC_AI_API UEnum* StaticEnum<EFreeActorWriteMode>()
	{
		return EFreeActorWriteMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Manic_AI_EFreeActorWriteMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Manic_AI_EFreeActorWriteMode_Statics::Enumerators[] = {
		{ "EFreeActorWriteMode::ActorOnly", (int64)EFreeActorWriteMode::ActorOnly },
		{ "EFreeActorWriteMode::LocationOnly", (int64)EFreeActorWriteMode::LocationOnly },
		{ "EFreeActorWriteMode::ActorAndLocation", (int64)EFreeActorWriteMode::ActorAndLocation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Manic_AI_EFreeActorWriteMode_Statics::Enum_MetaDataParams[] = {
		{ "ActorAndLocation.Comment", "/** Write both Actor and Location keys */" },
		{ "ActorAndLocation.DisplayName", "Actor & Location" },
		{ "ActorAndLocation.Name", "EFreeActorWriteMode::ActorAndLocation" },
		{ "ActorAndLocation.ToolTip", "Write both Actor and Location keys" },
		{ "ActorOnly.Comment", "/** Write only to the Actor key */" },
		{ "ActorOnly.DisplayName", "Actor Only" },
		{ "ActorOnly.Name", "EFreeActorWriteMode::ActorOnly" },
		{ "ActorOnly.ToolTip", "Write only to the Actor key" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Controls how we write the found actor to the Blackboard. */" },
		{ "LocationOnly.Comment", "/** Write only to the Location key */" },
		{ "LocationOnly.DisplayName", "Location Only" },
		{ "LocationOnly.Name", "EFreeActorWriteMode::LocationOnly" },
		{ "LocationOnly.ToolTip", "Write only to the Location key" },
		{ "ModuleRelativePath", "Public/ManicTaskFindFreeActor.h" },
		{ "ToolTip", "Controls how we write the found actor to the Blackboard." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Manic_AI_EFreeActorWriteMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Manic_AI,
		nullptr,
		"EFreeActorWriteMode",
		"EFreeActorWriteMode",
		Z_Construct_UEnum_Manic_AI_EFreeActorWriteMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Manic_AI_EFreeActorWriteMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Manic_AI_EFreeActorWriteMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Manic_AI_EFreeActorWriteMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Manic_AI_EFreeActorWriteMode()
	{
		if (!Z_Registration_Info_UEnum_EFreeActorWriteMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFreeActorWriteMode.InnerSingleton, Z_Construct_UEnum_Manic_AI_EFreeActorWriteMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFreeActorWriteMode.InnerSingleton;
	}
	void UManicTaskFindFreeActor::StaticRegisterNativesUManicTaskFindFreeActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManicTaskFindFreeActor);
	UClass* Z_Construct_UClass_UManicTaskFindFreeActor_NoRegister()
	{
		return UManicTaskFindFreeActor::StaticClass();
	}
	struct Z_Construct_UClass_UManicTaskFindFreeActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSelectionDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSelectionDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSelectionDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSelectionDelay;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WriteMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WriteMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WriteMode;
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
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AvoidActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvoidActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvoidActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvoidanceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AvoidanceRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManicTaskFindFreeActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Manic_AI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindFreeActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskFindFreeActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Behaviour Tree Task that finds the closest free target actor of a specified class,\n * while checking a configurable avoid list. After selecting a free candidate,\n * the task waits for a random delay (between MinSelectionDelay and MaxSelectionDelay)\n * before finalizing.\n */" },
		{ "IncludePath", "ManicTaskFindFreeActor.h" },
		{ "ModuleRelativePath", "Public/ManicTaskFindFreeActor.h" },
		{ "ToolTip", "Behaviour Tree Task that finds the closest free target actor of a specified class,\nwhile checking a configurable avoid list. After selecting a free candidate,\nthe task waits for a random delay (between MinSelectionDelay and MaxSelectionDelay)\nbefore finalizing." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_MinSelectionDelay_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/** Minimum delay (in seconds) before finalizing target selection. */" },
		{ "ModuleRelativePath", "Public/ManicTaskFindFreeActor.h" },
		{ "ToolTip", "Minimum delay (in seconds) before finalizing target selection." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_MinSelectionDelay = { "MinSelectionDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskFindFreeActor, MinSelectionDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_MinSelectionDelay_MetaData), Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_MinSelectionDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_MaxSelectionDelay_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/** Maximum delay (in seconds) before finalizing target selection. */" },
		{ "ModuleRelativePath", "Public/ManicTaskFindFreeActor.h" },
		{ "ToolTip", "Maximum delay (in seconds) before finalizing target selection." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_MaxSelectionDelay = { "MaxSelectionDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskFindFreeActor, MaxSelectionDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_MaxSelectionDelay_MetaData), Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_MaxSelectionDelay_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_WriteMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_WriteMode_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/**\n\x09 * Which Blackboard keys to write (Actor only, Location only, or both).\n\x09 */" },
		{ "ModuleRelativePath", "Public/ManicTaskFindFreeActor.h" },
		{ "ToolTip", "Which Blackboard keys to write (Actor only, Location only, or both)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_WriteMode = { "WriteMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskFindFreeActor, WriteMode), Z_Construct_UEnum_Manic_AI_EFreeActorWriteMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_WriteMode_MetaData), Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_WriteMode_MetaData) }; // 429896136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_TargetActorKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** Blackboard key selector for storing the chosen target actor. */" },
		{ "ModuleRelativePath", "Public/ManicTaskFindFreeActor.h" },
		{ "ToolTip", "Blackboard key selector for storing the chosen target actor." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_TargetActorKey = { "TargetActorKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskFindFreeActor, TargetActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_TargetActorKey_MetaData), Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_TargetActorKey_MetaData) }; // 3137324432
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_TargetClassKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** Blackboard key selector that provides the class of actor to find. */" },
		{ "ModuleRelativePath", "Public/ManicTaskFindFreeActor.h" },
		{ "ToolTip", "Blackboard key selector that provides the class of actor to find." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_TargetClassKey = { "TargetClassKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskFindFreeActor, TargetClassKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_TargetClassKey_MetaData), Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_TargetClassKey_MetaData) }; // 3137324432
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_TargetLocationKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** Optional: Blackboard key selector to store the chosen actor's location. */" },
		{ "ModuleRelativePath", "Public/ManicTaskFindFreeActor.h" },
		{ "ToolTip", "Optional: Blackboard key selector to store the chosen actor's location." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_TargetLocationKey = { "TargetLocationKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskFindFreeActor, TargetLocationKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_TargetLocationKey_MetaData), Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_TargetLocationKey_MetaData) }; // 3137324432
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_AvoidActors_Inner = { "AvoidActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_AvoidActors_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "Comment", "/** Array of actors to avoid; if any actor in this list is within AvoidanceRadius of a candidate, that candidate is skipped. */" },
		{ "ModuleRelativePath", "Public/ManicTaskFindFreeActor.h" },
		{ "ToolTip", "Array of actors to avoid; if any actor in this list is within AvoidanceRadius of a candidate, that candidate is skipped." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_AvoidActors = { "AvoidActors", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskFindFreeActor, AvoidActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_AvoidActors_MetaData), Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_AvoidActors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_AvoidanceRadius_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "Comment", "/** The radius within which any actor from AvoidActors causes a candidate to be skipped. */" },
		{ "ModuleRelativePath", "Public/ManicTaskFindFreeActor.h" },
		{ "ToolTip", "The radius within which any actor from AvoidActors causes a candidate to be skipped." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_AvoidanceRadius = { "AvoidanceRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskFindFreeActor, AvoidanceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_AvoidanceRadius_MetaData), Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_AvoidanceRadius_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManicTaskFindFreeActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_MinSelectionDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_MaxSelectionDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_WriteMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_WriteMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_TargetActorKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_TargetClassKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_TargetLocationKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_AvoidActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_AvoidActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskFindFreeActor_Statics::NewProp_AvoidanceRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManicTaskFindFreeActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManicTaskFindFreeActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManicTaskFindFreeActor_Statics::ClassParams = {
		&UManicTaskFindFreeActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UManicTaskFindFreeActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindFreeActor_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindFreeActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UManicTaskFindFreeActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskFindFreeActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UManicTaskFindFreeActor()
	{
		if (!Z_Registration_Info_UClass_UManicTaskFindFreeActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManicTaskFindFreeActor.OuterSingleton, Z_Construct_UClass_UManicTaskFindFreeActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManicTaskFindFreeActor.OuterSingleton;
	}
	template<> MANIC_AI_API UClass* StaticClass<UManicTaskFindFreeActor>()
	{
		return UManicTaskFindFreeActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManicTaskFindFreeActor);
	UManicTaskFindFreeActor::~UManicTaskFindFreeActor() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_Statics::EnumInfo[] = {
		{ EFreeActorWriteMode_StaticEnum, TEXT("EFreeActorWriteMode"), &Z_Registration_Info_UEnum_EFreeActorWriteMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 429896136U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_Statics::ScriptStructInfo[] = {
		{ FManicTaskFindFreeActorMemory::StaticStruct, Z_Construct_UScriptStruct_FManicTaskFindFreeActorMemory_Statics::NewStructOps, TEXT("ManicTaskFindFreeActorMemory"), &Z_Registration_Info_UScriptStruct_ManicTaskFindFreeActorMemory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManicTaskFindFreeActorMemory), 114282197U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManicTaskFindFreeActor, UManicTaskFindFreeActor::StaticClass, TEXT("UManicTaskFindFreeActor"), &Z_Registration_Info_UClass_UManicTaskFindFreeActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManicTaskFindFreeActor), 128192081U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_1587912895(TEXT("/Script/Manic_AI"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskFindFreeActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
