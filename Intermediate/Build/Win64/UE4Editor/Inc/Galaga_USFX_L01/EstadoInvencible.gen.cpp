// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/EstadoInvencible.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoInvencible() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEstadoInvencible_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEstadoInvencible();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AGalaga_USFX_L01Pawn_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UEstados_NoRegister();
// End Cross Module References
	void AEstadoInvencible::StaticRegisterNativesAEstadoInvencible()
	{
	}
	UClass* Z_Construct_UClass_AEstadoInvencible_NoRegister()
	{
		return AEstadoInvencible::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoInvencible_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoInvencible_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoInvencible_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoInvencible.h" },
		{ "ModuleRelativePath", "EstadoInvencible.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoInvencible_Statics::NewProp_Pawn_MetaData[] = {
		{ "Category", "PawnInvencible" },
		{ "ModuleRelativePath", "EstadoInvencible.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEstadoInvencible_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEstadoInvencible, Pawn), Z_Construct_UClass_AGalaga_USFX_L01Pawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEstadoInvencible_Statics::NewProp_Pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoInvencible_Statics::NewProp_Pawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEstadoInvencible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEstadoInvencible_Statics::NewProp_Pawn,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoInvencible_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstados_NoRegister, (int32)VTABLE_OFFSET(AEstadoInvencible, IEstados), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoInvencible_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoInvencible>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoInvencible_Statics::ClassParams = {
		&AEstadoInvencible::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEstadoInvencible_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoInvencible_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstadoInvencible_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoInvencible_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoInvencible()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoInvencible_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoInvencible, 3701883362);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AEstadoInvencible>()
	{
		return AEstadoInvencible::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoInvencible(Z_Construct_UClass_AEstadoInvencible, &AEstadoInvencible::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AEstadoInvencible"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoInvencible);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
