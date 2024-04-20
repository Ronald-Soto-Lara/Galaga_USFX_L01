// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/NaveAleatoriaAcuatica.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveAleatoriaAcuatica() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveAleatoriaAcuatica_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveAleatoriaAcuatica();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ANaveAleatoriaAcuatica::StaticRegisterNativesANaveAleatoriaAcuatica()
	{
	}
	UClass* Z_Construct_UClass_ANaveAleatoriaAcuatica_NoRegister()
	{
		return ANaveAleatoriaAcuatica::StaticClass();
	}
	struct Z_Construct_UClass_ANaveAleatoriaAcuatica_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MallaNaveAcuatica_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MallaNaveAcuatica;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveAleatoriaAcuatica_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAleatoriaAcuatica_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveAleatoriaAcuatica.h" },
		{ "ModuleRelativePath", "NaveAleatoriaAcuatica.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAleatoriaAcuatica_Statics::NewProp_MallaNaveAcuatica_MetaData[] = {
		{ "AllowPrivate", "" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveAleatoriaAcuatica.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveAleatoriaAcuatica_Statics::NewProp_MallaNaveAcuatica = { "MallaNaveAcuatica", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveAleatoriaAcuatica, MallaNaveAcuatica), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveAleatoriaAcuatica_Statics::NewProp_MallaNaveAcuatica_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAleatoriaAcuatica_Statics::NewProp_MallaNaveAcuatica_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveAleatoriaAcuatica_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveAleatoriaAcuatica_Statics::NewProp_MallaNaveAcuatica,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveAleatoriaAcuatica_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveAleatoriaAcuatica>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveAleatoriaAcuatica_Statics::ClassParams = {
		&ANaveAleatoriaAcuatica::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveAleatoriaAcuatica_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAleatoriaAcuatica_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveAleatoriaAcuatica_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAleatoriaAcuatica_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveAleatoriaAcuatica()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveAleatoriaAcuatica_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveAleatoriaAcuatica, 36350847);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ANaveAleatoriaAcuatica>()
	{
		return ANaveAleatoriaAcuatica::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveAleatoriaAcuatica(Z_Construct_UClass_ANaveAleatoriaAcuatica, &ANaveAleatoriaAcuatica::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ANaveAleatoriaAcuatica"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveAleatoriaAcuatica);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
