// Fill out your copyright notice in the Description page of Project Settings.

#include "LearnUnrealShader.h"
#include "Modules/ModuleManager.h"
#include "Misc/Paths.h"



void FLearnUnrealShaderModule::StartupModule()
{
	/// @note 和上一步名称对应，Shaders 文件夹
	FString ShaderDirectory = FPaths::Combine(FPaths::ProjectDir(), TEXT("Shaders"));
	AddShaderSourceDirectoryMapping(TEXT("/Shaders"), ShaderDirectory);

}

void FLearnUnrealShaderModule::ShutdownModule()
{
}

IMPLEMENT_PRIMARY_GAME_MODULE(FLearnUnrealShaderModule,  LearnUnrealShader, "LearnUnrealShader");

