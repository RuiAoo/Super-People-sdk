// BlueprintGeneratedClass BP_BlueZone.BP_BlueZone_C
class ABP_BlueZone_C : public ABravoHotelBlueZone {

public:

	struct Unknown UberGraphFrame; // 0x7C0 (8)
	struct Unknown StaticMesh; // 0x7C8 (8)
	struct Unknown MagneticDecal; // 0x7D0 (8)
	float Puls_PulsScale_0F5B0359412DDBACBDF407BB69788854; // 0x7D8 (4)
	char Puls__Direction_0F5B0359412DDBACBDF407BB69788854; // 0x7DC (1)
	struct Unknown Puls; // 0x7E0 (8)
	float Height; // 0x7E8 (4)
	float SeaLevelZ; // 0x7EC (4)
	char bIsMatchEnded : 0; // 0x7F0 (1)
	float ModifyingOpacityTime; // 0x7F4 (4)
	float CurrentOpacity; // 0x7F8 (4)
	float ScaleModifier; // 0x7FC (4)
	struct Unknown ParametersCurve; // 0x800 (8)
	float MaterialParameterRadius; // 0x808 (4)
	char bWasMpUpdated : 0; // 0x80C (1)
	float PreRadius; // 0x810 (4)

	void ShouldUpdateParameter(char& Result); // Function BP_BlueZone.BP_BlueZone_C.ShouldUpdateParameter(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UpdateMaterialParameterCollections(); // Function BP_BlueZone.BP_BlueZone_C.UpdateMaterialParameterCollections(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ToggleVisibility(); // Function BP_BlueZone.BP_BlueZone_C.ToggleVisibility(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	char IsRequiredUpdateBlueZone(); // Function BP_BlueZone.BP_BlueZone_C.IsRequiredUpdateBlueZone(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Puls__FinishedFunc(); // Function BP_BlueZone.BP_BlueZone_C.Puls__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Puls__UpdateFunc(); // Function BP_BlueZone.BP_BlueZone_C.Puls__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnBattleRotyaleStateChanged(enum class Unknow PrevState, enum class Unknow CurrentState); // Function BP_BlueZone.BP_BlueZone_C.OnBattleRotyaleStateChanged(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UpdateOpacityToZero(); // Function BP_BlueZone.BP_BlueZone_C.UpdateOpacityToZero(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void On SurvivalCirclePhaseChanged(int32_t PrevPhase, int32_t CurrentPhase); // Function BP_BlueZone.BP_BlueZone_C.On SurvivalCirclePhaseChanged(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnWorldShifted(struct Unknown InWorld, struct Unknown PreviousOrigin, struct Unknown CurrentOrigin); // Function BP_BlueZone.BP_BlueZone_C.OnWorldShifted(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetCharacterLocation(struct Unknown CharacterLocation); // Function BP_BlueZone.BP_BlueZone_C.SetCharacterLocation(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void StopPulsAnimation(); // Function BP_BlueZone.BP_BlueZone_C.StopPulsAnimation(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UpdateBlueZone(); // Function BP_BlueZone.BP_BlueZone_C.UpdateBlueZone(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UpdateCenterAndRadius(struct Unknown Center, float Radius); // Function BP_BlueZone.BP_BlueZone_C.UpdateCenterAndRadius(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveTick(float DeltaSeconds); // Function BP_BlueZone.BP_BlueZone_C.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveBeginPlay(); // Function BP_BlueZone.BP_BlueZone_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_BP_BlueZone(int32_t EntryPoint); // Function BP_BlueZone.BP_BlueZone_C.ExecuteUbergraph_BP_BlueZone(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function BP_BlueZone.BP_BlueZone_C.ShouldUpdateParameter
inline void ABP_BlueZone_C::ShouldUpdateParameter(char& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlueZone.BP_BlueZone_C.ShouldUpdateParameter");

	struct ShouldUpdateParameter_Params {
		char& Result;
	}; ShouldUpdateParameter_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_BlueZone.BP_BlueZone_C.UpdateMaterialParameterCollections
inline void ABP_BlueZone_C::UpdateMaterialParameterCollections() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlueZone.BP_BlueZone_C.UpdateMaterialParameterCollections");

	struct UpdateMaterialParameterCollections_Params {
		
	}; UpdateMaterialParameterCollections_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_BlueZone.BP_BlueZone_C.ToggleVisibility
inline void ABP_BlueZone_C::ToggleVisibility() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlueZone.BP_BlueZone_C.ToggleVisibility");

	struct ToggleVisibility_Params {
		
	}; ToggleVisibility_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_BlueZone.BP_BlueZone_C.IsRequiredUpdateBlueZone
inline char ABP_BlueZone_C::IsRequiredUpdateBlueZone() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlueZone.BP_BlueZone_C.IsRequiredUpdateBlueZone");

	struct IsRequiredUpdateBlueZone_Params {
		
		char ReturnValue;

	}; IsRequiredUpdateBlueZone_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_BlueZone.BP_BlueZone_C.Puls__FinishedFunc
inline void ABP_BlueZone_C::Puls__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlueZone.BP_BlueZone_C.Puls__FinishedFunc");

	struct Puls__FinishedFunc_Params {
		
	}; Puls__FinishedFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_BlueZone.BP_BlueZone_C.Puls__UpdateFunc
inline void ABP_BlueZone_C::Puls__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlueZone.BP_BlueZone_C.Puls__UpdateFunc");

	struct Puls__UpdateFunc_Params {
		
	}; Puls__UpdateFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_BlueZone.BP_BlueZone_C.OnBattleRotyaleStateChanged
inline void ABP_BlueZone_C::OnBattleRotyaleStateChanged(enum class Unknow PrevState, enum class Unknow CurrentState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlueZone.BP_BlueZone_C.OnBattleRotyaleStateChanged");

	struct OnBattleRotyaleStateChanged_Params {
		enum class Unknow PrevState;
		enum class Unknow CurrentState;
	}; OnBattleRotyaleStateChanged_Params Params;

	Params.PrevState = PrevState;
	Params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_BlueZone.BP_BlueZone_C.UpdateOpacityToZero
inline void ABP_BlueZone_C::UpdateOpacityToZero() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlueZone.BP_BlueZone_C.UpdateOpacityToZero");

	struct UpdateOpacityToZero_Params {
		
	}; UpdateOpacityToZero_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_BlueZone.BP_BlueZone_C.On SurvivalCirclePhaseChanged
inline void ABP_BlueZone_C::On SurvivalCirclePhaseChanged(int32_t PrevPhase, int32_t CurrentPhase) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlueZone.BP_BlueZone_C.On SurvivalCirclePhaseChanged");

	struct On SurvivalCirclePhaseChanged_Params {
		int32_t PrevPhase;
		int32_t CurrentPhase;
	}; On SurvivalCirclePhaseChanged_Params Params;

	Params.PrevPhase = PrevPhase;
	Params.CurrentPhase = CurrentPhase;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_BlueZone.BP_BlueZone_C.OnWorldShifted
inline void ABP_BlueZone_C::OnWorldShifted(struct Unknown InWorld, struct Unknown PreviousOrigin, struct Unknown CurrentOrigin) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlueZone.BP_BlueZone_C.OnWorldShifted");

	struct OnWorldShifted_Params {
		struct Unknown InWorld;
		struct Unknown PreviousOrigin;
		struct Unknown CurrentOrigin;
	}; OnWorldShifted_Params Params;

	Params.InWorld = InWorld;
	Params.PreviousOrigin = PreviousOrigin;
	Params.CurrentOrigin = CurrentOrigin;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_BlueZone.BP_BlueZone_C.SetCharacterLocation
inline void ABP_BlueZone_C::SetCharacterLocation(struct Unknown CharacterLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlueZone.BP_BlueZone_C.SetCharacterLocation");

	struct SetCharacterLocation_Params {
		struct Unknown CharacterLocation;
	}; SetCharacterLocation_Params Params;

	Params.CharacterLocation = CharacterLocation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_BlueZone.BP_BlueZone_C.StopPulsAnimation
inline void ABP_BlueZone_C::StopPulsAnimation() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlueZone.BP_BlueZone_C.StopPulsAnimation");

	struct StopPulsAnimation_Params {
		
	}; StopPulsAnimation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_BlueZone.BP_BlueZone_C.UpdateBlueZone
inline void ABP_BlueZone_C::UpdateBlueZone() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlueZone.BP_BlueZone_C.UpdateBlueZone");

	struct UpdateBlueZone_Params {
		
	}; UpdateBlueZone_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_BlueZone.BP_BlueZone_C.UpdateCenterAndRadius
inline void ABP_BlueZone_C::UpdateCenterAndRadius(struct Unknown Center, float Radius) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlueZone.BP_BlueZone_C.UpdateCenterAndRadius");

	struct UpdateCenterAndRadius_Params {
		struct Unknown Center;
		float Radius;
	}; UpdateCenterAndRadius_Params Params;

	Params.Center = Center;
	Params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_BlueZone.BP_BlueZone_C.ReceiveTick
inline void ABP_BlueZone_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlueZone.BP_BlueZone_C.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_BlueZone.BP_BlueZone_C.ReceiveBeginPlay
inline void ABP_BlueZone_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlueZone.BP_BlueZone_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_BlueZone.BP_BlueZone_C.ExecuteUbergraph_BP_BlueZone
inline void ABP_BlueZone_C::ExecuteUbergraph_BP_BlueZone(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlueZone.BP_BlueZone_C.ExecuteUbergraph_BP_BlueZone");

	struct ExecuteUbergraph_BP_BlueZone_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP_BlueZone_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

