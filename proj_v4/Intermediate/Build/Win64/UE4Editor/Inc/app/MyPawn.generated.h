// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef APP_MyPawn_generated_h
#error "MyPawn.generated.h already included, missing '#pragma once' in MyPawn.h"
#endif
#define APP_MyPawn_generated_h

#define proj_v4_Source_app_MyPawn_h_16_SPARSE_DATA
#define proj_v4_Source_app_MyPawn_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMeshVectorZ); \
	DECLARE_FUNCTION(execSetMeshVectorY); \
	DECLARE_FUNCTION(execSetMeshVectorX); \
	DECLARE_FUNCTION(execSetArmLenght); \
	DECLARE_FUNCTION(execSetCameraPitch); \
	DECLARE_FUNCTION(execSetCameraYaw);


#define proj_v4_Source_app_MyPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMeshVectorZ); \
	DECLARE_FUNCTION(execSetMeshVectorY); \
	DECLARE_FUNCTION(execSetMeshVectorX); \
	DECLARE_FUNCTION(execSetArmLenght); \
	DECLARE_FUNCTION(execSetCameraPitch); \
	DECLARE_FUNCTION(execSetCameraYaw);


#define proj_v4_Source_app_MyPawn_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPawn(); \
	friend struct Z_Construct_UClass_AMyPawn_Statics; \
public: \
	DECLARE_CLASS(AMyPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/app"), NO_API) \
	DECLARE_SERIALIZER(AMyPawn)


#define proj_v4_Source_app_MyPawn_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMyPawn(); \
	friend struct Z_Construct_UClass_AMyPawn_Statics; \
public: \
	DECLARE_CLASS(AMyPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/app"), NO_API) \
	DECLARE_SERIALIZER(AMyPawn)


#define proj_v4_Source_app_MyPawn_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPawn(AMyPawn&&); \
	NO_API AMyPawn(const AMyPawn&); \
public:


#define proj_v4_Source_app_MyPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPawn(AMyPawn&&); \
	NO_API AMyPawn(const AMyPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPawn)


#define proj_v4_Source_app_MyPawn_h_16_PRIVATE_PROPERTY_OFFSET
#define proj_v4_Source_app_MyPawn_h_13_PROLOG
#define proj_v4_Source_app_MyPawn_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	proj_v4_Source_app_MyPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	proj_v4_Source_app_MyPawn_h_16_SPARSE_DATA \
	proj_v4_Source_app_MyPawn_h_16_RPC_WRAPPERS \
	proj_v4_Source_app_MyPawn_h_16_INCLASS \
	proj_v4_Source_app_MyPawn_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define proj_v4_Source_app_MyPawn_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	proj_v4_Source_app_MyPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	proj_v4_Source_app_MyPawn_h_16_SPARSE_DATA \
	proj_v4_Source_app_MyPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	proj_v4_Source_app_MyPawn_h_16_INCLASS_NO_PURE_DECLS \
	proj_v4_Source_app_MyPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> APP_API UClass* StaticClass<class AMyPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID proj_v4_Source_app_MyPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
