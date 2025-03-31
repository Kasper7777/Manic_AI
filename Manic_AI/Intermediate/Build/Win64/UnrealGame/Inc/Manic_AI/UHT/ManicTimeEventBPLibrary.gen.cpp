// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manic_AI/Public/ManicTimeEventBPLibrary.h"
#include "Manic_AI/Public/ManicClockPluginBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManicTimeEventBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MANIC_AI_API UClass* Z_Construct_UClass_UManicTimeEventBPLibrary();
	MANIC_AI_API UClass* Z_Construct_UClass_UManicTimeEventBPLibrary_NoRegister();
	MANIC_AI_API UEnum* Z_Construct_UEnum_Manic_AI_EManicTimeEventResult();
	MANIC_AI_API UScriptStruct* Z_Construct_UScriptStruct_FManicGameTime();
	UPackage* Z_Construct_UPackage__Script_Manic_AI();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManicTimeEventResult;
	static UEnum* EManicTimeEventResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EManicTimeEventResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EManicTimeEventResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Manic_AI_EManicTimeEventResult, (UObject*)Z_Construct_UPackage__Script_Manic_AI(), TEXT("EManicTimeEventResult"));
		}
		return Z_Registration_Info_UEnum_EManicTimeEventResult.OuterSingleton;
	}
	template<> MANIC_AI_API UEnum* StaticEnum<EManicTimeEventResult>()
	{
		return EManicTimeEventResult_StaticEnum();
	}
	struct Z_Construct_UEnum_Manic_AI_EManicTimeEventResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Manic_AI_EManicTimeEventResult_Statics::Enumerators[] = {
		{ "EManicTimeEventResult::NotReached", (int64)EManicTimeEventResult::NotReached },
		{ "EManicTimeEventResult::Reached", (int64)EManicTimeEventResult::Reached },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Manic_AI_EManicTimeEventResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Enum used to expand execution pins in Blueprint: \"Not Reached\" and \"Reached\".\n */" },
		{ "ModuleRelativePath", "Public/ManicTimeEventBPLibrary.h" },
		{ "NotReached.DisplayName", "Not Reached" },
		{ "NotReached.Name", "EManicTimeEventResult::NotReached" },
		{ "Reached.DisplayName", "Reached" },
		{ "Reached.Name", "EManicTimeEventResult::Reached" },
		{ "ToolTip", "Enum used to expand execution pins in Blueprint: \"Not Reached\" and \"Reached\"." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Manic_AI_EManicTimeEventResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Manic_AI,
		nullptr,
		"EManicTimeEventResult",
		"EManicTimeEventResult",
		Z_Construct_UEnum_Manic_AI_EManicTimeEventResult_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Manic_AI_EManicTimeEventResult_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Manic_AI_EManicTimeEventResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Manic_AI_EManicTimeEventResult_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Manic_AI_EManicTimeEventResult()
	{
		if (!Z_Registration_Info_UEnum_EManicTimeEventResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManicTimeEventResult.InnerSingleton, Z_Construct_UEnum_Manic_AI_EManicTimeEventResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EManicTimeEventResult.InnerSingleton;
	}
	DEFINE_FUNCTION(UManicTimeEventBPLibrary::execManicTimeEvent)
	{
		P_GET_STRUCT_REF(FManicGameTime,Z_Param_Out_ClockData);
		P_GET_STRUCT_REF(FManicGameTime,Z_Param_Out_TargetTime);
		P_GET_UBOOL(Z_Param_bEveryDay);
		P_GET_UBOOL(Z_Param_bOnlyOnce);
		P_GET_UBOOL_REF(Z_Param_Out_bHasFired);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EManicTimeEventResult*)Z_Param__Result=UManicTimeEventBPLibrary::ManicTimeEvent(Z_Param_Out_ClockData,Z_Param_Out_TargetTime,Z_Param_bEveryDay,Z_Param_bOnlyOnce,Z_Param_Out_bHasFired);
		P_NATIVE_END;
	}
	void UManicTimeEventBPLibrary::StaticRegisterNativesUManicTimeEventBPLibrary()
	{
		UClass* Class = UManicTimeEventBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ManicTimeEvent", &UManicTimeEventBPLibrary::execManicTimeEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics
	{
		struct ManicTimeEventBPLibrary_eventManicTimeEvent_Parms
		{
			FManicGameTime ClockData;
			FManicGameTime TargetTime;
			bool bEveryDay;
			bool bOnlyOnce;
			bool bHasFired;
			EManicTimeEventResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClockData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClockData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTime;
		static void NewProp_bEveryDay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEveryDay;
		static void NewProp_bOnlyOnce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyOnce;
		static void NewProp_bHasFired_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasFired;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::NewProp_ClockData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::NewProp_ClockData = { "ClockData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicTimeEventBPLibrary_eventManicTimeEvent_Parms, ClockData), Z_Construct_UScriptStruct_FManicGameTime, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::NewProp_ClockData_MetaData), Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::NewProp_ClockData_MetaData) }; // 4067634828
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::NewProp_TargetTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::NewProp_TargetTime = { "TargetTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicTimeEventBPLibrary_eventManicTimeEvent_Parms, TargetTime), Z_Construct_UScriptStruct_FManicGameTime, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::NewProp_TargetTime_MetaData), Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::NewProp_TargetTime_MetaData) }; // 4067634828
	void Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::NewProp_bEveryDay_SetBit(void* Obj)
	{
		((ManicTimeEventBPLibrary_eventManicTimeEvent_Parms*)Obj)->bEveryDay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::NewProp_bEveryDay = { "bEveryDay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManicTimeEventBPLibrary_eventManicTimeEvent_Parms), &Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::NewProp_bEveryDay_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::NewProp_bOnlyOnce_SetBit(void* Obj)
	{
		((ManicTimeEventBPLibrary_eventManicTimeEvent_Parms*)Obj)->bOnlyOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::NewProp_bOnlyOnce = { "bOnlyOnce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManicTimeEventBPLibrary_eventManicTimeEvent_Parms), &Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::NewProp_bOnlyOnce_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::NewProp_bHasFired_SetBit(void* Obj)
	{
		((ManicTimeEventBPLibrary_eventManicTimeEvent_Parms*)Obj)->bHasFired = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::NewProp_bHasFired = { "bHasFired", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManicTimeEventBPLibrary_eventManicTimeEvent_Parms), &Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::NewProp_bHasFired_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicTimeEventBPLibrary_eventManicTimeEvent_Parms, ReturnValue), Z_Construct_UEnum_Manic_AI_EManicTimeEventResult, METADATA_PARAMS(0, nullptr) }; // 758859789
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::NewProp_ClockData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::NewProp_TargetTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::NewProp_bEveryDay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::NewProp_bOnlyOnce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::NewProp_bHasFired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ManicClock" },
		{ "Comment", "/**\n\x09 * Compares ClockData to TargetTime. If bEveryDay is checked, only Hour/Minute/Second matter,\n\x09 * and it fires daily. If bEveryDay is false, Day must also match or be exceeded.\n\x09 * Returns \"Reached\" once time is >= the target, otherwise \"Not Reached.\"\n\x09 *\n\x09 * @param ClockData   Current day/hour/min/sec from your clock.\n\x09 * @param TargetTime  The day/hour/min/sec to trigger on (Day is ignored if bEveryDay is true).\n\x09 * @param bEveryDay   If true, ignore the Day portion and trigger daily at the specified Hour/Min/Sec.\n\x09 * @param bOnlyOnce   If true, once it fires, it won't fire again until bHasFired is reset.\n\x09 * @param bHasFired   Tracks if the event has already fired. Store in the same BP.\n\x09 */" },
		{ "DisplayName", "Manic Time Event" },
		{ "ExpandEnumAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/ManicTimeEventBPLibrary.h" },
		{ "ToolTip", "Compares ClockData to TargetTime. If bEveryDay is checked, only Hour/Minute/Second matter,\nand it fires daily. If bEveryDay is false, Day must also match or be exceeded.\nReturns \"Reached\" once time is >= the target, otherwise \"Not Reached.\"\n\n@param ClockData   Current day/hour/min/sec from your clock.\n@param TargetTime  The day/hour/min/sec to trigger on (Day is ignored if bEveryDay is true).\n@param bEveryDay   If true, ignore the Day portion and trigger daily at the specified Hour/Min/Sec.\n@param bOnlyOnce   If true, once it fires, it won't fire again until bHasFired is reset.\n@param bHasFired   Tracks if the event has already fired. Store in the same BP." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManicTimeEventBPLibrary, nullptr, "ManicTimeEvent", nullptr, nullptr, Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::ManicTimeEventBPLibrary_eventManicTimeEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::ManicTimeEventBPLibrary_eventManicTimeEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManicTimeEventBPLibrary);
	UClass* Z_Construct_UClass_UManicTimeEventBPLibrary_NoRegister()
	{
		return UManicTimeEventBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UManicTimeEventBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManicTimeEventBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Manic_AI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTimeEventBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UManicTimeEventBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManicTimeEventBPLibrary_ManicTimeEvent, "ManicTimeEvent" }, // 1580145152
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTimeEventBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTimeEventBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ManicTimeEvent node that checks if the current clock time is >= a target time.\n * - If bEveryDay is true, it ignores the Day in both current and target times (fires every day at Hour:Minute:Second).\n * - Otherwise, it compares full Day/Hour/Minute/Second.\n * - If bOnlyOnce is true, it won't fire again unless you reset bHasFired.\n */" },
		{ "IncludePath", "ManicTimeEventBPLibrary.h" },
		{ "ModuleRelativePath", "Public/ManicTimeEventBPLibrary.h" },
		{ "ToolTip", "ManicTimeEvent node that checks if the current clock time is >= a target time.\n- If bEveryDay is true, it ignores the Day in both current and target times (fires every day at Hour:Minute:Second).\n- Otherwise, it compares full Day/Hour/Minute/Second.\n- If bOnlyOnce is true, it won't fire again unless you reset bHasFired." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManicTimeEventBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManicTimeEventBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManicTimeEventBPLibrary_Statics::ClassParams = {
		&UManicTimeEventBPLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTimeEventBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UManicTimeEventBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UManicTimeEventBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UManicTimeEventBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManicTimeEventBPLibrary.OuterSingleton, Z_Construct_UClass_UManicTimeEventBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManicTimeEventBPLibrary.OuterSingleton;
	}
	template<> MANIC_AI_API UClass* StaticClass<UManicTimeEventBPLibrary>()
	{
		return UManicTimeEventBPLibrary::StaticClass();
	}
	UManicTimeEventBPLibrary::UManicTimeEventBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManicTimeEventBPLibrary);
	UManicTimeEventBPLibrary::~UManicTimeEventBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimeEventBPLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimeEventBPLibrary_h_Statics::EnumInfo[] = {
		{ EManicTimeEventResult_StaticEnum, TEXT("EManicTimeEventResult"), &Z_Registration_Info_UEnum_EManicTimeEventResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 758859789U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimeEventBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManicTimeEventBPLibrary, UManicTimeEventBPLibrary::StaticClass, TEXT("UManicTimeEventBPLibrary"), &Z_Registration_Info_UClass_UManicTimeEventBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManicTimeEventBPLibrary), 3813784100U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimeEventBPLibrary_h_2481231330(TEXT("/Script/Manic_AI"),
		Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimeEventBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimeEventBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimeEventBPLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sthari01_Documents_Manic_AI_Manic_AI_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimeEventBPLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
