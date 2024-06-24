// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/ProyectilEnemigo_5.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProyectilEnemigo_5() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AProyectilEnemigo_5_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AProyectilEnemigo_5();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AProyectilEnemigo_5::StaticRegisterNativesAProyectilEnemigo_5()
	{
	}
	UClass* Z_Construct_UClass_AProyectilEnemigo_5_NoRegister()
	{
		return AProyectilEnemigo_5::StaticClass();
	}
	struct Z_Construct_UClass_AProyectilEnemigo_5_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProyectilEnemigo_5_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectilEnemigo_5_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProyectilEnemigo_5.h" },
		{ "ModuleRelativePath", "ProyectilEnemigo_5.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProyectilEnemigo_5_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProyectilEnemigo_5>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProyectilEnemigo_5_Statics::ClassParams = {
		&AProyectilEnemigo_5::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProyectilEnemigo_5_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectilEnemigo_5_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProyectilEnemigo_5()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProyectilEnemigo_5_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProyectilEnemigo_5, 1023275748);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AProyectilEnemigo_5>()
	{
		return AProyectilEnemigo_5::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProyectilEnemigo_5(Z_Construct_UClass_AProyectilEnemigo_5, &AProyectilEnemigo_5::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AProyectilEnemigo_5"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProyectilEnemigo_5);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
