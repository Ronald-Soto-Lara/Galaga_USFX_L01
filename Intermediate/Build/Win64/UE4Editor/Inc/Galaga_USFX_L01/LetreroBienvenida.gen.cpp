// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/LetreroBienvenida.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLetreroBienvenida() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ALetreroBienvenida_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ALetreroBienvenida();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ALetreroBienvenida::StaticRegisterNativesALetreroBienvenida()
	{
	}
	UClass* Z_Construct_UClass_ALetreroBienvenida_NoRegister()
	{
		return ALetreroBienvenida::StaticClass();
	}
	struct Z_Construct_UClass_ALetreroBienvenida_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALetreroBienvenida_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALetreroBienvenida_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "LetreroBienvenida.h" },
		{ "ModuleRelativePath", "LetreroBienvenida.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALetreroBienvenida_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALetreroBienvenida>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALetreroBienvenida_Statics::ClassParams = {
		&ALetreroBienvenida::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALetreroBienvenida_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALetreroBienvenida_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALetreroBienvenida()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALetreroBienvenida_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALetreroBienvenida, 4105572853);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ALetreroBienvenida>()
	{
		return ALetreroBienvenida::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALetreroBienvenida(Z_Construct_UClass_ALetreroBienvenida, &ALetreroBienvenida::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ALetreroBienvenida"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALetreroBienvenida);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
