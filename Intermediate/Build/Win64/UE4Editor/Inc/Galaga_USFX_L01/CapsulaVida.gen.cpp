// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/CapsulaVida.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsulaVida() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ACapsulaVida_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ACapsulaVida();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACapsulaVida::StaticRegisterNativesACapsulaVida()
	{
	}
	UClass* Z_Construct_UClass_ACapsulaVida_NoRegister()
	{
		return ACapsulaVida::StaticClass();
	}
	struct Z_Construct_UClass_ACapsulaVida_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MallaDeLaCapsulaVida_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MallaDeLaCapsulaVida;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsulaVida_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulaVida_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CapsulaVida.h" },
		{ "ModuleRelativePath", "CapsulaVida.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulaVida_Statics::NewProp_MallaDeLaCapsulaVida_MetaData[] = {
		{ "Category", "CapsulaVida" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CapsulaVida.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapsulaVida_Statics::NewProp_MallaDeLaCapsulaVida = { "MallaDeLaCapsulaVida", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACapsulaVida, MallaDeLaCapsulaVida), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapsulaVida_Statics::NewProp_MallaDeLaCapsulaVida_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulaVida_Statics::NewProp_MallaDeLaCapsulaVida_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACapsulaVida_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapsulaVida_Statics::NewProp_MallaDeLaCapsulaVida,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsulaVida_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsulaVida>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsulaVida_Statics::ClassParams = {
		&ACapsulaVida::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACapsulaVida_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulaVida_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACapsulaVida_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulaVida_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsulaVida()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsulaVida_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsulaVida, 901033109);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ACapsulaVida>()
	{
		return ACapsulaVida::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsulaVida(Z_Construct_UClass_ACapsulaVida, &ACapsulaVida::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ACapsulaVida"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsulaVida);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
