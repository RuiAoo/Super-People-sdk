// BlueprintGeneratedClass BP_KeyAction.BP_KeyAction_C
class UBP_KeyAction_C : public Object {

public:

	struct FString Action Name; // 0x28 (16)
	struct FString Category; // 0x38 (16)
	struct TArray<Unknown> Key Mappings; // 0x48 (16)

	void Get Mapping(struct FString Mapping Name, struct Unknown& Mapping, char& SUCCESS); // Function BP_KeyAction.BP_KeyAction_C.Get Mapping(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Load Action(struct Unknown Game Settings); // Function BP_KeyAction.BP_KeyAction_C.Load Action(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Save Action(struct Unknown Game Settings); // Function BP_KeyAction.BP_KeyAction_C.Save Action(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Key Action Current State(struct Unknown Player Controller, float& Action Axis Value, char& Just Pressed, char& Just Released); // Function BP_KeyAction.BP_KeyAction_C.Key Action Current State(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Init Key Action(struct Unknown Key Action, struct FString Action Name, struct Unknown& Action); // Function BP_KeyAction.BP_KeyAction_C.Init Key Action(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function BP_KeyAction.BP_KeyAction_C.Get Mapping
inline void UBP_KeyAction_C::Get Mapping(struct FString Mapping Name, struct Unknown& Mapping, char& SUCCESS) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyAction.BP_KeyAction_C.Get Mapping");

	struct Get Mapping_Params {
		struct FString Mapping Name;
		struct Unknown& Mapping;
		char& SUCCESS;
	}; Get Mapping_Params Params;

	Params.Mapping Name = Mapping Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Mapping = Params.Mapping;
	SUCCESS = Params.SUCCESS;

}

// Function BP_KeyAction.BP_KeyAction_C.Load Action
inline void UBP_KeyAction_C::Load Action(struct Unknown Game Settings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyAction.BP_KeyAction_C.Load Action");

	struct Load Action_Params {
		struct Unknown Game Settings;
	}; Load Action_Params Params;

	Params.Game Settings = Game Settings;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_KeyAction.BP_KeyAction_C.Save Action
inline void UBP_KeyAction_C::Save Action(struct Unknown Game Settings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyAction.BP_KeyAction_C.Save Action");

	struct Save Action_Params {
		struct Unknown Game Settings;
	}; Save Action_Params Params;

	Params.Game Settings = Game Settings;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_KeyAction.BP_KeyAction_C.Key Action Current State
inline void UBP_KeyAction_C::Key Action Current State(struct Unknown Player Controller, float& Action Axis Value, char& Just Pressed, char& Just Released) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyAction.BP_KeyAction_C.Key Action Current State");

	struct Key Action Current State_Params {
		struct Unknown Player Controller;
		float& Action Axis Value;
		char& Just Pressed;
		char& Just Released;
	}; Key Action Current State_Params Params;

	Params.Player Controller = Player Controller;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Action Axis Value = Params.Action Axis Value;
	Just Pressed = Params.Just Pressed;
	Just Released = Params.Just Released;

}

// Function BP_KeyAction.BP_KeyAction_C.Init Key Action
inline void UBP_KeyAction_C::Init Key Action(struct Unknown Key Action, struct FString Action Name, struct Unknown& Action) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyAction.BP_KeyAction_C.Init Key Action");

	struct Init Key Action_Params {
		struct Unknown Key Action;
		struct FString Action Name;
		struct Unknown& Action;
	}; Init Key Action_Params Params;

	Params.Key Action = Key Action;
	Params.Action Name = Action Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Action = Params.Action;

}

