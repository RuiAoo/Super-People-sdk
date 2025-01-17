// ScriptStruct MagicLeapHandMeshing.MagicLeapHandMesh
struct FMagicLeapHandMesh {
	int32_t Version; // 0x0 (4)
	int32_t DataCount; // 0x4 (4)
	struct TArray<Unknown> Data; // 0x8 (16)
};

// ScriptStruct MagicLeapHandMeshing.MagicLeapHandMeshBlock
struct FMagicLeapHandMeshBlock {
	int32_t IndexCount; // 0x0 (4)
	int32_t VertexCount; // 0x4 (4)
	struct TArray<Unknown> Vertex; // 0x8 (16)
	struct TArray<Unknown> Index; // 0x18 (16)
};

