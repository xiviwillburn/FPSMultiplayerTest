// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FPSMULTIPLAYERTEST_FPSMultiplayerTestProjectile_generated_h
#error "FPSMultiplayerTestProjectile.generated.h already included, missing '#pragma once' in FPSMultiplayerTestProjectile.h"
#endif
#define FPSMULTIPLAYERTEST_FPSMultiplayerTestProjectile_generated_h

#define FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestProjectile_h_15_SPARSE_DATA
#define FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSMultiplayerTestProjectile(); \
	friend struct Z_Construct_UClass_AFPSMultiplayerTestProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPSMultiplayerTestProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSMultiplayerTest"), NO_API) \
	DECLARE_SERIALIZER(AFPSMultiplayerTestProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CollisionComp=NETFIELD_REP_START, \
		ProjectileMovement, \
		NETFIELD_REP_END=ProjectileMovement	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFPSMultiplayerTestProjectile(); \
	friend struct Z_Construct_UClass_AFPSMultiplayerTestProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPSMultiplayerTestProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSMultiplayerTest"), NO_API) \
	DECLARE_SERIALIZER(AFPSMultiplayerTestProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CollisionComp=NETFIELD_REP_START, \
		ProjectileMovement, \
		NETFIELD_REP_END=ProjectileMovement	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSMultiplayerTestProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSMultiplayerTestProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSMultiplayerTestProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSMultiplayerTestProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSMultiplayerTestProjectile(AFPSMultiplayerTestProjectile&&); \
	NO_API AFPSMultiplayerTestProjectile(const AFPSMultiplayerTestProjectile&); \
public:


#define FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSMultiplayerTestProjectile(AFPSMultiplayerTestProjectile&&); \
	NO_API AFPSMultiplayerTestProjectile(const AFPSMultiplayerTestProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSMultiplayerTestProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSMultiplayerTestProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSMultiplayerTestProjectile)


#define FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFPSMultiplayerTestProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFPSMultiplayerTestProjectile, ProjectileMovement); }


#define FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestProjectile_h_12_PROLOG
#define FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestProjectile_h_15_SPARSE_DATA \
	FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestProjectile_h_15_RPC_WRAPPERS \
	FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestProjectile_h_15_INCLASS \
	FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestProjectile_h_15_SPARSE_DATA \
	FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSMULTIPLAYERTEST_API UClass* StaticClass<class AFPSMultiplayerTestProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
