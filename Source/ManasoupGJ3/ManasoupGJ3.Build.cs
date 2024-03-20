// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ManasoupGJ3 : ModuleRules
{
	public ManasoupGJ3(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
