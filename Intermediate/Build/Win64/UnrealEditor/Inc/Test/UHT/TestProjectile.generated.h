// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TEST_TestProjectile_generated_h
#error "TestProjectile.generated.h already included, missing '#pragma once' in TestProjectile.h"
#endif
#define TEST_TestProjectile_generated_h

#define FID_Test_Source_Test_TestProjectile_h_15_SPARSE_DATA
#define FID_Test_Source_Test_TestProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Test_Source_Test_TestProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Test_Source_Test_TestProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Test_Source_Test_TestProjectile_h_15_ACCESSORS
#define FID_Test_Source_Test_TestProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestProjectile(); \
	friend struct Z_Construct_UClass_ATestProjectile_Statics; \
public: \
	DECLARE_CLASS(ATestProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test"), NO_API) \
	DECLARE_SERIALIZER(ATestProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Test_Source_Test_TestProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestProjectile(ATestProjectile&&); \
	NO_API ATestProjectile(const ATestProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestProjectile) \
	NO_API virtual ~ATestProjectile();


#define FID_Test_Source_Test_TestProjectile_h_12_PROLOG
#define FID_Test_Source_Test_TestProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Test_Source_Test_TestProjectile_h_15_SPARSE_DATA \
	FID_Test_Source_Test_TestProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Test_Source_Test_TestProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Test_Source_Test_TestProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Test_Source_Test_TestProjectile_h_15_ACCESSORS \
	FID_Test_Source_Test_TestProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Test_Source_Test_TestProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST_API UClass* StaticClass<class ATestProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Test_Source_Test_TestProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
