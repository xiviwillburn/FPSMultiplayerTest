// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSMultiplayerTest/FPSMultiplayerTestGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSMultiplayerTestGameMode() {}
// Cross Module References
	FPSMULTIPLAYERTEST_API UClass* Z_Construct_UClass_AFPSMultiplayerTestGameMode_NoRegister();
	FPSMULTIPLAYERTEST_API UClass* Z_Construct_UClass_AFPSMultiplayerTestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FPSMultiplayerTest();
// End Cross Module References
	void AFPSMultiplayerTestGameMode::StaticRegisterNativesAFPSMultiplayerTestGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFPSMultiplayerTestGameMode_NoRegister()
	{
		return AFPSMultiplayerTestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFPSMultiplayerTestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSMultiplayerTestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSMultiplayerTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSMultiplayerTestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FPSMultiplayerTestGameMode.h" },
		{ "ModuleRelativePath", "FPSMultiplayerTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSMultiplayerTestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSMultiplayerTestGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSMultiplayerTestGameMode_Statics::ClassParams = {
		&AFPSMultiplayerTestGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFPSMultiplayerTestGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSMultiplayerTestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSMultiplayerTestGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSMultiplayerTestGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSMultiplayerTestGameMode, 3845827167);
	template<> FPSMULTIPLAYERTEST_API UClass* StaticClass<AFPSMultiplayerTestGameMode>()
	{
		return AFPSMultiplayerTestGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSMultiplayerTestGameMode(Z_Construct_UClass_AFPSMultiplayerTestGameMode, &AFPSMultiplayerTestGameMode::StaticClass, TEXT("/Script/FPSMultiplayerTest"), TEXT("AFPSMultiplayerTestGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSMultiplayerTestGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
