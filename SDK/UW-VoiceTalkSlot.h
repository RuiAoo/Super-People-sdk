// WidgetBlueprintGeneratedClass UW-VoiceTalkSlot.UW-VoiceTalkSlot_C
class UUW-VoiceTalkSlot_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button_1; // 0x250 (8)
	struct Unknown death; // 0x258 (8)
	struct Unknown Image_168; // 0x260 (8)
	struct Unknown Image_216; // 0x268 (8)
	struct Unknown Image_506; // 0x270 (8)
	struct Unknown Image_623; // 0x278 (8)
	struct Unknown Img_LogOut; // 0x280 (8)
	struct Unknown Img_Voice; // 0x288 (8)
	struct Unknown Img_Voice_2; // 0x290 (8)
	struct Unknown Overlay_Death; // 0x298 (8)
	struct Unknown Slider_139; // 0x2A0 (8)
	struct Unknown T_PlayerIndex; // 0x2A8 (8)
	struct Unknown T_PlayerName; // 0x2B0 (8)
	struct Unknown TextBlock_209; // 0x2B8 (8)
	struct Unknown VerticalBox_1; // 0x2C0 (8)
	struct Unknown WidgetSwitcher; // 0x2C8 (8)
	struct FMulticastInlineDelegate EventDispatcher_ChangeVolumeState; // 0x2D0 (16)
	struct Unknown CurVoiceTalkState; // 0x2E0 (32)
	struct Unknown PingImage; // 0x300 (8)

	void SetInfo(struct Unknown VoiceTalkState); // Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.SetInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__Slider_138_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-VoiceTalkSlot(int32_t EntryPoint); // Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.ExecuteUbergraph_UW-VoiceTalkSlot(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void EventDispatcher_ChangeVolumeState__DelegateSignature(struct Unknown VoiceTalkState); // Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.EventDispatcher_ChangeVolumeState__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.SetInfo
inline void UUW-VoiceTalkSlot_C::SetInfo(struct Unknown VoiceTalkState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.SetInfo");

	struct SetInfo_Params {
		struct Unknown VoiceTalkState;
	}; SetInfo_Params Params;

	Params.VoiceTalkState = VoiceTalkState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
inline void UUW-VoiceTalkSlot_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
inline void UUW-VoiceTalkSlot_C::BndEvt__Slider_138_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	struct BndEvt__Slider_138_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params {
		float Value;
	}; BndEvt__Slider_138_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.ExecuteUbergraph_UW-VoiceTalkSlot
inline void UUW-VoiceTalkSlot_C::ExecuteUbergraph_UW-VoiceTalkSlot(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.ExecuteUbergraph_UW-VoiceTalkSlot");

	struct ExecuteUbergraph_UW-VoiceTalkSlot_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-VoiceTalkSlot_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.EventDispatcher_ChangeVolumeState__DelegateSignature
inline void UUW-VoiceTalkSlot_C::EventDispatcher_ChangeVolumeState__DelegateSignature(struct Unknown VoiceTalkState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.EventDispatcher_ChangeVolumeState__DelegateSignature");

	struct EventDispatcher_ChangeVolumeState__DelegateSignature_Params {
		struct Unknown VoiceTalkState;
	}; EventDispatcher_ChangeVolumeState__DelegateSignature_Params Params;

	Params.VoiceTalkState = VoiceTalkState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

