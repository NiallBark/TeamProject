// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamProjectWheelz/BaseChaosCar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseChaosCar() {}

// Begin Cross Module References
CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
TEAMPROJECTWHEELZ_API UClass* Z_Construct_UClass_ABaseChaosCar();
TEAMPROJECTWHEELZ_API UClass* Z_Construct_UClass_ABaseChaosCar_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamProjectWheelz();
// End Cross Module References

// Begin Class ABaseChaosCar
void ABaseChaosCar::StaticRegisterNativesABaseChaosCar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseChaosCar);
UClass* Z_Construct_UClass_ABaseChaosCar_NoRegister()
{
	return ABaseChaosCar::StaticClass();
}
struct Z_Construct_UClass_ABaseChaosCar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseChaosCar.h" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrueSpeed_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Car True Speed\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Car True Speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplaySpeed_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Car Display Speed\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Car Display Speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportCooldownTimer_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Car's Teleport Cooldown Timer To Prevent Multiple Teleports In The Same Teleporter\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Car's Teleport Cooldown Timer To Prevent Multiple Teleports In The Same Teleporter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarCamera_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Car Camera\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Car Camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarSpringArm_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Car Spring Arm\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Car Spring Arm" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriftTimer_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Drift Timer\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drift Timer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDrifting_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Car Drift Bool\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Car Drift Bool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriftMaxTime_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Drift Max Time\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drift Max Time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriftFriction_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Car Drift Friction\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Car Drift Friction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFriction_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Car Default Friction\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Car Default Friction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFriction_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Car Current Friction\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Car Current Friction" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TrueSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplaySpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportCooldownTimer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CarCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CarSpringArm;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DriftTimer;
	static void NewProp_bIsDrifting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDrifting;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DriftMaxTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DriftFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentFriction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseChaosCar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_TrueSpeed = { "TrueSpeed", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, TrueSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrueSpeed_MetaData), NewProp_TrueSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DisplaySpeed = { "DisplaySpeed", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, DisplaySpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplaySpeed_MetaData), NewProp_DisplaySpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_TeleportCooldownTimer = { "TeleportCooldownTimer", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, TeleportCooldownTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportCooldownTimer_MetaData), NewProp_TeleportCooldownTimer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_CarCamera = { "CarCamera", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, CarCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarCamera_MetaData), NewProp_CarCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_CarSpringArm = { "CarSpringArm", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, CarSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarSpringArm_MetaData), NewProp_CarSpringArm_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DriftTimer = { "DriftTimer", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, DriftTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriftTimer_MetaData), NewProp_DriftTimer_MetaData) };
void Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_bIsDrifting_SetBit(void* Obj)
{
	((ABaseChaosCar*)Obj)->bIsDrifting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_bIsDrifting = { "bIsDrifting", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseChaosCar), &Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_bIsDrifting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDrifting_MetaData), NewProp_bIsDrifting_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DriftMaxTime = { "DriftMaxTime", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, DriftMaxTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriftMaxTime_MetaData), NewProp_DriftMaxTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DriftFriction = { "DriftFriction", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, DriftFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriftFriction_MetaData), NewProp_DriftFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DefaultFriction = { "DefaultFriction", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, DefaultFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFriction_MetaData), NewProp_DefaultFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_CurrentFriction = { "CurrentFriction", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, CurrentFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentFriction_MetaData), NewProp_CurrentFriction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseChaosCar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_TrueSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DisplaySpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_TeleportCooldownTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_CarCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_CarSpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DriftTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_bIsDrifting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DriftMaxTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DriftFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DefaultFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_CurrentFriction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseChaosCar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseChaosCar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWheeledVehiclePawn,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamProjectWheelz,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseChaosCar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseChaosCar_Statics::ClassParams = {
	&ABaseChaosCar::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABaseChaosCar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseChaosCar_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseChaosCar_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseChaosCar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseChaosCar()
{
	if (!Z_Registration_Info_UClass_ABaseChaosCar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseChaosCar.OuterSingleton, Z_Construct_UClass_ABaseChaosCar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseChaosCar.OuterSingleton;
}
template<> TEAMPROJECTWHEELZ_API UClass* StaticClass<ABaseChaosCar>()
{
	return ABaseChaosCar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseChaosCar);
ABaseChaosCar::~ABaseChaosCar() {}
// End Class ABaseChaosCar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_100627439_Desktop_Github_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_BaseChaosCar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseChaosCar, ABaseChaosCar::StaticClass, TEXT("ABaseChaosCar"), &Z_Registration_Info_UClass_ABaseChaosCar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseChaosCar), 1603605323U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_100627439_Desktop_Github_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_BaseChaosCar_h_1422340643(TEXT("/Script/TeamProjectWheelz"),
	Z_CompiledInDeferFile_FID_Users_100627439_Desktop_Github_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_BaseChaosCar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_100627439_Desktop_Github_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_BaseChaosCar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
