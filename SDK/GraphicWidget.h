// WidgetBlueprintGeneratedClass GraphicWidget.GraphicWidget_C
class UGraphicWidget_C : public UBravoHotelSettingSubWidget {

public:

	struct Unknown UberGraphFrame; // 0x298 (8)
	struct Unknown Anti; // 0x2A0 (8)
	struct Unknown display; // 0x2A8 (8)
	struct Unknown DisplayMode; // 0x2B0 (8)
	struct Unknown DLSS; // 0x2B8 (8)
	struct Unknown DOF; // 0x2C0 (8)
	struct Unknown Effect; // 0x2C8 (8)
	struct Unknown Foliage; // 0x2D0 (8)
	struct Unknown FOV; // 0x2D8 (8)
	struct Unknown FSR; // 0x2E0 (8)
	struct Unknown LanguageSetting; // 0x2E8 (8)
	struct Unknown MaxFrameRate; // 0x2F0 (8)
	struct Unknown MaxLobbyFrameRate; // 0x2F8 (8)
	struct Unknown PP; // 0x300 (8)
	struct Unknown Reflex; // 0x308 (8)
	struct Unknown Resolution; // 0x310 (8)
	struct Unknown ResolutionScaling; // 0x318 (8)
	struct Unknown ScrollBox_55; // 0x320 (8)
	struct Unknown Shading; // 0x328 (8)
	struct Unknown Shadow; // 0x330 (8)
	struct Unknown Sharpen; // 0x338 (8)
	struct Unknown SlotItemWidget_C_1; // 0x340 (8)
	struct Unknown Smooth; // 0x348 (8)
	struct Unknown SubTitleSlotWidget; // 0x350 (8)
	struct Unknown Texture; // 0x358 (8)
	struct Unknown v-Sync; // 0x360 (8)
	struct Unknown ViewDistance; // 0x368 (8)
	struct Unknown �	$; // 0x370 (8)
	struct Unknown x��=��; // 0x378 (8)
	float OldDisplayModeValue; // 0x380 (4)
	float OldDisplayResolutionValue; // 0x384 (4)
	struct Unknown ScrollBarTimer; // 0x388 (8)

	void CustomEvent_1(struct Unknown Value); // Function GraphicWidget.GraphicWidget_C.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Construct(); // Function GraphicWidget.GraphicWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function GraphicWidget.GraphicWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void CustomEvent(); // Function GraphicWidget.GraphicWidget_C.CustomEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_GraphicWidget(int32_t EntryPoint); // Function GraphicWidget.GraphicWidget_C.ExecuteUbergraph_GraphicWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function GraphicWidget.GraphicWidget_C.CustomEvent_1
inline void UGraphicWidget_C::CustomEvent_1(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function GraphicWidget.GraphicWidget_C.CustomEvent_1");

	struct CustomEvent_1_Params {
		struct Unknown Value;
	}; CustomEvent_1_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GraphicWidget.GraphicWidget_C.Construct
inline void UGraphicWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function GraphicWidget.GraphicWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GraphicWidget.GraphicWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
inline void UGraphicWidget_C::BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function GraphicWidget.GraphicWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");

	struct BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params {
		float CurrentOffset;
	}; BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params Params;

	Params.CurrentOffset = CurrentOffset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GraphicWidget.GraphicWidget_C.CustomEvent
inline void UGraphicWidget_C::CustomEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function GraphicWidget.GraphicWidget_C.CustomEvent");

	struct CustomEvent_Params {
		
	}; CustomEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GraphicWidget.GraphicWidget_C.ExecuteUbergraph_GraphicWidget
inline void UGraphicWidget_C::ExecuteUbergraph_GraphicWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function GraphicWidget.GraphicWidget_C.ExecuteUbergraph_GraphicWidget");

	struct ExecuteUbergraph_GraphicWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_GraphicWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

