// WidgetBlueprintGeneratedClass UW-Lobby_Craft_Success_Perk_OpenPopup.UW-Lobby_Craft_Success_Perk_OpenPopup_C
class UUW-Lobby_Craft_Success_Perk_OpenPopup_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Popup_Alpha_Bg_Black; // 0x250 (8)
	struct Unknown btn_OK; // 0x258 (8)
	struct Unknown Image_751; // 0x260 (8)
	struct Unknown Perk_List; // 0x268 (8)
	struct Unknown UW-Lobby_Craft_Success_Perk_Open; // 0x270 (8)
	struct Unknown UW-Lobby_Craft_Success_Perk_Open_2; // 0x278 (8)
	struct Unknown UW-Lobby_Craft_Success_Perk_Open_3; // 0x280 (8)
	struct FMulticastInlineDelegate EventDispatcher_OnClosePerkPopup; // 0x288 (16)

	void SetOptionList(struct TArray<Unknown>& OptionList); // Function UW-Lobby_Craft_Success_Perk_OpenPopup.UW-Lobby_Craft_Success_Perk_OpenPopup_C.SetOptionList(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Construct(); // Function UW-Lobby_Craft_Success_Perk_OpenPopup.UW-Lobby_Craft_Success_Perk_OpenPopup_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__btn_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Craft_Success_Perk_OpenPopup.UW-Lobby_Craft_Success_Perk_OpenPopup_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnAnimationFinished(struct Unknown Animation); // Function UW-Lobby_Craft_Success_Perk_OpenPopup.UW-Lobby_Craft_Success_Perk_OpenPopup_C.OnAnimationFinished(BlueprintCosmetic|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_OpenPopup(int32_t EntryPoint); // Function UW-Lobby_Craft_Success_Perk_OpenPopup.UW-Lobby_Craft_Success_Perk_OpenPopup_C.ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_OpenPopup(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void EventDispatcher_OnClosePerkPopup__DelegateSignature(); // Function UW-Lobby_Craft_Success_Perk_OpenPopup.UW-Lobby_Craft_Success_Perk_OpenPopup_C.EventDispatcher_OnClosePerkPopup__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-Lobby_Craft_Success_Perk_OpenPopup.UW-Lobby_Craft_Success_Perk_OpenPopup_C.SetOptionList
inline void UUW-Lobby_Craft_Success_Perk_OpenPopup_C::SetOptionList(struct TArray<Unknown>& OptionList) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_OpenPopup.UW-Lobby_Craft_Success_Perk_OpenPopup_C.SetOptionList");

	struct SetOptionList_Params {
		struct TArray<Unknown>& OptionList;
	}; SetOptionList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OptionList = Params.OptionList;

}

// Function UW-Lobby_Craft_Success_Perk_OpenPopup.UW-Lobby_Craft_Success_Perk_OpenPopup_C.Construct
inline void UUW-Lobby_Craft_Success_Perk_OpenPopup_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_OpenPopup.UW-Lobby_Craft_Success_Perk_OpenPopup_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_Perk_OpenPopup.UW-Lobby_Craft_Success_Perk_OpenPopup_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-Lobby_Craft_Success_Perk_OpenPopup_C::BndEvt__btn_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_OpenPopup.UW-Lobby_Craft_Success_Perk_OpenPopup_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__btn_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_Perk_OpenPopup.UW-Lobby_Craft_Success_Perk_OpenPopup_C.OnAnimationFinished
inline void UUW-Lobby_Craft_Success_Perk_OpenPopup_C::OnAnimationFinished(struct Unknown Animation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_OpenPopup.UW-Lobby_Craft_Success_Perk_OpenPopup_C.OnAnimationFinished");

	struct OnAnimationFinished_Params {
		struct Unknown Animation;
	}; OnAnimationFinished_Params Params;

	Params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_Perk_OpenPopup.UW-Lobby_Craft_Success_Perk_OpenPopup_C.ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_OpenPopup
inline void UUW-Lobby_Craft_Success_Perk_OpenPopup_C::ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_OpenPopup(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_OpenPopup.UW-Lobby_Craft_Success_Perk_OpenPopup_C.ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_OpenPopup");

	struct ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_OpenPopup_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_OpenPopup_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_Perk_OpenPopup.UW-Lobby_Craft_Success_Perk_OpenPopup_C.EventDispatcher_OnClosePerkPopup__DelegateSignature
inline void UUW-Lobby_Craft_Success_Perk_OpenPopup_C::EventDispatcher_OnClosePerkPopup__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_OpenPopup.UW-Lobby_Craft_Success_Perk_OpenPopup_C.EventDispatcher_OnClosePerkPopup__DelegateSignature");

	struct EventDispatcher_OnClosePerkPopup__DelegateSignature_Params {
		
	}; EventDispatcher_OnClosePerkPopup__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

