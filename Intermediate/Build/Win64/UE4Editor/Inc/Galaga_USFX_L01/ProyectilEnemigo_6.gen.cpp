// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/ProyectilEnemigo_6.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProyectilEnemigo_6() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AProyectilEnemigo_6_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AProyectilEnemigo_6();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AProyectilEnemigo_6::StaticRegisterNativesAProyectilEnemigo_6()
	{
	}
	UClass* Z_Construct_UClass_AProyectilEnemigo_6_NoRegister()
	{
		return AProyectilEnemigo_6::StaticClass();
	}
	struct Z_Construct_UClass_AProyectilEnemigo_6_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MallaDeProyectil_6_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MallaDeProyectil_6;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProyectilEnemigo_6_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectilEnemigo_6_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProyectilEnemigo_6.h" },
		{ "ModuleRelativePath", "ProyectilEnemigo_6.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectilEnemigo_6_Statics::NewProp_MallaDeProyectil_6_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProyectilEnemigo_6.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProyectilEnemigo_6_Statics::NewProp_MallaDeProyectil_6 = { "MallaDeProyectil_6", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProyectilEnemigo_6, MallaDeProyectil_6), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProyectilEnemigo_6_Statics::NewProp_MallaDeProyectil_6_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectilEnemigo_6_Statics::NewProp_MallaDeProyectil_6_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProyectilEnemigo_6_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProyectilEnemigo_6_Statics::NewProp_MallaDeProyectil_6,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProyectilEnemigo_6_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProyectilEnemigo_6>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProyectilEnemigo_6_Statics::ClassParams = {
		&AProyectilEnemigo_6::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProyectilEnemigo_6_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProyectilEnemigo_6_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProyectilEnemigo_6_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectilEnemigo_6_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProyectilEnemigo_6()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProyectilEnemigo_6_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProyectilEnemigo_6, 423692613);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AProyectilEnemigo_6>()
	{
		return AProyectilEnemigo_6::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProyectilEnemigo_6(Z_Construct_UClass_AProyectilEnemigo_6, &AProyectilEnemigo_6::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AProyectilEnemigo_6"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProyectilEnemigo_6);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
