// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef APP_LightSource_generated_h
#error "LightSource.generated.h already included, missing '#pragma once' in LightSource.h"
#endif
#define APP_LightSource_generated_h

#define proj_v4_Source_app_LightSource_h_17_SPARSE_DATA
#define proj_v4_Source_app_LightSource_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execsetModelPoint); \
	DECLARE_FUNCTION(execchangeAngle_z); \
	DECLARE_FUNCTION(execchangeAngle_y); \
	DECLARE_FUNCTION(execchangeAngle_x); \
	DECLARE_FUNCTION(execchangeColor); \
	DECLARE_FUNCTION(execgetZ); \
	DECLARE_FUNCTION(execchangeIntensity); \
	DECLARE_FUNCTION(execsetCoord_z); \
	DECLARE_FUNCTION(execsetCoord_y); \
	DECLARE_FUNCTION(execsetCoord_x); \
	DECLARE_FUNCTION(execquickChange_height); \
	DECLARE_FUNCTION(execquickChange_distance); \
	DECLARE_FUNCTION(execquickChange_rotation);


#define proj_v4_Source_app_LightSource_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execsetModelPoint); \
	DECLARE_FUNCTION(execchangeAngle_z); \
	DECLARE_FUNCTION(execchangeAngle_y); \
	DECLARE_FUNCTION(execchangeAngle_x); \
	DECLARE_FUNCTION(execchangeColor); \
	DECLARE_FUNCTION(execgetZ); \
	DECLARE_FUNCTION(execchangeIntensity); \
	DECLARE_FUNCTION(execsetCoord_z); \
	DECLARE_FUNCTION(execsetCoord_y); \
	DECLARE_FUNCTION(execsetCoord_x); \
	DECLARE_FUNCTION(execquickChange_height); \
	DECLARE_FUNCTION(execquickChange_distance); \
	DECLARE_FUNCTION(execquickChange_rotation);


#define proj_v4_Source_app_LightSource_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALightSource(); \
	friend struct Z_Construct_UClass_ALightSource_Statics; \
public: \
	DECLARE_CLASS(ALightSource, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/app"), NO_API) \
	DECLARE_SERIALIZER(ALightSource)


#define proj_v4_Source_app_LightSource_h_17_INCLASS \
private: \
	static void StaticRegisterNativesALightSource(); \
	friend struct Z_Construct_UClass_ALightSource_Statics; \
public: \
	DECLARE_CLASS(ALightSource, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/app"), NO_API) \
	DECLARE_SERIALIZER(ALightSource)


#define proj_v4_Source_app_LightSource_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALightSource(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightSource(ALightSource&&); \
	NO_API ALightSource(const ALightSource&); \
public:


#define proj_v4_Source_app_LightSource_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightSource(ALightSource&&); \
	NO_API ALightSource(const ALightSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightSource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALightSource)


#define proj_v4_Source_app_LightSource_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__myLight() { return STRUCT_OFFSET(ALightSource, myLight); }


#define proj_v4_Source_app_LightSource_h_14_PROLOG
#define proj_v4_Source_app_LightSource_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	proj_v4_Source_app_LightSource_h_17_PRIVATE_PROPERTY_OFFSET \
	proj_v4_Source_app_LightSource_h_17_SPARSE_DATA \
	proj_v4_Source_app_LightSource_h_17_RPC_WRAPPERS \
	proj_v4_Source_app_LightSource_h_17_INCLASS \
	proj_v4_Source_app_LightSource_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define proj_v4_Source_app_LightSource_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	proj_v4_Source_app_LightSource_h_17_PRIVATE_PROPERTY_OFFSET \
	proj_v4_Source_app_LightSource_h_17_SPARSE_DATA \
	proj_v4_Source_app_LightSource_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	proj_v4_Source_app_LightSource_h_17_INCLASS_NO_PURE_DECLS \
	proj_v4_Source_app_LightSource_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> APP_API UClass* StaticClass<class ALightSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID proj_v4_Source_app_LightSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
