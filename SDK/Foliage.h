// Enum Foliage.ECullDistancePreset
enum class ECullDistancePreset : uint8_t {
	Custom = 0,
	Grass_Deco = 1,
	Grass_Gameplay = 2,
	Grass_Default = 3,
	Tree_Deco = 4,
	Tree_Gameplay = 5,
	Bush_Deco = 6,
	Bush_Gameplay = 7,
	Rock_Deco = 8,
	Rock_Gameplay = 9,
	Meaningless = 10,
	FirstArrayIndex = 1,
	ArrayCount = 10,
	ECullDistancePreset_MAX = 11,
};

// Enum Foliage.EFoliageScaling
enum class EFoliageScaling : uint8_t {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	LockXZ = 3,
	LockYZ = 4,
	EFoliageScaling_MAX = 5,
};

// Enum Foliage.EVertexColorMaskChannel
enum class EVertexColorMaskChannel : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	MAX_None = 4,
	EVertexColorMaskChannel_MAX = 5,
};

// Enum Foliage.FoliageVertexColorMask
enum class FoliageVertexColorMask : uint8_t {
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red = 1,
	FOLIAGEVERTEXCOLORMASK_Green = 2,
	FOLIAGEVERTEXCOLORMASK_Blue = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha = 4,
	FOLIAGEVERTEXCOLORMASK_MAX = 5,
};

// Enum Foliage.ESimulationQuery
enum class ESimulationQuery : uint8_t {
	None = 0,
	CollisionOverlap = 1,
	ShadeOverlap = 2,
	AnyOverlap = 3,
	ESimulationQuery_MAX = 4,
};

// Enum Foliage.ESimulationOverlap
enum class ESimulationOverlap : uint8_t {
	CollisionOverlap = 0,
	ShadeOverlap = 1,
	None = 2,
	ESimulationOverlap_MAX = 3,
};

// Class Foliage.FoliageInstancedStaticMeshComponent
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent {

public:

	struct FMulticastInlineDelegate OnInstanceTakePointDamage; // 0x710 (16)
	struct FMulticastInlineDelegate OnInstanceTakeRadialDamage; // 0x720 (16)
	struct Unknown GenerationGuid; // 0x730 (16)
};

// Class Foliage.FoliageSettings
class UFoliageSettings : public UDeveloperSettings {

public:

	struct TArray<Unknown> CullDistancePresets; // 0x38 (16)
	int32_t DesiredMaxTrianglesToRender; // 0x48 (4)
	float MinimumScreenSize; // 0x4C (4)
	int32_t MaxOcclusionQueriesPerComponent; // 0x50 (4)
	int32_t MinOcclusionQueriesPerComponent; // 0x54 (4)
	int32_t MinInstancesPerOcclusionQuery; // 0x58 (4)
};

// Class Foliage.FoliageType
class UFoliageType : public Object {

public:

	struct Unknown UpdateGuid; // 0x28 (16)
	float Density; // 0x38 (4)
	float DensityAdjustmentFactor; // 0x3C (4)
	float Radius; // 0x40 (4)
	char bSingleInstanceModeOverrideRadius : 0; // 0x44 (1)
	float SingleInstanceModeRadius; // 0x48 (4)
	enum class Unknow Scaling; // 0x4C (1)
	struct Unknown ScaleX; // 0x50 (8)
	struct Unknown ScaleY; // 0x58 (8)
	struct Unknown ScaleZ; // 0x60 (8)
	struct Unknown VertexColorMaskByChannel[0x4]; // 0x68 (48)
	char VertexColorMask; // 0x98 (1)
	float VertexColorMaskThreshold; // 0x9C (4)
	char VertexColorMaskInvert : 0; // 0xA0 (1)
	struct Unknown ZOffset; // 0xA4 (8)
	char AlignToNormal : 0; // 0xAC (1)
	float AlignMaxAngle; // 0xB0 (4)
	char RandomYaw : 0; // 0xB4 (1)
	float RandomPitchAngle; // 0xB8 (4)
	struct Unknown GroundSlopeAngle; // 0xBC (8)
	struct Unknown Height; // 0xC4 (8)
	struct TArray<Unknown> LandscapeLayers; // 0xD0 (16)
	float MinimumLayerWeight; // 0xE0 (4)
	struct TArray<Unknown> ExclusionLandscapeLayers; // 0xE8 (16)
	float MinimumExclusionLayerWeight; // 0xF8 (4)
	struct FName LandscapeLayer; // 0xFC (8)
	char CollisionWithWorld : 0; // 0x104 (1)
	struct Unknown CollisionScale; // 0x108 (12)
	struct Unknown MeshBounds; // 0x114 (28)
	struct Unknown LowBoundOriginRadius; // 0x130 (12)
	char Mobility; // 0x13C (1)
	enum class Unknow CullDistancePreset; // 0x13D (1)
	char bOverrideCullDistance : 0; // 0x13E (1)
	struct Unknown CullDistance; // 0x140 (8)
	float MinScreenSizeScale; // 0x148 (4)
	char bEnableStaticLighting : 0; // 0x14C (1)
	char CastShadow : 0; // 0x14C (1)
	char bAffectDynamicIndirectLighting : 0; // 0x14C (1)
	char bAffectDistanceFieldLighting : 0; // 0x14C (1)
	char bCastDynamicShadow : 0; // 0x14C (1)
	char bCastStaticShadow : 0; // 0x14C (1)
	char bCastShadowAsTwoSided : 0; // 0x14C (1)
	char bReceivesDecals : 0; // 0x14C (1)
	char bOverrideLightMapRes : 0; // 0x14D (1)
	int32_t OverriddenLightMapRes; // 0x150 (4)
	enum class Unknow LightmapType; // 0x154 (1)
	char bUseAsOccluder : 0; // 0x158 (1)
	struct Unknown BodyInstance; // 0x160 (400)
	char CustomNavigableGeometry; // 0x2F0 (1)
	char InstanceBodiesSplitRatio; // 0x2F1 (1)
	struct Unknown LightingChannels; // 0x2F2 (1)
	char bRenderCustomDepth : 0; // 0x2F4 (1)
	int32_t CustomDepthStencilValue; // 0x2F8 (4)
	int32_t TranslucencySortPriority; // 0x2FC (4)
	float CollisionRadius; // 0x300 (4)
	float ShadeRadius; // 0x304 (4)
	int32_t NumSteps; // 0x308 (4)
	float InitialSeedDensity; // 0x30C (4)
	float AverageSpreadDistance; // 0x310 (4)
	float SpreadVariance; // 0x314 (4)
	int32_t SeedsPerStep; // 0x318 (4)
	int32_t DistributionSeed; // 0x31C (4)
	float MaxInitialSeedOffset; // 0x320 (4)
	char bCanGrowInShade : 0; // 0x324 (1)
	char bSpawnsInShade : 0; // 0x325 (1)
	float MaxInitialAge; // 0x328 (4)
	float MaxAge; // 0x32C (4)
	float OverlapPriority; // 0x330 (4)
	struct Unknown ProceduralScale; // 0x334 (8)
	struct Unknown ScaleCurve; // 0x340 (136)
	int32_t ChangeCount; // 0x3C8 (4)
	char ReapplyDensity : 0; // 0x3CC (1)
	char ReapplyRadius : 0; // 0x3CC (1)
	char ReapplyAlignToNormal : 0; // 0x3CC (1)
	char ReapplyRandomYaw : 0; // 0x3CC (1)
	char ReapplyScaling : 0; // 0x3CC (1)
	char ReapplyScaleX : 0; // 0x3CC (1)
	char ReapplyScaleY : 0; // 0x3CC (1)
	char ReapplyScaleZ : 0; // 0x3CC (1)
	char ReapplyRandomPitchAngle : 0; // 0x3CD (1)
	char ReapplyGroundSlope : 0; // 0x3CD (1)
	char ReapplyHeight : 0; // 0x3CD (1)
	char ReapplyLandscapeLayers : 0; // 0x3CD (1)
	char ReapplyZOffset : 0; // 0x3CD (1)
	char ReapplyCollisionWithWorld : 0; // 0x3CD (1)
	char ReapplyVertexColorMask : 0; // 0x3CD (1)
	char bEnableDensityScaling : 0; // 0x3CD (1)
	struct TArray<Unknown> RuntimeVirtualTextures; // 0x3D0 (16)
	int32_t VirtualTextureCullMips; // 0x3E0 (4)
	enum class Unknow VirtualTextureRenderPassType; // 0x3E4 (1)
};

// Class Foliage.FoliageType_Actor
class UFoliageType_Actor : public UFoliageType {

public:

	struct Unknown* ActorClass; // 0x3E8 (8)
	char bShouldAttachToBaseComponent : 0; // 0x3F0 (1)
};

// Class Foliage.FoliageType_InstancedStaticMesh
class UFoliageType_InstancedStaticMesh : public UFoliageType {

public:

	struct Unknown Mesh; // 0x3E8 (8)
	struct TArray<Unknown> OverrideMaterials; // 0x3F0 (16)
	struct Unknown* ComponentClass; // 0x400 (8)
};

// Class Foliage.InteractiveFoliageActor
class AInteractiveFoliageActor : public AStaticMeshActor {

public:

	struct Unknown CapsuleComponent; // 0x320 (8)
	struct Unknown TouchingActorEntryPosition; // 0x328 (12)
	struct Unknown FoliageVelocity; // 0x334 (12)
	struct Unknown FoliageForce; // 0x340 (12)
	struct Unknown FoliagePosition; // 0x34C (12)
	float FoliageDamageImpulseScale; // 0x358 (4)
	float FoliageTouchImpulseScale; // 0x35C (4)
	float FoliageStiffness; // 0x360 (4)
	float FoliageStiffnessQuadratic; // 0x364 (4)
	float FoliageDamping; // 0x368 (4)
	float MaxDamageImpulse; // 0x36C (4)
	float MaxTouchImpulse; // 0x370 (4)
	float MaxForce; // 0x374 (4)
	float Mass; // 0x378 (4)

	void CapsuleTouched(struct Unknown OverlappedComp, struct Unknown Other, struct Unknown OtherComp, int32_t OtherBodyIndex, char bFromSweep, struct Unknown& OverlapInfo); // Function Foliage.InteractiveFoliageActor.CapsuleTouched(Final|Native|Protected|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x38D85C0>
};

// Class Foliage.ProceduralFoliageBlockingVolume
class AProceduralFoliageBlockingVolume : public AVolume {

public:

	struct Unknown ProceduralFoliageVolume; // 0x348 (8)
};

// Class Foliage.ProceduralFoliageComponent
class UProceduralFoliageComponent : public UActorComponent {

public:

	struct Unknown FoliageSpawner; // 0xB0 (8)
	float TileOverlap; // 0xB8 (4)
	struct Unknown SpawningVolume; // 0xC0 (8)
	struct Unknown ProceduralGuid; // 0xC8 (16)
};

// Class Foliage.ProceduralFoliageSpawner
class UProceduralFoliageSpawner : public Object {

public:

	int32_t RandomSeed; // 0x28 (4)
	float TileSize; // 0x2C (4)
	int32_t NumUniqueTiles; // 0x30 (4)
	float MinimumQuadTreeSize; // 0x34 (4)
	struct TArray<Unknown> FoliageTypes; // 0x40 (16)

	void Simulate(int32_t NumSteps); // Function Foliage.ProceduralFoliageSpawner.Simulate(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x38D8A40>
};

// Class Foliage.ProceduralFoliageTile
class UProceduralFoliageTile : public Object {

public:

	struct Unknown FoliageSpawner; // 0x28 (8)
	struct TArray<Unknown> InstancesArray; // 0xD0 (16)
};

// Class Foliage.ProceduralFoliageVolume
class AProceduralFoliageVolume : public AVolume {

public:

	struct Unknown ProceduralComponent; // 0x348 (8)
};

// ScriptStruct Foliage.CullDistancePreset
struct FCullDistancePreset {
	struct FString Name; // 0x0 (16)
	struct Unknown MinMax; // 0x10 (8)
};

// ScriptStruct Foliage.FoliageVertexColorChannelMask
struct FFoliageVertexColorChannelMask {
	char UseMask : 0; // 0x0 (1)
	float MaskThreshold; // 0x4 (4)
	char InvertMask : 0; // 0x8 (1)
};

// ScriptStruct Foliage.FoliageTypeObject
struct FFoliageTypeObject {
	struct Unknown FoliageTypeObject; // 0x0 (8)
	struct Unknown TypeInstance; // 0x8 (8)
	char bIsAsset : 0; // 0x10 (1)
	struct Unknown* Type; // 0x18 (8)
};

// ScriptStruct Foliage.ProceduralFoliageInstance
struct FProceduralFoliageInstance {
	struct Unknown Location; // 0x0 (12)
	struct Unknown Rotation; // 0x10 (16)
	struct Unknown Normal; // 0x20 (12)
	float Age; // 0x2C (4)
	float Scale; // 0x30 (4)
	struct Unknown Type; // 0x38 (8)
};

// Function Foliage.InteractiveFoliageActor.CapsuleTouched
inline void AInteractiveFoliageActor::CapsuleTouched(struct Unknown OverlappedComp, struct Unknown Other, struct Unknown OtherComp, int32_t OtherBodyIndex, char bFromSweep, struct Unknown& OverlapInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function Foliage.InteractiveFoliageActor.CapsuleTouched");

	struct CapsuleTouched_Params {
		struct Unknown OverlappedComp;
		struct Unknown Other;
		struct Unknown OtherComp;
		int32_t OtherBodyIndex;
		char bFromSweep;
		struct Unknown& OverlapInfo;
	}; CapsuleTouched_Params Params;

	Params.OverlappedComp = OverlappedComp;
	Params.Other = Other;
	Params.OtherComp = OtherComp;
	Params.OtherBodyIndex = OtherBodyIndex;
	Params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OverlapInfo = Params.OverlapInfo;

}

// Function Foliage.ProceduralFoliageSpawner.Simulate
inline void UProceduralFoliageSpawner::Simulate(int32_t NumSteps) {
	static auto fn = UObject::FindObject<UFunction>("Function Foliage.ProceduralFoliageSpawner.Simulate");

	struct Simulate_Params {
		int32_t NumSteps;
	}; Simulate_Params Params;

	Params.NumSteps = NumSteps;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

