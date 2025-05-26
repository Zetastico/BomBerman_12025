// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BomBerman_012025 : ModuleRules
{
	public BomBerman_012025(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "Niagara", "AIModule", "NavigationSystem"});
	}
}
