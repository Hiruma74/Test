// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test/MyUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyUserWidget() {}
// Cross Module References
	TEST_API UClass* Z_Construct_UClass_UMyUserWidget();
	TEST_API UClass* Z_Construct_UClass_UMyUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Test();
// End Cross Module References
	void UMyUserWidget::StaticRegisterNativesUMyUserWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyUserWidget);
	UClass* Z_Construct_UClass_UMyUserWidget_NoRegister()
	{
		return UMyUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMyUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Test,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyUserWidget.h" },
		{ "ModuleRelativePath", "MyUserWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyUserWidget_Statics::ClassParams = {
		&UMyUserWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyUserWidget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMyUserWidget()
	{
		if (!Z_Registration_Info_UClass_UMyUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyUserWidget.OuterSingleton, Z_Construct_UClass_UMyUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyUserWidget.OuterSingleton;
	}
	template<> TEST_API UClass* StaticClass<UMyUserWidget>()
	{
		return UMyUserWidget::StaticClass();
	}
	UMyUserWidget::UMyUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyUserWidget);
	UMyUserWidget::~UMyUserWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_Hiruma_Documents_Unreal_Projects_Test_Source_Test_MyUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Hiruma_Documents_Unreal_Projects_Test_Source_Test_MyUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyUserWidget, UMyUserWidget::StaticClass, TEXT("UMyUserWidget"), &Z_Registration_Info_UClass_UMyUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyUserWidget), 3366271948U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Hiruma_Documents_Unreal_Projects_Test_Source_Test_MyUserWidget_h_3873482812(TEXT("/Script/Test"),
		Z_CompiledInDeferFile_FID_Users_Hiruma_Documents_Unreal_Projects_Test_Source_Test_MyUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Hiruma_Documents_Unreal_Projects_Test_Source_Test_MyUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS