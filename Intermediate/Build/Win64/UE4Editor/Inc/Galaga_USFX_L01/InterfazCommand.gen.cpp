// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/InterfazCommand.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterfazCommand() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UInterfazCommand_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UInterfazCommand();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void UInterfazCommand::StaticRegisterNativesUInterfazCommand()
	{
	}
	UClass* Z_Construct_UClass_UInterfazCommand_NoRegister()
	{
		return UInterfazCommand::StaticClass();
	}
	struct Z_Construct_UClass_UInterfazCommand_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterfazCommand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterfazCommand_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "InterfazCommand.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterfazCommand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterfazCommand>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterfazCommand_Statics::ClassParams = {
		&UInterfazCommand::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterfazCommand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterfazCommand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterfazCommand()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterfazCommand_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterfazCommand, 1179245628);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<UInterfazCommand>()
	{
		return UInterfazCommand::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterfazCommand(Z_Construct_UClass_UInterfazCommand, &UInterfazCommand::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("UInterfazCommand"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterfazCommand);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
