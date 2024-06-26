// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/Proteccion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProteccion() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AProteccion_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AProteccion();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AProteccion::StaticRegisterNativesAProteccion()
	{
	}
	UClass* Z_Construct_UClass_AProteccion_NoRegister()
	{
		return AProteccion::StaticClass();
	}
	struct Z_Construct_UClass_AProteccion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MallaDeLaProteccion_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MallaDeLaProteccion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProteccion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProteccion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Proteccion.h" },
		{ "ModuleRelativePath", "Proteccion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProteccion_Statics::NewProp_MallaDeLaProteccion_MetaData[] = {
		{ "Category", "Proteccion" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Proteccion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProteccion_Statics::NewProp_MallaDeLaProteccion = { "MallaDeLaProteccion", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProteccion, MallaDeLaProteccion), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProteccion_Statics::NewProp_MallaDeLaProteccion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProteccion_Statics::NewProp_MallaDeLaProteccion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProteccion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProteccion_Statics::NewProp_MallaDeLaProteccion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProteccion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProteccion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProteccion_Statics::ClassParams = {
		&AProteccion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProteccion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProteccion_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProteccion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProteccion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProteccion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProteccion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProteccion, 2677655752);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AProteccion>()
	{
		return AProteccion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProteccion(Z_Construct_UClass_AProteccion, &AProteccion::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AProteccion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProteccion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
