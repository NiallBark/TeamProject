// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Checkpoint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TEAMPROJECTWHEELZ_Checkpoint_generated_h
#error "Checkpoint.generated.h already included, missing '#pragma once' in Checkpoint.h"
#endif
#define TEAMPROJECTWHEELZ_Checkpoint_generated_h

#define FID_Git_TeamProject_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_Checkpoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAiTargetPoint); \
	DECLARE_FUNCTION(execOnOverlap); \
	DECLARE_FUNCTION(execGetBoxHeight);


#define FID_Git_TeamProject_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_Checkpoint_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACheckpoint(); \
	friend struct Z_Construct_UClass_ACheckpoint_Statics; \
public: \
	DECLARE_CLASS(ACheckpoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TeamProjectWheelz"), NO_API) \
	DECLARE_SERIALIZER(ACheckpoint)


#define FID_Git_TeamProject_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_Checkpoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACheckpoint(ACheckpoint&&); \
	ACheckpoint(const ACheckpoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACheckpoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACheckpoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACheckpoint) \
	NO_API virtual ~ACheckpoint();


#define FID_Git_TeamProject_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_Checkpoint_h_10_PROLOG
#define FID_Git_TeamProject_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_Checkpoint_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_TeamProject_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_Checkpoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_TeamProject_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_Checkpoint_h_13_INCLASS_NO_PURE_DECLS \
	FID_Git_TeamProject_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_Checkpoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAMPROJECTWHEELZ_API UClass* StaticClass<class ACheckpoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_TeamProject_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_Checkpoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
