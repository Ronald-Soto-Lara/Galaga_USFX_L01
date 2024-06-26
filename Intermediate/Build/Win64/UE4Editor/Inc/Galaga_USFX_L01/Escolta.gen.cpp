// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/Escolta.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscolta() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEscolta_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEscolta();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AEscolta::StaticRegisterNativesAEscolta()
	{
	}
	UClass* Z_Construct_UClass_AEscolta_NoRegister()
	{
		return AEscolta::StaticClass();
	}
	struct Z_Construct_UClass_AEscolta_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MallaDeLaEscolta_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MallaDeLaEscolta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_velocidad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_velocidad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimiteInferior_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimiteInferior;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimiteSuperior_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimiteSuperior;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMoviendoHaciaArriba_MetaData[];
#endif
		static void NewProp_bMoviendoHaciaArriba_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoviendoHaciaArriba;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscolta_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscolta_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Escolta.h" },
		{ "ModuleRelativePath", "Escolta.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscolta_Statics::NewProp_MallaDeLaEscolta_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Escolta.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscolta_Statics::NewProp_MallaDeLaEscolta = { "MallaDeLaEscolta", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscolta, MallaDeLaEscolta), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscolta_Statics::NewProp_MallaDeLaEscolta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscolta_Statics::NewProp_MallaDeLaEscolta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscolta_Statics::NewProp_velocidad_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Escolta.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEscolta_Statics::NewProp_velocidad = { "velocidad", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscolta, velocidad), METADATA_PARAMS(Z_Construct_UClass_AEscolta_Statics::NewProp_velocidad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscolta_Statics::NewProp_velocidad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscolta_Statics::NewProp_LimiteInferior_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Escolta.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEscolta_Statics::NewProp_LimiteInferior = { "LimiteInferior", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscolta, LimiteInferior), METADATA_PARAMS(Z_Construct_UClass_AEscolta_Statics::NewProp_LimiteInferior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscolta_Statics::NewProp_LimiteInferior_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscolta_Statics::NewProp_LimiteSuperior_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Escolta.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEscolta_Statics::NewProp_LimiteSuperior = { "LimiteSuperior", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscolta, LimiteSuperior), METADATA_PARAMS(Z_Construct_UClass_AEscolta_Statics::NewProp_LimiteSuperior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscolta_Statics::NewProp_LimiteSuperior_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscolta_Statics::NewProp_bMoviendoHaciaArriba_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Escolta.h" },
	};
#endif
	void Z_Construct_UClass_AEscolta_Statics::NewProp_bMoviendoHaciaArriba_SetBit(void* Obj)
	{
		((AEscolta*)Obj)->bMoviendoHaciaArriba = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEscolta_Statics::NewProp_bMoviendoHaciaArriba = { "bMoviendoHaciaArriba", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEscolta), &Z_Construct_UClass_AEscolta_Statics::NewProp_bMoviendoHaciaArriba_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEscolta_Statics::NewProp_bMoviendoHaciaArriba_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscolta_Statics::NewProp_bMoviendoHaciaArriba_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEscolta_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscolta_Statics::NewProp_MallaDeLaEscolta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscolta_Statics::NewProp_velocidad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscolta_Statics::NewProp_LimiteInferior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscolta_Statics::NewProp_LimiteSuperior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscolta_Statics::NewProp_bMoviendoHaciaArriba,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscolta_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscolta>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscolta_Statics::ClassParams = {
		&AEscolta::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEscolta_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEscolta_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEscolta_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscolta_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscolta()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscolta_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscolta, 785389846);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AEscolta>()
	{
		return AEscolta::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscolta(Z_Construct_UClass_AEscolta, &AEscolta::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AEscolta"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscolta);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
