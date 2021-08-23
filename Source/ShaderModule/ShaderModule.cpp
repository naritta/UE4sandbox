// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShaderModule.h"
#include "Modules/ModuleManager.h"

void ShaderModule::StartupModule()
{
    FString ShaderDirectory = FPaths::Combine(FPaths::ProjectDir(), TEXT("Shader"));
    UE_LOG(LogTemp, Display, TEXT("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"));
    AddShaderSourceDirectoryMapping(TEXT("/Project"), ShaderDirectory);
//    if(!AllShaderSourceDirectoryMappings().Contains("/Project"))
//        AddShaderSourceDirectoryMapping("/Project", ShaderDirectory);
}

void ShaderModule::ShutdownModule()
{
}

IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, UE4sandbox, "ShaderModule" );
