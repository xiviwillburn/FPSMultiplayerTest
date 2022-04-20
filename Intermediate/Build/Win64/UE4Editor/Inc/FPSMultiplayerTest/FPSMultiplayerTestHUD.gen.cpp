// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSMultiplayerTest/FPSMultiplayerTestHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSMultiplayerTestHUD() {}
// Cross Module References
	FPSMULTIPLAYERTEST_API UClass* Z_Construct_UClass_AFPSMultiplayerTestHUD_NoRegister();
	FPSMULTIPLAYERTEST_API UClass* Z_Construct_UClass_AFPSMultiplayerTestHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_FPSMultiplayerTest();
// End Cross Module References
	void AFPSMultiplayerTestHUD::StaticRegisterNativesAFPSMultiplayerTestHUD()
	{
	}
	UClass* Z_Construct_UClass_AFPSMultiplayerTestHUD_NoRegister()
	{
		return AFPSMultiplayerTestHUD::StaticClass();
	}
	struct Z_Construct_UClass_AFPSMultiplayerTestHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSMultiplayerTestHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSMultiplayerTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMultiplayerTestHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "FPSMultiplayerTestHUD.h" },
		{ "ModuleRelativePath", "FPSMultiplayerTestHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSMultiplayerTestHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSMultiplayerTestHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSMultiplayerTestHUD_Statics::ClassParams = {
		&AFPSMultiplayerTestHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFPSMultiplayerTestHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMultiplayerTestHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSMultiplayerTestHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSMultiplayerTestHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSMultiplayerTestHUD, 593846544);
	template<> FPSMULTIPLAYERTEST_API UClass* StaticClass<AFPSMultiplayerTestHUD>()
	{
		return AFPSMultiplayerTestHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSMultiplayerTestHUD(Z_Construct_UClass_AFPSMultiplayerTestHUD, &AFPSMultiplayerTestHUD::StaticClass, TEXT("/Script/FPSMultiplayerTest"), TEXT("AFPSMultiplayerTestHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSMultiplayerTestHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
