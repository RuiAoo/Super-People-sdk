// WidgetBlueprintGeneratedClass UW-MinimapWidget.UW-MinimapWidget_C
class UUW-MinimapWidget_C : public UBravoHotelMiniMapWidget {

public:

	struct Unknown UberGraphFrame; // 0x260 (8)
	struct Unknown PlayerIconOnDamagingAnimation; // 0x268 (8)
	struct Unknown ShirinkingAnimation; // 0x270 (8)
	struct Unknown AlertIcon; // 0x278 (8)
	struct Unknown BP-CheckWeightMap; // 0x280 (8)
	struct Unknown BP-MapComp; // 0x288 (8)
	struct Unknown CircleInfoGroup; // 0x290 (8)
	struct Unknown CP-MapComp; // 0x298 (8)
	struct Unknown CurrentProgressBar; // 0x2A0 (8)
	struct Unknown Image_174; // 0x2A8 (8)
	struct Unknown Image_766; // 0x2B0 (8)
	struct Unknown InvalidationBox_2; // 0x2B8 (8)
	struct Unknown LulledGroup; // 0x2C0 (8)
	struct Unknown PhaseText; // 0x2C8 (8)
	struct Unknown PlayerIconGroup; // 0x2D0 (8)
	struct Unknown SB-MapComp; // 0x2D8 (8)
	struct Unknown SB_CircleInfo; // 0x2E0 (8)
	struct Unknown ShrinkingGroup; // 0x2E8 (8)
	struct Unknown Switcher; // 0x2F0 (8)
	struct Unknown UW-Inventory_Recipe; // 0x2F8 (8)
	struct Unknown UW-SearchingMaterial; // 0x300 (8)
	int32_t State; // 0x308 (4)
	struct Unknown MapSize_Default; // 0x30C (8)
	struct Unknown MapSize_Extend; // 0x314 (8)
	int32_t InitializeCount; // 0x31C (4)
	char bExtendMode : 0; // 0x320 (1)
	int32_t RecipeCount; // 0x324 (4)
	struct Unknown TargetCharacter; // 0x328 (8)

	void SetRecipeList(); // Function UW-MinimapWidget.UW-MinimapWidget_C.SetRecipeList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	enum class Unknow Get Recipe Visibility(); // Function UW-MinimapWidget.UW-MinimapWidget_C.Get Recipe Visibility(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnBlueZoneStateChanged(enum class Unknow Pre, enum class Unknow Cur); // Function UW-MinimapWidget.UW-MinimapWidget_C.OnBlueZoneStateChanged(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnSurvivalCirclePhaseChanged(int32_t PrevPhase, int32_t CurrentPhase); // Function UW-MinimapWidget.UW-MinimapWidget_C.OnSurvivalCirclePhaseChanged(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ResetWidget(); // Function UW-MinimapWidget.UW-MinimapWidget_C.ResetWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ToggleMapSize(struct Unknown WidgetSize); // Function UW-MinimapWidget.UW-MinimapWidget_C.ToggleMapSize(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	struct Unknown GetVectorCurrentTo(struct Unknown Position); // Function UW-MinimapWidget.UW-MinimapWidget_C.GetVectorCurrentTo(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	float CalcLengthOnWave(float Distance); // Function UW-MinimapWidget.UW-MinimapWidget_C.CalcLengthOnWave(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	float CalcDistanceRelatedToTarget(struct Unknown Vector, float Distance); // Function UW-MinimapWidget.UW-MinimapWidget_C.CalcDistanceRelatedToTarget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	struct Unknown GetTargetTo(struct Unknown Position); // Function UW-MinimapWidget.UW-MinimapWidget_C.GetTargetTo(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	struct Unknown GetTargetToPlayer(); // Function UW-MinimapWidget.UW-MinimapWidget_C.GetTargetToPlayer(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UpdateCircleInfoGroup(float DeltaSeconds); // Function UW-MinimapWidget.UW-MinimapWidget_C.UpdateCircleInfoGroup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UpdateOnShrinking(float DeltaSeconds); // Function UW-MinimapWidget.UW-MinimapWidget_C.UpdateOnShrinking(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UpdateActiveIcon(); // Function UW-MinimapWidget.UW-MinimapWidget_C.UpdateActiveIcon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UpdateTimeToActivate(); // Function UW-MinimapWidget.UW-MinimapWidget_C.UpdateTimeToActivate(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UpdatePlayerIcon(float DeltaSeconds); // Function UW-MinimapWidget.UW-MinimapWidget_C.UpdatePlayerIcon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnBattleRoyaleStateChanged(enum class Unknow Previous, enum class Unknow Current); // Function UW-MinimapWidget.UW-MinimapWidget_C.OnBattleRoyaleStateChanged(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-MinimapWidget.UW-MinimapWidget_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void AddAreaWidget(enum class Unknow WorldMapAreaWidgetType, struct Unknown& AreaWidgetInfo); // Function UW-MinimapWidget.UW-MinimapWidget_C.AddAreaWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void NotifyNeedRefreshToMap(); // Function UW-MinimapWidget.UW-MinimapWidget_C.NotifyNeedRefreshToMap(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetToggleMinimap(char bToggle); // Function UW-MinimapWidget.UW-MinimapWidget_C.SetToggleMinimap(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnAttackedWidget(int32_t UniquePlayerId); // Function UW-MinimapWidget.UW-MinimapWidget_C.OnAttackedWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnFireWidget(int32_t UniquePlayerId, struct Unknown Rotation, float Length); // Function UW-MinimapWidget.UW-MinimapWidget_C.OnFireWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ResetMapPlayers(); // Function UW-MinimapWidget.UW-MinimapWidget_C.ResetMapPlayers(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Construct(); // Function UW-MinimapWidget.UW-MinimapWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ChangeRecipeList(); // Function UW-MinimapWidget.UW-MinimapWidget_C.ChangeRecipeList(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void RemoveAreaWidget(enum class Unknow WorldMapAreaWidgetType, struct Unknown& AreaWidgetInfo); // Function UW-MinimapWidget.UW-MinimapWidget_C.RemoveAreaWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void 鉹@t元_1(char IsShow); // Function UW-MinimapWidget.UW-MinimapWidget_C.鉹@t元_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-MinimapWidget(int32_t EntryPoint); // Function UW-MinimapWidget.UW-MinimapWidget_C.ExecuteUbergraph_UW-MinimapWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-MinimapWidget.UW-MinimapWidget_C.SetRecipeList
inline void UUW-MinimapWidget_C::SetRecipeList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.SetRecipeList");

	struct SetRecipeList_Params {
		
	}; SetRecipeList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MinimapWidget.UW-MinimapWidget_C.Get Recipe Visibility
inline enum class Unknow UUW-MinimapWidget_C::Get Recipe Visibility() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.Get Recipe Visibility");

	struct Get Recipe Visibility_Params {
		
		enum class Unknow ReturnValue;

	}; Get Recipe Visibility_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-MinimapWidget.UW-MinimapWidget_C.OnBlueZoneStateChanged
inline void UUW-MinimapWidget_C::OnBlueZoneStateChanged(enum class Unknow Pre, enum class Unknow Cur) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.OnBlueZoneStateChanged");

	struct OnBlueZoneStateChanged_Params {
		enum class Unknow Pre;
		enum class Unknow Cur;
	}; OnBlueZoneStateChanged_Params Params;

	Params.Pre = Pre;
	Params.Cur = Cur;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MinimapWidget.UW-MinimapWidget_C.OnSurvivalCirclePhaseChanged
inline void UUW-MinimapWidget_C::OnSurvivalCirclePhaseChanged(int32_t PrevPhase, int32_t CurrentPhase) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.OnSurvivalCirclePhaseChanged");

	struct OnSurvivalCirclePhaseChanged_Params {
		int32_t PrevPhase;
		int32_t CurrentPhase;
	}; OnSurvivalCirclePhaseChanged_Params Params;

	Params.PrevPhase = PrevPhase;
	Params.CurrentPhase = CurrentPhase;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MinimapWidget.UW-MinimapWidget_C.ResetWidget
inline void UUW-MinimapWidget_C::ResetWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.ResetWidget");

	struct ResetWidget_Params {
		
	}; ResetWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MinimapWidget.UW-MinimapWidget_C.ToggleMapSize
inline void UUW-MinimapWidget_C::ToggleMapSize(struct Unknown WidgetSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.ToggleMapSize");

	struct ToggleMapSize_Params {
		struct Unknown WidgetSize;
	}; ToggleMapSize_Params Params;

	Params.WidgetSize = WidgetSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MinimapWidget.UW-MinimapWidget_C.GetVectorCurrentTo
inline struct Unknown UUW-MinimapWidget_C::GetVectorCurrentTo(struct Unknown Position) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.GetVectorCurrentTo");

	struct GetVectorCurrentTo_Params {
		struct Unknown Position;
		struct Unknown ReturnValue;

	}; GetVectorCurrentTo_Params Params;

	Params.Position = Position;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-MinimapWidget.UW-MinimapWidget_C.CalcLengthOnWave
inline float UUW-MinimapWidget_C::CalcLengthOnWave(float Distance) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.CalcLengthOnWave");

	struct CalcLengthOnWave_Params {
		float Distance;
		float ReturnValue;

	}; CalcLengthOnWave_Params Params;

	Params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-MinimapWidget.UW-MinimapWidget_C.CalcDistanceRelatedToTarget
inline float UUW-MinimapWidget_C::CalcDistanceRelatedToTarget(struct Unknown Vector, float Distance) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.CalcDistanceRelatedToTarget");

	struct CalcDistanceRelatedToTarget_Params {
		struct Unknown Vector;
		float Distance;
		float ReturnValue;

	}; CalcDistanceRelatedToTarget_Params Params;

	Params.Vector = Vector;
	Params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-MinimapWidget.UW-MinimapWidget_C.GetTargetTo
inline struct Unknown UUW-MinimapWidget_C::GetTargetTo(struct Unknown Position) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.GetTargetTo");

	struct GetTargetTo_Params {
		struct Unknown Position;
		struct Unknown ReturnValue;

	}; GetTargetTo_Params Params;

	Params.Position = Position;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-MinimapWidget.UW-MinimapWidget_C.GetTargetToPlayer
inline struct Unknown UUW-MinimapWidget_C::GetTargetToPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.GetTargetToPlayer");

	struct GetTargetToPlayer_Params {
		
		struct Unknown ReturnValue;

	}; GetTargetToPlayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-MinimapWidget.UW-MinimapWidget_C.UpdateCircleInfoGroup
inline void UUW-MinimapWidget_C::UpdateCircleInfoGroup(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.UpdateCircleInfoGroup");

	struct UpdateCircleInfoGroup_Params {
		float DeltaSeconds;
	}; UpdateCircleInfoGroup_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MinimapWidget.UW-MinimapWidget_C.UpdateOnShrinking
inline void UUW-MinimapWidget_C::UpdateOnShrinking(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.UpdateOnShrinking");

	struct UpdateOnShrinking_Params {
		float DeltaSeconds;
	}; UpdateOnShrinking_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MinimapWidget.UW-MinimapWidget_C.UpdateActiveIcon
inline void UUW-MinimapWidget_C::UpdateActiveIcon() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.UpdateActiveIcon");

	struct UpdateActiveIcon_Params {
		
	}; UpdateActiveIcon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MinimapWidget.UW-MinimapWidget_C.UpdateTimeToActivate
inline void UUW-MinimapWidget_C::UpdateTimeToActivate() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.UpdateTimeToActivate");

	struct UpdateTimeToActivate_Params {
		
	}; UpdateTimeToActivate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MinimapWidget.UW-MinimapWidget_C.UpdatePlayerIcon
inline void UUW-MinimapWidget_C::UpdatePlayerIcon(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.UpdatePlayerIcon");

	struct UpdatePlayerIcon_Params {
		float DeltaSeconds;
	}; UpdatePlayerIcon_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MinimapWidget.UW-MinimapWidget_C.OnBattleRoyaleStateChanged
inline void UUW-MinimapWidget_C::OnBattleRoyaleStateChanged(enum class Unknow Previous, enum class Unknow Current) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.OnBattleRoyaleStateChanged");

	struct OnBattleRoyaleStateChanged_Params {
		enum class Unknow Previous;
		enum class Unknow Current;
	}; OnBattleRoyaleStateChanged_Params Params;

	Params.Previous = Previous;
	Params.Current = Current;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MinimapWidget.UW-MinimapWidget_C.Tick
inline void UUW-MinimapWidget_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.Tick");

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

// Function UW-MinimapWidget.UW-MinimapWidget_C.AddAreaWidget
inline void UUW-MinimapWidget_C::AddAreaWidget(enum class Unknow WorldMapAreaWidgetType, struct Unknown& AreaWidgetInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.AddAreaWidget");

	struct AddAreaWidget_Params {
		enum class Unknow WorldMapAreaWidgetType;
		struct Unknown& AreaWidgetInfo;
	}; AddAreaWidget_Params Params;

	Params.WorldMapAreaWidgetType = WorldMapAreaWidgetType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AreaWidgetInfo = Params.AreaWidgetInfo;

}

// Function UW-MinimapWidget.UW-MinimapWidget_C.NotifyNeedRefreshToMap
inline void UUW-MinimapWidget_C::NotifyNeedRefreshToMap() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.NotifyNeedRefreshToMap");

	struct NotifyNeedRefreshToMap_Params {
		
	}; NotifyNeedRefreshToMap_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MinimapWidget.UW-MinimapWidget_C.SetToggleMinimap
inline void UUW-MinimapWidget_C::SetToggleMinimap(char bToggle) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.SetToggleMinimap");

	struct SetToggleMinimap_Params {
		char bToggle;
	}; SetToggleMinimap_Params Params;

	Params.bToggle = bToggle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MinimapWidget.UW-MinimapWidget_C.OnAttackedWidget
inline void UUW-MinimapWidget_C::OnAttackedWidget(int32_t UniquePlayerId) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.OnAttackedWidget");

	struct OnAttackedWidget_Params {
		int32_t UniquePlayerId;
	}; OnAttackedWidget_Params Params;

	Params.UniquePlayerId = UniquePlayerId;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MinimapWidget.UW-MinimapWidget_C.OnFireWidget
inline void UUW-MinimapWidget_C::OnFireWidget(int32_t UniquePlayerId, struct Unknown Rotation, float Length) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.OnFireWidget");

	struct OnFireWidget_Params {
		int32_t UniquePlayerId;
		struct Unknown Rotation;
		float Length;
	}; OnFireWidget_Params Params;

	Params.UniquePlayerId = UniquePlayerId;
	Params.Rotation = Rotation;
	Params.Length = Length;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MinimapWidget.UW-MinimapWidget_C.ResetMapPlayers
inline void UUW-MinimapWidget_C::ResetMapPlayers() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.ResetMapPlayers");

	struct ResetMapPlayers_Params {
		
	}; ResetMapPlayers_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MinimapWidget.UW-MinimapWidget_C.Construct
inline void UUW-MinimapWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MinimapWidget.UW-MinimapWidget_C.ChangeRecipeList
inline void UUW-MinimapWidget_C::ChangeRecipeList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.ChangeRecipeList");

	struct ChangeRecipeList_Params {
		
	}; ChangeRecipeList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MinimapWidget.UW-MinimapWidget_C.RemoveAreaWidget
inline void UUW-MinimapWidget_C::RemoveAreaWidget(enum class Unknow WorldMapAreaWidgetType, struct Unknown& AreaWidgetInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.RemoveAreaWidget");

	struct RemoveAreaWidget_Params {
		enum class Unknow WorldMapAreaWidgetType;
		struct Unknown& AreaWidgetInfo;
	}; RemoveAreaWidget_Params Params;

	Params.WorldMapAreaWidgetType = WorldMapAreaWidgetType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AreaWidgetInfo = Params.AreaWidgetInfo;

}

// Function UW-MinimapWidget.UW-MinimapWidget_C.鉹@t元_1
inline void UUW-MinimapWidget_C::鉹@t元_1(char IsShow) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.鉹@t元_1");

	struct 鉹@t元_1_Params {
		char IsShow;
	}; 鉹@t元_1_Params Params;

	Params.IsShow = IsShow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MinimapWidget.UW-MinimapWidget_C.ExecuteUbergraph_UW-MinimapWidget
inline void UUW-MinimapWidget_C::ExecuteUbergraph_UW-MinimapWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MinimapWidget.UW-MinimapWidget_C.ExecuteUbergraph_UW-MinimapWidget");

	struct ExecuteUbergraph_UW-MinimapWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-MinimapWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

