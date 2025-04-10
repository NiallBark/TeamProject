// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseChaosCar.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEAMPROJECTWHEELZ_BaseChaosCar_generated_h
#error "BaseChaosCar.generated.h already included, missing '#pragma once' in BaseChaosCar.h"
#endif
#define TEAMPROJECTWHEELZ_BaseChaosCar_generated_h

#define FID_Temp_Github_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_BaseChaosCar_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDriveForward); \
	DECLARE_FUNCTION(execTurning);


#define FID_Temp_Github_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_BaseChaosCar_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseChaosCar(); \
	friend struct Z_Construct_UClass_ABaseChaosCar_Statics; \
public: \
	DECLARE_CLASS(ABaseChaosCar, AWheeledVehiclePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TeamProjectWheelz"), NO_API) \
	DECLARE_SERIALIZER(ABaseChaosCar)


#define FID_Temp_Github_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_BaseChaosCar_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseChaosCar(ABaseChaosCar&&); \
	ABaseChaosCar(const ABaseChaosCar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseChaosCar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseChaosCar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseChaosCar) \
	NO_API virtual ~ABaseChaosCar();


#define FID_Temp_Github_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_BaseChaosCar_h_16_PROLOG
#define FID_Temp_Github_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_BaseChaosCar_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Temp_Github_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_BaseChaosCar_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Temp_Github_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_BaseChaosCar_h_19_INCLASS_NO_PURE_DECLS \
	FID_Temp_Github_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_BaseChaosCar_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAMPROJECTWHEELZ_API UClass* StaticClass<class ABaseChaosCar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Temp_Github_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_BaseChaosCar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
