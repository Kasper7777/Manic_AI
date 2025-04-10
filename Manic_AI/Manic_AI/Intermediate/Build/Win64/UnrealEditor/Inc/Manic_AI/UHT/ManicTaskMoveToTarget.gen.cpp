// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manic_AI/Public/ManicTaskMoveToTarget.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManicTaskMoveToTarget() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	MANIC_AI_API UClass* Z_Construct_UClass_UManicTaskMoveToTarget();
	MANIC_AI_API UClass* Z_Construct_UClass_UManicTaskMoveToTarget_NoRegister();
	MANIC_AI_API UEnum* Z_Construct_UEnum_Manic_AI_EMoveToKeyMode();
	MANIC_AI_API UScriptStruct* Z_Construct_UScriptStruct_FManicTaskMoveToTargetMemory();
	UPackage* Z_Construct_UPackage__Script_Manic_AI();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManicTaskMoveToTargetMemory;
class UScriptStruct* FManicTaskMoveToTargetMemory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManicTaskMoveToTargetMemory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManicTaskMoveToTargetMemory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManicTaskMoveToTargetMemory, (UObject*)Z_Construct_UPackage__Script_Manic_AI(), TEXT("ManicTaskMoveToTargetMemory"));
	}
	return Z_Registration_Info_UScriptStruct_ManicTaskMoveToTargetMemory.OuterSingleton;
}
template<> MANIC_AI_API UScriptStruct* StaticStruct<FManicTaskMoveToTargetMemory>()
{
	return FManicTaskMoveToTargetMemory::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManicTaskMoveToTargetMemory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManicTaskMoveToTargetMemory_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManicTaskMoveToTarget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManicTaskMoveToTargetMemory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManicTaskMoveToTargetMemory>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManicTaskMoveToTargetMemory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manic_AI,
		nullptr,
		&NewStructOps,
		"ManicTaskMoveToTargetMemory",
		nullptr,
		0,
		sizeof(FManicTaskMoveToTargetMemory),
		alignof(FManicTaskMoveToTargetMemory),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManicTaskMoveToTargetMemory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FManicTaskMoveToTargetMemory_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManicTaskMoveToTargetMemory()
	{
		if (!Z_Registration_Info_UScriptStruct_ManicTaskMoveToTargetMemory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManicTaskMoveToTargetMemory.InnerSingleton, Z_Construct_UScriptStruct_FManicTaskMoveToTargetMemory_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManicTaskMoveToTargetMemory.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoveToKeyMode;
	static UEnum* EMoveToKeyMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMoveToKeyMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMoveToKeyMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Manic_AI_EMoveToKeyMode, (UObject*)Z_Construct_UPackage__Script_Manic_AI(), TEXT("EMoveToKeyMode"));
		}
		return Z_Registration_Info_UEnum_EMoveToKeyMode.OuterSingleton;
	}
	template<> MANIC_AI_API UEnum* StaticEnum<EMoveToKeyMode>()
	{
		return EMoveToKeyMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Manic_AI_EMoveToKeyMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Manic_AI_EMoveToKeyMode_Statics::Enumerators[] = {
		{ "EMoveToKeyMode::UseActor", (int64)EMoveToKeyMode::UseActor },
		{ "EMoveToKeyMode::UseLocation", (int64)EMoveToKeyMode::UseLocation },
		{ "EMoveToKeyMode::Auto", (int64)EMoveToKeyMode::Auto },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Manic_AI_EMoveToKeyMode_Statics::Enum_MetaDataParams[] = {
		{ "Auto.Comment", "/**\n\x09 * If ActorKey is set (non-null), use it. Otherwise, use LocationKey.\n\x09 * \"Auto\" or \"whichever is set first.\"\n\x09 */" },
		{ "Auto.DisplayName", "Auto (Actor if set, else Location)" },
		{ "Auto.Name", "EMoveToKeyMode::Auto" },
		{ "Auto.ToolTip", "If ActorKey is set (non-null), use it. Otherwise, use LocationKey.\n\"Auto\" or \"whichever is set first.\"" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Which blackboard key(s) we read to compute the goal. */" },
		{ "ModuleRelativePath", "Public/ManicTaskMoveToTarget.h" },
		{ "ToolTip", "Which blackboard key(s) we read to compute the goal." },
		{ "UseActor.Comment", "/** Only read ActorKey to find the final location. */" },
		{ "UseActor.DisplayName", "Use Actor" },
		{ "UseActor.Name", "EMoveToKeyMode::UseActor" },
		{ "UseActor.ToolTip", "Only read ActorKey to find the final location." },
		{ "UseLocation.Comment", "/** Only read LocationKey to find the final location. */" },
		{ "UseLocation.DisplayName", "Use Location" },
		{ "UseLocation.Name", "EMoveToKeyMode::UseLocation" },
		{ "UseLocation.ToolTip", "Only read LocationKey to find the final location." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Manic_AI_EMoveToKeyMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Manic_AI,
		nullptr,
		"EMoveToKeyMode",
		"EMoveToKeyMode",
		Z_Construct_UEnum_Manic_AI_EMoveToKeyMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Manic_AI_EMoveToKeyMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Manic_AI_EMoveToKeyMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Manic_AI_EMoveToKeyMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Manic_AI_EMoveToKeyMode()
	{
		if (!Z_Registration_Info_UEnum_EMoveToKeyMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoveToKeyMode.InnerSingleton, Z_Construct_UEnum_Manic_AI_EMoveToKeyMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMoveToKeyMode.InnerSingleton;
	}
	void UManicTaskMoveToTarget::StaticRegisterNativesUManicTaskMoveToTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManicTaskMoveToTarget);
	UClass* Z_Construct_UClass_UManicTaskMoveToTarget_NoRegister()
	{
		return UManicTaskMoveToTarget::StaticClass();
	}
	struct Z_Construct_UClass_UManicTaskMoveToTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InsideFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InsideFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcceptableRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptableRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrivalRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArrivalRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetActorKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocationKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocationKey;
		static const UECodeGen_Private::FBytePropertyParams NewProp_KeyMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_KeyMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableObstacleAvoidance_MetaData[];
#endif
		static void NewProp_bDisableObstacleAvoidance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableObstacleAvoidance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleCheckRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleCheckRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumClearance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumClearance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAdjustmentIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAdjustmentIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinMoveDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinMoveDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StuckTimeThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StuckTimeThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugSphereRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugSphereRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawColour_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugDrawColour;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManicTaskMoveToTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Manic_AI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskMoveToTarget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskMoveToTarget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ManicTaskMoveToTarget.h" },
		{ "ModuleRelativePath", "Public/ManicTaskMoveToTarget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_InsideFactor_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/**\n\x09 * If using a TargetActor, we compute the final location by:\n\x09 *   float StopDist = ActorRadius * InsideFactor;\n\x09 * Then we offset from the actor\xe2\x80\x99s center in the direction (Pawn->Actor).\n\x09 *\n\x09 *  - InsideFactor < 1 => inside the bounding box\n\x09 *  - InsideFactor = 1 => roughly at bounding\xe2\x80\x90""box surface\n\x09 *  - InsideFactor > 1 => outside the bounding box\n\x09 *  - InsideFactor < 0 => beyond the center (if physically possible)\n\x09 */" },
		{ "ModuleRelativePath", "Public/ManicTaskMoveToTarget.h" },
		{ "ToolTip", "If using a TargetActor, we compute the final location by:\n  float StopDist = ActorRadius * InsideFactor;\nThen we offset from the actor\xe2\x80\x99s center in the direction (Pawn->Actor).\n\n - InsideFactor < 1 => inside the bounding box\n - InsideFactor = 1 => roughly at bounding\xe2\x80\x90""box surface\n - InsideFactor > 1 => outside the bounding box\n - InsideFactor < 0 => beyond the center (if physically possible)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_InsideFactor = { "InsideFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskMoveToTarget, InsideFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_InsideFactor_MetaData), Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_InsideFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_AcceptableRadius_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** If using a TargetLocation, offset that location by AcceptableRadius in direction (Pawn->Location). */" },
		{ "ModuleRelativePath", "Public/ManicTaskMoveToTarget.h" },
		{ "ToolTip", "If using a TargetLocation, offset that location by AcceptableRadius in direction (Pawn->Location)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_AcceptableRadius = { "AcceptableRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskMoveToTarget, AcceptableRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_AcceptableRadius_MetaData), Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_AcceptableRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** The AI\xe2\x80\x99s walk speed for the duration of this move. */" },
		{ "ModuleRelativePath", "Public/ManicTaskMoveToTarget.h" },
		{ "ToolTip", "The AI\xe2\x80\x99s walk speed for the duration of this move." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskMoveToTarget, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_MovementSpeed_MetaData), Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_MovementSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_ArrivalRadius_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/**\n\x09 * The radius at which we consider the AI to have arrived.\n\x09 * If you want them \xe2\x80\x9chugging\xe2\x80\x9d the object, make this small (5\xe2\x80\x93""20).\n\x09 */" },
		{ "ModuleRelativePath", "Public/ManicTaskMoveToTarget.h" },
		{ "ToolTip", "The radius at which we consider the AI to have arrived.\nIf you want them \xe2\x80\x9chugging\xe2\x80\x9d the object, make this small (5\xe2\x80\x93""20)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_ArrivalRadius = { "ArrivalRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskMoveToTarget, ArrivalRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_ArrivalRadius_MetaData), Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_ArrivalRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_TargetActorKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** Blackboard key for the target actor. */" },
		{ "ModuleRelativePath", "Public/ManicTaskMoveToTarget.h" },
		{ "ToolTip", "Blackboard key for the target actor." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_TargetActorKey = { "TargetActorKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskMoveToTarget, TargetActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_TargetActorKey_MetaData), Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_TargetActorKey_MetaData) }; // 3137324432
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_TargetLocationKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** Blackboard key for the target location. */" },
		{ "ModuleRelativePath", "Public/ManicTaskMoveToTarget.h" },
		{ "ToolTip", "Blackboard key for the target location." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_TargetLocationKey = { "TargetLocationKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskMoveToTarget, TargetLocationKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_TargetLocationKey_MetaData), Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_TargetLocationKey_MetaData) }; // 3137324432
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_KeyMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_KeyMode_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** Which key we actually read at runtime (UseActor, UseLocation, or Auto). */" },
		{ "ModuleRelativePath", "Public/ManicTaskMoveToTarget.h" },
		{ "ToolTip", "Which key we actually read at runtime (UseActor, UseLocation, or Auto)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_KeyMode = { "KeyMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskMoveToTarget, KeyMode), Z_Construct_UEnum_Manic_AI_EMoveToKeyMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_KeyMode_MetaData), Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_KeyMode_MetaData) }; // 599184288
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_bDisableObstacleAvoidance_MetaData[] = {
		{ "Category", "Obstacle" },
		{ "Comment", "/** If false, do line-trace + sphere-sweep obstacle avoidance. */" },
		{ "ModuleRelativePath", "Public/ManicTaskMoveToTarget.h" },
		{ "ToolTip", "If false, do line-trace + sphere-sweep obstacle avoidance." },
	};
#endif
	void Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_bDisableObstacleAvoidance_SetBit(void* Obj)
	{
		((UManicTaskMoveToTarget*)Obj)->bDisableObstacleAvoidance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_bDisableObstacleAvoidance = { "bDisableObstacleAvoidance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UManicTaskMoveToTarget), &Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_bDisableObstacleAvoidance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_bDisableObstacleAvoidance_MetaData), Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_bDisableObstacleAvoidance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_ObstacleCheckRadius_MetaData[] = {
		{ "Category", "Obstacle" },
		{ "EditCondition", "!bDisableObstacleAvoidance" },
		{ "ModuleRelativePath", "Public/ManicTaskMoveToTarget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_ObstacleCheckRadius = { "ObstacleCheckRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskMoveToTarget, ObstacleCheckRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_ObstacleCheckRadius_MetaData), Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_ObstacleCheckRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_MinimumClearance_MetaData[] = {
		{ "Category", "Obstacle" },
		{ "EditCondition", "!bDisableObstacleAvoidance" },
		{ "ModuleRelativePath", "Public/ManicTaskMoveToTarget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_MinimumClearance = { "MinimumClearance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskMoveToTarget, MinimumClearance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_MinimumClearance_MetaData), Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_MinimumClearance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_MaxAdjustmentIterations_MetaData[] = {
		{ "Category", "Obstacle" },
		{ "EditCondition", "!bDisableObstacleAvoidance" },
		{ "ModuleRelativePath", "Public/ManicTaskMoveToTarget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_MaxAdjustmentIterations = { "MaxAdjustmentIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskMoveToTarget, MaxAdjustmentIterations), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_MaxAdjustmentIterations_MetaData), Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_MaxAdjustmentIterations_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_MinMoveDistance_MetaData[] = {
		{ "Category", "Stuck Detection" },
		{ "Comment", "/** Stuck detection. If we move less than this each tick, we accumulate stuck time. */" },
		{ "ModuleRelativePath", "Public/ManicTaskMoveToTarget.h" },
		{ "ToolTip", "Stuck detection. If we move less than this each tick, we accumulate stuck time." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_MinMoveDistance = { "MinMoveDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskMoveToTarget, MinMoveDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_MinMoveDistance_MetaData), Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_MinMoveDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_StuckTimeThreshold_MetaData[] = {
		{ "Category", "Stuck Detection" },
		{ "Comment", "/** If stuck time exceeds this, we fail. */" },
		{ "ModuleRelativePath", "Public/ManicTaskMoveToTarget.h" },
		{ "ToolTip", "If stuck time exceeds this, we fail." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_StuckTimeThreshold = { "StuckTimeThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskMoveToTarget, StuckTimeThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_StuckTimeThreshold_MetaData), Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_StuckTimeThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_Timeout_MetaData[] = {
		{ "Category", "Stuck Detection" },
		{ "Comment", "/** Overall time limit for the task. If we exceed it, we fail. */" },
		{ "ModuleRelativePath", "Public/ManicTaskMoveToTarget.h" },
		{ "ToolTip", "Overall time limit for the task. If we exceed it, we fail." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskMoveToTarget, Timeout), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_Timeout_MetaData), Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_Timeout_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Debug draws. */" },
		{ "ModuleRelativePath", "Public/ManicTaskMoveToTarget.h" },
		{ "ToolTip", "Debug draws." },
	};
#endif
	void Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((UManicTaskMoveToTarget*)Obj)->bDrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UManicTaskMoveToTarget), &Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_bDrawDebug_MetaData), Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_bDrawDebug_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_DebugSphereRadius_MetaData[] = {
		{ "Category", "Debug" },
		{ "EditCondition", "bDrawDebug" },
		{ "ModuleRelativePath", "Public/ManicTaskMoveToTarget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_DebugSphereRadius = { "DebugSphereRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskMoveToTarget, DebugSphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_DebugSphereRadius_MetaData), Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_DebugSphereRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_DebugDrawColour_MetaData[] = {
		{ "Category", "Debug" },
		{ "EditCondition", "bDrawDebug" },
		{ "ModuleRelativePath", "Public/ManicTaskMoveToTarget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_DebugDrawColour = { "DebugDrawColour", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicTaskMoveToTarget, DebugDrawColour), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_DebugDrawColour_MetaData), Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_DebugDrawColour_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManicTaskMoveToTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_InsideFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_AcceptableRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_MovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_ArrivalRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_TargetActorKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_TargetLocationKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_KeyMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_KeyMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_bDisableObstacleAvoidance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_ObstacleCheckRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_MinimumClearance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_MaxAdjustmentIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_MinMoveDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_StuckTimeThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_bDrawDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_DebugSphereRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicTaskMoveToTarget_Statics::NewProp_DebugDrawColour,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManicTaskMoveToTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManicTaskMoveToTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManicTaskMoveToTarget_Statics::ClassParams = {
		&UManicTaskMoveToTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UManicTaskMoveToTarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskMoveToTarget_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskMoveToTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UManicTaskMoveToTarget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTaskMoveToTarget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UManicTaskMoveToTarget()
	{
		if (!Z_Registration_Info_UClass_UManicTaskMoveToTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManicTaskMoveToTarget.OuterSingleton, Z_Construct_UClass_UManicTaskMoveToTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManicTaskMoveToTarget.OuterSingleton;
	}
	template<> MANIC_AI_API UClass* StaticClass<UManicTaskMoveToTarget>()
	{
		return UManicTaskMoveToTarget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManicTaskMoveToTarget);
	UManicTaskMoveToTarget::~UManicTaskMoveToTarget() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_Statics::EnumInfo[] = {
		{ EMoveToKeyMode_StaticEnum, TEXT("EMoveToKeyMode"), &Z_Registration_Info_UEnum_EMoveToKeyMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 599184288U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_Statics::ScriptStructInfo[] = {
		{ FManicTaskMoveToTargetMemory::StaticStruct, Z_Construct_UScriptStruct_FManicTaskMoveToTargetMemory_Statics::NewStructOps, TEXT("ManicTaskMoveToTargetMemory"), &Z_Registration_Info_UScriptStruct_ManicTaskMoveToTargetMemory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManicTaskMoveToTargetMemory), 1485385364U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManicTaskMoveToTarget, UManicTaskMoveToTarget::StaticClass, TEXT("UManicTaskMoveToTarget"), &Z_Registration_Info_UClass_UManicTaskMoveToTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManicTaskMoveToTarget), 1374740920U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_524900955(TEXT("/Script/Manic_AI"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTaskMoveToTarget_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
