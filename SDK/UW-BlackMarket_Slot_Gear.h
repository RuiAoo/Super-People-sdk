// WidgetBlueprintGeneratedClass UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C
class UUW-BlackMarket_Slot_Gear_C : public UUW-BlackMarket_Slot_Base_C {

public:

	struct Unknown UberGraphFrame; // 0x3D8 (8)
	struct Unknown BTN-Menu02; // 0x3E0 (8)
	struct Unknown BTN-Menu03; // 0x3E8 (8)
	struct Unknown BTN-Menu04; // 0x3F0 (8)
	struct Unknown BTN-Menu05; // 0x3F8 (8)
	struct Unknown BTN-Menu06; // 0x400 (8)
	struct Unknown CP-SlotInfo; // 0x408 (8)
	struct Unknown IMG-BG; // 0x410 (8)
	struct Unknown IMG-BG-Border; // 0x418 (8)
	struct Unknown IMG-Item; // 0x420 (8)
	struct Unknown IMG-Mask; // 0x428 (8)
	struct Unknown IMG-Over; // 0x430 (8)
	struct Unknown IMG-Over-Border; // 0x438 (8)
	struct Unknown Menu02; // 0x440 (8)
	struct Unknown Menu03; // 0x448 (8)
	struct Unknown Menu04; // 0x450 (8)
	struct Unknown Menu05; // 0x458 (8)
	struct Unknown Menu06; // 0x460 (8)
	struct Unknown Overlay_Mask; // 0x468 (8)
	struct Unknown TXT-Armor; // 0x470 (8)
	struct Unknown TXT-Capacity; // 0x478 (8)
	struct Unknown TXT-DecreaseReloadTime; // 0x480 (8)
	struct Unknown TXT-ItemName; // 0x488 (8)
	struct Unknown TXT-Menu01; // 0x490 (8)
	struct Unknown TXT-Menu02; // 0x498 (8)
	struct Unknown TXT-Menu03; // 0x4A0 (8)
	struct Unknown TXT-Menu04; // 0x4A8 (8)
	struct Unknown TXT-Menu05; // 0x4B0 (8)
	struct Unknown TXT-Menu06; // 0x4B8 (8)
	struct Unknown TXT-Type; // 0x4C0 (8)

	struct Unknown On_IMG-BG_MouseButtonDown_1(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.On_IMG-BG_MouseButtonDown_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetIconTexture(struct Unknown IconTexture); // Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.SetIconTexture(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnLoaded_A157F79F471B0D31224E8281D33433DF(struct Unknown Loaded); // Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.OnLoaded_A157F79F471B0D31224E8281D33433DF(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Construct(); // Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void AysncLoading(struct Unknown IconTexture); // Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.AysncLoading(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SwitchMenu(); // Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.SwitchMenu(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SwitchSlot(); // Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.SwitchSlot(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_135_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_135_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_152_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_152_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_209_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_209_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-BlackMarket_Slot_Gear(int32_t EntryPoint); // Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.ExecuteUbergraph_UW-BlackMarket_Slot_Gear(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.On_IMG-BG_MouseButtonDown_1
inline struct Unknown UUW-BlackMarket_Slot_Gear_C::On_IMG-BG_MouseButtonDown_1(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.On_IMG-BG_MouseButtonDown_1");

	struct On_IMG-BG_MouseButtonDown_1_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; On_IMG-BG_MouseButtonDown_1_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.SetIconTexture
inline void UUW-BlackMarket_Slot_Gear_C::SetIconTexture(struct Unknown IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.SetIconTexture");

	struct SetIconTexture_Params {
		struct Unknown IconTexture;
	}; SetIconTexture_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.OnLoaded_A157F79F471B0D31224E8281D33433DF
inline void UUW-BlackMarket_Slot_Gear_C::OnLoaded_A157F79F471B0D31224E8281D33433DF(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.OnLoaded_A157F79F471B0D31224E8281D33433DF");

	struct OnLoaded_A157F79F471B0D31224E8281D33433DF_Params {
		struct Unknown Loaded;
	}; OnLoaded_A157F79F471B0D31224E8281D33433DF_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.Construct
inline void UUW-BlackMarket_Slot_Gear_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.OnMouseEnter
inline void UUW-BlackMarket_Slot_Gear_C::OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.OnMouseEnter");

	struct OnMouseEnter_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
	}; OnMouseEnter_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.OnMouseLeave
inline void UUW-BlackMarket_Slot_Gear_C::OnMouseLeave(struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct Unknown& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.AysncLoading
inline void UUW-BlackMarket_Slot_Gear_C::AysncLoading(struct Unknown IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.AysncLoading");

	struct AysncLoading_Params {
		struct Unknown IconTexture;
	}; AysncLoading_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.SwitchMenu
inline void UUW-BlackMarket_Slot_Gear_C::SwitchMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.SwitchMenu");

	struct SwitchMenu_Params {
		
	}; SwitchMenu_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.SwitchSlot
inline void UUW-BlackMarket_Slot_Gear_C::SwitchSlot() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.SwitchSlot");

	struct SwitchSlot_Params {
		
	}; SwitchSlot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_135_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Gear_C::BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_135_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_135_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_135_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_135_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_152_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Gear_C::BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_152_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_152_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_152_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_152_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Gear_C::BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Gear_C::BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_209_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Gear_C::BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_209_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_209_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_209_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_209_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.ExecuteUbergraph_UW-BlackMarket_Slot_Gear
inline void UUW-BlackMarket_Slot_Gear_C::ExecuteUbergraph_UW-BlackMarket_Slot_Gear(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Gear.UW-BlackMarket_Slot_Gear_C.ExecuteUbergraph_UW-BlackMarket_Slot_Gear");

	struct ExecuteUbergraph_UW-BlackMarket_Slot_Gear_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-BlackMarket_Slot_Gear_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

