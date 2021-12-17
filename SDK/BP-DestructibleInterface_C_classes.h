// BP-DestructibleInterface_C BP-DestructibleInterface.BP-DestructibleInterface_C
 struct UBP-DestructibleInterface_C : UInterface {
	Unknown UberGraphFrame; // 0x368(0x08)
	char bUseComplexAsSimpleCollision; // 0x4f0(0x01)
	char bUseAsyncCooking; // 0x4f1(0x01)
	Unknown ProcMeshBodySetup; // 0x4f8(0x08)
	Unknown ProcMeshSections; // 0x500(0x10)
	Unknown CollisionConvexElems; // 0x510(0x10)
	Unknown LocalBounds; // 0x520(0x1c)
	Unknown AsyncBodySetupQueue; // 0x540(0x10)
	Unknown RenderingLogSeverity; // 0x28(0x01)
	char ShowWarningsOnScreen; // 0x29(0x01)
	struct FString DeveloperOptions; // 0x30(0x10)
	Unknown Texture; // 0x70(0x08)
	Unknown GeneratedMaterials; // 0x30(0x10)
	Unknown GeneratedMeshes; // 0x40(0x10)
	Unknown GeneratedTextures; // 0x50(0x10)
	Unknown ParameterDecorations; // 0xe8(0x10)
	Unknown TextureReuseCache; // 0x108(0x50)
	Unknown ReferencedMaterials; // 0x320(0x10)
	Unknown PhysicsAssetsToMerge; // 0x3d0(0x10)
	Unknown Materials; // 0x28(0x50)
	Unknown Textures; // 0x78(0x50)
	Unknown ReferenceSkeletalMesh; // 0x28(0x08)
	Unknown ReferenceStaticMesh; // 0x30(0x08)
	Unknown Relevancy; // 0x38(0x01)
	char bDisableTextureLayoutManagement; // 0x39(0x01)
	Unknown ReferencedMaterials; // 0x40(0x10)
	Unknown ImageProperties; // 0x50(0x10)
	Unknown GroupNodeMap; // 0x60(0x50)
	Unknown ContributingMorphTargets; // 0xb0(0x10)
	Unknown MorphTargetReconstructionInfo; // 0xc0(0x10)
	Unknown VersionId; // 0xd0(0x10)
	Unknown ParameterProperties; // 0xe0(0x10)
	Unknown ParameterUIDataMap; // 0x140(0x50)
	Unknown StateUIDataMap; // 0x190(0x50)
	Unknown PhysicsAssetsMap; // 0x1e0(0x50)
	Unknown MaskOutCache; // 0x230(0x28)
	char bIsChildObject; // 0x258(0x01)
	Unknown MaskOutCache_HardRef; // 0x260(0x08)
	Unknown CustomizableObject; // 0x28(0x08)
	Unknown SkeletalMesh; // 0x30(0x08)
	Unknown BoolParameters; // 0x38(0x10)
	Unknown IntParameters; // 0x48(0x10)
	Unknown FloatParameters; // 0x58(0x10)
	Unknown TextureParameters; // 0x68(0x10)
	Unknown VectorParameters; // 0x78(0x10)
	Unknown ProjectorParameters; // 0x88(0x10)
	char bBuildParameterDecorations; // 0x98(0x01)
	struct FMulticastInlineDelegate UpdatedDelegate; // 0xa0(0x10)
	struct FString SkeletalMeshStatus; // 0x110(0x10)
	Unknown MaterialTags; // 0x140(0x10)
	Unknown PrivateData; // 0x1d0(0x08)
	Unknown Textures; // 0x28(0x10)
	Unknown PendingReleaseSkeletalMesh; // 0x28(0x10)
	Unknown PreviewExternalImageProvider; // 0x48(0x08)
	Unknown ProtectedCachedTextures; // 0x150(0x10)
	Unknown DefaultInstanceLODManagement; // 0x170(0x08)
	Unknown CurrentInstanceLODManagement; // 0x178(0x08)
	float SkippedLastRenderTime; // 0x23c(0x04)
	Unknown CustomizableObjectInstance; // 0x240(0x08)
	Unknown CustomizableSkeletalComponent; // 0x398(0x08)
	Unknown DataSources; // 0x28(0x50)

	void ExecuteUbergraph(int32_t EntryPoint); // ExecuteUbergraph CoreUObject.Object.ExecuteUbergraph // (Event|Public|BlueprintEvent) // <Game+0x23ad490>
	void ReceiveBeginPlay(); // ReceiveBeginPlay BP-SkillTargetingBombing.BP-SkillTargetingBombing_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // <Game+0x23ad490>
	void SliceProceduralMesh(Unknown InProcMesh, Unknown PlanePosition, Unknown PlaneNormal, char bCreateOtherHalf, Unknown& OutOtherHalfProcMesh, Unknown CapOption, Unknown CapMaterial); // SliceProceduralMesh ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // <Game+0x178e790>
	void UpdateMeshSection_LinearColor(int32_t SectionIndex, Unknown& Vertices, Unknown& Normals, Unknown& UV0, Unknown& UV1, Unknown& UV2, Unknown& UV3, Unknown& VertexColors, Unknown& Tangents); // UpdateMeshSection_LinearColor ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor // (Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x178ec90>
	void UnloadMaskOutCache(); // UnloadMaskOutCache CustomizableObject.CustomizableObject.UnloadMaskOutCache // (Final|Native|Public|BlueprintCallable) // <Game+0x10384d0>
	void UpdateSkeletalMeshAsync(char bIgnoreCloseDist, char bForceHighPriority); // UpdateSkeletalMeshAsync CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync // (Final|Native|Public|BlueprintCallable) // <Game+0x10384f0>
	void SetReleaseMutableTexturesImmediately(char bReleaseTextures); // SetReleaseMutableTexturesImmediately CustomizableObject.CustomizableObjectSystem.SetReleaseMutableTexturesImmediately // (Final|Native|Public|BlueprintCallable) // <Game+0x103cb50>
	void UpdateSkeletalMeshAsync(char bNeverSkipUpdate); // UpdateSkeletalMeshAsync CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync // (Final|Native|Public|BlueprintCallable) // <Game+0x103cbe0>
	void DelegatedCallback(Unknown Instance); // DelegatedCallback CustomizableObject.InstanceUpdatedHelper.DelegatedCallback // (Final|Native|Public) // <Game+0x103c930>
	void DecreaseDestructibleComponentCount(); // DecreaseDestructibleComponentCount BP-DestructibleInterface.BP-DestructibleInterface_C.DecreaseDestructibleComponentCount // (Public|BlueprintCallable|BlueprintEvent) // <Game+0x23ad490>
};

