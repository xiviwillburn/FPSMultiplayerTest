// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSMULTIPLAYERTEST_FPSMultiplayerTestCharacter_generated_h
#error "FPSMultiplayerTestCharacter.generated.h already included, missing '#pragma once' in FPSMultiplayerTestCharacter.h"
#endif
#define FPSMULTIPLAYERTEST_FPSMultiplayerTestCharacter_generated_h

#define FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestCharacter_h_21_SPARSE_DATA
#define FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestCharacter_h_21_RPC_WRAPPERS \
	virtual bool Server_OnFire_Validate(); \
	virtual void Server_OnFire_Implementation(); \
 \
	DECLARE_FUNCTION(execServer_OnFire);


#define FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execServer_OnFire);


#define FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestCharacter_h_21_EVENT_PARMS
#define FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestCharacter_h_21_CALLBACK_WRAPPERS
#define FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSMultiplayerTestCharacter(); \
	friend struct Z_Construct_UClass_AFPSMultiplayerTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSMultiplayerTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSMultiplayerTest"), NO_API) \
	DECLARE_SERIALIZER(AFPSMultiplayerTestCharacter)


#define FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestCharacter_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAFPSMultiplayerTestCharacter(); \
	friend struct Z_Construct_UClass_AFPSMultiplayerTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSMultiplayerTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSMultiplayerTest"), NO_API) \
	DECLARE_SERIALIZER(AFPSMultiplayerTestCharacter)


#define FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestCharacter_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSMultiplayerTestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSMultiplayerTestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSMultiplayerTestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSMultiplayerTestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSMultiplayerTestCharacter(AFPSMultiplayerTestCharacter&&); \
	NO_API AFPSMultiplayerTestCharacter(const AFPSMultiplayerTestCharacter&); \
public:


#define FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSMultiplayerTestCharacter(AFPSMultiplayerTestCharacter&&); \
	NO_API AFPSMultiplayerTestCharacter(const AFPSMultiplayerTestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSMultiplayerTestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSMultiplayerTestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSMultiplayerTestCharacter)


#define FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFPSMultiplayerTestCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFPSMultiplayerTestCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AFPSMultiplayerTestCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AFPSMultiplayerTestCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AFPSMultiplayerTestCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFPSMultiplayerTestCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AFPSMultiplayerTestCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AFPSMultiplayerTestCharacter, L_MotionController); }


#define FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestCharacter_h_18_PROLOG \
	FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestCharacter_h_21_EVENT_PARMS


#define FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestCharacter_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestCharacter_h_21_SPARSE_DATA \
	FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestCharacter_h_21_RPC_WRAPPERS \
	FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestCharacter_h_21_CALLBACK_WRAPPERS \
	FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestCharacter_h_21_INCLASS \
	FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestCharacter_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestCharacter_h_21_SPARSE_DATA \
	FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestCharacter_h_21_CALLBACK_WRAPPERS \
	FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSMULTIPLAYERTEST_API UClass* StaticClass<class AFPSMultiplayerTestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSMultiplayerTest_Source_FPSMultiplayerTest_FPSMultiplayerTestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
