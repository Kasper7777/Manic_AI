// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manic_AI/Public/DynamicManicNeedsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicManicNeedsComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	MANIC_AI_API UClass* Z_Construct_UClass_UDynamicManicNeedsComponent();
	MANIC_AI_API UClass* Z_Construct_UClass_UDynamicManicNeedsComponent_NoRegister();
	MANIC_AI_API UFunction* Z_Construct_UDelegateFunction_Manic_AI_OnAllNeedsUpdated__DelegateSignature();
	MANIC_AI_API UFunction* Z_Construct_UDelegateFunction_Manic_AI_OnAnyNeedThreshold__DelegateSignature();
	MANIC_AI_API UScriptStruct* Z_Construct_UScriptStruct_FNeedData();
	UPackage* Z_Construct_UPackage__Script_Manic_AI();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NeedData;
class UScriptStruct* FNeedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NeedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NeedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNeedData, (UObject*)Z_Construct_UPackage__Script_Manic_AI(), TEXT("NeedData"));
	}
	return Z_Registration_Info_UScriptStruct_NeedData.OuterSingleton;
}
template<> MANIC_AI_API UScriptStruct* StaticStruct<FNeedData>()
{
	return FNeedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNeedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NeedName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NeedName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Threshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTickUp_MetaData[];
#endif
		static void NewProp_bTickUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTickUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Accumulator_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Accumulator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Represents one \xe2\x80\x9cneed\xe2\x80\x9d (Name, DefaultValue, Threshold, direction, rate, etc.)\n" },
		{ "ModuleRelativePath", "Public/DynamicManicNeedsComponent.h" },
		{ "ToolTip", "Represents one \xe2\x80\x9cneed\xe2\x80\x9d (Name, DefaultValue, Threshold, direction, rate, etc.)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNeedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNeedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_NeedName_MetaData[] = {
		{ "Category", "Need" },
		{ "Comment", "// Unique identifier or display name for the need\n" },
		{ "ModuleRelativePath", "Public/DynamicManicNeedsComponent.h" },
		{ "ToolTip", "Unique identifier or display name for the need" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_NeedName = { "NeedName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNeedData, NeedName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_NeedName_MetaData), Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_NeedName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Need" },
		{ "Comment", "// Basic config\n" },
		{ "ModuleRelativePath", "Public/DynamicManicNeedsComponent.h" },
		{ "ToolTip", "Basic config" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNeedData, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_DefaultValue_MetaData), Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_DefaultValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_Threshold_MetaData[] = {
		{ "Category", "Need" },
		{ "ModuleRelativePath", "Public/DynamicManicNeedsComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNeedData, Threshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_Threshold_MetaData), Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_Threshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_bTickUp_MetaData[] = {
		{ "Category", "Need" },
		{ "ModuleRelativePath", "Public/DynamicManicNeedsComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_bTickUp_SetBit(void* Obj)
	{
		((FNeedData*)Obj)->bTickUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_bTickUp = { "bTickUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNeedData), &Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_bTickUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_bTickUp_MetaData), Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_bTickUp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_TickRate_MetaData[] = {
		{ "Category", "Need" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DynamicManicNeedsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_TickRate = { "TickRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNeedData, TickRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_TickRate_MetaData), Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_TickRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_CurrentValue_MetaData[] = {
		{ "Category", "Need" },
		{ "Comment", "// Runtime fields (not typically edited in the Details panel at design time)\n" },
		{ "ModuleRelativePath", "Public/DynamicManicNeedsComponent.h" },
		{ "ToolTip", "Runtime fields (not typically edited in the Details panel at design time)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNeedData, CurrentValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_CurrentValue_MetaData), Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_CurrentValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_Accumulator_MetaData[] = {
		{ "Category", "Need" },
		{ "ModuleRelativePath", "Public/DynamicManicNeedsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_Accumulator = { "Accumulator", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNeedData, Accumulator), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_Accumulator_MetaData), Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_Accumulator_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNeedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_NeedName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_Threshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_bTickUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_TickRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_CurrentValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeedData_Statics::NewProp_Accumulator,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNeedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manic_AI,
		nullptr,
		&NewStructOps,
		"NeedData",
		Z_Construct_UScriptStruct_FNeedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeedData_Statics::PropPointers),
		sizeof(FNeedData),
		alignof(FNeedData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNeedData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeedData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNeedData()
	{
		if (!Z_Registration_Info_UScriptStruct_NeedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NeedData.InnerSingleton, Z_Construct_UScriptStruct_FNeedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NeedData.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_Manic_AI_OnAnyNeedThreshold__DelegateSignature_Statics
	{
		struct _Script_Manic_AI_eventOnAnyNeedThreshold_Parms
		{
			FName CrossedNeedName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_CrossedNeedName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Manic_AI_OnAnyNeedThreshold__DelegateSignature_Statics::NewProp_CrossedNeedName = { "CrossedNeedName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Manic_AI_eventOnAnyNeedThreshold_Parms, CrossedNeedName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Manic_AI_OnAnyNeedThreshold__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Manic_AI_OnAnyNeedThreshold__DelegateSignature_Statics::NewProp_CrossedNeedName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Manic_AI_OnAnyNeedThreshold__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Broadcast whenever ANY need crosses its threshold\n" },
		{ "ModuleRelativePath", "Public/DynamicManicNeedsComponent.h" },
		{ "ToolTip", "Broadcast whenever ANY need crosses its threshold" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Manic_AI_OnAnyNeedThreshold__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Manic_AI, nullptr, "OnAnyNeedThreshold__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Manic_AI_OnAnyNeedThreshold__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Manic_AI_OnAnyNeedThreshold__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Manic_AI_OnAnyNeedThreshold__DelegateSignature_Statics::_Script_Manic_AI_eventOnAnyNeedThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Manic_AI_OnAnyNeedThreshold__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Manic_AI_OnAnyNeedThreshold__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Manic_AI_OnAnyNeedThreshold__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Manic_AI_OnAnyNeedThreshold__DelegateSignature_Statics::_Script_Manic_AI_eventOnAnyNeedThreshold_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Manic_AI_OnAnyNeedThreshold__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Manic_AI_OnAnyNeedThreshold__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAnyNeedThreshold_DelegateWrapper(const FMulticastScriptDelegate& OnAnyNeedThreshold, FName CrossedNeedName)
{
	struct _Script_Manic_AI_eventOnAnyNeedThreshold_Parms
	{
		FName CrossedNeedName;
	};
	_Script_Manic_AI_eventOnAnyNeedThreshold_Parms Parms;
	Parms.CrossedNeedName=CrossedNeedName;
	OnAnyNeedThreshold.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Manic_AI_OnAllNeedsUpdated__DelegateSignature_Statics
	{
		struct _Script_Manic_AI_eventOnAllNeedsUpdated_Parms
		{
			TArray<FNeedData> UpdatedNeeds;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdatedNeeds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedNeeds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UpdatedNeeds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Manic_AI_OnAllNeedsUpdated__DelegateSignature_Statics::NewProp_UpdatedNeeds_Inner = { "UpdatedNeeds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNeedData, METADATA_PARAMS(0, nullptr) }; // 4009198430
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Manic_AI_OnAllNeedsUpdated__DelegateSignature_Statics::NewProp_UpdatedNeeds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Manic_AI_OnAllNeedsUpdated__DelegateSignature_Statics::NewProp_UpdatedNeeds = { "UpdatedNeeds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Manic_AI_eventOnAllNeedsUpdated_Parms, UpdatedNeeds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Manic_AI_OnAllNeedsUpdated__DelegateSignature_Statics::NewProp_UpdatedNeeds_MetaData), Z_Construct_UDelegateFunction_Manic_AI_OnAllNeedsUpdated__DelegateSignature_Statics::NewProp_UpdatedNeeds_MetaData) }; // 4009198430
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Manic_AI_OnAllNeedsUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Manic_AI_OnAllNeedsUpdated__DelegateSignature_Statics::NewProp_UpdatedNeeds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Manic_AI_OnAllNeedsUpdated__DelegateSignature_Statics::NewProp_UpdatedNeeds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Manic_AI_OnAllNeedsUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * If you want the entire array of needs each tick, we define\n * a multicast delegate passing TArray<FNeedData>.\n */" },
		{ "ModuleRelativePath", "Public/DynamicManicNeedsComponent.h" },
		{ "ToolTip", "If you want the entire array of needs each tick, we define\na multicast delegate passing TArray<FNeedData>." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Manic_AI_OnAllNeedsUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Manic_AI, nullptr, "OnAllNeedsUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Manic_AI_OnAllNeedsUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Manic_AI_OnAllNeedsUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Manic_AI_OnAllNeedsUpdated__DelegateSignature_Statics::_Script_Manic_AI_eventOnAllNeedsUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Manic_AI_OnAllNeedsUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Manic_AI_OnAllNeedsUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Manic_AI_OnAllNeedsUpdated__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Manic_AI_OnAllNeedsUpdated__DelegateSignature_Statics::_Script_Manic_AI_eventOnAllNeedsUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Manic_AI_OnAllNeedsUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Manic_AI_OnAllNeedsUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAllNeedsUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnAllNeedsUpdated, TArray<FNeedData> const& UpdatedNeeds)
{
	struct _Script_Manic_AI_eventOnAllNeedsUpdated_Parms
	{
		TArray<FNeedData> UpdatedNeeds;
	};
	_Script_Manic_AI_eventOnAllNeedsUpdated_Parms Parms;
	Parms.UpdatedNeeds=UpdatedNeeds;
	OnAllNeedsUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UDynamicManicNeedsComponent::execSetNeedDirectionByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NeedName);
		P_GET_UBOOL(Z_Param_bNewTickUp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetNeedDirectionByName(Z_Param_NeedName,Z_Param_bNewTickUp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicManicNeedsComponent::execSetNeedTickRateByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NeedName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetNeedTickRateByName(Z_Param_NeedName,Z_Param_NewRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicManicNeedsComponent::execSetNeedThresholdByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NeedName);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewThreshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetNeedThresholdByName(Z_Param_NeedName,Z_Param_NewThreshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicManicNeedsComponent::execGetNeedValueByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NeedName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNeedValueByName(Z_Param_NeedName,Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicManicNeedsComponent::execSetNeedValueByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NeedName);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNeedValueByName(Z_Param_NeedName,Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicManicNeedsComponent::execResetNeedByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NeedName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetNeedByName(Z_Param_NeedName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicManicNeedsComponent::execRemoveNeedAtIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveNeedAtIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicManicNeedsComponent::execAddNeed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NeedName);
		P_GET_PROPERTY(FIntProperty,Z_Param_DefaultVal);
		P_GET_PROPERTY(FIntProperty,Z_Param_InThreshold);
		P_GET_UBOOL(Z_Param_bUp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddNeed(Z_Param_NeedName,Z_Param_DefaultVal,Z_Param_InThreshold,Z_Param_bUp,Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicManicNeedsComponent::execTickAllNeeds)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickAllNeeds(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void UDynamicManicNeedsComponent::StaticRegisterNativesUDynamicManicNeedsComponent()
	{
		UClass* Class = UDynamicManicNeedsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNeed", &UDynamicManicNeedsComponent::execAddNeed },
			{ "GetNeedValueByName", &UDynamicManicNeedsComponent::execGetNeedValueByName },
			{ "RemoveNeedAtIndex", &UDynamicManicNeedsComponent::execRemoveNeedAtIndex },
			{ "ResetNeedByName", &UDynamicManicNeedsComponent::execResetNeedByName },
			{ "SetNeedDirectionByName", &UDynamicManicNeedsComponent::execSetNeedDirectionByName },
			{ "SetNeedThresholdByName", &UDynamicManicNeedsComponent::execSetNeedThresholdByName },
			{ "SetNeedTickRateByName", &UDynamicManicNeedsComponent::execSetNeedTickRateByName },
			{ "SetNeedValueByName", &UDynamicManicNeedsComponent::execSetNeedValueByName },
			{ "TickAllNeeds", &UDynamicManicNeedsComponent::execTickAllNeeds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDynamicManicNeedsComponent_AddNeed_Statics
	{
		struct DynamicManicNeedsComponent_eventAddNeed_Parms
		{
			FName NeedName;
			int32 DefaultVal;
			int32 InThreshold;
			bool bUp;
			float Rate;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NeedName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultVal;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InThreshold;
		static void NewProp_bUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUp;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDynamicManicNeedsComponent_AddNeed_Statics::NewProp_NeedName = { "NeedName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicManicNeedsComponent_eventAddNeed_Parms, NeedName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDynamicManicNeedsComponent_AddNeed_Statics::NewProp_DefaultVal = { "DefaultVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicManicNeedsComponent_eventAddNeed_Parms, DefaultVal), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDynamicManicNeedsComponent_AddNeed_Statics::NewProp_InThreshold = { "InThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicManicNeedsComponent_eventAddNeed_Parms, InThreshold), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UDynamicManicNeedsComponent_AddNeed_Statics::NewProp_bUp_SetBit(void* Obj)
	{
		((DynamicManicNeedsComponent_eventAddNeed_Parms*)Obj)->bUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicManicNeedsComponent_AddNeed_Statics::NewProp_bUp = { "bUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicManicNeedsComponent_eventAddNeed_Parms), &Z_Construct_UFunction_UDynamicManicNeedsComponent_AddNeed_Statics::NewProp_bUp_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDynamicManicNeedsComponent_AddNeed_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicManicNeedsComponent_eventAddNeed_Parms, Rate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicManicNeedsComponent_AddNeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicManicNeedsComponent_AddNeed_Statics::NewProp_NeedName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicManicNeedsComponent_AddNeed_Statics::NewProp_DefaultVal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicManicNeedsComponent_AddNeed_Statics::NewProp_InThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicManicNeedsComponent_AddNeed_Statics::NewProp_bUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicManicNeedsComponent_AddNeed_Statics::NewProp_Rate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicManicNeedsComponent_AddNeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manic|Dynamic" },
		{ "Comment", "// Basic array management\n" },
		{ "ModuleRelativePath", "Public/DynamicManicNeedsComponent.h" },
		{ "ToolTip", "Basic array management" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicManicNeedsComponent_AddNeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicManicNeedsComponent, nullptr, "AddNeed", nullptr, nullptr, Z_Construct_UFunction_UDynamicManicNeedsComponent_AddNeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicManicNeedsComponent_AddNeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicManicNeedsComponent_AddNeed_Statics::DynamicManicNeedsComponent_eventAddNeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicManicNeedsComponent_AddNeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicManicNeedsComponent_AddNeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicManicNeedsComponent_AddNeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDynamicManicNeedsComponent_AddNeed_Statics::DynamicManicNeedsComponent_eventAddNeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDynamicManicNeedsComponent_AddNeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicManicNeedsComponent_AddNeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicManicNeedsComponent_GetNeedValueByName_Statics
	{
		struct DynamicManicNeedsComponent_eventGetNeedValueByName_Parms
		{
			FName NeedName;
			int32 OutValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NeedName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDynamicManicNeedsComponent_GetNeedValueByName_Statics::NewProp_NeedName = { "NeedName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicManicNeedsComponent_eventGetNeedValueByName_Parms, NeedName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDynamicManicNeedsComponent_GetNeedValueByName_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicManicNeedsComponent_eventGetNeedValueByName_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UDynamicManicNeedsComponent_GetNeedValueByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DynamicManicNeedsComponent_eventGetNeedValueByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicManicNeedsComponent_GetNeedValueByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicManicNeedsComponent_eventGetNeedValueByName_Parms), &Z_Construct_UFunction_UDynamicManicNeedsComponent_GetNeedValueByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicManicNeedsComponent_GetNeedValueByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicManicNeedsComponent_GetNeedValueByName_Statics::NewProp_NeedName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicManicNeedsComponent_GetNeedValueByName_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicManicNeedsComponent_GetNeedValueByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicManicNeedsComponent_GetNeedValueByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manic|Dynamic" },
		{ "ModuleRelativePath", "Public/DynamicManicNeedsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicManicNeedsComponent_GetNeedValueByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicManicNeedsComponent, nullptr, "GetNeedValueByName", nullptr, nullptr, Z_Construct_UFunction_UDynamicManicNeedsComponent_GetNeedValueByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicManicNeedsComponent_GetNeedValueByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicManicNeedsComponent_GetNeedValueByName_Statics::DynamicManicNeedsComponent_eventGetNeedValueByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicManicNeedsComponent_GetNeedValueByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicManicNeedsComponent_GetNeedValueByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicManicNeedsComponent_GetNeedValueByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDynamicManicNeedsComponent_GetNeedValueByName_Statics::DynamicManicNeedsComponent_eventGetNeedValueByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDynamicManicNeedsComponent_GetNeedValueByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicManicNeedsComponent_GetNeedValueByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicManicNeedsComponent_RemoveNeedAtIndex_Statics
	{
		struct DynamicManicNeedsComponent_eventRemoveNeedAtIndex_Parms
		{
			int32 Index;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDynamicManicNeedsComponent_RemoveNeedAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicManicNeedsComponent_eventRemoveNeedAtIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicManicNeedsComponent_RemoveNeedAtIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicManicNeedsComponent_RemoveNeedAtIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicManicNeedsComponent_RemoveNeedAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manic|Dynamic" },
		{ "ModuleRelativePath", "Public/DynamicManicNeedsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicManicNeedsComponent_RemoveNeedAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicManicNeedsComponent, nullptr, "RemoveNeedAtIndex", nullptr, nullptr, Z_Construct_UFunction_UDynamicManicNeedsComponent_RemoveNeedAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicManicNeedsComponent_RemoveNeedAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicManicNeedsComponent_RemoveNeedAtIndex_Statics::DynamicManicNeedsComponent_eventRemoveNeedAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicManicNeedsComponent_RemoveNeedAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicManicNeedsComponent_RemoveNeedAtIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicManicNeedsComponent_RemoveNeedAtIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDynamicManicNeedsComponent_RemoveNeedAtIndex_Statics::DynamicManicNeedsComponent_eventRemoveNeedAtIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDynamicManicNeedsComponent_RemoveNeedAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicManicNeedsComponent_RemoveNeedAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicManicNeedsComponent_ResetNeedByName_Statics
	{
		struct DynamicManicNeedsComponent_eventResetNeedByName_Parms
		{
			FName NeedName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NeedName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDynamicManicNeedsComponent_ResetNeedByName_Statics::NewProp_NeedName = { "NeedName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicManicNeedsComponent_eventResetNeedByName_Parms, NeedName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicManicNeedsComponent_ResetNeedByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicManicNeedsComponent_ResetNeedByName_Statics::NewProp_NeedName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicManicNeedsComponent_ResetNeedByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manic|Dynamic" },
		{ "Comment", "// Reset / Set / Get\n" },
		{ "ModuleRelativePath", "Public/DynamicManicNeedsComponent.h" },
		{ "ToolTip", "Reset / Set / Get" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicManicNeedsComponent_ResetNeedByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicManicNeedsComponent, nullptr, "ResetNeedByName", nullptr, nullptr, Z_Construct_UFunction_UDynamicManicNeedsComponent_ResetNeedByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicManicNeedsComponent_ResetNeedByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicManicNeedsComponent_ResetNeedByName_Statics::DynamicManicNeedsComponent_eventResetNeedByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicManicNeedsComponent_ResetNeedByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicManicNeedsComponent_ResetNeedByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicManicNeedsComponent_ResetNeedByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDynamicManicNeedsComponent_ResetNeedByName_Statics::DynamicManicNeedsComponent_eventResetNeedByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDynamicManicNeedsComponent_ResetNeedByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicManicNeedsComponent_ResetNeedByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedDirectionByName_Statics
	{
		struct DynamicManicNeedsComponent_eventSetNeedDirectionByName_Parms
		{
			FName NeedName;
			bool bNewTickUp;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NeedName;
		static void NewProp_bNewTickUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewTickUp;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedDirectionByName_Statics::NewProp_NeedName = { "NeedName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicManicNeedsComponent_eventSetNeedDirectionByName_Parms, NeedName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedDirectionByName_Statics::NewProp_bNewTickUp_SetBit(void* Obj)
	{
		((DynamicManicNeedsComponent_eventSetNeedDirectionByName_Parms*)Obj)->bNewTickUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedDirectionByName_Statics::NewProp_bNewTickUp = { "bNewTickUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicManicNeedsComponent_eventSetNeedDirectionByName_Parms), &Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedDirectionByName_Statics::NewProp_bNewTickUp_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedDirectionByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DynamicManicNeedsComponent_eventSetNeedDirectionByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedDirectionByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicManicNeedsComponent_eventSetNeedDirectionByName_Parms), &Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedDirectionByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedDirectionByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedDirectionByName_Statics::NewProp_NeedName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedDirectionByName_Statics::NewProp_bNewTickUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedDirectionByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedDirectionByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manic|Dynamic" },
		{ "ModuleRelativePath", "Public/DynamicManicNeedsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedDirectionByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicManicNeedsComponent, nullptr, "SetNeedDirectionByName", nullptr, nullptr, Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedDirectionByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedDirectionByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedDirectionByName_Statics::DynamicManicNeedsComponent_eventSetNeedDirectionByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedDirectionByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedDirectionByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedDirectionByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedDirectionByName_Statics::DynamicManicNeedsComponent_eventSetNeedDirectionByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedDirectionByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedDirectionByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedThresholdByName_Statics
	{
		struct DynamicManicNeedsComponent_eventSetNeedThresholdByName_Parms
		{
			FName NeedName;
			int32 NewThreshold;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NeedName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewThreshold;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedThresholdByName_Statics::NewProp_NeedName = { "NeedName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicManicNeedsComponent_eventSetNeedThresholdByName_Parms, NeedName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedThresholdByName_Statics::NewProp_NewThreshold = { "NewThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicManicNeedsComponent_eventSetNeedThresholdByName_Parms, NewThreshold), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedThresholdByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DynamicManicNeedsComponent_eventSetNeedThresholdByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedThresholdByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicManicNeedsComponent_eventSetNeedThresholdByName_Parms), &Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedThresholdByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedThresholdByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedThresholdByName_Statics::NewProp_NeedName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedThresholdByName_Statics::NewProp_NewThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedThresholdByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedThresholdByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manic|Dynamic" },
		{ "Comment", "// Change threshold / rate / direction at runtime\n" },
		{ "ModuleRelativePath", "Public/DynamicManicNeedsComponent.h" },
		{ "ToolTip", "Change threshold / rate / direction at runtime" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedThresholdByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicManicNeedsComponent, nullptr, "SetNeedThresholdByName", nullptr, nullptr, Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedThresholdByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedThresholdByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedThresholdByName_Statics::DynamicManicNeedsComponent_eventSetNeedThresholdByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedThresholdByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedThresholdByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedThresholdByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedThresholdByName_Statics::DynamicManicNeedsComponent_eventSetNeedThresholdByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedThresholdByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedThresholdByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedTickRateByName_Statics
	{
		struct DynamicManicNeedsComponent_eventSetNeedTickRateByName_Parms
		{
			FName NeedName;
			float NewRate;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NeedName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedTickRateByName_Statics::NewProp_NeedName = { "NeedName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicManicNeedsComponent_eventSetNeedTickRateByName_Parms, NeedName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedTickRateByName_Statics::NewProp_NewRate = { "NewRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicManicNeedsComponent_eventSetNeedTickRateByName_Parms, NewRate), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedTickRateByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DynamicManicNeedsComponent_eventSetNeedTickRateByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedTickRateByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicManicNeedsComponent_eventSetNeedTickRateByName_Parms), &Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedTickRateByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedTickRateByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedTickRateByName_Statics::NewProp_NeedName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedTickRateByName_Statics::NewProp_NewRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedTickRateByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedTickRateByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manic|Dynamic" },
		{ "ModuleRelativePath", "Public/DynamicManicNeedsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedTickRateByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicManicNeedsComponent, nullptr, "SetNeedTickRateByName", nullptr, nullptr, Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedTickRateByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedTickRateByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedTickRateByName_Statics::DynamicManicNeedsComponent_eventSetNeedTickRateByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedTickRateByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedTickRateByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedTickRateByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedTickRateByName_Statics::DynamicManicNeedsComponent_eventSetNeedTickRateByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedTickRateByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedTickRateByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedValueByName_Statics
	{
		struct DynamicManicNeedsComponent_eventSetNeedValueByName_Parms
		{
			FName NeedName;
			int32 NewValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NeedName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedValueByName_Statics::NewProp_NeedName = { "NeedName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicManicNeedsComponent_eventSetNeedValueByName_Parms, NeedName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedValueByName_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicManicNeedsComponent_eventSetNeedValueByName_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedValueByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedValueByName_Statics::NewProp_NeedName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedValueByName_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedValueByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manic|Dynamic" },
		{ "ModuleRelativePath", "Public/DynamicManicNeedsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedValueByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicManicNeedsComponent, nullptr, "SetNeedValueByName", nullptr, nullptr, Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedValueByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedValueByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedValueByName_Statics::DynamicManicNeedsComponent_eventSetNeedValueByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedValueByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedValueByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedValueByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedValueByName_Statics::DynamicManicNeedsComponent_eventSetNeedValueByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedValueByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedValueByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicManicNeedsComponent_TickAllNeeds_Statics
	{
		struct DynamicManicNeedsComponent_eventTickAllNeeds_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDynamicManicNeedsComponent_TickAllNeeds_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicManicNeedsComponent_eventTickAllNeeds_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicManicNeedsComponent_TickAllNeeds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicManicNeedsComponent_TickAllNeeds_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicManicNeedsComponent_TickAllNeeds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manic|Dynamic" },
		{ "Comment", "/**\n     * Called each frame from Event Tick.  \n     * e.g.:  \n     *   Event Tick (DeltaTime) -> TickAllNeeds(DeltaTime)\n     */" },
		{ "ModuleRelativePath", "Public/DynamicManicNeedsComponent.h" },
		{ "ToolTip", "Called each frame from Event Tick.\ne.g.:\n  Event Tick (DeltaTime) -> TickAllNeeds(DeltaTime)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicManicNeedsComponent_TickAllNeeds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicManicNeedsComponent, nullptr, "TickAllNeeds", nullptr, nullptr, Z_Construct_UFunction_UDynamicManicNeedsComponent_TickAllNeeds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicManicNeedsComponent_TickAllNeeds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicManicNeedsComponent_TickAllNeeds_Statics::DynamicManicNeedsComponent_eventTickAllNeeds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicManicNeedsComponent_TickAllNeeds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicManicNeedsComponent_TickAllNeeds_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicManicNeedsComponent_TickAllNeeds_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDynamicManicNeedsComponent_TickAllNeeds_Statics::DynamicManicNeedsComponent_eventTickAllNeeds_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDynamicManicNeedsComponent_TickAllNeeds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicManicNeedsComponent_TickAllNeeds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicManicNeedsComponent);
	UClass* Z_Construct_UClass_UDynamicManicNeedsComponent_NoRegister()
	{
		return UDynamicManicNeedsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicManicNeedsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Needs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Needs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Needs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAnyNeedThresholdCrossed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnyNeedThresholdCrossed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAllNeedsUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAllNeedsUpdated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Manic_AI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDynamicManicNeedsComponent_AddNeed, "AddNeed" }, // 4125320540
		{ &Z_Construct_UFunction_UDynamicManicNeedsComponent_GetNeedValueByName, "GetNeedValueByName" }, // 4191028135
		{ &Z_Construct_UFunction_UDynamicManicNeedsComponent_RemoveNeedAtIndex, "RemoveNeedAtIndex" }, // 3216233373
		{ &Z_Construct_UFunction_UDynamicManicNeedsComponent_ResetNeedByName, "ResetNeedByName" }, // 1497916239
		{ &Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedDirectionByName, "SetNeedDirectionByName" }, // 178832238
		{ &Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedThresholdByName, "SetNeedThresholdByName" }, // 3696415809
		{ &Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedTickRateByName, "SetNeedTickRateByName" }, // 1952770524
		{ &Z_Construct_UFunction_UDynamicManicNeedsComponent_SetNeedValueByName, "SetNeedValueByName" }, // 498148673
		{ &Z_Construct_UFunction_UDynamicManicNeedsComponent_TickAllNeeds, "TickAllNeeds" }, // 24795822
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * A flexible actor component that manages an array of FNeedData.\n *\n * - Call TickAllNeeds(DeltaTime) each frame (e.g. from Event Tick in your Blueprint).\n * - Add or remove needs at runtime (AddNeed, RemoveNeedAtIndex).\n * - Reset or set the current values by name.\n * - Access or change thresholds, rates, etc. at runtime.\n * - Broadcasts OnAnyNeedThresholdCrossed each time a threshold is hit.\n * - **Also** broadcasts OnAllNeedsUpdated every frame, passing the entire array\n *   so you can easily display current values in a HUD.\n */" },
		{ "IncludePath", "DynamicManicNeedsComponent.h" },
		{ "ModuleRelativePath", "Public/DynamicManicNeedsComponent.h" },
		{ "ToolTip", "A flexible actor component that manages an array of FNeedData.\n\n- Call TickAllNeeds(DeltaTime) each frame (e.g. from Event Tick in your Blueprint).\n- Add or remove needs at runtime (AddNeed, RemoveNeedAtIndex).\n- Reset or set the current values by name.\n- Access or change thresholds, rates, etc. at runtime.\n- Broadcasts OnAnyNeedThresholdCrossed each time a threshold is hit.\n- **Also** broadcasts OnAllNeedsUpdated every frame, passing the entire array\n  so you can easily display current values in a HUD." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::NewProp_Needs_Inner = { "Needs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNeedData, METADATA_PARAMS(0, nullptr) }; // 4009198430
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::NewProp_Needs_MetaData[] = {
		{ "Category", "Manic|DynamicNeeds" },
		{ "Comment", "// 1) The array of needs\n" },
		{ "ModuleRelativePath", "Public/DynamicManicNeedsComponent.h" },
		{ "ToolTip", "1) The array of needs" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::NewProp_Needs = { "Needs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicManicNeedsComponent, Needs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::NewProp_Needs_MetaData), Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::NewProp_Needs_MetaData) }; // 4009198430
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::NewProp_OnAnyNeedThresholdCrossed_MetaData[] = {
		{ "Category", "Manic|Events" },
		{ "Comment", "// 2) Broadcast when ANY need crosses threshold\n" },
		{ "ModuleRelativePath", "Public/DynamicManicNeedsComponent.h" },
		{ "ToolTip", "2) Broadcast when ANY need crosses threshold" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::NewProp_OnAnyNeedThresholdCrossed = { "OnAnyNeedThresholdCrossed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicManicNeedsComponent, OnAnyNeedThresholdCrossed), Z_Construct_UDelegateFunction_Manic_AI_OnAnyNeedThreshold__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::NewProp_OnAnyNeedThresholdCrossed_MetaData), Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::NewProp_OnAnyNeedThresholdCrossed_MetaData) }; // 2810204960
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::NewProp_OnAllNeedsUpdated_MetaData[] = {
		{ "Category", "Manic|Events" },
		{ "Comment", "// 3) Broadcast the entire array of needs every time you call TickAllNeeds\n" },
		{ "ModuleRelativePath", "Public/DynamicManicNeedsComponent.h" },
		{ "ToolTip", "3) Broadcast the entire array of needs every time you call TickAllNeeds" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::NewProp_OnAllNeedsUpdated = { "OnAllNeedsUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicManicNeedsComponent, OnAllNeedsUpdated), Z_Construct_UDelegateFunction_Manic_AI_OnAllNeedsUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::NewProp_OnAllNeedsUpdated_MetaData), Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::NewProp_OnAllNeedsUpdated_MetaData) }; // 1668954664
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::NewProp_Needs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::NewProp_Needs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::NewProp_OnAnyNeedThresholdCrossed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::NewProp_OnAllNeedsUpdated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicManicNeedsComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::ClassParams = {
		&UDynamicManicNeedsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDynamicManicNeedsComponent()
	{
		if (!Z_Registration_Info_UClass_UDynamicManicNeedsComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicManicNeedsComponent.OuterSingleton, Z_Construct_UClass_UDynamicManicNeedsComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDynamicManicNeedsComponent.OuterSingleton;
	}
	template<> MANIC_AI_API UClass* StaticClass<UDynamicManicNeedsComponent>()
	{
		return UDynamicManicNeedsComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicManicNeedsComponent);
	UDynamicManicNeedsComponent::~UDynamicManicNeedsComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h_Statics::ScriptStructInfo[] = {
		{ FNeedData::StaticStruct, Z_Construct_UScriptStruct_FNeedData_Statics::NewStructOps, TEXT("NeedData"), &Z_Registration_Info_UScriptStruct_NeedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNeedData), 4009198430U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicManicNeedsComponent, UDynamicManicNeedsComponent::StaticClass, TEXT("UDynamicManicNeedsComponent"), &Z_Registration_Info_UClass_UDynamicManicNeedsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicManicNeedsComponent), 2197858376U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h_1319026874(TEXT("/Script/Manic_AI"),
		Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_DynamicManicNeedsComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
