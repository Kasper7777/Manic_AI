// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manic_AI/Public/FManicTime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFManicTime() {}
// Cross Module References
	MANIC_AI_API UScriptStruct* Z_Construct_UScriptStruct_FManicTime();
	UPackage* Z_Construct_UPackage__Script_Manic_AI();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManicTime;
class UScriptStruct* FManicTime::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManicTime.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManicTime.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManicTime, (UObject*)Z_Construct_UPackage__Script_Manic_AI(), TEXT("ManicTime"));
	}
	return Z_Registration_Info_UScriptStruct_ManicTime.OuterSingleton;
}
template<> MANIC_AI_API UScriptStruct* StaticStruct<FManicTime>()
{
	return FManicTime::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManicTime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DayOfWeek_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DayOfWeek;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartHour_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartHour;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartMinute_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartMinute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartSecond_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartSecond;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivityName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActivityName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManicTime_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A struct that defines a single time slot for the timetable, including day-of-week.\n *   - DayOfWeek = -1 means \"any day\"\n *   - StartHour, StartMinute, StartSecond define when the activity becomes active\n *   - ActivityName is the name of the slot\n */" },
		{ "ModuleRelativePath", "Public/FManicTime.h" },
		{ "ToolTip", "A struct that defines a single time slot for the timetable, including day-of-week.\n  - DayOfWeek = -1 means \"any day\"\n  - StartHour, StartMinute, StartSecond define when the activity becomes active\n  - ActivityName is the name of the slot" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManicTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManicTime>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManicTime_Statics::NewProp_DayOfWeek_MetaData[] = {
		{ "Category", "Timetable" },
		{ "Comment", "// -1 = any day, 0 = Sunday, 1 = Monday, etc.\n" },
		{ "ModuleRelativePath", "Public/FManicTime.h" },
		{ "ToolTip", "-1 = any day, 0 = Sunday, 1 = Monday, etc." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManicTime_Statics::NewProp_DayOfWeek = { "DayOfWeek", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManicTime, DayOfWeek), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManicTime_Statics::NewProp_DayOfWeek_MetaData), Z_Construct_UScriptStruct_FManicTime_Statics::NewProp_DayOfWeek_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManicTime_Statics::NewProp_StartHour_MetaData[] = {
		{ "Category", "Timetable" },
		{ "ModuleRelativePath", "Public/FManicTime.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManicTime_Statics::NewProp_StartHour = { "StartHour", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManicTime, StartHour), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManicTime_Statics::NewProp_StartHour_MetaData), Z_Construct_UScriptStruct_FManicTime_Statics::NewProp_StartHour_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManicTime_Statics::NewProp_StartMinute_MetaData[] = {
		{ "Category", "Timetable" },
		{ "ModuleRelativePath", "Public/FManicTime.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManicTime_Statics::NewProp_StartMinute = { "StartMinute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManicTime, StartMinute), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManicTime_Statics::NewProp_StartMinute_MetaData), Z_Construct_UScriptStruct_FManicTime_Statics::NewProp_StartMinute_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManicTime_Statics::NewProp_StartSecond_MetaData[] = {
		{ "Category", "Timetable" },
		{ "ModuleRelativePath", "Public/FManicTime.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManicTime_Statics::NewProp_StartSecond = { "StartSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManicTime, StartSecond), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManicTime_Statics::NewProp_StartSecond_MetaData), Z_Construct_UScriptStruct_FManicTime_Statics::NewProp_StartSecond_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManicTime_Statics::NewProp_ActivityName_MetaData[] = {
		{ "Category", "Timetable" },
		{ "ModuleRelativePath", "Public/FManicTime.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FManicTime_Statics::NewProp_ActivityName = { "ActivityName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManicTime, ActivityName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManicTime_Statics::NewProp_ActivityName_MetaData), Z_Construct_UScriptStruct_FManicTime_Statics::NewProp_ActivityName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManicTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManicTime_Statics::NewProp_DayOfWeek,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManicTime_Statics::NewProp_StartHour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManicTime_Statics::NewProp_StartMinute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManicTime_Statics::NewProp_StartSecond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManicTime_Statics::NewProp_ActivityName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManicTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manic_AI,
		nullptr,
		&NewStructOps,
		"ManicTime",
		Z_Construct_UScriptStruct_FManicTime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManicTime_Statics::PropPointers),
		sizeof(FManicTime),
		alignof(FManicTime),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManicTime_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FManicTime_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManicTime_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FManicTime()
	{
		if (!Z_Registration_Info_UScriptStruct_ManicTime.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManicTime.InnerSingleton, Z_Construct_UScriptStruct_FManicTime_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManicTime.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_FManicTime_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_FManicTime_h_Statics::ScriptStructInfo[] = {
		{ FManicTime::StaticStruct, Z_Construct_UScriptStruct_FManicTime_Statics::NewStructOps, TEXT("ManicTime"), &Z_Registration_Info_UScriptStruct_ManicTime, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManicTime), 2525359673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_FManicTime_h_226396410(TEXT("/Script/Manic_AI"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_FManicTime_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_FManicTime_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
