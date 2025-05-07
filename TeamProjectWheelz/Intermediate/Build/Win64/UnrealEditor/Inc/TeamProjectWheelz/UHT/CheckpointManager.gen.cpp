// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamProjectWheelz/CheckpointManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckpointManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
TEAMPROJECTWHEELZ_API UClass* Z_Construct_UClass_ACheckpoint_NoRegister();
TEAMPROJECTWHEELZ_API UClass* Z_Construct_UClass_ACheckpointManager();
TEAMPROJECTWHEELZ_API UClass* Z_Construct_UClass_ACheckpointManager_NoRegister();
TEAMPROJECTWHEELZ_API UScriptStruct* Z_Construct_UScriptStruct_FCarData();
TEAMPROJECTWHEELZ_API UScriptStruct* Z_Construct_UScriptStruct_FCheckpointData();
TEAMPROJECTWHEELZ_API UScriptStruct* Z_Construct_UScriptStruct_FPositionChecker();
UPackage* Z_Construct_UPackage__Script_TeamProjectWheelz();
// End Cross Module References

// Begin ScriptStruct FCheckpointData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CheckpointData;
class UScriptStruct* FCheckpointData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CheckpointData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CheckpointData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCheckpointData, (UObject*)Z_Construct_UPackage__Script_TeamProjectWheelz(), TEXT("CheckpointData"));
	}
	return Z_Registration_Info_UScriptStruct_CheckpointData.OuterSingleton;
}
template<> TEAMPROJECTWHEELZ_API UScriptStruct* StaticStruct<FCheckpointData>()
{
	return FCheckpointData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCheckpointData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "CheckpointManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_checkpointIndex_MetaData[] = {
		{ "Category", "Checkpoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The ID of the checkpoint used to identify the checkpoint, Don't change this unless you know what you're doing\n" },
#endif
		{ "ModuleRelativePath", "CheckpointManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ID of the checkpoint used to identify the checkpoint, Don't change this unless you know what you're doing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_checkpointVariant_MetaData[] = {
		{ "Category", "Checkpoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used to select which checkpoint to spawn from the array of possible checkpoints put into \"PossibleCheckpointBlueprints\". Default is 0\n" },
#endif
		{ "ModuleRelativePath", "CheckpointManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to select which checkpoint to spawn from the array of possible checkpoints put into \"PossibleCheckpointBlueprints\". Default is 0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSpeed_MetaData[] = {
		{ "Category", "Checkpoint" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used to set the AI's target speed for this checkpoint, this is the trarget speed going toward the checkpoint from the previous one, this one to the next one. Default is 1.6\n" },
#endif
		{ "ModuleRelativePath", "CheckpointManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to set the AI's target speed for this checkpoint, this is the trarget speed going toward the checkpoint from the previous one, this one to the next one. Default is 1.6" },
#endif
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsShortcut_MetaData[] = {
		{ "Category", "Checkpoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used to set if the AI will skip the next checkpoint if this is true. Used for the begining of a shortcut, not the end or the part that is skipped. Default is false\n" },
#endif
		{ "ModuleRelativePath", "CheckpointManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to set if the AI will skip the next checkpoint if this is true. Used for the begining of a shortcut, not the end or the part that is skipped. Default is false" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoop_MetaData[] = {
		{ "Category", "Checkpoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED: Used to set if the checkpoint is a loop or not, this is used for the end of a loop, not the start. Default is false, no longer in use\n" },
#endif
		{ "ModuleRelativePath", "CheckpointManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: Used to set if the checkpoint is a loop or not, this is used for the end of a loop, not the start. Default is false, no longer in use" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_checkpointIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_checkpointVariant;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetSpeed;
	static void NewProp_bIsShortcut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsShortcut;
	static void NewProp_bIsLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCheckpointData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_checkpointIndex = { "checkpointIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckpointData, checkpointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_checkpointIndex_MetaData), NewProp_checkpointIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_checkpointVariant = { "checkpointVariant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckpointData, checkpointVariant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_checkpointVariant_MetaData), NewProp_checkpointVariant_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_TargetSpeed = { "TargetSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckpointData, TargetSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSpeed_MetaData), NewProp_TargetSpeed_MetaData) };
void Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_bIsShortcut_SetBit(void* Obj)
{
	((FCheckpointData*)Obj)->bIsShortcut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_bIsShortcut = { "bIsShortcut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCheckpointData), &Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_bIsShortcut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsShortcut_MetaData), NewProp_bIsShortcut_MetaData) };
void Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_bIsLoop_SetBit(void* Obj)
{
	((FCheckpointData*)Obj)->bIsLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_bIsLoop = { "bIsLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCheckpointData), &Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_bIsLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLoop_MetaData), NewProp_bIsLoop_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCheckpointData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_checkpointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_checkpointVariant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_TargetSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_bIsShortcut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckpointData_Statics::NewProp_bIsLoop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckpointData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCheckpointData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TeamProjectWheelz,
	nullptr,
	&NewStructOps,
	"CheckpointData",
	Z_Construct_UScriptStruct_FCheckpointData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckpointData_Statics::PropPointers),
	sizeof(FCheckpointData),
	alignof(FCheckpointData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckpointData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCheckpointData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCheckpointData()
{
	if (!Z_Registration_Info_UScriptStruct_CheckpointData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CheckpointData.InnerSingleton, Z_Construct_UScriptStruct_FCheckpointData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CheckpointData.InnerSingleton;
}
// End ScriptStruct FCheckpointData

// Begin ScriptStruct FCarData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CarData;
class UScriptStruct* FCarData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CarData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CarData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCarData, (UObject*)Z_Construct_UPackage__Script_TeamProjectWheelz(), TEXT("CarData"));
	}
	return Z_Registration_Info_UScriptStruct_CarData.OuterSingleton;
}
template<> TEAMPROJECTWHEELZ_API UScriptStruct* StaticStruct<FCarData>()
{
	return FCarData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCarData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "CheckpointManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarID_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The ID of the car used to identify the car, Don't change this unless you know what you're doing\n" },
#endif
		{ "ModuleRelativePath", "CheckpointManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ID of the car used to identify the car, Don't change this unless you know what you're doing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RacePositionValue_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Race position value taken from the car to determine what position the car is in\n" },
#endif
		{ "ModuleRelativePath", "CheckpointManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Race position value taken from the car to determine what position the car is in" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The current race position of the car, Don't change this unless you know what you're doing\n" },
#endif
		{ "ModuleRelativePath", "CheckpointManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current race position of the car, Don't change this unless you know what you're doing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriverName_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Racer's name\n" },
#endif
		{ "ModuleRelativePath", "CheckpointManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Racer's name" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CarID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RacePositionValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DriverName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCarData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCarData_Statics::NewProp_CarID = { "CarID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCarData, CarID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarID_MetaData), NewProp_CarID_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCarData_Statics::NewProp_RacePositionValue = { "RacePositionValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCarData, RacePositionValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RacePositionValue_MetaData), NewProp_RacePositionValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCarData_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCarData, Position), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCarData_Statics::NewProp_DriverName = { "DriverName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCarData, DriverName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriverName_MetaData), NewProp_DriverName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCarData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCarData_Statics::NewProp_CarID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCarData_Statics::NewProp_RacePositionValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCarData_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCarData_Statics::NewProp_DriverName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCarData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCarData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TeamProjectWheelz,
	nullptr,
	&NewStructOps,
	"CarData",
	Z_Construct_UScriptStruct_FCarData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCarData_Statics::PropPointers),
	sizeof(FCarData),
	alignof(FCarData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCarData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCarData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCarData()
{
	if (!Z_Registration_Info_UScriptStruct_CarData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CarData.InnerSingleton, Z_Construct_UScriptStruct_FCarData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CarData.InnerSingleton;
}
// End ScriptStruct FCarData

// Begin ScriptStruct FPositionChecker
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PositionChecker;
class UScriptStruct* FPositionChecker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PositionChecker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PositionChecker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPositionChecker, (UObject*)Z_Construct_UPackage__Script_TeamProjectWheelz(), TEXT("PositionChecker"));
	}
	return Z_Registration_Info_UScriptStruct_PositionChecker.OuterSingleton;
}
template<> TEAMPROJECTWHEELZ_API UScriptStruct* StaticStruct<FPositionChecker>()
{
	return FPositionChecker::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPositionChecker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "CheckpointManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarID_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The ID of the car used to identify the car, Don't change this unless you know what you're doing\n" },
#endif
		{ "ModuleRelativePath", "CheckpointManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ID of the car used to identify the car, Don't change this unless you know what you're doing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RacePositionValue_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The taken RacePositionValue from the car to determine what position the car is in\n" },
#endif
		{ "ModuleRelativePath", "CheckpointManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The taken RacePositionValue from the car to determine what position the car is in" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriverName_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Racer's name\n" },
#endif
		{ "ModuleRelativePath", "CheckpointManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Racer's name" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CarID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RacePositionValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DriverName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPositionChecker>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPositionChecker_Statics::NewProp_CarID = { "CarID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPositionChecker, CarID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarID_MetaData), NewProp_CarID_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPositionChecker_Statics::NewProp_RacePositionValue = { "RacePositionValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPositionChecker, RacePositionValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RacePositionValue_MetaData), NewProp_RacePositionValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPositionChecker_Statics::NewProp_DriverName = { "DriverName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPositionChecker, DriverName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriverName_MetaData), NewProp_DriverName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPositionChecker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPositionChecker_Statics::NewProp_CarID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPositionChecker_Statics::NewProp_RacePositionValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPositionChecker_Statics::NewProp_DriverName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPositionChecker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPositionChecker_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TeamProjectWheelz,
	nullptr,
	&NewStructOps,
	"PositionChecker",
	Z_Construct_UScriptStruct_FPositionChecker_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPositionChecker_Statics::PropPointers),
	sizeof(FPositionChecker),
	alignof(FPositionChecker),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPositionChecker_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPositionChecker_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPositionChecker()
{
	if (!Z_Registration_Info_UScriptStruct_PositionChecker.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PositionChecker.InnerSingleton, Z_Construct_UScriptStruct_FPositionChecker_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PositionChecker.InnerSingleton;
}
// End ScriptStruct FPositionChecker

// Begin Class ACheckpointManager
void ACheckpointManager::StaticRegisterNativesACheckpointManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACheckpointManager);
UClass* Z_Construct_UClass_ACheckpointManager_NoRegister()
{
	return ACheckpointManager::StaticClass();
}
struct Z_Construct_UClass_ACheckpointManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CheckpointManager.h" },
		{ "ModuleRelativePath", "CheckpointManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfCheckpoints_MetaData[] = {
		{ "Category", "Checkpoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of checkpoints, value is created in the editor\n" },
#endif
		{ "ModuleRelativePath", "CheckpointManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of checkpoints, value is created in the editor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckpointBlueprint_MetaData[] = {
		{ "Category", "Checkpoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reference to the Blueprint class of the Checkpoint\n" },
#endif
		{ "ModuleRelativePath", "CheckpointManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the Blueprint class of the Checkpoint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Checkpoint_MetaData[] = {
		{ "Category", "Checkpoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Single reference to a spawned Checkpoint object\n" },
#endif
		{ "ModuleRelativePath", "CheckpointManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Single reference to a spawned Checkpoint object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PossibleCheckpointBlueprints_MetaData[] = {
		{ "Category", "Checkpoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array of possible checkpoint blueprints to spawn, starts at 0 and goes to the number of checkpoints\n" },
#endif
		{ "ModuleRelativePath", "CheckpointManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of possible checkpoint blueprints to spawn, starts at 0 and goes to the number of checkpoints" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckpointDataArray_MetaData[] = {
		{ "Category", "Checkpoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The array of checkpoints to spawn, this is the array of checkpoints that will be spawned in the level, this is where you can edit the checkpoints settings, when changing them and the change isnt there, delete all checkpoints NOT THE MANAGER, and then move a spline node slightly to regenerate the checkpoints with the correct settings\n" },
#endif
		{ "ModuleRelativePath", "CheckpointManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The array of checkpoints to spawn, this is the array of checkpoints that will be spawned in the level, this is where you can edit the checkpoints settings, when changing them and the change isnt there, delete all checkpoints NOT THE MANAGER, and then move a spline node slightly to regenerate the checkpoints with the correct settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedCheckpoints_MetaData[] = {
		{ "Category", "Checkpoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array of spawned checkpoints, don't change this unless you know what you're doing.\n" },
#endif
		{ "ModuleRelativePath", "CheckpointManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of spawned checkpoints, don't change this unless you know what you're doing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarDataArray_MetaData[] = {
		{ "Category", "Checkpoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array of stored cars, don't change this unless you know what you're doing.\n" },
#endif
		{ "ModuleRelativePath", "CheckpointManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of stored cars, don't change this unless you know what you're doing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionChecker_MetaData[] = {
		{ "Category", "Checkpoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array for checking what position the cars are in\n" },
#endif
		{ "ModuleRelativePath", "CheckpointManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array for checking what position the cars are in" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[] = {
		{ "Category", "Checkpoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spline component for defining checkpoint positions\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CheckpointManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spline component for defining checkpoint positions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeakDriverNames_MetaData[] = {
		{ "Category", "Checkpoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// An array of names for the weak AI drivers\n" },
#endif
		{ "ModuleRelativePath", "CheckpointManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An array of names for the weak AI drivers" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrongDriverNames_MetaData[] = {
		{ "Category", "Checkpoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// An array of names for the strong AI drivers\n" },
#endif
		{ "ModuleRelativePath", "CheckpointManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An array of names for the strong AI drivers" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfCheckpoints;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CheckpointBlueprint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Checkpoint;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PossibleCheckpointBlueprints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PossibleCheckpointBlueprints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheckpointDataArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CheckpointDataArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedCheckpoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedCheckpoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CarDataArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CarDataArray;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionChecker_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PositionChecker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WeakDriverNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeakDriverNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StrongDriverNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StrongDriverNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACheckpointManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACheckpointManager_Statics::NewProp_NumberOfCheckpoints = { "NumberOfCheckpoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpointManager, NumberOfCheckpoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfCheckpoints_MetaData), NewProp_NumberOfCheckpoints_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACheckpointManager_Statics::NewProp_CheckpointBlueprint = { "CheckpointBlueprint", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpointManager, CheckpointBlueprint), Z_Construct_UClass_UClass, Z_Construct_UClass_ACheckpoint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckpointBlueprint_MetaData), NewProp_CheckpointBlueprint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckpointManager_Statics::NewProp_Checkpoint = { "Checkpoint", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpointManager, Checkpoint), Z_Construct_UClass_ACheckpoint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Checkpoint_MetaData), NewProp_Checkpoint_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACheckpointManager_Statics::NewProp_PossibleCheckpointBlueprints_Inner = { "PossibleCheckpointBlueprints", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ACheckpoint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACheckpointManager_Statics::NewProp_PossibleCheckpointBlueprints = { "PossibleCheckpointBlueprints", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpointManager, PossibleCheckpointBlueprints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PossibleCheckpointBlueprints_MetaData), NewProp_PossibleCheckpointBlueprints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACheckpointManager_Statics::NewProp_CheckpointDataArray_Inner = { "CheckpointDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCheckpointData, METADATA_PARAMS(0, nullptr) }; // 3841238250
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACheckpointManager_Statics::NewProp_CheckpointDataArray = { "CheckpointDataArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpointManager, CheckpointDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckpointDataArray_MetaData), NewProp_CheckpointDataArray_MetaData) }; // 3841238250
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckpointManager_Statics::NewProp_SpawnedCheckpoints_Inner = { "SpawnedCheckpoints", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ACheckpoint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACheckpointManager_Statics::NewProp_SpawnedCheckpoints = { "SpawnedCheckpoints", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpointManager, SpawnedCheckpoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedCheckpoints_MetaData), NewProp_SpawnedCheckpoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACheckpointManager_Statics::NewProp_CarDataArray_Inner = { "CarDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCarData, METADATA_PARAMS(0, nullptr) }; // 1415026926
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACheckpointManager_Statics::NewProp_CarDataArray = { "CarDataArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpointManager, CarDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarDataArray_MetaData), NewProp_CarDataArray_MetaData) }; // 1415026926
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACheckpointManager_Statics::NewProp_PositionChecker_Inner = { "PositionChecker", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPositionChecker, METADATA_PARAMS(0, nullptr) }; // 2897790537
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACheckpointManager_Statics::NewProp_PositionChecker = { "PositionChecker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpointManager, PositionChecker), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionChecker_MetaData), NewProp_PositionChecker_MetaData) }; // 2897790537
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckpointManager_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpointManager, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineComponent_MetaData), NewProp_SplineComponent_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACheckpointManager_Statics::NewProp_WeakDriverNames_Inner = { "WeakDriverNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACheckpointManager_Statics::NewProp_WeakDriverNames = { "WeakDriverNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpointManager, WeakDriverNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeakDriverNames_MetaData), NewProp_WeakDriverNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACheckpointManager_Statics::NewProp_StrongDriverNames_Inner = { "StrongDriverNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACheckpointManager_Statics::NewProp_StrongDriverNames = { "StrongDriverNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpointManager, StrongDriverNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrongDriverNames_MetaData), NewProp_StrongDriverNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACheckpointManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpointManager_Statics::NewProp_NumberOfCheckpoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpointManager_Statics::NewProp_CheckpointBlueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpointManager_Statics::NewProp_Checkpoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpointManager_Statics::NewProp_PossibleCheckpointBlueprints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpointManager_Statics::NewProp_PossibleCheckpointBlueprints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpointManager_Statics::NewProp_CheckpointDataArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpointManager_Statics::NewProp_CheckpointDataArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpointManager_Statics::NewProp_SpawnedCheckpoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpointManager_Statics::NewProp_SpawnedCheckpoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpointManager_Statics::NewProp_CarDataArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpointManager_Statics::NewProp_CarDataArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpointManager_Statics::NewProp_PositionChecker_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpointManager_Statics::NewProp_PositionChecker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpointManager_Statics::NewProp_SplineComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpointManager_Statics::NewProp_WeakDriverNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpointManager_Statics::NewProp_WeakDriverNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpointManager_Statics::NewProp_StrongDriverNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpointManager_Statics::NewProp_StrongDriverNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpointManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACheckpointManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamProjectWheelz,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpointManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACheckpointManager_Statics::ClassParams = {
	&ACheckpointManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACheckpointManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpointManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpointManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ACheckpointManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACheckpointManager()
{
	if (!Z_Registration_Info_UClass_ACheckpointManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACheckpointManager.OuterSingleton, Z_Construct_UClass_ACheckpointManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACheckpointManager.OuterSingleton;
}
template<> TEAMPROJECTWHEELZ_API UClass* StaticClass<ACheckpointManager>()
{
	return ACheckpointManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACheckpointManager);
ACheckpointManager::~ACheckpointManager() {}
// End Class ACheckpointManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_TeamProject_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_CheckpointManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCheckpointData::StaticStruct, Z_Construct_UScriptStruct_FCheckpointData_Statics::NewStructOps, TEXT("CheckpointData"), &Z_Registration_Info_UScriptStruct_CheckpointData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCheckpointData), 3841238250U) },
		{ FCarData::StaticStruct, Z_Construct_UScriptStruct_FCarData_Statics::NewStructOps, TEXT("CarData"), &Z_Registration_Info_UScriptStruct_CarData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCarData), 1415026926U) },
		{ FPositionChecker::StaticStruct, Z_Construct_UScriptStruct_FPositionChecker_Statics::NewStructOps, TEXT("PositionChecker"), &Z_Registration_Info_UScriptStruct_PositionChecker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPositionChecker), 2897790537U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACheckpointManager, ACheckpointManager::StaticClass, TEXT("ACheckpointManager"), &Z_Registration_Info_UClass_ACheckpointManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACheckpointManager), 4079422501U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_TeamProject_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_CheckpointManager_h_536844930(TEXT("/Script/TeamProjectWheelz"),
	Z_CompiledInDeferFile_FID_Git_TeamProject_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_CheckpointManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_TeamProject_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_CheckpointManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Git_TeamProject_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_CheckpointManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_TeamProject_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_CheckpointManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
