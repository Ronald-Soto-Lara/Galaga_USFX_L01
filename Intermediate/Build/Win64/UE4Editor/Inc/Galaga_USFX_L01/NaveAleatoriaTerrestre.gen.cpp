// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/NaveAleatoriaTerrestre.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveAleatoriaTerrestre() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveAleatoriaTerrestre_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveAleatoriaTerrestre();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ANaveAleatoriaTerrestre::StaticRegisterNativesANaveAleatoriaTerrestre()
	{
	}
	UClass* Z_Construct_UClass_ANaveAleatoriaTerrestre_NoRegister()
	{
		return ANaveAleatoriaTerrestre::StaticClass();
	}
	struct Z_Construct_UClass_ANaveAleatoriaTerrestre_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MallaNaveTerrestre_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MallaNaveTerrestre;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveAleatoriaTerrestre_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAleatoriaTerrestre_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveAleatoriaTerrestre.h" },
		{ "ModuleRelativePath", "NaveAleatoriaTerrestre.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAleatoriaTerrestre_Statics::NewProp_MallaNaveTerrestre_MetaData[] = {
		{ "AllowPrivate", "" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveAleatoriaTerrestre.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveAleatoriaTerrestre_Statics::NewProp_MallaNaveTerrestre = { "MallaNaveTerrestre", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveAleatoriaTerrestre, MallaNaveTerrestre), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveAleatoriaTerrestre_Statics::NewProp_MallaNaveTerrestre_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAleatoriaTerrestre_Statics::NewProp_MallaNaveTerrestre_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveAleatoriaTerrestre_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveAleatoriaTerrestre_Statics::NewProp_MallaNaveTerrestre,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveAleatoriaTerrestre_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveAleatoriaTerrestre>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveAleatoriaTerrestre_Statics::ClassParams = {
		&ANaveAleatoriaTerrestre::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveAleatoriaTerrestre_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAleatoriaTerrestre_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveAleatoriaTerrestre_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAleatoriaTerrestre_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveAleatoriaTerrestre()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveAleatoriaTerrestre_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveAleatoriaTerrestre, 1969218130);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ANaveAleatoriaTerrestre>()
	{
		return ANaveAleatoriaTerrestre::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveAleatoriaTerrestre(Z_Construct_UClass_ANaveAleatoriaTerrestre, &ANaveAleatoriaTerrestre::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ANaveAleatoriaTerrestre"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveAleatoriaTerrestre);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
