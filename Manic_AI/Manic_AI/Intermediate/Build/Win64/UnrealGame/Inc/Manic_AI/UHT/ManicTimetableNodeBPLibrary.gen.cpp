// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manic_AI/Public/ManicTimetableNodeBPLibrary.h"
#include "Manic_AI/Public/FManicTime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManicTimetableNodeBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MANIC_AI_API UClass* Z_Construct_UClass_UManicTimetableNode_NoRegister();
	MANIC_AI_API UClass* Z_Construct_UClass_UManicTimetableNodeBPLibrary();
	MANIC_AI_API UClass* Z_Construct_UClass_UManicTimetableNodeBPLibrary_NoRegister();
	MANIC_AI_API UScriptStruct* Z_Construct_UScriptStruct_FManicTime();
	UPackage* Z_Construct_UPackage__Script_Manic_AI();
// End Cross Module References
	DEFINE_FUNCTION(UManicTimetableNodeBPLibrary::execFindActiveTimetableSlot)
	{
		P_GET_TARRAY_REF(FManicTime,Z_Param_Out_Timetable);
		P_GET_PROPERTY(FIntProperty,Z_Param_Day);
		P_GET_PROPERTY(FIntProperty,Z_Param_Hour);
		P_GET_PROPERTY(FIntProperty,Z_Param_Minute);
		P_GET_PROPERTY(FIntProperty,Z_Param_Second);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FManicTime*)Z_Param__Result=UManicTimetableNodeBPLibrary::FindActiveTimetableSlot(Z_Param_Out_Timetable,Z_Param_Day,Z_Param_Hour,Z_Param_Minute,Z_Param_Second);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManicTimetableNodeBPLibrary::execCreateTimetableNode)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UManicTimetableNode**)Z_Param__Result=UManicTimetableNodeBPLibrary::CreateTimetableNode(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UManicTimetableNodeBPLibrary::StaticRegisterNativesUManicTimetableNodeBPLibrary()
	{
		UClass* Class = UManicTimetableNodeBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateTimetableNode", &UManicTimetableNodeBPLibrary::execCreateTimetableNode },
			{ "FindActiveTimetableSlot", &UManicTimetableNodeBPLibrary::execFindActiveTimetableSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManicTimetableNodeBPLibrary_CreateTimetableNode_Statics
	{
		struct ManicTimetableNodeBPLibrary_eventCreateTimetableNode_Parms
		{
			UObject* WorldContextObject;
			UManicTimetableNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManicTimetableNodeBPLibrary_CreateTimetableNode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicTimetableNodeBPLibrary_eventCreateTimetableNode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManicTimetableNodeBPLibrary_CreateTimetableNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicTimetableNodeBPLibrary_eventCreateTimetableNode_Parms, ReturnValue), Z_Construct_UClass_UManicTimetableNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManicTimetableNodeBPLibrary_CreateTimetableNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicTimetableNodeBPLibrary_CreateTimetableNode_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicTimetableNodeBPLibrary_CreateTimetableNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManicTimetableNodeBPLibrary_CreateTimetableNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manic AI" },
		{ "Comment", "/** Creates a new ManicTimetableNode object */" },
		{ "DisplayName", "Create Timetable Node" },
		{ "ModuleRelativePath", "Public/ManicTimetableNodeBPLibrary.h" },
		{ "ToolTip", "Creates a new ManicTimetableNode object" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManicTimetableNodeBPLibrary_CreateTimetableNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManicTimetableNodeBPLibrary, nullptr, "CreateTimetableNode", nullptr, nullptr, Z_Construct_UFunction_UManicTimetableNodeBPLibrary_CreateTimetableNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManicTimetableNodeBPLibrary_CreateTimetableNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManicTimetableNodeBPLibrary_CreateTimetableNode_Statics::ManicTimetableNodeBPLibrary_eventCreateTimetableNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManicTimetableNodeBPLibrary_CreateTimetableNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManicTimetableNodeBPLibrary_CreateTimetableNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManicTimetableNodeBPLibrary_CreateTimetableNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UManicTimetableNodeBPLibrary_CreateTimetableNode_Statics::ManicTimetableNodeBPLibrary_eventCreateTimetableNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UManicTimetableNodeBPLibrary_CreateTimetableNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManicTimetableNodeBPLibrary_CreateTimetableNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics
	{
		struct ManicTimetableNodeBPLibrary_eventFindActiveTimetableSlot_Parms
		{
			TArray<FManicTime> Timetable;
			int32 Day;
			int32 Hour;
			int32 Minute;
			int32 Second;
			FManicTime ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Timetable_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timetable_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Timetable;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Day;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Hour;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Minute;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Second;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::NewProp_Timetable_Inner = { "Timetable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FManicTime, METADATA_PARAMS(0, nullptr) }; // 2525359673
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::NewProp_Timetable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::NewProp_Timetable = { "Timetable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicTimetableNodeBPLibrary_eventFindActiveTimetableSlot_Parms, Timetable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::NewProp_Timetable_MetaData), Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::NewProp_Timetable_MetaData) }; // 2525359673
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::NewProp_Day = { "Day", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicTimetableNodeBPLibrary_eventFindActiveTimetableSlot_Parms, Day), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::NewProp_Hour = { "Hour", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicTimetableNodeBPLibrary_eventFindActiveTimetableSlot_Parms, Hour), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::NewProp_Minute = { "Minute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicTimetableNodeBPLibrary_eventFindActiveTimetableSlot_Parms, Minute), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::NewProp_Second = { "Second", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicTimetableNodeBPLibrary_eventFindActiveTimetableSlot_Parms, Second), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicTimetableNodeBPLibrary_eventFindActiveTimetableSlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FManicTime, METADATA_PARAMS(0, nullptr) }; // 2525359673
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::NewProp_Timetable_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::NewProp_Timetable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::NewProp_Day,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::NewProp_Hour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::NewProp_Minute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::NewProp_Second,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manic AI" },
		{ "Comment", "/** Returns the current active slot from the timetable based on day/hour/min/sec */" },
		{ "DisplayName", "Find Active Timetable Slot" },
		{ "ModuleRelativePath", "Public/ManicTimetableNodeBPLibrary.h" },
		{ "ToolTip", "Returns the current active slot from the timetable based on day/hour/min/sec" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManicTimetableNodeBPLibrary, nullptr, "FindActiveTimetableSlot", nullptr, nullptr, Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::ManicTimetableNodeBPLibrary_eventFindActiveTimetableSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::ManicTimetableNodeBPLibrary_eventFindActiveTimetableSlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManicTimetableNodeBPLibrary);
	UClass* Z_Construct_UClass_UManicTimetableNodeBPLibrary_NoRegister()
	{
		return UManicTimetableNodeBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UManicTimetableNodeBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManicTimetableNodeBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Manic_AI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTimetableNodeBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UManicTimetableNodeBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManicTimetableNodeBPLibrary_CreateTimetableNode, "CreateTimetableNode" }, // 1597117696
		{ &Z_Construct_UFunction_UManicTimetableNodeBPLibrary_FindActiveTimetableSlot, "FindActiveTimetableSlot" }, // 3349552160
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTimetableNodeBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicTimetableNodeBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Utility functions for creating and working with ManicTimetableNode objects.\n */" },
		{ "IncludePath", "ManicTimetableNodeBPLibrary.h" },
		{ "ModuleRelativePath", "Public/ManicTimetableNodeBPLibrary.h" },
		{ "ToolTip", "Utility functions for creating and working with ManicTimetableNode objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManicTimetableNodeBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManicTimetableNodeBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManicTimetableNodeBPLibrary_Statics::ClassParams = {
		&UManicTimetableNodeBPLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicTimetableNodeBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UManicTimetableNodeBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UManicTimetableNodeBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UManicTimetableNodeBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManicTimetableNodeBPLibrary.OuterSingleton, Z_Construct_UClass_UManicTimetableNodeBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManicTimetableNodeBPLibrary.OuterSingleton;
	}
	template<> MANIC_AI_API UClass* StaticClass<UManicTimetableNodeBPLibrary>()
	{
		return UManicTimetableNodeBPLibrary::StaticClass();
	}
	UManicTimetableNodeBPLibrary::UManicTimetableNodeBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManicTimetableNodeBPLibrary);
	UManicTimetableNodeBPLibrary::~UManicTimetableNodeBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimetableNodeBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimetableNodeBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManicTimetableNodeBPLibrary, UManicTimetableNodeBPLibrary::StaticClass, TEXT("UManicTimetableNodeBPLibrary"), &Z_Registration_Info_UClass_UManicTimetableNodeBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManicTimetableNodeBPLibrary), 3262953243U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimetableNodeBPLibrary_h_2769396317(TEXT("/Script/Manic_AI"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimetableNodeBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicTimetableNodeBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
