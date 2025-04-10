// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manic_AI/Public/ManicServiceSetTimeKey.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "Manic_AI/Public/FManicTime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManicServiceSetTimeKey() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase_NoRegister();
	MANIC_AI_API UClass* Z_Construct_UClass_UManicServiceSetTimeKey();
	MANIC_AI_API UClass* Z_Construct_UClass_UManicServiceSetTimeKey_NoRegister();
	MANIC_AI_API UEnum* Z_Construct_UEnum_Manic_AI_EManicTimetableSource();
	MANIC_AI_API UScriptStruct* Z_Construct_UScriptStruct_FManicTime();
	UPackage* Z_Construct_UPackage__Script_Manic_AI();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManicTimetableSource;
	static UEnum* EManicTimetableSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EManicTimetableSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EManicTimetableSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Manic_AI_EManicTimetableSource, (UObject*)Z_Construct_UPackage__Script_Manic_AI(), TEXT("EManicTimetableSource"));
		}
		return Z_Registration_Info_UEnum_EManicTimetableSource.OuterSingleton;
	}
	template<> MANIC_AI_API UEnum* StaticEnum<EManicTimetableSource>()
	{
		return EManicTimetableSource_StaticEnum();
	}
	struct Z_Construct_UEnum_Manic_AI_EManicTimetableSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Manic_AI_EManicTimetableSource_Statics::Enumerators[] = {
		{ "EManicTimetableSource::UseNode", (int64)EManicTimetableSource::UseNode },
		{ "EManicTimetableSource::UseController", (int64)EManicTimetableSource::UseController },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Manic_AI_EManicTimetableSource_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// 1) Add a new enum to indicate which Timetable to use\n" },
		{ "ModuleRelativePath", "Public/ManicServiceSetTimeKey.h" },
		{ "ToolTip", "1) Add a new enum to indicate which Timetable to use" },
		{ "UseController.DisplayName", "Use AI Controller Timetable" },
		{ "UseController.Name", "EManicTimetableSource::UseController" },
		{ "UseNode.DisplayName", "Use Node Timetable" },
		{ "UseNode.Name", "EManicTimetableSource::UseNode" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Manic_AI_EManicTimetableSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Manic_AI,
		nullptr,
		"EManicTimetableSource",
		"EManicTimetableSource",
		Z_Construct_UEnum_Manic_AI_EManicTimetableSource_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Manic_AI_EManicTimetableSource_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Manic_AI_EManicTimetableSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Manic_AI_EManicTimetableSource_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Manic_AI_EManicTimetableSource()
	{
		if (!Z_Registration_Info_UEnum_EManicTimetableSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManicTimetableSource.InnerSingleton, Z_Construct_UEnum_Manic_AI_EManicTimetableSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EManicTimetableSource.InnerSingleton;
	}
	void UManicServiceSetTimeKey::StaticRegisterNativesUManicServiceSetTimeKey()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManicServiceSetTimeKey);
	UClass* Z_Construct_UClass_UManicServiceSetTimeKey_NoRegister()
	{
		return UManicServiceSetTimeKey::StaticClass();
	}
	struct Z_Construct_UClass_UManicServiceSetTimeKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivityKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActivityKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimeKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Timetable_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timetable_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Timetable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedGameStateClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SelectedGameStateClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DayPropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DayPropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HourPropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_HourPropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinutePropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MinutePropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondPropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SecondPropertyName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimetableSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimetableSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimetableSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManicServiceSetTimeKey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Manic_AI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManicServiceSetTimeKey_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicServiceSetTimeKey_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ManicServiceSetTimeKey.h" },
		{ "ModuleRelativePath", "Public/ManicServiceSetTimeKey.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_ActivityKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "// Blackboard key for the timetable outcome, e.g. \"Where2Go\"\n" },
		{ "ModuleRelativePath", "Public/ManicServiceSetTimeKey.h" },
		{ "ToolTip", "Blackboard key for the timetable outcome, e.g. \"Where2Go\"" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_ActivityKey = { "ActivityKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicServiceSetTimeKey, ActivityKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_ActivityKey_MetaData), Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_ActivityKey_MetaData) }; // 3137324432
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_TimeKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "// Blackboard key for the derived time string, e.g. \"Time\"\n" },
		{ "ModuleRelativePath", "Public/ManicServiceSetTimeKey.h" },
		{ "ToolTip", "Blackboard key for the derived time string, e.g. \"Time\"" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_TimeKey = { "TimeKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicServiceSetTimeKey, TimeKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_TimeKey_MetaData), Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_TimeKey_MetaData) }; // 3137324432
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_Timetable_Inner = { "Timetable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FManicTime, METADATA_PARAMS(0, nullptr) }; // 2525359673
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_Timetable_MetaData[] = {
		{ "Category", "Timetable" },
		{ "Comment", "// A list of time slots. Only the Start* fields are used now; End times are ignored.\n" },
		{ "ModuleRelativePath", "Public/ManicServiceSetTimeKey.h" },
		{ "ToolTip", "A list of time slots. Only the Start* fields are used now; End times are ignored." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_Timetable = { "Timetable", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicServiceSetTimeKey, Timetable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_Timetable_MetaData), Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_Timetable_MetaData) }; // 2525359673
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_SelectedGameStateClass_MetaData[] = {
		{ "Category", "TimeSource" },
		{ "Comment", "// The custom GameState class that holds the day/hour/minute/second (optional).\n" },
		{ "ModuleRelativePath", "Public/ManicServiceSetTimeKey.h" },
		{ "ToolTip", "The custom GameState class that holds the day/hour/minute/second (optional)." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_SelectedGameStateClass = { "SelectedGameStateClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicServiceSetTimeKey, SelectedGameStateClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameStateBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_SelectedGameStateClass_MetaData), Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_SelectedGameStateClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_DayPropertyName_MetaData[] = {
		{ "Category", "TimeSource" },
		{ "Comment", "// Property names for day/hour/minute/second in that GameState.\n" },
		{ "ModuleRelativePath", "Public/ManicServiceSetTimeKey.h" },
		{ "ToolTip", "Property names for day/hour/minute/second in that GameState." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_DayPropertyName = { "DayPropertyName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicServiceSetTimeKey, DayPropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_DayPropertyName_MetaData), Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_DayPropertyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_HourPropertyName_MetaData[] = {
		{ "Category", "TimeSource" },
		{ "ModuleRelativePath", "Public/ManicServiceSetTimeKey.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_HourPropertyName = { "HourPropertyName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicServiceSetTimeKey, HourPropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_HourPropertyName_MetaData), Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_HourPropertyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_MinutePropertyName_MetaData[] = {
		{ "Category", "TimeSource" },
		{ "ModuleRelativePath", "Public/ManicServiceSetTimeKey.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_MinutePropertyName = { "MinutePropertyName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicServiceSetTimeKey, MinutePropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_MinutePropertyName_MetaData), Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_MinutePropertyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_SecondPropertyName_MetaData[] = {
		{ "Category", "TimeSource" },
		{ "ModuleRelativePath", "Public/ManicServiceSetTimeKey.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_SecondPropertyName = { "SecondPropertyName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicServiceSetTimeKey, SecondPropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_SecondPropertyName_MetaData), Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_SecondPropertyName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_TimetableSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_TimetableSource_MetaData[] = {
		{ "Category", "Timetable" },
		{ "Comment", "// 2) The new enum property to pick from node or AI Controller\n" },
		{ "ModuleRelativePath", "Public/ManicServiceSetTimeKey.h" },
		{ "ToolTip", "2) The new enum property to pick from node or AI Controller" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_TimetableSource = { "TimetableSource", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManicServiceSetTimeKey, TimetableSource), Z_Construct_UEnum_Manic_AI_EManicTimetableSource, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_TimetableSource_MetaData), Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_TimetableSource_MetaData) }; // 2734689322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManicServiceSetTimeKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_ActivityKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_TimeKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_Timetable_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_Timetable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_SelectedGameStateClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_DayPropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_HourPropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_MinutePropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_SecondPropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_TimetableSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManicServiceSetTimeKey_Statics::NewProp_TimetableSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManicServiceSetTimeKey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManicServiceSetTimeKey>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManicServiceSetTimeKey_Statics::ClassParams = {
		&UManicServiceSetTimeKey::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UManicServiceSetTimeKey_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UManicServiceSetTimeKey_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicServiceSetTimeKey_Statics::Class_MetaDataParams), Z_Construct_UClass_UManicServiceSetTimeKey_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManicServiceSetTimeKey_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UManicServiceSetTimeKey()
	{
		if (!Z_Registration_Info_UClass_UManicServiceSetTimeKey.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManicServiceSetTimeKey.OuterSingleton, Z_Construct_UClass_UManicServiceSetTimeKey_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManicServiceSetTimeKey.OuterSingleton;
	}
	template<> MANIC_AI_API UClass* StaticClass<UManicServiceSetTimeKey>()
	{
		return UManicServiceSetTimeKey::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManicServiceSetTimeKey);
	UManicServiceSetTimeKey::~UManicServiceSetTimeKey() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicServiceSetTimeKey_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicServiceSetTimeKey_h_Statics::EnumInfo[] = {
		{ EManicTimetableSource_StaticEnum, TEXT("EManicTimetableSource"), &Z_Registration_Info_UEnum_EManicTimetableSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2734689322U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicServiceSetTimeKey_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManicServiceSetTimeKey, UManicServiceSetTimeKey::StaticClass, TEXT("UManicServiceSetTimeKey"), &Z_Registration_Info_UClass_UManicServiceSetTimeKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManicServiceSetTimeKey), 81468408U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicServiceSetTimeKey_h_1191835420(TEXT("/Script/Manic_AI"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicServiceSetTimeKey_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicServiceSetTimeKey_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicServiceSetTimeKey_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicServiceSetTimeKey_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
