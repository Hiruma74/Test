// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestingActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST_TestingActor_generated_h
#error "TestingActor.generated.h already included, missing '#pragma once' in TestingActor.h"
#endif
#define TEST_TestingActor_generated_h

#define FID_Test_Source_Test_TestingActor_h_12_SPARSE_DATA
#define FID_Test_Source_Test_TestingActor_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Test_Source_Test_TestingActor_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Test_Source_Test_TestingActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Test_Source_Test_TestingActor_h_12_ACCESSORS
#define FID_Test_Source_Test_TestingActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestingActor(); \
	friend struct Z_Construct_UClass_ATestingActor_Statics; \
public: \
	DECLARE_CLASS(ATestingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test"), NO_API) \
	DECLARE_SERIALIZER(ATestingActor)


#define FID_Test_Source_Test_TestingActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestingActor(ATestingActor&&); \
	NO_API ATestingActor(const ATestingActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestingActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestingActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestingActor) \
	NO_API virtual ~ATestingActor();


#define FID_Test_Source_Test_TestingActor_h_9_PROLOG
#define FID_Test_Source_Test_TestingActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Test_Source_Test_TestingActor_h_12_SPARSE_DATA \
	FID_Test_Source_Test_TestingActor_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Test_Source_Test_TestingActor_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Test_Source_Test_TestingActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Test_Source_Test_TestingActor_h_12_ACCESSORS \
	FID_Test_Source_Test_TestingActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_Test_Source_Test_TestingActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST_API UClass* StaticClass<class ATestingActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Test_Source_Test_TestingActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
