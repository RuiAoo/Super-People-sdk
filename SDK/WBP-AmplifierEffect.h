// WidgetBlueprintGeneratedClass WBP-AmplifierEffect.WBP-AmplifierEffect_C
class UWBP-AmplifierEffect_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown FadeOut; // 0x250 (8)
	struct Unknown FadeIn; // 0x258 (8)
	struct Unknown Image_Effect; // 0x260 (8)
	struct Unknown NewVar_1; // 0x268 (8)
	char IsFadeInOutEvent : 0; // 0x270 (1)
	float CurrentFade; // 0x274 (4)

	void SetMaterialParameter(float Opacity, float Speed, float Scale); // Function WBP-AmplifierEffect.WBP-AmplifierEffect_C.SetMaterialParameter(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void EndAniEvent(); // Function WBP-AmplifierEffect.WBP-AmplifierEffect_C.EndAniEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void FadeOutEvent(); // Function WBP-AmplifierEffect.WBP-AmplifierEffect_C.FadeOutEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function WBP-AmplifierEffect.WBP-AmplifierEffect_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Construct(); // Function WBP-AmplifierEffect.WBP-AmplifierEffect_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void FadeInEvent(); // Function WBP-AmplifierEffect.WBP-AmplifierEffect_C.FadeInEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void AmplifierEffectTikcEvent(float DeltaTime); // Function WBP-AmplifierEffect.WBP-AmplifierEffect_C.AmplifierEffectTikcEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_WBP-AmplifierEffect(int32_t EntryPoint); // Function WBP-AmplifierEffect.WBP-AmplifierEffect_C.ExecuteUbergraph_WBP-AmplifierEffect(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function WBP-AmplifierEffect.WBP-AmplifierEffect_C.SetMaterialParameter
inline void UWBP-AmplifierEffect_C::SetMaterialParameter(float Opacity, float Speed, float Scale) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP-AmplifierEffect.WBP-AmplifierEffect_C.SetMaterialParameter");

	struct SetMaterialParameter_Params {
		float Opacity;
		float Speed;
		float Scale;
	}; SetMaterialParameter_Params Params;

	Params.Opacity = Opacity;
	Params.Speed = Speed;
	Params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP-AmplifierEffect.WBP-AmplifierEffect_C.EndAniEvent
inline void UWBP-AmplifierEffect_C::EndAniEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function WBP-AmplifierEffect.WBP-AmplifierEffect_C.EndAniEvent");

	struct EndAniEvent_Params {
		
	}; EndAniEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP-AmplifierEffect.WBP-AmplifierEffect_C.FadeOutEvent
inline void UWBP-AmplifierEffect_C::FadeOutEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function WBP-AmplifierEffect.WBP-AmplifierEffect_C.FadeOutEvent");

	struct FadeOutEvent_Params {
		
	}; FadeOutEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP-AmplifierEffect.WBP-AmplifierEffect_C.Tick
inline void UWBP-AmplifierEffect_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP-AmplifierEffect.WBP-AmplifierEffect_C.Tick");

	struct Tick_Params {
		struct Unknown MyGeometry;
		float InDeltaTime;
	}; Tick_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP-AmplifierEffect.WBP-AmplifierEffect_C.Construct
inline void UWBP-AmplifierEffect_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function WBP-AmplifierEffect.WBP-AmplifierEffect_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP-AmplifierEffect.WBP-AmplifierEffect_C.FadeInEvent
inline void UWBP-AmplifierEffect_C::FadeInEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function WBP-AmplifierEffect.WBP-AmplifierEffect_C.FadeInEvent");

	struct FadeInEvent_Params {
		
	}; FadeInEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP-AmplifierEffect.WBP-AmplifierEffect_C.AmplifierEffectTikcEvent
inline void UWBP-AmplifierEffect_C::AmplifierEffectTikcEvent(float DeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP-AmplifierEffect.WBP-AmplifierEffect_C.AmplifierEffectTikcEvent");

	struct AmplifierEffectTikcEvent_Params {
		float DeltaTime;
	}; AmplifierEffectTikcEvent_Params Params;

	Params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP-AmplifierEffect.WBP-AmplifierEffect_C.ExecuteUbergraph_WBP-AmplifierEffect
inline void UWBP-AmplifierEffect_C::ExecuteUbergraph_WBP-AmplifierEffect(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP-AmplifierEffect.WBP-AmplifierEffect_C.ExecuteUbergraph_WBP-AmplifierEffect");

	struct ExecuteUbergraph_WBP-AmplifierEffect_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_WBP-AmplifierEffect_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

