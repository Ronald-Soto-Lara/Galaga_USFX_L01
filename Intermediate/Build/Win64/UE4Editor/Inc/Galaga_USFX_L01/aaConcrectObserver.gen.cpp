// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/aaConcrectObserver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeaaConcrectObserver() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AaaConcrectObserver_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AaaConcrectObserver();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ABomba_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_USuscriptorInterfaz_NoRegister();
// End Cross Module References
	void AaaConcrectObserver::StaticRegisterNativesAaaConcrectObserver()
	{
	}
	UClass* Z_Construct_UClass_AaaConcrectObserver_NoRegister()
	{
		return AaaConcrectObserver::StaticClass();
	}
	struct Z_Construct_UClass_AaaConcrectObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_agregar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_agregar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AaaConcrectObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AaaConcrectObserver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "aaConcrectObserver.h" },
		{ "ModuleRelativePath", "aaConcrectObserver.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AaaConcrectObserver_Statics::NewProp_agregar_MetaData[] = {
		{ "Category", "Arsenal" },
		{ "ModuleRelativePath", "aaConcrectObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AaaConcrectObserver_Statics::NewProp_agregar = { "agregar", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AaaConcrectObserver, agregar), Z_Construct_UClass_ABomba_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AaaConcrectObserver_Statics::NewProp_agregar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AaaConcrectObserver_Statics::NewProp_agregar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AaaConcrectObserver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AaaConcrectObserver_Statics::NewProp_agregar,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AaaConcrectObserver_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USuscriptorInterfaz_NoRegister, (int32)VTABLE_OFFSET(AaaConcrectObserver, ISuscriptorInterfaz), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AaaConcrectObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AaaConcrectObserver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AaaConcrectObserver_Statics::ClassParams = {
		&AaaConcrectObserver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AaaConcrectObserver_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AaaConcrectObserver_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AaaConcrectObserver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AaaConcrectObserver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AaaConcrectObserver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AaaConcrectObserver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AaaConcrectObserver, 2281729134);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AaaConcrectObserver>()
	{
		return AaaConcrectObserver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AaaConcrectObserver(Z_Construct_UClass_AaaConcrectObserver, &AaaConcrectObserver::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AaaConcrectObserver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AaaConcrectObserver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
