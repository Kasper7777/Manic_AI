// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manic_AI/Public/ManicClockPluginBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManicClockPluginBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MANIC_AI_API UClass* Z_Construct_UClass_UManicClockPluginBPLibrary();
	MANIC_AI_API UClass* Z_Construct_UClass_UManicClockPluginBPLibrary_NoRegister();
	MANIC_AI_API UScriptStruct* Z_Construct_UScriptStruct_FManicGameTime();
	UPackage* Z_Construct_UPackage__Script_Manic_AI();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManicGameTime;
class UScriptStruct* FManicGameTime::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManicGameTime.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManicGameTime.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManicGameTime, (UObject*)Z_Construct_UPackage__Script_Manic_AI(), TEXT("ManicGameTime"));
	}
	return Z_Registration_Info_UScriptStruct_ManicGameTime.OuterSingleton;
}
template<> MANIC_AI_API UScriptStruct* StaticStruct<FManicGameTime>()
{
	return FManicGameTime::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManicGameTime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Day_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Day;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hour_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Hour;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minute_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Minute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Second_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Second;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManicGameTime_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Holds Day, Hour, Minute, Second for the in-game clock */" },
		{ "ModuleRelativePath", "Public/ManicClockPluginBPLibrary.h" },
		{ "ToolTip", "Holds Day, Hour, Minute, Second for the in-game clock" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManicGameTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManicGameTime>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManicGameTime_Statics::NewProp_Day_MetaData[] = {
		{ "Category", "ManicClock" },
		{ "ModuleRelativePath", "Public/ManicClockPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManicGameTime_Statics::NewProp_Day = { "Day", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManicGameTime, Day), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManicGameTime_Statics::NewProp_Day_MetaData), Z_Construct_UScriptStruct_FManicGameTime_Statics::NewProp_Day_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManicGameTime_Statics::NewProp_Hour_MetaData[] = {
		{ "Category", "ManicClock" },
		{ "ModuleRelativePath", "Public/ManicClockPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManicGameTime_Statics::NewProp_Hour = { "Hour", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManicGameTime, Hour), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManicGameTime_Statics::NewProp_Hour_MetaData), Z_Construct_UScriptStruct_FManicGameTime_Statics::NewProp_Hour_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManicGameTime_Statics::NewProp_Minute_MetaData[] = {
		{ "Category", "ManicClock" },
		{ "ModuleRelativePath", "Public/ManicClockPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManicGameTime_Statics::NewProp_Minute = { "Minute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManicGameTime, Minute), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManicGameTime_Statics::NewProp_Minute_MetaData), Z_Construct_UScriptStruct_FManicGameTime_Statics::NewProp_Minute_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManicGameTime_Statics::NewProp_Second_MetaData[] = {
		{ "Category", "ManicClock" },
		{ "ModuleRelativePath", "Public/ManicClockPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManicGameTime_Statics::NewProp_Second = { "Second", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManicGameTime, Second), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManicGameTime_Statics::NewProp_Second_MetaData), Z_Construct_UScriptStruct_FManicGameTime_Statics::NewProp_Second_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManicGameTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManicGameTime_Statics::NewProp_Day,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManicGameTime_Statics::NewProp_Hour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManicGameTime_Statics::NewProp_Minute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManicGameTime_Statics::NewProp_Second,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManicGameTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manic_AI,
		nullptr,
		&NewStructOps,
		"ManicGameTime",
		Z_Construct_UScriptStruct_FManicGameTime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManicGameTime_Statics::PropPointers),
		sizeof(FManicGameTime),
		alignof(FManicGameTime),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManicGameTime_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FManicGameTime_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManicGameTime_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FManicGameTime()
	{
		if (!Z_Registration_Info_UScriptStruct_ManicGameTime.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManicGameTime.InnerSingleton, Z_Construct_UScriptStruct_FManicGameTime_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManicGameTime.InnerSingleton;
	}
	DEFINE_FUNCTION(UManicClockPluginBPLibrary::execTickManicClockAndGet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpeedMultiplier);
		P_GET_UBOOL(Z_Param_bShowDay);
		P_GET_UBOOL(Z_Param_bShowHour);
		P_GET_UBOOL(Z_Param_bShowMinute);
		P_GET_UBOOL(Z_Param_bShowSecond);
		P_GET_STRUCT_REF(FManicGameTime,Z_Param_Out_OutClockData);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutClockString);
		P_FINISH;
		P_NATIVE_BEGIN;
		UManicClockPluginBPLibrary::TickManicClockAndGet(Z_Param_WorldContextObject,Z_Param_DeltaTime,Z_Param_SpeedMultiplier,Z_Param_bShowDay,Z_Param_bShowHour,Z_Param_bShowMinute,Z_Param_bShowSecond,Z_Param_Out_OutClockData,Z_Param_Out_OutClockString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManicClockPluginBPLibrary::execSetInGameClockTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewDay);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewHour);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewMinute);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewSecond);
		P_FINISH;
		P_NATIVE_BEGIN;
		UManicClockPluginBPLibrary::SetInGameClockTime(Z_Param_NewDay,Z_Param_NewHour,Z_Param_NewMinute,Z_Param_NewSecond);
		P_NATIVE_END;
	}
	void UManicClockPluginBPLibrary::StaticRegisterNativesUManicClockPluginBPLibrary()
	{
		UClass* Class = UManicClockPluginBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetInGameClockTime", &UManicClockPluginBPLibrary::execSetInGameClockTime },
			{ "TickManicClockAndGet", &UManicClockPluginBPLibrary::execTickManicClockAndGet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManicClockPluginBPLibrary_SetInGameClockTime_Statics
	{
		struct ManicClockPluginBPLibrary_eventSetInGameClockTime_Parms
		{
			int32 NewDay;
			int32 NewHour;
			int32 NewMinute;
			int32 NewSecond;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewDay;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewHour;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewMinute;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewSecond;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManicClockPluginBPLibrary_SetInGameClockTime_Statics::NewProp_NewDay = { "NewDay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicClockPluginBPLibrary_eventSetInGameClockTime_Parms, NewDay), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManicClockPluginBPLibrary_SetInGameClockTime_Statics::NewProp_NewHour = { "NewHour", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicClockPluginBPLibrary_eventSetInGameClockTime_Parms, NewHour), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManicClockPluginBPLibrary_SetInGameClockTime_Statics::NewProp_NewMinute = { "NewMinute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicClockPluginBPLibrary_eventSetInGameClockTime_Parms, NewMinute), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManicClockPluginBPLibrary_SetInGameClockTime_Statics::NewProp_NewSecond = { "NewSecond", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicClockPluginBPLibrary_eventSetInGameClockTime_Parms, NewSecond), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManicClockPluginBPLibrary_SetInGameClockTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicClockPluginBPLibrary_SetInGameClockTime_Statics::NewProp_NewDay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicClockPluginBPLibrary_SetInGameClockTime_Statics::NewProp_NewHour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicClockPluginBPLibrary_SetInGameClockTime_Statics::NewProp_NewMinute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicClockPluginBPLibrary_SetInGameClockTime_Statics::NewProp_NewSecond,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManicClockPluginBPLibrary_SetInGameClockTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "ManicClock" },
		{ "Comment", "/**\n     * Sets the internal clock to the specified day/hour/minute/second.\n     * (Useful to jump forward/backward in time or reset the clock.)\n     */" },
		{ "ModuleRelativePath", "Public/ManicClockPluginBPLibrary.h" },
		{ "ToolTip", "Sets the internal clock to the specified day/hour/minute/second.\n(Useful to jump forward/backward in time or reset the clock.)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManicClockPluginBPLibrary_SetInGameClockTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManicClockPluginBPLibrary, nullptr, "SetInGameClockTime", nullptr, nullptr, Z_Construct_UFunction_UManicClockPluginBPLibrary_SetInGameClockTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManicClockPluginBPLibrary_SetInGameClockTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManicClockPluginBPLibrary_SetInGameClockTime_Statics::ManicClockPluginBPLibrary_eventSetInGameClockTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManicClockPluginBPLibrary_SetInGameClockTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManicClockPluginBPLibrary_SetInGameClockTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManicClockPluginBPLibrary_SetInGameClockTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UManicClockPluginBPLibrary_SetInGameClockTime_Statics::ManicClockPluginBPLibrary_eventSetInGameClockTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UManicClockPluginBPLibrary_SetInGameClockTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManicClockPluginBPLibrary_SetInGameClockTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics
	{
		struct ManicClockPluginBPLibrary_eventTickManicClockAndGet_Parms
		{
			UObject* WorldContextObject;
			float DeltaTime;
			float SpeedMultiplier;
			bool bShowDay;
			bool bShowHour;
			bool bShowMinute;
			bool bShowSecond;
			FManicGameTime OutClockData;
			FString OutClockString;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedMultiplier;
		static void NewProp_bShowDay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDay;
		static void NewProp_bShowHour_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowHour;
		static void NewProp_bShowMinute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowMinute;
		static void NewProp_bShowSecond_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSecond;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutClockData;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutClockString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicClockPluginBPLibrary_eventTickManicClockAndGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicClockPluginBPLibrary_eventTickManicClockAndGet_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::NewProp_SpeedMultiplier = { "SpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicClockPluginBPLibrary_eventTickManicClockAndGet_Parms, SpeedMultiplier), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::NewProp_bShowDay_SetBit(void* Obj)
	{
		((ManicClockPluginBPLibrary_eventTickManicClockAndGet_Parms*)Obj)->bShowDay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::NewProp_bShowDay = { "bShowDay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManicClockPluginBPLibrary_eventTickManicClockAndGet_Parms), &Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::NewProp_bShowDay_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::NewProp_bShowHour_SetBit(void* Obj)
	{
		((ManicClockPluginBPLibrary_eventTickManicClockAndGet_Parms*)Obj)->bShowHour = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::NewProp_bShowHour = { "bShowHour", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManicClockPluginBPLibrary_eventTickManicClockAndGet_Parms), &Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::NewProp_bShowHour_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::NewProp_bShowMinute_SetBit(void* Obj)
	{
		((ManicClockPluginBPLibrary_eventTickManicClockAndGet_Parms*)Obj)->bShowMinute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::NewProp_bShowMinute = { "bShowMinute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManicClockPluginBPLibrary_eventTickManicClockAndGet_Parms), &Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::NewProp_bShowMinute_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::NewProp_bShowSecond_SetBit(void* Obj)
	{
		((ManicClockPluginBPLibrary_eventTickManicClockAndGet_Parms*)Obj)->bShowSecond = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::NewProp_bShowSecond = { "bShowSecond", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManicClockPluginBPLibrary_eventTickManicClockAndGet_Parms), &Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::NewProp_bShowSecond_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::NewProp_OutClockData = { "OutClockData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicClockPluginBPLibrary_eventTickManicClockAndGet_Parms, OutClockData), Z_Construct_UScriptStruct_FManicGameTime, METADATA_PARAMS(0, nullptr) }; // 4067634828
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::NewProp_OutClockString = { "OutClockString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicClockPluginBPLibrary_eventTickManicClockAndGet_Parms, OutClockString), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::NewProp_SpeedMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::NewProp_bShowDay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::NewProp_bShowHour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::NewProp_bShowMinute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::NewProp_bShowSecond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::NewProp_OutClockData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::NewProp_OutClockString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::Function_MetaDataParams[] = {
		{ "Category", "ManicClock" },
		{ "Comment", "/**\n     * Ticks (advances) the clock by (DeltaTime * SpeedMultiplier), then\n     * returns the current day/hour/minute/second and a single string.\n     *\n     * Call this every frame (or on a timer) to keep the clock advancing.\n     * You can toggle whether to include Day, Hour, Minute, and/or Second in the returned string.\n     *\n     * @param WorldContextObject   Optional world context (only needed if you want world-based logic).\n     * @param DeltaTime            Typically the engine\xe2\x80\x99s frame delta time.\n     * @param SpeedMultiplier      How fast time progresses. 1.0 = normal, 2.0 = double speed, etc.\n     * @param bShowDay            If true, prepend \"Day X,\" to the string.\n     * @param bShowHour           If false, skip hours in the string.\n     * @param bShowMinute         If false, skip minutes in the string.\n     * @param bShowSecond         If false, skip seconds in the string.\n     * @param OutClockData        The resulting day/hour/min/sec after ticking.\n     * @param OutClockString      A final formatted string (e.g. \"Day 2, 12:06:45\").\n     */" },
		{ "ModuleRelativePath", "Public/ManicClockPluginBPLibrary.h" },
		{ "ToolTip", "Ticks (advances) the clock by (DeltaTime * SpeedMultiplier), then\nreturns the current day/hour/minute/second and a single string.\n\nCall this every frame (or on a timer) to keep the clock advancing.\nYou can toggle whether to include Day, Hour, Minute, and/or Second in the returned string.\n\n@param WorldContextObject   Optional world context (only needed if you want world-based logic).\n@param DeltaTime            Typically the engine\xe2\x80\x99s frame delta time.\n@param SpeedMultiplier      How fast time progresses. 1.0 = normal, 2.0 = double speed, etc.\n@param bShowDay            If true, prepend \"Day X,\" to the string.\n@param bShowHour           If false, skip hours in the string.\n@param bShowMinute         If false, skip minutes in the string.\n@param bShowSecond         If false, skip seconds in the string.\n@param OutClockData        The resulting day/hour/min/sec after ticking.\n@param OutClockString      A final formatted string (e.g. \"Day 2, 12:06:45\")." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManicClockPluginBPLibrary, nullptr, "TickManicClockAndGet", nullptr, nullptr, Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::ManicClockPluginBPLibrary_eventTickManicClockAndGet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::ManicClockPluginBPLibrary_eventTickManicClockAndGet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManicClockPluginBPLibrary);
	UClass* Z_Construct_UClass_UManicClockPluginBPLibrary_NoRegister()
	{
		return UManicClockPluginBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UManicClockPluginBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManicClockPluginBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Manic_AI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManicClockPluginBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UManicClockPluginBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManicClockPluginBPLibrary_SetInGameClockTime, "SetInGameClockTime" }, // 1572309215
		{ &Z_Construct_UFunction_UManicClockPluginBPLibrary_TickManicClockAndGet, "TickManicClockAndGet" }, // 472279032
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManicClockPluginBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicClockPluginBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint function library for a manually-ticked clock.\n * Part of the Manic_AI plugin, so we use MANIC_AI_API.\n */" },
		{ "IncludePath", "ManicClockPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/ManicClockPluginBPLibrary.h" },
		{ "ToolTip", "Blueprint function library for a manually-ticked clock.\nPart of the Manic_AI plugin, so we use MANIC_AI_API." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManicClockPluginBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManicClockPluginBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManicClockPluginBPLibrary_Statics::ClassParams = {
		&UManicClockPluginBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicClockPluginBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UManicClockPluginBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UManicClockPluginBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UManicClockPluginBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManicClockPluginBPLibrary.OuterSingleton, Z_Construct_UClass_UManicClockPluginBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManicClockPluginBPLibrary.OuterSingleton;
	}
	template<> MANIC_AI_API UClass* StaticClass<UManicClockPluginBPLibrary>()
	{
		return UManicClockPluginBPLibrary::StaticClass();
	}
	UManicClockPluginBPLibrary::UManicClockPluginBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManicClockPluginBPLibrary);
	UManicClockPluginBPLibrary::~UManicClockPluginBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicClockPluginBPLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicClockPluginBPLibrary_h_Statics::ScriptStructInfo[] = {
		{ FManicGameTime::StaticStruct, Z_Construct_UScriptStruct_FManicGameTime_Statics::NewStructOps, TEXT("ManicGameTime"), &Z_Registration_Info_UScriptStruct_ManicGameTime, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManicGameTime), 4067634828U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicClockPluginBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManicClockPluginBPLibrary, UManicClockPluginBPLibrary::StaticClass, TEXT("UManicClockPluginBPLibrary"), &Z_Registration_Info_UClass_UManicClockPluginBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManicClockPluginBPLibrary), 1416796553U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicClockPluginBPLibrary_h_1880829569(TEXT("/Script/Manic_AI"),
		Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicClockPluginBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicClockPluginBPLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicClockPluginBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicClockPluginBPLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
