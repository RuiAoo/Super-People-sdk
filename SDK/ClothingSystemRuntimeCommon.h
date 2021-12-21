// Enum ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
enum class EClothingWindMethod_Legacy : uint8 {
	EClothingWindMethod_Legacy = 0,
	EClothingWindMethod_Legacy = 1,
	EClothingWindMethod_Legacy = 2
};

// Enum ClothingSystemRuntimeCommon.EWeightMapTargetCommon
enum class EWeightMapTargetCommon : uint8 {
	EWeightMapTargetCommon = 0,
	EWeightMapTargetCommon = 1,
	EWeightMapTargetCommon = 2,
	EWeightMapTargetCommon = 3,
	EWeightMapTargetCommon = 4,
	EWeightMapTargetCommon = 5
};

// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
struct UClothingAssetCommon : UClothingAssetBase {
	Unknown PhysicsAsset; //  0x48 Size(8)
	Unknown ClothConfigs; //  0x50 Size(50)
	Unknown ClothSharedSimConfig; //  0xa0 Size(8)
	Unknown ClothSimConfig; //  0xa8 Size(8)
	Unknown ChaosClothSimConfig; //  0xb0 Size(8)
	Unknown ClothLODData; //  0xb8 Size(10)
	Unknown LODData; //  0xc8 Size(10)
	Unknown LodMap; //  0xd8 Size(10)
	Unknown UsedBoneNames; //  0xe8 Size(10)
	Unknown UsedBoneIndices; //  0xf8 Size(10)
	int32_t ReferenceBoneIndex; //  0x108 Size(4)
	Unknown CustomData; //  0x110 Size(8)
	Unknown ClothConfig; //  0x118 Size(d4)
};

// Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
struct UClothLODDataCommon_Legacy : Object {
	Unknown PhysicalMeshData; //  0x28 Size(8)
	Unknown ClothPhysicalMeshData; //  0x30 Size(f8)
	Unknown CollisionData; //  0x128 Size(40)
};
