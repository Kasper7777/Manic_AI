// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManic_AI_init() {}
	MANIC_AI_API UFunction* Z_Construct_UDelegateFunction_Manic_AI_OnAllNeedsUpdated__DelegateSignature();
	MANIC_AI_API UFunction* Z_Construct_UDelegateFunction_Manic_AI_OnAnyNeedThreshold__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Manic_AI;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Manic_AI()
	{
		if (!Z_Registration_Info_UPackage__Script_Manic_AI.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Manic_AI_OnAllNeedsUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Manic_AI_OnAnyNeedThreshold__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Manic_AI",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB38DB6B6,
				0x81B68A8B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Manic_AI.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Manic_AI.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Manic_AI(Z_Construct_UPackage__Script_Manic_AI, TEXT("/Script/Manic_AI"), Z_Registration_Info_UPackage__Script_Manic_AI, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB38DB6B6, 0x81B68A8B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
