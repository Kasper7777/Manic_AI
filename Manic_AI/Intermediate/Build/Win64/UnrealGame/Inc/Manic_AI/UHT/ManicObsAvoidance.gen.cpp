// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manic_AI/Public/ManicObsAvoidance.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManicObsAvoidance() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MANIC_AI_API UClass* Z_Construct_UClass_UManicObsAvoidance();
	MANIC_AI_API UClass* Z_Construct_UClass_UManicObsAvoidance_NoRegister();
	MANIC_AI_API UEnum* Z_Construct_UEnum_Manic_AI_ETargetType();
	UPackage* Z_Construct_UPackage__Script_Manic_AI();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETargetType;
	static UEnum* ETargetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETargetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETargetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Manic_AI_ETargetType, (UObject*)Z_Construct_UPackage__Script_Manic_AI(), TEXT("ETargetType"));
		}
		return Z_Registration_Info_UEnum_ETargetType.OuterSingleton;
	}
	template<> MANIC_AI_API UEnum* StaticEnum<ETargetType>()
	{
		return ETargetType_StaticEnum();
	}
	struct Z_Construct_UEnum_Manic_AI_ETargetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Manic_AI_ETargetType_Statics::Enumerators[] = {
		{ "ETargetType::BlackboardLocation", (int64)ETargetType::BlackboardLocation },
		{ "ETargetType::BlackboardActor", (int64)ETargetType::BlackboardActor },
		{ "ETargetType::StaticActor", (int64)ETargetType::StaticActor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Manic_AI_ETargetType_Statics::Enum_MetaDataParams[] = {
		{ "BlackboardActor.DisplayName", "Blackboard Actor" },
		{ "BlackboardActor.Name", "ETargetType::BlackboardActor" },
		{ "BlackboardLocation.DisplayName", "Blackboard Location" },
		{ "BlackboardLocation.Name", "ETargetType::BlackboardLocation" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ManicObsAvoidance.h" },
		{ "StaticActor.DisplayName", "Static Actor" },
		{ "StaticActor.Name", "ETargetType::StaticActor" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Manic_AI_ETargetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Manic_AI,
		nullptr,
		"ETargetType",
		"ETargetType",
		Z_Construct_UEnum_Manic_AI_ETargetType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Manic_AI_ETargetType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Manic_AI_ETargetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Manic_AI_ETargetType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Manic_AI_ETargetType()
	{
		if (!Z_Registration_Info_UEnum_ETargetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETargetType.InnerSingleton, Z_Construct_UEnum_Manic_AI_ETargetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETargetType.InnerSingleton;
	}
	void UManicObsAvoidance::StaticRegisterNativesUManicObsAvoidance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManicObsAvoidance);
	UClass* Z_Construct_UClass_UManicObsAvoidance_NoRegister()
	{
		return UManicObsAvoidance::StaticClass();
	}
	struct Z_Construct_UClass_UManicObsAvoidance_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocationKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocationKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetActorKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticTargetActor_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticTargetActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcceptableRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptableRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InsideFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InsideFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrivalThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArrivalThreshold;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableObstacleAvoidance_MetaData[];
#endif
		static void NewProp_bDisableObstacleAvoidance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableObstacleAvoidance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinMoveDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinMoveDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StuckTimeThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StuckTimeThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepelOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RepelOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManicObsAvoidance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Manic_AI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManicObsAvoidance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicObsAvoidance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ManicObsAvoidance.h" },
		{ "ModuleRelativePath", "Public/ManicObsAvoidance.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_TargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_TargetType_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "// Target selection.\n" },
		{ "ModuleRelativePath", "Public/ManicObsAvoidance.h" },
		{ "ToolTip", "Target selection." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicObsAvoidance, TargetType), Z_Construct_UEnum_Manic_AI_ETargetType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_TargetType_MetaData), Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_TargetType_MetaData) }; // 265716563
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_TargetLocationKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "// Blackboard keys (used when TargetType is BlackboardLocation or BlackboardActor).\n" },
		{ "ModuleRelativePath", "Public/ManicObsAvoidance.h" },
		{ "ToolTip", "Blackboard keys (used when TargetType is BlackboardLocation or BlackboardActor)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_TargetLocationKey = { "TargetLocationKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicObsAvoidance, TargetLocationKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_TargetLocationKey_MetaData), Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_TargetLocationKey_MetaData) }; // 3137324432
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_TargetActorKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/ManicObsAvoidance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_TargetActorKey = { "TargetActorKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicObsAvoidance, TargetActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_TargetActorKey_MetaData), Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_TargetActorKey_MetaData) }; // 3137324432
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_StaticTargetActor_MetaData[] = {
		{ "AllowedClasses", "Actor" },
		{ "Category", "Targeting" },
		{ "Comment", "// When TargetType is StaticActor, pick an actor from the level.\n// Using a soft reference lets you select any actor (including Blueprint-generated ones) without a hard dependency.\n" },
		{ "ModuleRelativePath", "Public/ManicObsAvoidance.h" },
		{ "ToolTip", "When TargetType is StaticActor, pick an actor from the level.\nUsing a soft reference lets you select any actor (including Blueprint-generated ones) without a hard dependency." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_StaticTargetActor = { "StaticTargetActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicObsAvoidance, StaticTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_StaticTargetActor_MetaData), Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_StaticTargetActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// Movement parameters.\n" },
		{ "ModuleRelativePath", "Public/ManicObsAvoidance.h" },
		{ "ToolTip", "Movement parameters." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicObsAvoidance, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_MovementSpeed_MetaData), Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_MovementSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_ObstacleCheckRadius_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "Comment", "// Obstacle avoidance parameters.\n" },
		{ "ModuleRelativePath", "Public/ManicObsAvoidance.h" },
		{ "ToolTip", "Obstacle avoidance parameters." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_ObstacleCheckRadius = { "ObstacleCheckRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicObsAvoidance, ObstacleCheckRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_ObstacleCheckRadius_MetaData), Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_ObstacleCheckRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_MinimumClearance_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "ModuleRelativePath", "Public/ManicObsAvoidance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_MinimumClearance = { "MinimumClearance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicObsAvoidance, MinimumClearance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_MinimumClearance_MetaData), Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_MinimumClearance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_MaxAdjustmentIterations_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "ModuleRelativePath", "Public/ManicObsAvoidance.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_MaxAdjustmentIterations = { "MaxAdjustmentIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicObsAvoidance, MaxAdjustmentIterations), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_MaxAdjustmentIterations_MetaData), Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_MaxAdjustmentIterations_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_AcceptableRadius_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "// Additional targeting parameters.\n" },
		{ "ModuleRelativePath", "Public/ManicObsAvoidance.h" },
		{ "ToolTip", "Additional targeting parameters." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_AcceptableRadius = { "AcceptableRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicObsAvoidance, AcceptableRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_AcceptableRadius_MetaData), Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_AcceptableRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_InsideFactor_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/ManicObsAvoidance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_InsideFactor = { "InsideFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicObsAvoidance, InsideFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_InsideFactor_MetaData), Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_InsideFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_ArrivalThreshold_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "// Arrival threshold: if pawn is within this many units of goal, consider it arrived.\n" },
		{ "ModuleRelativePath", "Public/ManicObsAvoidance.h" },
		{ "ToolTip", "Arrival threshold: if pawn is within this many units of goal, consider it arrived." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_ArrivalThreshold = { "ArrivalThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicObsAvoidance, ArrivalThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_ArrivalThreshold_MetaData), Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_ArrivalThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Debug options.\n" },
		{ "ModuleRelativePath", "Public/ManicObsAvoidance.h" },
		{ "ToolTip", "Debug options." },
	};
#endif
	void Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((UManicObsAvoidance*)Obj)->bDrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UManicObsAvoidance), &Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_bDrawDebug_MetaData), Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_bDrawDebug_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_DebugSphereRadius_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/ManicObsAvoidance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_DebugSphereRadius = { "DebugSphereRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicObsAvoidance, DebugSphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_DebugSphereRadius_MetaData), Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_DebugSphereRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_DebugDrawColour_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/ManicObsAvoidance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_DebugDrawColour = { "DebugDrawColour", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicObsAvoidance, DebugDrawColour), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_DebugDrawColour_MetaData), Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_DebugDrawColour_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_bDisableObstacleAvoidance_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Flag to disable obstacle avoidance for testing.\n" },
		{ "ModuleRelativePath", "Public/ManicObsAvoidance.h" },
		{ "ToolTip", "Flag to disable obstacle avoidance for testing." },
	};
#endif
	void Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_bDisableObstacleAvoidance_SetBit(void* Obj)
	{
		((UManicObsAvoidance*)Obj)->bDisableObstacleAvoidance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_bDisableObstacleAvoidance = { "bDisableObstacleAvoidance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UManicObsAvoidance), &Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_bDisableObstacleAvoidance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_bDisableObstacleAvoidance_MetaData), Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_bDisableObstacleAvoidance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_MinMoveDistance_MetaData[] = {
		{ "Category", "Stuck Detection" },
		{ "Comment", "// Stuck detection parameters.\n// The minimum distance (in units) considered as \"moving\".\n" },
		{ "ModuleRelativePath", "Public/ManicObsAvoidance.h" },
		{ "ToolTip", "Stuck detection parameters.\nThe minimum distance (in units) considered as \"moving\"." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_MinMoveDistance = { "MinMoveDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicObsAvoidance, MinMoveDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_MinMoveDistance_MetaData), Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_MinMoveDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_StuckTimeThreshold_MetaData[] = {
		{ "Category", "Stuck Detection" },
		{ "Comment", "// Time threshold (in seconds) after which the pawn is considered stuck.\n" },
		{ "ModuleRelativePath", "Public/ManicObsAvoidance.h" },
		{ "ToolTip", "Time threshold (in seconds) after which the pawn is considered stuck." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_StuckTimeThreshold = { "StuckTimeThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicObsAvoidance, StuckTimeThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_StuckTimeThreshold_MetaData), Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_StuckTimeThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_RepelOffset_MetaData[] = {
		{ "Category", "Stuck Detection" },
		{ "Comment", "// A small random offset applied to the goal when repathing.\n" },
		{ "ModuleRelativePath", "Public/ManicObsAvoidance.h" },
		{ "ToolTip", "A small random offset applied to the goal when repathing." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_RepelOffset = { "RepelOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicObsAvoidance, RepelOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_RepelOffset_MetaData), Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_RepelOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_Timeout_MetaData[] = {
		{ "Category", "Stuck Detection" },
		{ "Comment", "// Optional: timeout (in seconds) after which the task completes regardless.\n" },
		{ "ModuleRelativePath", "Public/ManicObsAvoidance.h" },
		{ "ToolTip", "Optional: timeout (in seconds) after which the task completes regardless." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicObsAvoidance, Timeout), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_Timeout_MetaData), Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_Timeout_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManicObsAvoidance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_TargetType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_TargetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_TargetLocationKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_TargetActorKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_StaticTargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_MovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_ObstacleCheckRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_MinimumClearance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_MaxAdjustmentIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_AcceptableRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_InsideFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_ArrivalThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_bDrawDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_DebugSphereRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_DebugDrawColour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_bDisableObstacleAvoidance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_MinMoveDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_StuckTimeThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_RepelOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicObsAvoidance_Statics::NewProp_Timeout,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManicObsAvoidance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManicObsAvoidance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManicObsAvoidance_Statics::ClassParams = {
		&UManicObsAvoidance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UManicObsAvoidance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UManicObsAvoidance_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicObsAvoidance_Statics::Class_MetaDataParams), Z_Construct_UClass_UManicObsAvoidance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManicObsAvoidance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UManicObsAvoidance()
	{
		if (!Z_Registration_Info_UClass_UManicObsAvoidance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManicObsAvoidance.OuterSingleton, Z_Construct_UClass_UManicObsAvoidance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManicObsAvoidance.OuterSingleton;
	}
	template<> MANIC_AI_API UClass* StaticClass<UManicObsAvoidance>()
	{
		return UManicObsAvoidance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManicObsAvoidance);
	UManicObsAvoidance::~UManicObsAvoidance() {}
	struct Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicObsAvoidance_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicObsAvoidance_h_Statics::EnumInfo[] = {
		{ ETargetType_StaticEnum, TEXT("ETargetType"), &Z_Registration_Info_UEnum_ETargetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 265716563U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicObsAvoidance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManicObsAvoidance, UManicObsAvoidance::StaticClass, TEXT("UManicObsAvoidance"), &Z_Registration_Info_UClass_UManicObsAvoidance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManicObsAvoidance), 267614301U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicObsAvoidance_h_1464650246(TEXT("/Script/Manic_AI"),
		Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicObsAvoidance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicObsAvoidance_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicObsAvoidance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicObsAvoidance_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
