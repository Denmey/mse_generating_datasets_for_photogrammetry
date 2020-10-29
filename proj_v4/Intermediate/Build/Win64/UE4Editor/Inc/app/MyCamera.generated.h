// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef APP_MyCamera_generated_h
#error "MyCamera.generated.h already included, missing '#pragma once' in MyCamera.h"
#endif
#define APP_MyCamera_generated_h

#define proj_v4_Source_app_MyCamera_h_14_SPARSE_DATA
#define proj_v4_Source_app_MyCamera_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMeshVectorZ); \
	DECLARE_FUNCTION(execSetMeshVectorY); \
	DECLARE_FUNCTION(execSetMeshVectorX); \
	DECLARE_FUNCTION(execSetArmLenght); \
	DECLARE_FUNCTION(execSetCameraRoll); \
	DECLARE_FUNCTION(execSetCameraPitch); \
	DECLARE_FUNCTION(execSetCameraYaw);


#define proj_v4_Source_app_MyCamera_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMeshVectorZ); \
	DECLARE_FUNCTION(execSetMeshVectorY); \
	DECLARE_FUNCTION(execSetMeshVectorX); \
	DECLARE_FUNCTION(execSetArmLenght); \
	DECLARE_FUNCTION(execSetCameraRoll); \
	DECLARE_FUNCTION(execSetCameraPitch); \
	DECLARE_FUNCTION(execSetCameraYaw);


#define proj_v4_Source_app_MyCamera_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCamera(); \
	friend struct Z_Construct_UClass_AMyCamera_Statics; \
public: \
	DECLARE_CLASS(AMyCamera, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/app"), NO_API) \
	DECLARE_SERIALIZER(AMyCamera)


#define proj_v4_Source_app_MyCamera_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMyCamera(); \
	friend struct Z_Construct_UClass_AMyCamera_Statics; \
public: \
	DECLARE_CLASS(AMyCamera, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/app"), NO_API) \
	DECLARE_SERIALIZER(AMyCamera)


#define proj_v4_Source_app_MyCamera_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyCamera(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCamera(AMyCamera&&); \
	NO_API AMyCamera(const AMyCamera&); \
public:


#define proj_v4_Source_app_MyCamera_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCamera(AMyCamera&&); \
	NO_API AMyCamera(const AMyCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCamera)


#define proj_v4_Source_app_MyCamera_h_14_PRIVATE_PROPERTY_OFFSET
#define proj_v4_Source_app_MyCamera_h_11_PROLOG
#define proj_v4_Source_app_MyCamera_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	proj_v4_Source_app_MyCamera_h_14_PRIVATE_PROPERTY_OFFSET \
	proj_v4_Source_app_MyCamera_h_14_SPARSE_DATA \
	proj_v4_Source_app_MyCamera_h_14_RPC_WRAPPERS \
	proj_v4_Source_app_MyCamera_h_14_INCLASS \
	proj_v4_Source_app_MyCamera_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define proj_v4_Source_app_MyCamera_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	proj_v4_Source_app_MyCamera_h_14_PRIVATE_PROPERTY_OFFSET \
	proj_v4_Source_app_MyCamera_h_14_SPARSE_DATA \
	proj_v4_Source_app_MyCamera_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	proj_v4_Source_app_MyCamera_h_14_INCLASS_NO_PURE_DECLS \
	proj_v4_Source_app_MyCamera_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> APP_API UClass* StaticClass<class AMyCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID proj_v4_Source_app_MyCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
