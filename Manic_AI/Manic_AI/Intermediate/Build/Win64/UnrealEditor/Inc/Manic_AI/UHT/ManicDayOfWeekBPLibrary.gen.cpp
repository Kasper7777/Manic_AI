// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manic_AI/Public/ManicDayOfWeekBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManicDayOfWeekBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MANIC_AI_API UClass* Z_Construct_UClass_UManicDayOfWeekBPLibrary();
	MANIC_AI_API UClass* Z_Construct_UClass_UManicDayOfWeekBPLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Manic_AI();
// End Cross Module References
	DEFINE_FUNCTION(UManicDayOfWeekBPLibrary::execGetDayOfWeekString)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DayNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UManicDayOfWeekBPLibrary::GetDayOfWeekString(Z_Param_DayNumber);
		P_NATIVE_END;
	}
	void UManicDayOfWeekBPLibrary::StaticRegisterNativesUManicDayOfWeekBPLibrary()
	{
		UClass* Class = UManicDayOfWeekBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDayOfWeekString", &UManicDayOfWeekBPLibrary::execGetDayOfWeekString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManicDayOfWeekBPLibrary_GetDayOfWeekString_Statics
	{
		struct ManicDayOfWeekBPLibrary_eventGetDayOfWeekString_Parms
		{
			int32 DayNumber;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_DayNumber;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManicDayOfWeekBPLibrary_GetDayOfWeekString_Statics::NewProp_DayNumber = { "DayNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicDayOfWeekBPLibrary_eventGetDayOfWeekString_Parms, DayNumber), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManicDayOfWeekBPLibrary_GetDayOfWeekString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManicDayOfWeekBPLibrary_eventGetDayOfWeekString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManicDayOfWeekBPLibrary_GetDayOfWeekString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicDayOfWeekBPLibrary_GetDayOfWeekString_Statics::NewProp_DayNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManicDayOfWeekBPLibrary_GetDayOfWeekString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManicDayOfWeekBPLibrary_GetDayOfWeekString_Statics::Function_MetaDataParams[] = {
		{ "Category", "ManicTime" },
		{ "Comment", "/**\n\x09 * Returns the day of the week as a string based on the given day number.\n\x09 *\n\x09 * @param DayNumber The input day number (can be any integer, including numbers in the 1000s).\n\x09 * @return The corresponding day of the week as a string.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ManicDayOfWeekBPLibrary.h" },
		{ "ToolTip", "Returns the day of the week as a string based on the given day number.\n\n@param DayNumber The input day number (can be any integer, including numbers in the 1000s).\n@return The corresponding day of the week as a string." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManicDayOfWeekBPLibrary_GetDayOfWeekString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManicDayOfWeekBPLibrary, nullptr, "GetDayOfWeekString", nullptr, nullptr, Z_Construct_UFunction_UManicDayOfWeekBPLibrary_GetDayOfWeekString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManicDayOfWeekBPLibrary_GetDayOfWeekString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManicDayOfWeekBPLibrary_GetDayOfWeekString_Statics::ManicDayOfWeekBPLibrary_eventGetDayOfWeekString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManicDayOfWeekBPLibrary_GetDayOfWeekString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManicDayOfWeekBPLibrary_GetDayOfWeekString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManicDayOfWeekBPLibrary_GetDayOfWeekString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UManicDayOfWeekBPLibrary_GetDayOfWeekString_Statics::ManicDayOfWeekBPLibrary_eventGetDayOfWeekString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UManicDayOfWeekBPLibrary_GetDayOfWeekString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManicDayOfWeekBPLibrary_GetDayOfWeekString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManicDayOfWeekBPLibrary);
	UClass* Z_Construct_UClass_UManicDayOfWeekBPLibrary_NoRegister()
	{
		return UManicDayOfWeekBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UManicDayOfWeekBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManicDayOfWeekBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Manic_AI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManicDayOfWeekBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UManicDayOfWeekBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManicDayOfWeekBPLibrary_GetDayOfWeekString, "GetDayOfWeekString" }, // 251422448
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManicDayOfWeekBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManicDayOfWeekBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint function library that converts an integer day number to a day-of-week string.\n * Mapping: 1 = Monday, 2 = Tuesday, 3 = Wednesday, 4 = Thursday, 5 = Friday, 6 = Saturday, 7 = Sunday,\n * then repeats (e.g. 8 = Monday, 9 = Tuesday, etc.).\n */" },
		{ "IncludePath", "ManicDayOfWeekBPLibrary.h" },
		{ "ModuleRelativePath", "Public/ManicDayOfWeekBPLibrary.h" },
		{ "ToolTip", "Blueprint function library that converts an integer day number to a day-of-week string.\nMapping: 1 = Monday, 2 = Tuesday, 3 = Wednesday, 4 = Thursday, 5 = Friday, 6 = Saturday, 7 = Sunday,\nthen repeats (e.g. 8 = Monday, 9 = Tuesday, etc.)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManicDayOfWeekBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManicDayOfWeekBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManicDayOfWeekBPLibrary_Statics::ClassParams = {
		&UManicDayOfWeekBPLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManicDayOfWeekBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UManicDayOfWeekBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UManicDayOfWeekBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UManicDayOfWeekBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManicDayOfWeekBPLibrary.OuterSingleton, Z_Construct_UClass_UManicDayOfWeekBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManicDayOfWeekBPLibrary.OuterSingleton;
	}
	template<> MANIC_AI_API UClass* StaticClass<UManicDayOfWeekBPLibrary>()
	{
		return UManicDayOfWeekBPLibrary::StaticClass();
	}
	UManicDayOfWeekBPLibrary::UManicDayOfWeekBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManicDayOfWeekBPLibrary);
	UManicDayOfWeekBPLibrary::~UManicDayOfWeekBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicDayOfWeekBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicDayOfWeekBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManicDayOfWeekBPLibrary, UManicDayOfWeekBPLibrary::StaticClass, TEXT("UManicDayOfWeekBPLibrary"), &Z_Registration_Info_UClass_UManicDayOfWeekBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManicDayOfWeekBPLibrary), 1453790088U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicDayOfWeekBPLibrary_h_3115545001(TEXT("/Script/Manic_AI"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicDayOfWeekBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manic_AI_Source_Manic_AI_Public_ManicDayOfWeekBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
