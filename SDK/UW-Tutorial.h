// WidgetBlueprintGeneratedClass UW-Tutorial.UW-Tutorial_C
class UUW-Tutorial_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Bg; // 0x250 (8)
	struct Unknown btn_Cancel; // 0x258 (8)
	struct Unknown btn_OK; // 0x260 (8)
	struct Unknown Button_Focus; // 0x268 (8)
	struct Unknown Button_Focus2; // 0x270 (8)
	struct Unknown CanvasPanel_Exit; // 0x278 (8)
	struct Unknown HorizontalBox_1; // 0x280 (8)
	struct Unknown Image_2; // 0x288 (8)
	struct Unknown Image_223; // 0x290 (8)
	struct Unknown Img_Movie; // 0x298 (8)
	struct Unknown RichTextBlock_244; // 0x2A0 (8)
	struct Unknown MediaPlayer; // 0x2A8 (8)
	char bPopup : 0; // 0x2B0 (1)
	struct Unknown MediaSoundComp; // 0x2B8 (8)
	float GammaIntensity; // 0x2C0 (4)
	struct Unknown Game Settings; // 0x2C8 (8)
	struct Unknown SkipNoticeTimer; // 0x2D0 (8)
	struct Unknown MediaTexture; // 0x2D8 (8)
	struct Unknown Media; // 0x2E0 (8)
	char NextScene : 0; // 0x2E8 (1)

	void PlayMedia(); // Function UW-Tutorial.UW-Tutorial_C.PlayMedia(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ToggleExitPopup(); // Function UW-Tutorial.UW-Tutorial_C.ToggleExitPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Move Next Scene(); // Function UW-Tutorial.UW-Tutorial_C.Move Next Scene(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	struct Unknown OnKeyDown(struct Unknown MyGeometry, struct Unknown InKeyEvent); // Function UW-Tutorial.UW-Tutorial_C.OnKeyDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Construct(); // Function UW-Tutorial.UW-Tutorial_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-Tutorial.UW-Tutorial_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void CustomEvent_1(); // Function UW-Tutorial.UW-Tutorial_C.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__btn_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Tutorial.UW-Tutorial_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-Tutorial.UW-Tutorial_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void CustomEvent_2(); // Function UW-Tutorial.UW-Tutorial_C.CustomEvent_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__Button_Focus_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UW-Tutorial.UW-Tutorial_C.BndEvt__Button_Focus_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__Button_Focus2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function UW-Tutorial.UW-Tutorial_C.BndEvt__Button_Focus2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-Tutorial(int32_t EntryPoint); // Function UW-Tutorial.UW-Tutorial_C.ExecuteUbergraph_UW-Tutorial(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-Tutorial.UW-Tutorial_C.PlayMedia
inline void UUW-Tutorial_C::PlayMedia() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Tutorial.UW-Tutorial_C.PlayMedia");

	struct PlayMedia_Params {
		
	}; PlayMedia_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Tutorial.UW-Tutorial_C.ToggleExitPopup
inline void UUW-Tutorial_C::ToggleExitPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Tutorial.UW-Tutorial_C.ToggleExitPopup");

	struct ToggleExitPopup_Params {
		
	}; ToggleExitPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Tutorial.UW-Tutorial_C.Move Next Scene
inline void UUW-Tutorial_C::Move Next Scene() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Tutorial.UW-Tutorial_C.Move Next Scene");

	struct Move Next Scene_Params {
		
	}; Move Next Scene_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Tutorial.UW-Tutorial_C.OnKeyDown
inline struct Unknown UUW-Tutorial_C::OnKeyDown(struct Unknown MyGeometry, struct Unknown InKeyEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Tutorial.UW-Tutorial_C.OnKeyDown");

	struct OnKeyDown_Params {
		struct Unknown MyGeometry;
		struct Unknown InKeyEvent;
		struct Unknown ReturnValue;

	}; OnKeyDown_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Tutorial.UW-Tutorial_C.Construct
inline void UUW-Tutorial_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Tutorial.UW-Tutorial_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Tutorial.UW-Tutorial_C.Tick
inline void UUW-Tutorial_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Tutorial.UW-Tutorial_C.Tick");

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

// Function UW-Tutorial.UW-Tutorial_C.CustomEvent_1
inline void UUW-Tutorial_C::CustomEvent_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Tutorial.UW-Tutorial_C.CustomEvent_1");

	struct CustomEvent_1_Params {
		
	}; CustomEvent_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Tutorial.UW-Tutorial_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-Tutorial_C::BndEvt__btn_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Tutorial.UW-Tutorial_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__btn_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Tutorial.UW-Tutorial_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
inline void UUW-Tutorial_C::BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Tutorial.UW-Tutorial_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Tutorial.UW-Tutorial_C.CustomEvent_2
inline void UUW-Tutorial_C::CustomEvent_2() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Tutorial.UW-Tutorial_C.CustomEvent_2");

	struct CustomEvent_2_Params {
		
	}; CustomEvent_2_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Tutorial.UW-Tutorial_C.BndEvt__Button_Focus_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
inline void UUW-Tutorial_C::BndEvt__Button_Focus_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Tutorial.UW-Tutorial_C.BndEvt__Button_Focus_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_Focus_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Focus_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Tutorial.UW-Tutorial_C.BndEvt__Button_Focus2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
inline void UUW-Tutorial_C::BndEvt__Button_Focus2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Tutorial.UW-Tutorial_C.BndEvt__Button_Focus2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_Focus2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Focus2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Tutorial.UW-Tutorial_C.ExecuteUbergraph_UW-Tutorial
inline void UUW-Tutorial_C::ExecuteUbergraph_UW-Tutorial(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Tutorial.UW-Tutorial_C.ExecuteUbergraph_UW-Tutorial");

	struct ExecuteUbergraph_UW-Tutorial_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Tutorial_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

