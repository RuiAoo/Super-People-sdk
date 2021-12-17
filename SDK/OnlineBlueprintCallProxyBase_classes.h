// OnlineBlueprintCallProxyBase Engine.OnlineBlueprintCallProxyBase
 struct UOnlineBlueprintCallProxyBase : UBlueprintAsyncActionBase {
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
	Unknown Components; // 0x28(0x10)
	Unknown UberGraphFrame; // 0x298(0x08)
	Unknown 15XSensitivity; // 0x2a0(0x08)
	Unknown 2XSensitivity; // 0x2a8(0x08)
	Unknown 4XSensitivity; // 0x2b0(0x08)
	Unknown 6XSensitivity; // 0x2b8(0x08)
	Unknown 8XSensitivity; // 0x2c0(0x08)
	Unknown ADSSensitivity; // 0x2c8(0x08)
	Unknown GeneralSensitivity; // 0x2d0(0x08)
	Unknown ReverseLeftAndRight; // 0x2d8(0x08)
	Unknown ReverseUpAndDown; // 0x2e0(0x08)
	Unknown ScrollBox_55; // 0x2e8(0x08)
	Unknown TargetingSensitivity; // 0x2f0(0x08)
	Unknown ToggleADS; // 0x2f8(0x08)
	Unknown ToggleAOS; // 0x300(0x08)
	Unknown ToggleCrouch; // 0x308(0x08)
	Unknown ToggleExLean; // 0x310(0x08)
	Unknown ToggleFreeLook; // 0x318(0x08)
	Unknown ToggleSprint; // 0x320(0x08)
	Unknown ToggleSteadyAim; // 0x328(0x08)
	Unknown ToggleWalk; // 0x330(0x08)
	Unknown TotalSensitivity; // 0x338(0x08)
	Unknown UsingDetailSensitivity; // 0x340(0x08)
	Unknown VehicleDriverSensitivity; // 0x348(0x08)
	Unknown VerticalBox_1; // 0x350(0x08)
	Unknown VerticlaModifier; // 0x358(0x08)
	Unknown ; // 0x360(0x08)
	Unknown ; // 0x368(0x08)
	Unknown ; // 0x370(0x08)
	Unknown ScrollBarTimer; // 0x378(0x08)
	char EnableTransport; // 0x28(0x01)
	struct FString ListenEndpoint; // 0x30(0x10)
	Unknown ConnectToEndpoints; // 0x40(0x10)
	int32_t ConnectionRetryDelay; // 0x50(0x04)
	char bStopServiceWhenAppDeactivates; // 0x54(0x01)
	Unknown PrimaryComponentTick; // 0x30(0x30)
	Unknown ComponentTags; // 0x60(0x10)
	Unknown AssetUserData; // 0x70(0x10)
	int32_t UCSSerializationIndex; // 0x84(0x04)
	char bNetAddressable; // 0x88(0x01)
	char bReplicates; // 0x88(0x01)
	char bAutoActivate; // 0x89(0x01)
	char bIsActive; // 0x8a(0x01)
	char bEditableWhenInherited; // 0x8a(0x01)
	char bCanEverAffectNavigation; // 0x8a(0x01)
	char bIsEditorOnly; // 0x8a(0x01)
	Unknown CreationMethod; // 0x8c(0x01)
	struct FMulticastSparseDelegate OnComponentActivated; // 0x8d(0x01)
	struct FMulticastSparseDelegate OnComponentDeactivated; // 0x8e(0x01)
	Unknown UCSModifiedProperties; // 0x90(0x10)
	Unknown PhysicsVolume; // 0x144(0x08)
	Unknown AttachParent; // 0x1d0(0x08)
	struct FName AttachSocketName; // 0x1dc(0x08)
	Unknown AttachChildren; // 0xb8(0x10)
	Unknown ClientAttachedChildren; // 0x190(0x10)
	Unknown RelativeLocation; // 0x224(0x0c)
	Unknown RelativeRotation; // 0x1b4(0x0c)
	Unknown RelativeScale3D; // 0x1c4(0x0c)
	Unknown ComponentVelocity; // 0x164(0x0c)
	char bComponentToWorldUpdated; // 0x140(0x01)
	char bAbsoluteLocation; // 0x220(0x01)
	char bAbsoluteRotation; // 0x1d8(0x01)
	char bAbsoluteScale; // 0x188(0x01)
	char bVisible; // 0xc8(0x01)
	char bShouldBeAttached; // 0x220(0x01)
	char bShouldSnapLocationWhenAttached; // 0x1b0(0x01)
	char bShouldSnapRotationWhenAttached; // 0x188(0x01)
	char bShouldUpdatePhysicsVolume; // 0x1a0(0x01)
	char bHiddenInGame; // 0x220(0x01)
	char bBoundsChangeTriggersStreamingDataRebuild; // 0xc8(0x01)
	char bUseAttachParentBound; // 0x1d8(0x01)
	Unknown Mobility; // 0x221(0x01)
	Unknown DetailMode; // 0x160(0x01)
	struct FMulticastSparseDelegate PhysicsVolumeChangedDelegate; // 0xb0(0x01)
	Unknown ReplaySamplable; // 0x28(0x01)
	Unknown ReplaySampleClass; // 0x30(0x08)
	float ReplaySamplingFrequency; // 0x38(0x04)
	uint32_t ClientReplaySamplingGUID; // 0x3c(0x04)
	char bReplayLevelAttached; // 0x44(0x01)
	Unknown ReplaySamplesForPlayback; // 0x68(0x10)
	Unknown SelfActor; // 0x88(0x08)
	Unknown PrimaryActorTick; // 0x1d8(0x30)
	char bNetTemporary; // 0x284(0x01)
	char bNetStartup; // 0x248(0x01)
	char bOnlyRelevantToOwner; // 0x1c4(0x01)
	char bAlwaysRelevant; // 0xa1(0x01)
	char bReplicateMovement; // 0x260(0x01)
	char bHidden; // 0x222(0x01)
	char bTearOff; // 0x284(0x01)
	char bExchangedRoles; // 0x120(0x01)
	char bNetLoadOnClient; // 0x138(0x01)
	char bNetUseOwnerRelevancy; // 0xe8(0x01)
	char bRelevantForNetworkReplays; // 0x170(0x01)
	char bRelevantForLevelBounds; // 0x138(0x01)
	char bReplayRewindable; // 0x9f(0x01)
	char bAllowTickBeforeBeginPlay; // 0x1c4(0x01)
	char bAutoDestroyWhenFinished; // 0x1c4(0x01)
	char bCanBeDamaged; // 0x1a0(0x01)
	char bBlockInput; // 0x303(0x01)
	char bCollideWhenPlacing; // 0x301(0x01)
	char bFindCameraComponentWhenViewTarget; // 0x251(0x01)
	char bGenerateOverlapEventsDuringLevelStreaming; // 0x30e(0x01)
	char bIgnoresOriginShifting; // 0x155(0x01)
	char bEnableAutoLODGeneration; // 0x251(0x01)
	char bIsEditorOnlyActor; // 0x120(0x01)
	char bActorSeamlessTraveled; // 0xea(0x01)
	char bReplicates; // 0x9d(0x01)
	char bCanBeInCluster; // 0x90(0x01)
	char bAllowReceiveTickEventOnDedicatedServer; // 0x198(0x01)
	char bActorEnableCollision; // 0x1b8(0x01)
	char bActorIsBeingDestroyed; // 0x30e(0x01)
	Unknown UpdateOverlapsMethodDuringLevelStreaming; // 0x154(0x01)
	Unknown DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0xa3(0x01)
	Unknown RemoteRole; // 0x279(0x01)
	Unknown ReplicatedMovement; // 0xec(0x34)
	float InitialLifeSpan; // 0x2e0(0x04)
	float CustomTimeDilation; // 0x308(0x04)
	Unknown AttachmentReplication; // 0xa8(0x40)
	Unknown Owner; // 0x178(0x08)
	struct FName NetDriverName; // 0x94(0x08)
	Unknown Role; // 0x9e(0x01)
	Unknown NetDormancy; // 0x238(0x01)
	Unknown SpawnCollisionHandlingMethod; // 0x304(0x01)
	Unknown AutoReceiveInput; // 0x302(0x01)
	int32_t InputPriority; // 0x150(0x04)
	Unknown InputComponent; // 0x2f8(0x08)
	float NetCullDistanceSquared; // 0x280(0x04)
	int32_t NetTag; // 0x24c(0x04)
	float NetUpdateFrequency; // 0x27c(0x04)
	float MinNetUpdateFrequency; // 0x288(0x04)
	float NetPriority; // 0x21c(0x04)
	Unknown Instigator; // 0x258(0x08)
	Unknown Children; // 0x268(0x10)
	Unknown RootComponent; // 0x158(0x08)
	Unknown ControllingMatineeActors; // 0x208(0x10)
	Unknown Layers; // 0x188(0x10)
	Unknown ParentComponent; // 0x1bc(0x08)
	char bEnableRerunConstructionScript; // 0x30c(0x01)
	Unknown Tags; // 0x140(0x10)
	struct FMulticastSparseDelegate OnTakeAnyDamage; // 0x218(0x01)
	struct FMulticastSparseDelegate OnTakePointDamage; // 0x27a(0x01)
	struct FMulticastSparseDelegate OnTakeRadialDamage; // 0x9c(0x01)
	struct FMulticastSparseDelegate OnActorBeginOverlap; // 0x27b(0x01)
	struct FMulticastSparseDelegate OnActorEndOverlap; // 0xa0(0x01)
	struct FMulticastSparseDelegate OnBeginCursorOver; // 0x221(0x01)
	struct FMulticastSparseDelegate OnEndCursorOver; // 0xe9(0x01)
	struct FMulticastSparseDelegate OnClicked; // 0x278(0x01)
	struct FMulticastSparseDelegate OnReleased; // 0x2e4(0x01)
	struct FMulticastSparseDelegate OnInputTouchBegin; // 0x300(0x01)
	struct FMulticastSparseDelegate OnInputTouchEnd; // 0x285(0x01)
	struct FMulticastSparseDelegate OnInputTouchEnter; // 0xa2(0x01)
	struct FMulticastSparseDelegate OnInputTouchLeave; // 0x250(0x01)
	struct FMulticastSparseDelegate OnActorHit; // 0x180(0x01)
	struct FMulticastSparseDelegate OnDestroyed; // 0x220(0x01)
	struct FMulticastSparseDelegate OnEndPlay; // 0x30d(0x01)
	Unknown InstanceComponents; // 0x128(0x10)
	Unknown BlueprintCreatedComponents; // 0x1a8(0x10)
	Unknown LoadedObjects; // 0x1c8(0x10)
	char bShouldDoAnimNotifies; // 0x318(0x01)
	char bWakeOnLevelStart; // 0x318(0x01)
	Unknown SkeletalMeshComponent; // 0x320(0x08)
	Unknown ReplicatedMesh; // 0x328(0x08)
	Unknown ReplicatedPhysAsset; // 0x330(0x08)
	Unknown ReplicatedMaterial0; // 0x338(0x08)
	Unknown ReplicatedMaterial1; // 0x340(0x08)
	float MinDrawDistance; // 0x240(0x04)
	float LDMaxDrawDistance; // 0x244(0x04)
	float CachedMaxDrawDistance; // 0x248(0x04)
	Unknown DepthPriorityGroup; // 0x24c(0x01)
	Unknown ViewOwnerDepthPriorityGroup; // 0x24d(0x01)
	Unknown IndirectLightingCacheQuality; // 0x24e(0x01)
	Unknown LightmapType; // 0x24f(0x01)
	char bUseMaxLODAsImposter; // 0x250(0x01)
	char bBatchImpostersAsInstances; // 0x250(0x01)
	char bNeverDistanceCull; // 0x250(0x01)
	char bAlwaysCreatePhysicsState; // 0x250(0x01)
	char bGenerateOverlapEvents; // 0x251(0x01)
	char bMultiBodyOverlap; // 0x251(0x01)
	char bTraceComplexOnMove; // 0x251(0x01)
	char bReturnMaterialOnMove; // 0x251(0x01)
	char bUseViewOwnerDepthPriorityGroup; // 0x251(0x01)
	char bAllowCullDistanceVolume; // 0x251(0x01)
	char bHasMotionBlurVelocityMeshes; // 0x251(0x01)
	char bVisibleInReflectionCaptures; // 0x251(0x01)
	char bVisibleInRayTracing; // 0x252(0x01)
	char bRenderInMainPass; // 0x252(0x01)
	char bRenderInDepthPass; // 0x252(0x01)
	char bReceivesDecals; // 0x252(0x01)
	char bOwnerNoSee; // 0x252(0x01)
	char bOnlyOwnerSee; // 0x252(0x01)
	char bIgnoreNearClippingForOcclusion; // 0x252(0x01)
	char bTreatAsBackgroundForOcclusion; // 0x252(0x01)
	char bUseAsOccluder; // 0x253(0x01)
	char bSelectable; // 0x253(0x01)
	char bForceMipStreaming; // 0x253(0x01)
	char bHasPerInstanceHitProxies; // 0x253(0x01)
	char CastShadow; // 0x253(0x01)
	char bAffectDynamicIndirectLighting; // 0x253(0x01)
	char bAffectDistanceFieldLighting; // 0x253(0x01)
	char bCastDynamicShadow; // 0x253(0x01)
	char bCastStaticShadow; // 0x254(0x01)
	char bCastDirectionalShadow; // 0x254(0x01)
	char bCastVolumetricTranslucentShadow; // 0x254(0x01)
	char bSelfShadowOnly; // 0x254(0x01)
	char bCastFarShadow; // 0x254(0x01)
	char bCastInsetShadow; // 0x254(0x01)
	char bCastCinematicShadow; // 0x254(0x01)
	char bCastHiddenShadow; // 0x254(0x01)
	char bCastShadowAsTwoSided; // 0x255(0x01)
	char bLightAsIfStatic; // 0x255(0x01)
	char bLightAttachmentsAsGroup; // 0x255(0x01)
	char bExcludeFromLightAttachmentGroup; // 0x255(0x01)
	char bReceiveMobileCSMShadows; // 0x255(0x01)
	char bSingleSampleShadowFromStationaryLights; // 0x255(0x01)
	char bIgnoreRadialImpulse; // 0x255(0x01)
	char bIgnoreRadialForce; // 0x255(0x01)
	char bApplyImpulseOnDamage; // 0x256(0x01)
	char bReplicatePhysicsToAutonomousProxy; // 0x256(0x01)
	char bFillCollisionUnderneathForNavmesh; // 0x256(0x01)
	char AlwaysLoadOnClient; // 0x256(0x01)
	char AlwaysLoadOnServer; // 0x256(0x01)
	char bUseEditorCompositing; // 0x256(0x01)
	char bRenderCustomDepth; // 0x256(0x01)
	char bHasNoStreamableTextures; // 0x257(0x01)
	Unknown bHasCustomNavigableGeometry; // 0x258(0x01)
	Unknown CanCharacterStepUpOn; // 0x25a(0x01)
	Unknown LightingChannels; // 0x25b(0x01)
	Unknown CustomDepthStencilWriteMask; // 0x25c(0x01)
	int32_t CustomDepthStencilValue; // 0x260(0x04)
	Unknown CustomPrimitiveData; // 0x268(0x10)
	Unknown CustomPrimitiveDataInternal; // 0x278(0x10)
	int32_t TranslucencySortPriority; // 0x288(0x04)
	int32_t VisibilityId; // 0x28c(0x04)
	Unknown RuntimeVirtualTextures; // 0x290(0x10)
	int8_t VirtualTextureLodBias; // 0x2a0(0x01)
	int8_t VirtualTextureCullMips; // 0x2a1(0x01)
	int8_t VirtualTextureMinCoverage; // 0x2a2(0x01)
	Unknown VirtualTextureRenderPassType; // 0x2a3(0x01)
	float LpvBiasMultiplier; // 0x2a8(0x04)
	float BoundsScale; // 0x2b4(0x04)
	Unknown MoveIgnoreActors; // 0x2c8(0x10)
	Unknown MoveIgnoreComponents; // 0x2d8(0x10)
	Unknown BodyInstance; // 0x2f8(0x190)
	struct FMulticastSparseDelegate OnComponentHit; // 0x488(0x01)
	struct FMulticastSparseDelegate OnComponentBeginOverlap; // 0x489(0x01)
	struct FMulticastSparseDelegate OnComponentEndOverlap; // 0x48a(0x01)
	struct FMulticastSparseDelegate OnComponentWake; // 0x48b(0x01)
	struct FMulticastSparseDelegate OnComponentSleep; // 0x48c(0x01)
	struct FMulticastSparseDelegate OnBeginCursorOver; // 0x48e(0x01)
	struct FMulticastSparseDelegate OnEndCursorOver; // 0x48f(0x01)
	struct FMulticastSparseDelegate OnClicked; // 0x490(0x01)
	struct FMulticastSparseDelegate OnReleased; // 0x491(0x01)
	struct FMulticastSparseDelegate OnInputTouchBegin; // 0x492(0x01)
	struct FMulticastSparseDelegate OnInputTouchEnd; // 0x493(0x01)
	struct FMulticastSparseDelegate OnInputTouchEnter; // 0x494(0x01)
	struct FMulticastSparseDelegate OnInputTouchLeave; // 0x495(0x01)
	Unknown LODParentPrimitive; // 0x4b0(0x08)
	float MipStreamingScale; // 0x4b8(0x04)
	Unknown OverrideMaterials; // 0x4c0(0x10)
	char bEnableMaterialParameterCaching; // 0x4e0(0x01)
	Unknown SkeletalMesh; // 0x4e8(0x08)
	Unknown MasterPoseComponent; // 0x4f0(0x08)
	Unknown SkinCacheUsage; // 0x4f8(0x10)
	Unknown PhysicsAssetOverride; // 0x600(0x08)
	int32_t ForcedLodModel; // 0x608(0x04)
	int32_t MinLodModel; // 0x60c(0x04)
	float StreamingDistanceMultiplier; // 0x618(0x04)
	Unknown LODInfo; // 0x628(0x10)
	Unknown VisibilityBasedAnimTickOption; // 0x65c(0x01)
	char bOverrideMinLod; // 0x65e(0x01)
	char bUseBoundsFromMasterPoseComponent; // 0x65e(0x01)
	char bForceWireframe; // 0x65e(0x01)
	char bDisplayBones; // 0x65e(0x01)
	char bDisableMorphTarget; // 0x65e(0x01)
	char bHideSkin; // 0x65e(0x01)
	char bPerBoneMotionBlur; // 0x65f(0x01)
	char bComponentUseFixedSkelBounds; // 0x65f(0x01)
	char bConsiderAllBodiesForBounds; // 0x65f(0x01)
	char bSyncAttachParentLOD; // 0x65f(0x01)
	char bCanHighlightSelectedSections; // 0x65f(0x01)
	char bRecentlyRendered; // 0x65f(0x01)
	char bCastCapsuleDirectShadow; // 0x65f(0x01)
	char bCastCapsuleIndirectShadow; // 0x65f(0x01)
	char bCPUSkinning; // 0x660(0x01)
	char bEnableUpdateRateOptimizations; // 0x660(0x01)
	char bDisplayDebugUpdateRateOptimizations; // 0x660(0x01)
	char bRenderStatic; // 0x660(0x01)
	char bIgnoreMasterPoseComponentLOD; // 0x660(0x01)
	char bCachedLocalBoundsUpToDate; // 0x660(0x01)
	char bForceMeshObjectUpdate; // 0x661(0x01)
	float CapsuleIndirectShadowMinVisibility; // 0x664(0x04)
	Unknown CachedWorldSpaceBounds; // 0x678(0x1c)
	Unknown CachedWorldToLocalTransform; // 0x6a0(0x40)
	double ForceMipLevelsToBeResidentTimestamp; // 0x28(0x08)
	int32_t NumCinematicMipLevels; // 0x30(0x04)
	int32_t StreamingIndex; // 0x34(0x04)
	int32_t CachedCombinedLODBias; // 0x38(0x04)
	Unknown CachedNumResidentLODs; // 0x3c(0x01)
	char bCachedReadyForStreaming; // 0x3d(0x01)
	char NeverStream; // 0x3d(0x01)
	char bGlobalForceMipLevelsToBeResident; // 0x3d(0x01)
	char bIsStreamable; // 0x3d(0x01)
	char bHasStreamingUpdatePending; // 0x3d(0x01)
	char bForceMiplevelsToBeResident; // 0x3d(0x01)
	char bIgnoreStreamingMipBias; // 0x3d(0x01)
	char bUseCinematicMipLevels; // 0x3d(0x01)
	Unknown Skeleton; // 0x60(0x08)
	Unknown ImportedBounds; // 0x68(0x1c)
	Unknown ExtendedBounds; // 0x84(0x1c)
	Unknown PositiveBoundsExtension; // 0xa0(0x0c)
	Unknown NegativeBoundsExtension; // 0xac(0x0c)
	Unknown Materials; // 0xb8(0x10)
	Unknown SkelMirrorTable; // 0xc8(0x10)
	Unknown LODInfo; // 0xd8(0x10)
	Unknown MinLOD; // 0x138(0x04)
	Unknown DisableBelowMinLodStripping; // 0x13c(0x01)
	Unknown SkelMirrorAxis; // 0x13d(0x01)
	Unknown SkelMirrorFlipAxis; // 0x13e(0x01)
	char bUseFullPrecisionUVs; // 0x13f(0x01)
	char bUseHighPrecisionTangentBasis; // 0x13f(0x01)
	char bHasBeenSimplified; // 0x13f(0x01)
	char bHasVertexColors; // 0x13f(0x01)
	char bEnablePerPolyCollision; // 0x13f(0x01)
	Unknown BodySetup; // 0x140(0x08)
	Unknown PhysicsAsset; // 0x148(0x08)
	Unknown ShadowPhysicsAsset; // 0x150(0x08)
	Unknown NodeMappingData; // 0x158(0x10)
	Unknown MorphTargets; // 0x168(0x10)
	Unknown PostProcessAnimBlueprint; // 0x2f0(0x08)
	Unknown MeshClothingAssets; // 0x2f8(0x10)
	Unknown SamplingInfo; // 0x308(0x30)
	Unknown AssetUserData; // 0x338(0x10)
	Unknown Sockets; // 0x350(0x10)
	Unknown SkinWeightProfiles; // 0x370(0x10)
	Unknown StaticMeshComponent; // 0x310(0x08)
	char bStaticMeshReplicateMovement; // 0x318(0x01)
	Unknown NavigationGeometryGatheringMode; // 0x319(0x01)
	Unknown LightingGuid; // 0x48(0x10)
	int32_t LODBias; // 0x58(0x04)
	Unknown CompressionSettings; // 0x5c(0x01)
	Unknown Filter; // 0x5d(0x01)
	Unknown MipLoadOptions; // 0x5e(0x01)
	Unknown LODGroup; // 0x5f(0x01)
	char SRGB; // 0x60(0x01)
	char bNoTiling; // 0x60(0x01)
	char VirtualTextureStreaming; // 0x60(0x01)
	char CompressionYCoCg; // 0x60(0x01)
	char bAsyncResourceReleaseHasBeenStarted; // 0x60(0x01)
	Unknown AssetUserData; // 0x68(0x10)
	Unknown Format; // 0xc0(0x01)
	Unknown PlayerOwner; // 0x310(0x08)
	char bLostFocusPaused; // 0x318(0x01)
	char bShowHUD; // 0x318(0x01)
	char bShowDebugInfo; // 0x318(0x01)
	int32_t CurrentTargetIndex; // 0x31c(0x04)
	char bShowHitBoxDebugInfo; // 0x320(0x01)
	char bShowOverlays; // 0x320(0x01)
	char bEnableDebugTextShadow; // 0x320(0x01)
	Unknown PostRenderedActors; // 0x328(0x10)
	Unknown DebugDisplay; // 0x340(0x10)
	Unknown ToggledDebugCategories; // 0x350(0x10)
	Unknown Canvas; // 0x360(0x08)
	Unknown DebugCanvas; // 0x368(0x08)
	Unknown DebugTextList; // 0x370(0x10)
	Unknown ShowDebugTargetDesiredClass; // 0x380(0x08)
	Unknown ShowDebugTargetActor; // 0x388(0x08)
	Unknown PlayerController; // 0x30(0x08)
	int32_t CurrentNetSpeed; // 0x38(0x04)
	int32_t ConfiguredInternetSpeed; // 0x3c(0x04)
	int32_t ConfiguredLanSpeed; // 0x40(0x04)
	Unknown SelfNetConnection; // 0xb0(0x08)
	Unknown Children; // 0xb8(0x10)
	Unknown Driver; // 0xc8(0x08)
	Unknown PackageMapClass; // 0xd0(0x08)
	Unknown PackageMap; // 0xd8(0x08)
	Unknown OpenChannels; // 0xe0(0x10)
	Unknown SentTemporaries; // 0xf0(0x10)
	Unknown ViewTarget; // 0x100(0x08)
	Unknown OwningActor; // 0x108(0x08)
	int32_t MaxPacket; // 0x110(0x04)
	char InternalAck; // 0x114(0x01)
	Unknown PlayerId; // 0x1d0(0x28)
	double LastReceiveTime; // 0x240(0x08)
	Unknown ChannelsToTick; // 0x1580(0x10)
	struct FString NetConnectionClassName; // 0x30(0x10)
	struct FString ReplicationDriverClassName; // 0x40(0x10)
	int32_t MaxDownloadSize; // 0x50(0x04)
	char bClampListenServerTickRate; // 0x54(0x01)
	int32_t NetServerMaxTickRate; // 0x58(0x04)
	int32_t MaxNetTickRate; // 0x5c(0x04)
	int32_t MaxInternetClientRate; // 0x60(0x04)
	int32_t MaxClientRate; // 0x64(0x04)
	float ServerTravelPause; // 0x68(0x04)
	float SpawnPrioritySeconds; // 0x6c(0x04)
	float RelevantTimeout; // 0x70(0x04)
	float KeepAliveTime; // 0x74(0x04)
	float InitialConnectTimeout; // 0x78(0x04)
	float ConnectionTimeout; // 0x7c(0x04)
	float TimeoutMultiplierForUnoptimizedBuilds; // 0x80(0x04)
	char bNoTimeouts; // 0x84(0x01)
	char bNeverApplyNetworkEmulationSettings; // 0x85(0x01)
	Unknown ServerConnection; // 0x88(0x08)
	Unknown ClientConnections; // 0x90(0x10)
	int32_t RecentlyDisconnectedTrackingTime; // 0x100(0x04)
	Unknown World; // 0x140(0x08)
	Unknown WorldPackage; // 0x148(0x08)
	Unknown NetConnectionClass; // 0x170(0x08)
	Unknown ReplicationDriverClass; // 0x178(0x08)
	struct FName NetDriverName; // 0x190(0x08)
	Unknown ChannelDefinitions; // 0x198(0x10)
	Unknown ChannelDefinitionMap; // 0x1a8(0x50)
	Unknown ActorChannelPool; // 0x1f8(0x10)
	float Time; // 0x210(0x04)
	Unknown ReplicationDriver; // 0x6e8(0x08)

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
	void Construct(); // Construct ControlWidget.ControlWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game+0x23ad490>
	void ToggleActive(); // ToggleActive Engine.ActorComponent.ToggleActive // (Native|Public|BlueprintCallable) // <Game+0x3385ac0>
	void ToggleVisibility(char bPropagateToChildren); // ToggleVisibility Engine.SceneComponent.ToggleVisibility // (Final|Native|Public|BlueprintCallable) // <Game+0x3de3730>
	void OnTickReplaySampleRecord(Unknown DemoNetDriver, float MinRecordHz, float MaxRecordHz, char bSaveCheckpoint); // OnTickReplaySampleRecord Engine.MKActorEx.OnTickReplaySampleRecord // (Final|Native|Private) // <Game+0x3d90770>
	char WasRecentlyRendered(float Tolerance); // WasRecentlyRendered Engine.Actor.WasRecentlyRendered // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x3c5f4e0>
	void OnRep_ReplicatedPhysAsset(); // OnRep_ReplicatedPhysAsset Engine.SkeletalMeshActor.OnRep_ReplicatedPhysAsset // (Native|Public) // <Game+0x1237680>
	char WasRecentlyRendered(float Tolerance); // WasRecentlyRendered Engine.PrimitiveComponent.WasRecentlyRendered // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x3dd0a20>
	void SetVectorParameterValueOnMaterials(struct FName ParameterName, Unknown ParameterValue); // SetVectorParameterValueOnMaterials Engine.MeshComponent.SetVectorParameterValueOnMaterials // (Final|Native|Public|HasDefaults|BlueprintCallable) // <Game+0x3d884d0>
	void UnloadSkinWeightProfile(struct FName InProfileName); // UnloadSkinWeightProfile Engine.SkinnedMeshComponent.UnloadSkinWeightProfile // (Final|Native|Public|BlueprintCallable) // <Game+0x3df72f0>
	void SetLODSettings(Unknown InLODSettings); // SetLODSettings Engine.SkeletalMesh.SetLODSettings // (Final|Native|Public|BlueprintCallable) // <Game+0x16b4b10>
	void SetMobility(Unknown InMobility); // SetMobility Engine.StaticMeshActor.SetMobility // (Final|Native|Public|BlueprintCallable) // <Game+0x124d330>
	void ShowHUD(); // ShowHUD Engine.HUD.ShowHUD // (Exec|Native|Public) // <Game+0x1e4f220>
	void Activate(); // Activate Engine.BlueprintAsyncActionBase.Activate // (Native|Public|BlueprintCallable) // <Game+0x2edcf90>
};

