// Enum MRMesh.EMeshTrackerVertexColorMode
enum class EMeshTrackerVertexColorMode : uint8_t {
	None = 0,
	Confidence = 1,
	Block = 2,
	EMeshTrackerVertexColorMode_MAX = 3,
};

// Class MRMesh.MockDataMeshTrackerComponent
class UMockDataMeshTrackerComponent : public USceneComponent {

public:

	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x230 (16)
	char ScanWorld : 0; // 0x240 (1)
	char RequestNormals : 0; // 0x241 (1)
	char RequestVertexConfidence : 0; // 0x242 (1)
	enum class Unknow VertexColorMode; // 0x243 (1)
	struct TArray<Unknown> BlockVertexColors; // 0x248 (16)
	struct Unknown VertexColorFromConfidenceZero; // 0x258 (16)
	struct Unknown VertexColorFromConfidenceOne; // 0x268 (16)
	float UpdateInterval; // 0x278 (4)
	struct Unknown MRMesh; // 0x280 (8)

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<Unknown>& Vertices, struct TArray<Unknown>& Triangles, struct TArray<Unknown>& Normals, struct TArray<Unknown>& Confidence); // DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void DisconnectMRMesh(struct Unknown InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x369DC50>
	void ConnectMRMesh(struct Unknown InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x369DBB0>
};

// Class MRMesh.MRMeshComponent
class UMRMeshComponent : public UPrimitiveComponent {

public:

	struct Unknown Material; // 0x4B8 (8)
	char bCreateMeshProxySections : 0; // 0x4C0 (1)
	char bUpdateNavMeshOnMeshUpdate : 0; // 0x4C1 (1)
	char bNeverCreateCollisionMesh : 0; // 0x4C2 (1)
	struct Unknown CachedBodySetup; // 0x4C8 (8)
	struct TArray<Unknown> BodySetups; // 0x4D0 (16)
	struct Unknown WireframeMaterial; // 0x4E0 (8)

	char IsConnected(); // Function MRMesh.MRMeshComponent.IsConnected(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x369DCF0>
	void ForceNavMeshUpdate(); // Function MRMesh.MRMeshComponent.ForceNavMeshUpdate(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x369DCD0>
	void Clear(); // Function MRMesh.MRMeshComponent.Clear(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x369DAF0>
};

// DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
inline void UMockDataMeshTrackerComponent::OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<Unknown>& Vertices, struct TArray<Unknown>& Triangles, struct TArray<Unknown>& Normals, struct TArray<Unknown>& Confidence) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature");

	struct OnMockDataMeshTrackerUpdated__DelegateSignature_Params {
		int32_t Index;
		struct TArray<Unknown>& Vertices;
		struct TArray<Unknown>& Triangles;
		struct TArray<Unknown>& Normals;
		struct TArray<Unknown>& Confidence;
	}; OnMockDataMeshTrackerUpdated__DelegateSignature_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Vertices = Params.Vertices;
	Triangles = Params.Triangles;
	Normals = Params.Normals;
	Confidence = Params.Confidence;

}

// Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
inline void UMockDataMeshTrackerComponent::DisconnectMRMesh(struct Unknown InMRMeshPtr) {
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh");

	struct DisconnectMRMesh_Params {
		struct Unknown InMRMeshPtr;
	}; DisconnectMRMesh_Params Params;

	Params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
inline void UMockDataMeshTrackerComponent::ConnectMRMesh(struct Unknown InMRMeshPtr) {
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh");

	struct ConnectMRMesh_Params {
		struct Unknown InMRMeshPtr;
	}; ConnectMRMesh_Params Params;

	Params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MRMesh.MRMeshComponent.IsConnected
inline char UMRMeshComponent::IsConnected() {
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.IsConnected");

	struct IsConnected_Params {
		
		char ReturnValue;

	}; IsConnected_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MRMesh.MRMeshComponent.ForceNavMeshUpdate
inline void UMRMeshComponent::ForceNavMeshUpdate() {
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.ForceNavMeshUpdate");

	struct ForceNavMeshUpdate_Params {
		
	}; ForceNavMeshUpdate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MRMesh.MRMeshComponent.Clear
inline void UMRMeshComponent::Clear() {
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.Clear");

	struct Clear_Params {
		
	}; Clear_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

