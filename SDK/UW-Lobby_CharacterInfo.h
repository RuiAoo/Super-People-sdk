// WidgetBlueprintGeneratedClass UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C
class UUW-Lobby_CharacterInfo_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button_306; // 0x250 (8)
	struct Unknown CanvasPanel_Line; // 0x258 (8)
	struct Unknown CanvasPanel_Position; // 0x260 (8)
	struct Unknown Image_Leader; // 0x268 (8)
	struct Unknown Image_Rank; // 0x270 (8)
	struct Unknown Img_Cut; // 0x278 (8)
	struct Unknown Img_MS; // 0x280 (8)
	struct Unknown Img_MS_2; // 0x288 (8)
	struct Unknown Img_MS_3; // 0x290 (8)
	struct Unknown Img_PlayerLine; // 0x298 (8)
	struct Unknown Img_PlayerPoint; // 0x2A0 (8)
	struct Unknown Img_Voice; // 0x2A8 (8)
	struct Unknown Img_VoiceElimination; // 0x2B0 (8)
	struct Unknown Overlay_OnReady; // 0x2B8 (8)
	struct Unknown Overlay_Position; // 0x2C0 (8)
	struct Unknown Overlay_TeamOnReady; // 0x2C8 (8)
	struct Unknown T_PlayerName; // 0x2D0 (8)
	struct Unknown T_PlayerName_2; // 0x2D8 (8)
	struct Unknown WidgetSwitcher_3; // 0x2E0 (8)
	struct Unknown WidgetSwitcher_IsTeam; // 0x2E8 (8)
	struct Unknown WidgetSwitcher_State; // 0x2F0 (8)
	int32_t LastSeaponTierId; // 0x2F8 (4)
	float WidgetHalfSizeX; // 0x2FC (4)

	void Set Position(char IsLeft, char IsSoloMode, struct Unknown CharacterRef, struct Unknown MemberInfo); // Function UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C.Set Position(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Init(struct Unknown PartyInfo, char bIsSoloMode); // Function UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C.Init(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnLoaded_53B5B77C4172B8F96BC2979B2702DE82(struct Unknown Loaded); // Function UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C.OnLoaded_53B5B77C4172B8F96BC2979B2702DE82(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Construct(); // Function UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void AsyncIcon(struct Unknown Asset); // Function UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C.AsyncIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-Lobby_CharacterInfo(int32_t EntryPoint); // Function UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C.ExecuteUbergraph_UW-Lobby_CharacterInfo(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C.Set Position
inline void UUW-Lobby_CharacterInfo_C::Set Position(char IsLeft, char IsSoloMode, struct Unknown CharacterRef, struct Unknown MemberInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C.Set Position");

	struct Set Position_Params {
		char IsLeft;
		char IsSoloMode;
		struct Unknown CharacterRef;
		struct Unknown MemberInfo;
	}; Set Position_Params Params;

	Params.IsLeft = IsLeft;
	Params.IsSoloMode = IsSoloMode;
	Params.CharacterRef = CharacterRef;
	Params.MemberInfo = MemberInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C.Init
inline void UUW-Lobby_CharacterInfo_C::Init(struct Unknown PartyInfo, char bIsSoloMode) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C.Init");

	struct Init_Params {
		struct Unknown PartyInfo;
		char bIsSoloMode;
	}; Init_Params Params;

	Params.PartyInfo = PartyInfo;
	Params.bIsSoloMode = bIsSoloMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C.OnLoaded_53B5B77C4172B8F96BC2979B2702DE82
inline void UUW-Lobby_CharacterInfo_C::OnLoaded_53B5B77C4172B8F96BC2979B2702DE82(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C.OnLoaded_53B5B77C4172B8F96BC2979B2702DE82");

	struct OnLoaded_53B5B77C4172B8F96BC2979B2702DE82_Params {
		struct Unknown Loaded;
	}; OnLoaded_53B5B77C4172B8F96BC2979B2702DE82_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C.Construct
inline void UUW-Lobby_CharacterInfo_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C.AsyncIcon
inline void UUW-Lobby_CharacterInfo_C::AsyncIcon(struct Unknown Asset) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C.AsyncIcon");

	struct AsyncIcon_Params {
		struct Unknown Asset;
	}; AsyncIcon_Params Params;

	Params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C.ExecuteUbergraph_UW-Lobby_CharacterInfo
inline void UUW-Lobby_CharacterInfo_C::ExecuteUbergraph_UW-Lobby_CharacterInfo(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C.ExecuteUbergraph_UW-Lobby_CharacterInfo");

	struct ExecuteUbergraph_UW-Lobby_CharacterInfo_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Lobby_CharacterInfo_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

