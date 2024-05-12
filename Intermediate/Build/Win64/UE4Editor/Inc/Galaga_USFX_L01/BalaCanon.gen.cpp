// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/BalaCanon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBalaCanon() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ABalaCanon_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ABalaCanon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABalaCanon::StaticRegisterNativesABalaCanon()
	{
	}
	UClass* Z_Construct_UClass_ABalaCanon_NoRegister()
	{
		return ABalaCanon::StaticClass();
	}
	struct Z_Construct_UClass_ABalaCanon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MallaBala_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MallaBala;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABalaCanon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABalaCanon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BalaCanon.h" },
		{ "ModuleRelativePath", "BalaCanon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABalaCanon_Statics::NewProp_MallaBala_MetaData[] = {
		{ "AllowPrivate", "" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BalaCanon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABalaCanon_Statics::NewProp_MallaBala = { "MallaBala", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABalaCanon, MallaBala), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABalaCanon_Statics::NewProp_MallaBala_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABalaCanon_Statics::NewProp_MallaBala_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABalaCanon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABalaCanon_Statics::NewProp_MallaBala,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABalaCanon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABalaCanon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABalaCanon_Statics::ClassParams = {
		&ABalaCanon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABalaCanon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABalaCanon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABalaCanon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABalaCanon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABalaCanon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABalaCanon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABalaCanon, 1028360424);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ABalaCanon>()
	{
		return ABalaCanon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABalaCanon(Z_Construct_UClass_ABalaCanon, &ABalaCanon::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ABalaCanon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABalaCanon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
