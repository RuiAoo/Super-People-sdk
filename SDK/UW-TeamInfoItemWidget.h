// WidgetBlueprintGeneratedClass UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C
class UUW-TeamInfoItemWidget_C : public UBravoHotelTeamInfoSlotWidget {

public:

	struct Unknown UberGraphFrame; // 0x308 (8)
	struct Unknown Anim_IconBouncing; // 0x310 (8)
	struct Unknown Progress_Stroke; // 0x318 (8)
	struct Unknown Shoot_ani; // 0x320 (8)
	struct Unknown CanvasPanel_Main; // 0x328 (8)
	struct Unknown death; // 0x330 (8)
	struct Unknown Image_126; // 0x338 (8)
	struct Unknown Image_168; // 0x340 (8)
	struct Unknown Image_280; // 0x348 (8)
	struct Unknown Image_623; // 0x350 (8)
	struct Unknown Image_624; // 0x358 (8)
	struct Unknown Image_1058; // 0x360 (8)
	struct Unknown Image_Firing; // 0x368 (8)
	struct Unknown Image_Heart; // 0x370 (8)
	struct Unknown Image_Outline; // 0x378 (8)
	struct Unknown Image_TeamInfoClassIcon; // 0x380 (8)
	struct Unknown Img_LogOut; // 0x388 (8)
	struct Unknown Img_Voice; // 0x390 (8)
	struct Unknown Img_VoiceMute; // 0x398 (8)
	struct Unknown InvalidationBox_1; // 0x3A0 (8)
	struct Unknown Overlay_447; // 0x3A8 (8)
	struct Unknown Overlay_Death; // 0x3B0 (8)
	struct Unknown Overlay_RemainGoldenTimeSelf; // 0x3B8 (8)
	struct Unknown Overlay_RequestResus; // 0x3C0 (8)
	struct Unknown ProgressBar_440; // 0x3C8 (8)
	struct Unknown ProgressBar_443; // 0x3D0 (8)
	struct Unknown SizeBox_132; // 0x3D8 (8)
	struct Unknown StateGoldenTime; // 0x3E0 (8)
	struct Unknown StateKnockdown; // 0x3E8 (8)
	struct Unknown T_ClassName; // 0x3F0 (8)
	struct Unknown T_ClassWeapon; // 0x3F8 (8)
	struct Unknown T_PlayerIndex; // 0x400 (8)
	struct Unknown T_PlayerName; // 0x408 (8)
	struct Unknown TeamColor; // 0x410 (8)
	struct Unknown TextBlock_4; // 0x418 (8)
	struct Unknown TextBlock_297; // 0x420 (8)
	struct Unknown TextBlock_590; // 0x428 (8)
	struct Unknown TextBlock_591; // 0x430 (8)
	struct Unknown TextBlock_1016; // 0x438 (8)
	struct Unknown TextBlock_RemainGoldenTimeSelf; // 0x440 (8)
	struct Unknown TextBlock_RequestResus; // 0x448 (8)
	struct Unknown TextBlock_Resuscitating; // 0x450 (8)
	struct Unknown UW-RequestResuscitation; // 0x458 (8)
	struct Unknown WidgetSwitcher_LogOut; // 0x460 (8)
	struct Unknown WidgetSwitcher_Resuscitate; // 0x468 (8)
	int32_t Index; // 0x470 (4)
	enum class Unknow Behavior; // 0x474 (1)
	float hp; // 0x478 (4)
	struct FText Name; // 0x480 (24)
	struct TArray<Unknown> ColorList; // 0x498 (16)
	char bPin : 0; // 0x4A8 (1)
	float PrevHP; // 0x4AC (4)
	char bReduceHP : 0; // 0x4B0 (1)
	struct Unknown TimerHandleReduceHP; // 0x4B8 (8)
	char bIncreaseHP : 0; // 0x4C0 (1)
	struct Unknown HealthChangeCurve; // 0x4C8 (8)
	struct Unknown HealthDangerCurve; // 0x4D0 (8)
	struct Unknown HealTimer; // 0x4D8 (8)
	struct Unknown FaintTimer; // 0x4E0 (8)
	float BaseHealth; // 0x4E8 (4)
	float TargetHealth; // 0x4EC (4)
	float HealthWeight; // 0x4F0 (4)
	float TargetFaint; // 0x4F4 (4)
	float BaseFaint; // 0x4F8 (4)
	float FaintWeight; // 0x4FC (4)
	float CurrentHPPercent; // 0x500 (4)
	float HealHPPercent; // 0x504 (4)
	float FaintPercent; // 0x508 (4)
	float CurrentAlpha; // 0x50C (4)
	float AlphaTimer; // 0x510 (4)
	struct Unknown AlphaCurve; // 0x518 (8)
	char KnockDown : 0; // 0x520 (1)
	float HeartBeat; // 0x524 (4)
	struct Unknown DisConnectSprite; // 0x528 (8)
	struct Unknown KnockDownSprite; // 0x530 (8)
	struct Unknown DeathSprite; // 0x538 (8)
	struct Unknown VehicleSprite; // 0x540 (8)
	struct Unknown HpTimer; // 0x548 (8)
	float EndTime; // 0x550 (4)
	float StartTime; // 0x554 (4)
	float TotalTime; // 0x558 (4)
	float ResultValue; // 0x55C (4)
	float AddTme; // 0x560 (4)
	float PreStart; // 0x564 (4)

	void OnLoaded_27D2D12149E3EA31998D6D88C1D08B2F(struct Unknown Loaded); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.OnLoaded_27D2D12149E3EA31998D6D88C1D08B2F(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetNickName(struct FString NewNickName); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetNickName(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetIndex(int32_t NewIndex); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetIndex(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetPerkLevel(int32_t NewPerkLevel); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetPerkLevel(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetPerkName(struct FName& NewPerkName); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetPerkName(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetKillCount(int32_t NewKillCount); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetKillCount(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetHp(int32_t NewCur, int32_t NewMax); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetHp(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void 鉹@ t元_1(); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.鉹@ t元_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetPing(struct Unknown& NewPingInfo); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetPing(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetTalking(char NewTalking, char bIsMute); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetTalking(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetFiring(char NewIsFiring); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetFiring(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void AnimationHP(float Start, float End, float Time); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.AnimationHP(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Hp_Ani(); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.Hp_Ani(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetGoldenTime(struct Unknown NewRemainTime, float NewPercent); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetGoldenTime(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetExpertWeaponName(struct FText& NewWeaponName); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetExpertWeaponName(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetCharacterState(enum class Unknow NewState, char IsDisconnect); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetCharacterState(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetRequestResuscitation(char bNewFlag); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetRequestResuscitation(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetResuscitating(char bNewFlag); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetResuscitating(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UpdateInvalidationbox(); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.UpdateInvalidationbox(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-TeamInfoItemWidget(int32_t EntryPoint); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.ExecuteUbergraph_UW-TeamInfoItemWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.OnLoaded_27D2D12149E3EA31998D6D88C1D08B2F
inline void UUW-TeamInfoItemWidget_C::OnLoaded_27D2D12149E3EA31998D6D88C1D08B2F(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.OnLoaded_27D2D12149E3EA31998D6D88C1D08B2F");

	struct OnLoaded_27D2D12149E3EA31998D6D88C1D08B2F_Params {
		struct Unknown Loaded;
	}; OnLoaded_27D2D12149E3EA31998D6D88C1D08B2F_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetNickName
inline void UUW-TeamInfoItemWidget_C::SetNickName(struct FString NewNickName) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetNickName");

	struct SetNickName_Params {
		struct FString NewNickName;
	}; SetNickName_Params Params;

	Params.NewNickName = NewNickName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetIndex
inline void UUW-TeamInfoItemWidget_C::SetIndex(int32_t NewIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetIndex");

	struct SetIndex_Params {
		int32_t NewIndex;
	}; SetIndex_Params Params;

	Params.NewIndex = NewIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetPerkLevel
inline void UUW-TeamInfoItemWidget_C::SetPerkLevel(int32_t NewPerkLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetPerkLevel");

	struct SetPerkLevel_Params {
		int32_t NewPerkLevel;
	}; SetPerkLevel_Params Params;

	Params.NewPerkLevel = NewPerkLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetPerkName
inline void UUW-TeamInfoItemWidget_C::SetPerkName(struct FName& NewPerkName) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetPerkName");

	struct SetPerkName_Params {
		struct FName& NewPerkName;
	}; SetPerkName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NewPerkName = Params.NewPerkName;

}

// Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetKillCount
inline void UUW-TeamInfoItemWidget_C::SetKillCount(int32_t NewKillCount) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetKillCount");

	struct SetKillCount_Params {
		int32_t NewKillCount;
	}; SetKillCount_Params Params;

	Params.NewKillCount = NewKillCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetHp
inline void UUW-TeamInfoItemWidget_C::SetHp(int32_t NewCur, int32_t NewMax) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetHp");

	struct SetHp_Params {
		int32_t NewCur;
		int32_t NewMax;
	}; SetHp_Params Params;

	Params.NewCur = NewCur;
	Params.NewMax = NewMax;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.鉹@ t元_1
inline void UUW-TeamInfoItemWidget_C::鉹@ t元_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.鉹@ t元_1");

	struct 鉹@ t元_1_Params {
		
	}; 鉹@ t元_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetPing
inline void UUW-TeamInfoItemWidget_C::SetPing(struct Unknown& NewPingInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetPing");

	struct SetPing_Params {
		struct Unknown& NewPingInfo;
	}; SetPing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NewPingInfo = Params.NewPingInfo;

}

// Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetTalking
inline void UUW-TeamInfoItemWidget_C::SetTalking(char NewTalking, char bIsMute) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetTalking");

	struct SetTalking_Params {
		char NewTalking;
		char bIsMute;
	}; SetTalking_Params Params;

	Params.NewTalking = NewTalking;
	Params.bIsMute = bIsMute;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetFiring
inline void UUW-TeamInfoItemWidget_C::SetFiring(char NewIsFiring) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetFiring");

	struct SetFiring_Params {
		char NewIsFiring;
	}; SetFiring_Params Params;

	Params.NewIsFiring = NewIsFiring;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.AnimationHP
inline void UUW-TeamInfoItemWidget_C::AnimationHP(float Start, float End, float Time) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.AnimationHP");

	struct AnimationHP_Params {
		float Start;
		float End;
		float Time;
	}; AnimationHP_Params Params;

	Params.Start = Start;
	Params.End = End;
	Params.Time = Time;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.Hp_Ani
inline void UUW-TeamInfoItemWidget_C::Hp_Ani() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.Hp_Ani");

	struct Hp_Ani_Params {
		
	}; Hp_Ani_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetGoldenTime
inline void UUW-TeamInfoItemWidget_C::SetGoldenTime(struct Unknown NewRemainTime, float NewPercent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetGoldenTime");

	struct SetGoldenTime_Params {
		struct Unknown NewRemainTime;
		float NewPercent;
	}; SetGoldenTime_Params Params;

	Params.NewRemainTime = NewRemainTime;
	Params.NewPercent = NewPercent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetExpertWeaponName
inline void UUW-TeamInfoItemWidget_C::SetExpertWeaponName(struct FText& NewWeaponName) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetExpertWeaponName");

	struct SetExpertWeaponName_Params {
		struct FText& NewWeaponName;
	}; SetExpertWeaponName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NewWeaponName = Params.NewWeaponName;

}

// Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetCharacterState
inline void UUW-TeamInfoItemWidget_C::SetCharacterState(enum class Unknow NewState, char IsDisconnect) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetCharacterState");

	struct SetCharacterState_Params {
		enum class Unknow NewState;
		char IsDisconnect;
	}; SetCharacterState_Params Params;

	Params.NewState = NewState;
	Params.IsDisconnect = IsDisconnect;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetRequestResuscitation
inline void UUW-TeamInfoItemWidget_C::SetRequestResuscitation(char bNewFlag) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetRequestResuscitation");

	struct SetRequestResuscitation_Params {
		char bNewFlag;
	}; SetRequestResuscitation_Params Params;

	Params.bNewFlag = bNewFlag;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetResuscitating
inline void UUW-TeamInfoItemWidget_C::SetResuscitating(char bNewFlag) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetResuscitating");

	struct SetResuscitating_Params {
		char bNewFlag;
	}; SetResuscitating_Params Params;

	Params.bNewFlag = bNewFlag;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.UpdateInvalidationbox
inline void UUW-TeamInfoItemWidget_C::UpdateInvalidationbox() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.UpdateInvalidationbox");

	struct UpdateInvalidationbox_Params {
		
	}; UpdateInvalidationbox_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.ExecuteUbergraph_UW-TeamInfoItemWidget
inline void UUW-TeamInfoItemWidget_C::ExecuteUbergraph_UW-TeamInfoItemWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.ExecuteUbergraph_UW-TeamInfoItemWidget");

	struct ExecuteUbergraph_UW-TeamInfoItemWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-TeamInfoItemWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

