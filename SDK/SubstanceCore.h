// Enum SubstanceCore.ESubstanceInputType
enum class ESubstanceInputType : uint8_t {
	SIT_Float = 0,
	SIT_Float2 = 1,
	SIT_Float3 = 2,
	SIT_Float4 = 3,
	SIT_Integer = 4,
	SIT_Image = 5,
	SIT_Unused_7 = 6,
	SIT_Unused_8 = 7,
	SIT_Integer2 = 8,
	SIT_Integer3 = 9,
	SIT_Integer4 = 10,
	SIT_MAX = 11,
};

// Enum SubstanceCore.ESubstanceGenerationMode
enum class ESubstanceGenerationMode : uint8_t {
	SGM_PlatformDefault = 0,
	SGM_Baked = 1,
	SGM_OnLoadSync = 2,
	SGM_OnLoadSyncAndCache = 3,
	SGM_OnLoadAsync = 4,
	SGM_OnLoadAsyncAndCache = 5,
	SGM_MAX = 6,
};

// Enum SubstanceCore.EDefaultSubstanceTextureSize
enum class EDefaultSubstanceTextureSize : uint8_t {
	Size_1 = 0,
	Size_17 = 4,
	Size_33 = 5,
	Size_65 = 6,
	Size_129 = 7,
	Size_257 = 8,
	Size_513 = 9,
	Size_1025 = 10,
	Size_2049 = 11,
	Size_4097 = 12,
	Size_MAX = 13,
};

// Enum SubstanceCore.ESubstanceEngineType
enum class ESubstanceEngineType : uint8_t {
	SET_CPU = 0,
	SET_GPU = 1,
	SET_MAX = 2,
};

// Enum SubstanceCore.ESubstanceTextureSize
enum class ESubstanceTextureSize : uint8_t {
	ERL_17 = 0,
	ERL_33 = 1,
	ERL_65 = 2,
	ERL_129 = 3,
	ERL_257 = 4,
	ERL_513 = 5,
	ERL_1025 = 6,
	ERL_2049 = 7,
	ERL_4097 = 8,
	ERL_8193 = 9,
	ERL_MAX = 10,
};

// Class SubstanceCore.SubstanceGraphInstance
class USubstanceGraphInstance : public Object {

public:

	struct FString PackageURL; // 0x38 (16)
	struct Unknown ParentFactory; // 0x48 (8)
	struct TMap<Unknown, Unknown> ImageSources; // 0x50 (80)
	struct Unknown CreatedMaterial; // 0xA0 (8)
	struct Unknown ConstantCreatedMaterial; // 0xA8 (8)
	struct Unknown DynamicCreatedMaterial; // 0xB0 (8)
	struct TMap<Unknown, Unknown> OutputTextureLinkData; // 0xB8 (80)
	struct TMap<Unknown, Unknown> OutputInstances; // 0x108 (80)
	char bIsFrozen : 0; // 0x158 (1)

	void SetInputString(struct FString Identifier, struct FString Value); // Function SubstanceCore.SubstanceGraphInstance.SetInputString(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10D1990>
	void SetInputInt(struct FString Identifier, struct TArray<Unknown>& InputValues); // Function SubstanceCore.SubstanceGraphInstance.SetInputInt(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10D1830>
	char SetInputImg(struct FString InputName, struct Unknown Value); // Function SubstanceCore.SubstanceGraphInstance.SetInputImg(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10D1740>
	void SetInputFloat(struct FString Identifier, struct TArray<Unknown>& InputValues); // Function SubstanceCore.SubstanceGraphInstance.SetInputFloat(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10D15E0>
	void SetInputColor(struct FString Identifier, struct Unknown& Color); // Function SubstanceCore.SubstanceGraphInstance.SetInputColor(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10D1490>
	void SetInputBool(struct FString Identifier, char Bool); // Function SubstanceCore.SubstanceGraphInstance.SetInputBool(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10D1350>
	struct Unknown GetIntInputDesc(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetIntInputDesc(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10D0D00>
	struct Unknown GetInstanceDesc(); // Function SubstanceCore.SubstanceGraphInstance.GetInstanceDesc(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10D0BD0>
	char GetInputType(struct FString InputName); // Function SubstanceCore.SubstanceGraphInstance.GetInputType(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10D0AD0>
	struct FString GetInputString(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetInputString(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10D0990>
	struct TArray<Unknown> GetInputNames(); // Function SubstanceCore.SubstanceGraphInstance.GetInputNames(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10D08B0>
	struct TArray<Unknown> GetInputInt(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetInputInt(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10D0770>
	struct TArray<Unknown> GetInputFloat(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetInputFloat(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10D0630>
	struct Unknown GetInputColor(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetInputColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10D0520>
	char GetInputBool(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetInputBool(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10D0420>
	struct Unknown GetFloatInputDesc(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetFloatInputDesc(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10D0120>
	struct Unknown GetDynamicMaterialInstance(struct FName Name, struct Unknown InParentMaterial); // Function SubstanceCore.SubstanceGraphInstance.GetDynamicMaterialInstance(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10CFF90>
};

// Class SubstanceCore.SubstanceInstanceFactory
class USubstanceInstanceFactory : public Object {

public:

	struct TArray<Unknown> mGraphInstances; // 0x28 (16)
	struct FString RelativeSourceFilePath; // 0x50 (16)
	struct FString AbsoluteSourceFilePath; // 0x60 (16)
	struct FString SourceFileTimestamp; // 0x70 (16)
	char GenerationMode; // 0x80 (1)
};

// Class SubstanceCore.SubstanceOutputData
class USubstanceOutputData : public Object {

public:

	struct Unknown ConnectedObject; // 0x28 (8)
	struct Unknown ParamInfo; // 0x30 (16)
	struct Unknown ParentInstance; // 0x40 (8)
	struct Unknown CacheGuid; // 0x48 (16)
};

// Class SubstanceCore.SubstanceSettings
class USubstanceSettings : public Object {

public:

	int32_t MemoryBudgetMb; // 0x28 (4)
	int32_t CPUCores; // 0x2C (4)
	int32_t AsyncLoadMipClip; // 0x30 (4)
	int32_t MaxAsyncSubstancesRenderedPerFrame; // 0x34 (4)
	char SubstanceEngine; // 0x38 (1)
	char DefaultSubstanceOutputSizeX; // 0x39 (1)
	char DefaultSubstanceOutputSizeY; // 0x3A (1)
	struct Unknown DefaultTemplateMaterial; // 0x40 (40)
};

// Class SubstanceCore.SubstanceTexture2D
class USubstanceTexture2D : public UTexture2DDynamic {

public:

	struct Unknown ParentInstance; // 0x100 (8)
	char AddressX; // 0x108 (1)
	char AddressY; // 0x109 (1)
	char bCooked : 0; // 0x10A (1)
};

// ScriptStruct SubstanceCore.SubstanceInstanceDesc
struct FSubstanceInstanceDesc {
	struct FString Name; // 0x0 (16)
	struct TArray<Unknown> Inputs; // 0x10 (16)
};

// ScriptStruct SubstanceCore.SubstanceInputDesc
struct FSubstanceInputDesc {
	struct FString Name; // 0x0 (16)
	char Type; // 0x10 (1)
};

// ScriptStruct SubstanceCore.SubstanceFloatInputDesc
struct FSubstanceFloatInputDesc : FSubstanceInputDesc {
	struct TArray<Unknown> Min; // 0x18 (16)
	struct TArray<Unknown> MAX; // 0x28 (16)
	struct TArray<Unknown> Default; // 0x38 (16)
};

// ScriptStruct SubstanceCore.SubstanceIntInputDesc
struct FSubstanceIntInputDesc : FSubstanceInputDesc {
	struct TArray<Unknown> Min; // 0x18 (16)
	struct TArray<Unknown> MAX; // 0x28 (16)
	struct TArray<Unknown> Default; // 0x38 (16)
};

// ScriptStruct SubstanceCore.SubstanceConnection
struct FSubstanceConnection {
	struct FString OutputIdentifier; // 0x0 (16)
	struct FString InputImageIdentifier; // 0x10 (16)
};

// Function SubstanceCore.SubstanceGraphInstance.SetInputString
inline void USubstanceGraphInstance::SetInputString(struct FString Identifier, struct FString Value) {
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.SetInputString");

	struct SetInputString_Params {
		struct FString Identifier;
		struct FString Value;
	}; SetInputString_Params Params;

	Params.Identifier = Identifier;
	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SubstanceCore.SubstanceGraphInstance.SetInputInt
inline void USubstanceGraphInstance::SetInputInt(struct FString Identifier, struct TArray<Unknown>& InputValues) {
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.SetInputInt");

	struct SetInputInt_Params {
		struct FString Identifier;
		struct TArray<Unknown>& InputValues;
	}; SetInputInt_Params Params;

	Params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InputValues = Params.InputValues;

}

// Function SubstanceCore.SubstanceGraphInstance.SetInputImg
inline char USubstanceGraphInstance::SetInputImg(struct FString InputName, struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.SetInputImg");

	struct SetInputImg_Params {
		struct FString InputName;
		struct Unknown Value;
		char ReturnValue;

	}; SetInputImg_Params Params;

	Params.InputName = InputName;
	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function SubstanceCore.SubstanceGraphInstance.SetInputFloat
inline void USubstanceGraphInstance::SetInputFloat(struct FString Identifier, struct TArray<Unknown>& InputValues) {
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.SetInputFloat");

	struct SetInputFloat_Params {
		struct FString Identifier;
		struct TArray<Unknown>& InputValues;
	}; SetInputFloat_Params Params;

	Params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InputValues = Params.InputValues;

}

// Function SubstanceCore.SubstanceGraphInstance.SetInputColor
inline void USubstanceGraphInstance::SetInputColor(struct FString Identifier, struct Unknown& Color) {
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.SetInputColor");

	struct SetInputColor_Params {
		struct FString Identifier;
		struct Unknown& Color;
	}; SetInputColor_Params Params;

	Params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Color = Params.Color;

}

// Function SubstanceCore.SubstanceGraphInstance.SetInputBool
inline void USubstanceGraphInstance::SetInputBool(struct FString Identifier, char Bool) {
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.SetInputBool");

	struct SetInputBool_Params {
		struct FString Identifier;
		char Bool;
	}; SetInputBool_Params Params;

	Params.Identifier = Identifier;
	Params.Bool = Bool;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SubstanceCore.SubstanceGraphInstance.GetIntInputDesc
inline struct Unknown USubstanceGraphInstance::GetIntInputDesc(struct FString Identifier) {
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetIntInputDesc");

	struct GetIntInputDesc_Params {
		struct FString Identifier;
		struct Unknown ReturnValue;

	}; GetIntInputDesc_Params Params;

	Params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function SubstanceCore.SubstanceGraphInstance.GetInstanceDesc
inline struct Unknown USubstanceGraphInstance::GetInstanceDesc() {
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInstanceDesc");

	struct GetInstanceDesc_Params {
		
		struct Unknown ReturnValue;

	}; GetInstanceDesc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function SubstanceCore.SubstanceGraphInstance.GetInputType
inline char USubstanceGraphInstance::GetInputType(struct FString InputName) {
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputType");

	struct GetInputType_Params {
		struct FString InputName;
		char ReturnValue;

	}; GetInputType_Params Params;

	Params.InputName = InputName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function SubstanceCore.SubstanceGraphInstance.GetInputString
inline struct FString USubstanceGraphInstance::GetInputString(struct FString Identifier) {
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputString");

	struct GetInputString_Params {
		struct FString Identifier;
		struct FString ReturnValue;

	}; GetInputString_Params Params;

	Params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function SubstanceCore.SubstanceGraphInstance.GetInputNames
inline struct TArray<Unknown> USubstanceGraphInstance::GetInputNames() {
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputNames");

	struct GetInputNames_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetInputNames_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function SubstanceCore.SubstanceGraphInstance.GetInputInt
inline struct TArray<Unknown> USubstanceGraphInstance::GetInputInt(struct FString Identifier) {
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputInt");

	struct GetInputInt_Params {
		struct FString Identifier;
		struct TArray<Unknown> ReturnValue;

	}; GetInputInt_Params Params;

	Params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function SubstanceCore.SubstanceGraphInstance.GetInputFloat
inline struct TArray<Unknown> USubstanceGraphInstance::GetInputFloat(struct FString Identifier) {
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputFloat");

	struct GetInputFloat_Params {
		struct FString Identifier;
		struct TArray<Unknown> ReturnValue;

	}; GetInputFloat_Params Params;

	Params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function SubstanceCore.SubstanceGraphInstance.GetInputColor
inline struct Unknown USubstanceGraphInstance::GetInputColor(struct FString Identifier) {
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputColor");

	struct GetInputColor_Params {
		struct FString Identifier;
		struct Unknown ReturnValue;

	}; GetInputColor_Params Params;

	Params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function SubstanceCore.SubstanceGraphInstance.GetInputBool
inline char USubstanceGraphInstance::GetInputBool(struct FString Identifier) {
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputBool");

	struct GetInputBool_Params {
		struct FString Identifier;
		char ReturnValue;

	}; GetInputBool_Params Params;

	Params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function SubstanceCore.SubstanceGraphInstance.GetFloatInputDesc
inline struct Unknown USubstanceGraphInstance::GetFloatInputDesc(struct FString Identifier) {
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetFloatInputDesc");

	struct GetFloatInputDesc_Params {
		struct FString Identifier;
		struct Unknown ReturnValue;

	}; GetFloatInputDesc_Params Params;

	Params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function SubstanceCore.SubstanceGraphInstance.GetDynamicMaterialInstance
inline struct Unknown USubstanceGraphInstance::GetDynamicMaterialInstance(struct FName Name, struct Unknown InParentMaterial) {
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetDynamicMaterialInstance");

	struct GetDynamicMaterialInstance_Params {
		struct FName Name;
		struct Unknown InParentMaterial;
		struct Unknown ReturnValue;

	}; GetDynamicMaterialInstance_Params Params;

	Params.Name = Name;
	Params.InParentMaterial = InParentMaterial;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

