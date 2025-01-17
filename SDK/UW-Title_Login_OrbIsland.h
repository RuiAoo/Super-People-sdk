// WidgetBlueprintGeneratedClass UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C
class UUW-Title_Login_OrbIsland_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown CP-Login-FadeIn; // 0x250 (8)
	struct Unknown Blink; // 0x258 (8)
	struct Unknown Dot; // 0x260 (8)
	struct Unknown MainCanvas-FadeIn; // 0x268 (8)
	struct Unknown BTN-Login; // 0x270 (8)
	struct Unknown CB-SaveUserName; // 0x278 (8)
	struct Unknown CP-Dot; // 0x280 (8)
	struct Unknown CP-ErrorMessage; // 0x288 (8)
	struct Unknown CP-LOGIN; // 0x290 (8)
	struct Unknown CP-MESSAGE; // 0x298 (8)
	struct Unknown EDT-ID; // 0x2A0 (8)
	struct Unknown EDT-PASSWORD; // 0x2A8 (8)
	struct Unknown Image_1; // 0x2B0 (8)
	struct Unknown Image_2; // 0x2B8 (8)
	struct Unknown Image_3; // 0x2C0 (8)
	struct Unknown Image_5; // 0x2C8 (8)
	struct Unknown Image_10; // 0x2D0 (8)
	struct Unknown Image_204; // 0x2D8 (8)
	struct Unknown IMG-ErrorIcon; // 0x2E0 (8)
	struct Unknown IMG-Logo; // 0x2E8 (8)
	struct Unknown TXT-Connecting; // 0x2F0 (8)
	struct Unknown TXT-Error_Message; // 0x2F8 (8)
	struct Unknown TXT-Waitting; // 0x300 (8)
	struct Unknown TXT_Connecting_Dot; // 0x308 (8)
	struct Unknown UW-Exit_Popup; // 0x310 (8)
	struct Unknown TitleWidgetRef; // 0x318 (8)
	int32_t State; // 0x320 (4)
	char bPlayOnce : 0; // 0x324 (1)
	char bPopupOpen : 0; // 0x325 (1)
	struct Unknown ExitPopupKey; // 0x328 (24)

	void SetTitleWidget(struct Unknown TitleWidget); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.SetTitleWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ProcessExitPopup(); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ProcessExitPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void CheckKeyUp(struct Unknown InputKey, char& bResult); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.CheckKeyUp(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void CheckKeyDown(struct Unknown InputKey, char& bResult); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.CheckKeyDown(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ProcessInput(); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ProcessInput(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ProcessLogin(); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ProcessLogin(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Init(); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.Init(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ShowPressAnyKey(struct Unknown BPTitleWidget); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ShowPressAnyKey(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ShowLoginError(int32_t ErrorCode, struct FString ExtraDescription); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ShowLoginError(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void HIdeLoginError(); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.HIdeLoginError(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__CB-SaveID_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.BndEvt__CB-SaveID_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__BTN-Login_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.BndEvt__BTN-Login_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void PreConstruct(char IsDesignTime); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ShowServerConnecting(); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ShowServerConnecting(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ShowLoginUI(); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ShowLoginUI(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__BTN-Login_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature(); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.BndEvt__BTN-Login_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void InputOpen(); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.InputOpen(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetLoginState(); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.SetLoginState(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Construct(); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__EDT-PASSWORD_K2Node_ComponentBoundEvent_65_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.BndEvt__EDT-PASSWORD_K2Node_ComponentBoundEvent_65_OnEditableTextBoxCommittedEvent__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__EDT-ID_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.BndEvt__EDT-ID_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-Title_Login_OrbIsland(int32_t EntryPoint); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ExecuteUbergraph_UW-Title_Login_OrbIsland(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.SetTitleWidget
inline void UUW-Title_Login_OrbIsland_C::SetTitleWidget(struct Unknown TitleWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.SetTitleWidget");

	struct SetTitleWidget_Params {
		struct Unknown TitleWidget;
	}; SetTitleWidget_Params Params;

	Params.TitleWidget = TitleWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ProcessExitPopup
inline void UUW-Title_Login_OrbIsland_C::ProcessExitPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ProcessExitPopup");

	struct ProcessExitPopup_Params {
		
	}; ProcessExitPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.CheckKeyUp
inline void UUW-Title_Login_OrbIsland_C::CheckKeyUp(struct Unknown InputKey, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.CheckKeyUp");

	struct CheckKeyUp_Params {
		struct Unknown InputKey;
		char& bResult;
	}; CheckKeyUp_Params Params;

	Params.InputKey = InputKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.CheckKeyDown
inline void UUW-Title_Login_OrbIsland_C::CheckKeyDown(struct Unknown InputKey, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.CheckKeyDown");

	struct CheckKeyDown_Params {
		struct Unknown InputKey;
		char& bResult;
	}; CheckKeyDown_Params Params;

	Params.InputKey = InputKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ProcessInput
inline void UUW-Title_Login_OrbIsland_C::ProcessInput() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ProcessInput");

	struct ProcessInput_Params {
		
	}; ProcessInput_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ProcessLogin
inline void UUW-Title_Login_OrbIsland_C::ProcessLogin() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ProcessLogin");

	struct ProcessLogin_Params {
		
	}; ProcessLogin_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.Init
inline void UUW-Title_Login_OrbIsland_C::Init() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.Init");

	struct Init_Params {
		
	}; Init_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ShowPressAnyKey
inline void UUW-Title_Login_OrbIsland_C::ShowPressAnyKey(struct Unknown BPTitleWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ShowPressAnyKey");

	struct ShowPressAnyKey_Params {
		struct Unknown BPTitleWidget;
	}; ShowPressAnyKey_Params Params;

	Params.BPTitleWidget = BPTitleWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ShowLoginError
inline void UUW-Title_Login_OrbIsland_C::ShowLoginError(int32_t ErrorCode, struct FString ExtraDescription) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ShowLoginError");

	struct ShowLoginError_Params {
		int32_t ErrorCode;
		struct FString ExtraDescription;
	}; ShowLoginError_Params Params;

	Params.ErrorCode = ErrorCode;
	Params.ExtraDescription = ExtraDescription;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.HIdeLoginError
inline void UUW-Title_Login_OrbIsland_C::HIdeLoginError() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.HIdeLoginError");

	struct HIdeLoginError_Params {
		
	}; HIdeLoginError_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.BndEvt__CB-SaveID_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature
inline void UUW-Title_Login_OrbIsland_C::BndEvt__CB-SaveID_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.BndEvt__CB-SaveID_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct BndEvt__CB-SaveID_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature_Params {
		char bIsChecked;
	}; BndEvt__CB-SaveID_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.BndEvt__BTN-Login_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
inline void UUW-Title_Login_OrbIsland_C::BndEvt__BTN-Login_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.BndEvt__BTN-Login_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__BTN-Login_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Login_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.PreConstruct
inline void UUW-Title_Login_OrbIsland_C::PreConstruct(char IsDesignTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.PreConstruct");

	struct PreConstruct_Params {
		char IsDesignTime;
	}; PreConstruct_Params Params;

	Params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ShowServerConnecting
inline void UUW-Title_Login_OrbIsland_C::ShowServerConnecting() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ShowServerConnecting");

	struct ShowServerConnecting_Params {
		
	}; ShowServerConnecting_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ShowLoginUI
inline void UUW-Title_Login_OrbIsland_C::ShowLoginUI() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ShowLoginUI");

	struct ShowLoginUI_Params {
		
	}; ShowLoginUI_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.BndEvt__BTN-Login_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature
inline void UUW-Title_Login_OrbIsland_C::BndEvt__BTN-Login_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.BndEvt__BTN-Login_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Login_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Login_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.Tick
inline void UUW-Title_Login_OrbIsland_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.Tick");

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

// Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.InputOpen
inline void UUW-Title_Login_OrbIsland_C::InputOpen() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.InputOpen");

	struct InputOpen_Params {
		
	}; InputOpen_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.SetLoginState
inline void UUW-Title_Login_OrbIsland_C::SetLoginState() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.SetLoginState");

	struct SetLoginState_Params {
		
	}; SetLoginState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.Construct
inline void UUW-Title_Login_OrbIsland_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.BndEvt__EDT-PASSWORD_K2Node_ComponentBoundEvent_65_OnEditableTextBoxCommittedEvent__DelegateSignature
inline void UUW-Title_Login_OrbIsland_C::BndEvt__EDT-PASSWORD_K2Node_ComponentBoundEvent_65_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.BndEvt__EDT-PASSWORD_K2Node_ComponentBoundEvent_65_OnEditableTextBoxCommittedEvent__DelegateSignature");

	struct BndEvt__EDT-PASSWORD_K2Node_ComponentBoundEvent_65_OnEditableTextBoxCommittedEvent__DelegateSignature_Params {
		struct FText& Text;
		char CommitMethod;
	}; BndEvt__EDT-PASSWORD_K2Node_ComponentBoundEvent_65_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.BndEvt__EDT-ID_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
inline void UUW-Title_Login_OrbIsland_C::BndEvt__EDT-ID_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.BndEvt__EDT-ID_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	struct BndEvt__EDT-ID_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params {
		struct FText& Text;
		char CommitMethod;
	}; BndEvt__EDT-ID_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ExecuteUbergraph_UW-Title_Login_OrbIsland
inline void UUW-Title_Login_OrbIsland_C::ExecuteUbergraph_UW-Title_Login_OrbIsland(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ExecuteUbergraph_UW-Title_Login_OrbIsland");

	struct ExecuteUbergraph_UW-Title_Login_OrbIsland_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Title_Login_OrbIsland_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

