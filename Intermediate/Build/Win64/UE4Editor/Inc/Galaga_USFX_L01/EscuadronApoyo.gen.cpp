// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/EscuadronApoyo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscuadronApoyo() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEscuadronApoyo_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEscuadronApoyo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AEscuadronApoyo::StaticRegisterNativesAEscuadronApoyo()
	{
	}
	UClass* Z_Construct_UClass_AEscuadronApoyo_NoRegister()
	{
		return AEscuadronApoyo::StaticClass();
	}
	struct Z_Construct_UClass_AEscuadronApoyo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscuadronApoyo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscuadronApoyo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EscuadronApoyo.h" },
		{ "ModuleRelativePath", "EscuadronApoyo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscuadronApoyo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscuadronApoyo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscuadronApoyo_Statics::ClassParams = {
		&AEscuadronApoyo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEscuadronApoyo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscuadronApoyo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscuadronApoyo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscuadronApoyo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscuadronApoyo, 3410239714);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AEscuadronApoyo>()
	{
		return AEscuadronApoyo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscuadronApoyo(Z_Construct_UClass_AEscuadronApoyo, &AEscuadronApoyo::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AEscuadronApoyo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscuadronApoyo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
