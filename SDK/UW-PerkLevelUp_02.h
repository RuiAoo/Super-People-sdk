// WidgetBlueprintGeneratedClass UW-PerkLevelUp_02.UW-PerkLevelUp_02_C
class UUW-PerkLevelUp_02_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Level_Up_New; // 0x250 (8)
	struct Unknown VSkill_Motion; // 0x258 (8)
	struct Unknown FinalitySkill_Motion; // 0x260 (8)
	struct Unknown LEVEL_UP; // 0x268 (8)
	struct Unknown CanvasPanel_294; // 0x270 (8)
	struct Unknown FSkill_Info; // 0x278 (8)
	struct Unknown FSkill_Title; // 0x280 (8)
	struct Unknown HorizontalBox_290; // 0x288 (8)
	struct Unknown Image_1; // 0x290 (8)
	struct Unknown Image_2; // 0x298 (8)
	struct Unknown Image_4; // 0x2A0 (8)
	struct Unknown Image_5; // 0x2A8 (8)
	struct Unknown Image_6; // 0x2B0 (8)
	struct Unknown Image_9; // 0x2B8 (8)
	struct Unknown Image_10; // 0x2C0 (8)
	struct Unknown Image_245; // 0x2C8 (8)
	struct Unknown Image_247; // 0x2D0 (8)
	struct Unknown Image_413; // 0x2D8 (8)
	struct Unknown Image_458; // 0x2E0 (8)
	struct Unknown Image_602; // 0x2E8 (8)
	struct Unknown Image_UltimateGetMat; // 0x2F0 (8)
	struct Unknown IMG_FinalitySkill; // 0x2F8 (8)
	struct Unknown Img_UltimateMaterial; // 0x300 (8)
	struct Unknown Light; // 0x308 (8)
	struct Unknown T_Desc; // 0x310 (8)
	struct Unknown T_Level; // 0x318 (8)
	struct Unknown T_PerkName; // 0x320 (8)
	struct Unknown TextBlock_LevelUpNewText; // 0x328 (8)
	struct Unknown UW-Inventory_PerkSlot_LevelUp; // 0x330 (8)
	struct Unknown UW-Inventory_PerkSlot_VSkill; // 0x338 (8)
	struct Unknown VSkill_Info; // 0x340 (8)
	struct Unknown VSkill_Titile; // 0x348 (8)
	struct Unknown VSkillThumbStroke_02; // 0x350 (8)
	struct Unknown WidgetSwitcher_LevelUpInfo; // 0x358 (8)
	struct Unknown Handle_LevelUpEffect; // 0x360 (8)
	float EffectDelay; // 0x368 (4)
	struct TArray<Unknown> PerkInfoQue; // 0x370 (16)
	struct Unknown CurrentPerkInfo; // 0x380 (44)
	struct TArray<Unknown> PerkLevelUpInfo; // 0x3B0 (16)
	struct Unknown PerkLevelUpData; // 0x3C0 (376)
	struct Unknown CurrentPerkData; // 0x538 (224)
	int32_t CurrentLevel; // 0x618 (4)
	char IsAlreadyUnlockedUltimate : 0; // 0x61C (1)
	char CurrentLevelUpInfo; // 0x61D (1)
	struct TArray<Unknown> CurrentLevelQue; // 0x620 (16)
	float CurrentUltimateMaterialValue; // 0x630 (4)
	char UltimateUpdate : 0; // 0x634 (1)
	struct Unknown UltimateMaterialInstance; // 0x638 (8)
	float UltimateAnimTime; // 0x640 (4)
	struct Unknown UltimateGetMaterialInstance; // 0x648 (8)

	void SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_4(struct Unknown Image_365); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_4(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_3(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_3(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_2(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_2(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_1(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_1(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ResetInfos(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.ResetInfos(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void PlayLevelAndUtimate(int32_t Level, char bUltimate); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlayLevelAndUtimate(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	enum class Unknow GetVisibility_2(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.GetVisibility_2(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	enum class Unknow GetVisibility_1(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.GetVisibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void RemoveAllEffects(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.RemoveAllEffects(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void PlayLevelUpSound(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlayLevelUpSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void PlayCharacterLevelUpEffect(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlayCharacterLevelUpEffect(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void CheckUltimateSkill(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.CheckUltimateSkill(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	struct Unknown Get_FinalitySkillThumb_Brush_1(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.Get_FinalitySkillThumb_Brush_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	struct FText Get_FSkill_Info_Text_1(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.Get_FSkill_Info_Text_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	struct FText Get_FSkill_Title_Text_1(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.Get_FSkill_Title_Text_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	struct FText Get_T_Desc_Text_1(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.Get_T_Desc_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	struct FText Get_T_PerkName_Text_1(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.Get_T_PerkName_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	struct FText GetText_1(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.GetText_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void PlayUltimateSkillAnimation(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlayUltimateSkillAnimation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void PlaySkillUnlockAnimation(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlaySkillUnlockAnimation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void PlayLevelUpAnimation(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlayLevelUpAnimation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void IsOverUltimateLevel(char& IsUltimate); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.IsOverUltimateLevel(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void LevelUpEffect(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.LevelUpEffect(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void StartLevelUpEffect(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.StartLevelUpEffect(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void AddToQue(struct Unknown PerkInfo, int32_t CurrentLevel); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.AddToQue(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void PlayLevelUpPopup(struct Unknown PerkInfo, int32_t CurrentLevel); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlayLevelUpPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void StartUltimateUpdate(struct Unknown Image_365); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.StartUltimateUpdate(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ResetUltimateUpdate(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.ResetUltimateUpdate(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnAnimationFinished(struct Unknown Animation); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.OnAnimationFinished(BlueprintCosmetic|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UpdateUltimateMaterial(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.UpdateUltimateMaterial(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-PerkLevelUp_02(int32_t EntryPoint); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.ExecuteUbergraph_UW-PerkLevelUp_02(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_4
inline void UUW-PerkLevelUp_02_C::SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_4(struct Unknown Image_365) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_4");

	struct SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_4_Params {
		struct Unknown Image_365;
	}; SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_4_Params Params;

	Params.Image_365 = Image_365;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_3
inline void UUW-PerkLevelUp_02_C::SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_3() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_3");

	struct SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_3_Params {
		
	}; SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_3_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_2
inline void UUW-PerkLevelUp_02_C::SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_2() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_2");

	struct SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_2_Params {
		
	}; SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_2_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_1
inline void UUW-PerkLevelUp_02_C::SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_1");

	struct SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_1_Params {
		
	}; SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.ResetInfos
inline void UUW-PerkLevelUp_02_C::ResetInfos() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.ResetInfos");

	struct ResetInfos_Params {
		
	}; ResetInfos_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlayLevelAndUtimate
inline void UUW-PerkLevelUp_02_C::PlayLevelAndUtimate(int32_t Level, char bUltimate) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlayLevelAndUtimate");

	struct PlayLevelAndUtimate_Params {
		int32_t Level;
		char bUltimate;
	}; PlayLevelAndUtimate_Params Params;

	Params.Level = Level;
	Params.bUltimate = bUltimate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.GetVisibility_2
inline enum class Unknow UUW-PerkLevelUp_02_C::GetVisibility_2() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.GetVisibility_2");

	struct GetVisibility_2_Params {
		
		enum class Unknow ReturnValue;

	}; GetVisibility_2_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.GetVisibility_1
inline enum class Unknow UUW-PerkLevelUp_02_C::GetVisibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.GetVisibility_1");

	struct GetVisibility_1_Params {
		
		enum class Unknow ReturnValue;

	}; GetVisibility_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.RemoveAllEffects
inline void UUW-PerkLevelUp_02_C::RemoveAllEffects() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.RemoveAllEffects");

	struct RemoveAllEffects_Params {
		
	}; RemoveAllEffects_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlayLevelUpSound
inline void UUW-PerkLevelUp_02_C::PlayLevelUpSound() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlayLevelUpSound");

	struct PlayLevelUpSound_Params {
		
	}; PlayLevelUpSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlayCharacterLevelUpEffect
inline void UUW-PerkLevelUp_02_C::PlayCharacterLevelUpEffect() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlayCharacterLevelUpEffect");

	struct PlayCharacterLevelUpEffect_Params {
		
	}; PlayCharacterLevelUpEffect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.CheckUltimateSkill
inline void UUW-PerkLevelUp_02_C::CheckUltimateSkill() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.CheckUltimateSkill");

	struct CheckUltimateSkill_Params {
		
	}; CheckUltimateSkill_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.Get_FinalitySkillThumb_Brush_1
inline struct Unknown UUW-PerkLevelUp_02_C::Get_FinalitySkillThumb_Brush_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.Get_FinalitySkillThumb_Brush_1");

	struct Get_FinalitySkillThumb_Brush_1_Params {
		
		struct Unknown ReturnValue;

	}; Get_FinalitySkillThumb_Brush_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.Get_FSkill_Info_Text_1
inline struct FText UUW-PerkLevelUp_02_C::Get_FSkill_Info_Text_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.Get_FSkill_Info_Text_1");

	struct Get_FSkill_Info_Text_1_Params {
		
		struct FText ReturnValue;

	}; Get_FSkill_Info_Text_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.Get_FSkill_Title_Text_1
inline struct FText UUW-PerkLevelUp_02_C::Get_FSkill_Title_Text_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.Get_FSkill_Title_Text_1");

	struct Get_FSkill_Title_Text_1_Params {
		
		struct FText ReturnValue;

	}; Get_FSkill_Title_Text_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.Get_T_Desc_Text_1
inline struct FText UUW-PerkLevelUp_02_C::Get_T_Desc_Text_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.Get_T_Desc_Text_1");

	struct Get_T_Desc_Text_1_Params {
		
		struct FText ReturnValue;

	}; Get_T_Desc_Text_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.Get_T_PerkName_Text_1
inline struct FText UUW-PerkLevelUp_02_C::Get_T_PerkName_Text_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.Get_T_PerkName_Text_1");

	struct Get_T_PerkName_Text_1_Params {
		
		struct FText ReturnValue;

	}; Get_T_PerkName_Text_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.GetText_1
inline struct FText UUW-PerkLevelUp_02_C::GetText_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.GetText_1");

	struct GetText_1_Params {
		
		struct FText ReturnValue;

	}; GetText_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlayUltimateSkillAnimation
inline void UUW-PerkLevelUp_02_C::PlayUltimateSkillAnimation() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlayUltimateSkillAnimation");

	struct PlayUltimateSkillAnimation_Params {
		
	}; PlayUltimateSkillAnimation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlaySkillUnlockAnimation
inline void UUW-PerkLevelUp_02_C::PlaySkillUnlockAnimation() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlaySkillUnlockAnimation");

	struct PlaySkillUnlockAnimation_Params {
		
	}; PlaySkillUnlockAnimation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlayLevelUpAnimation
inline void UUW-PerkLevelUp_02_C::PlayLevelUpAnimation() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlayLevelUpAnimation");

	struct PlayLevelUpAnimation_Params {
		
	}; PlayLevelUpAnimation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.IsOverUltimateLevel
inline void UUW-PerkLevelUp_02_C::IsOverUltimateLevel(char& IsUltimate) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.IsOverUltimateLevel");

	struct IsOverUltimateLevel_Params {
		char& IsUltimate;
	}; IsOverUltimateLevel_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsUltimate = Params.IsUltimate;

}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.LevelUpEffect
inline void UUW-PerkLevelUp_02_C::LevelUpEffect() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.LevelUpEffect");

	struct LevelUpEffect_Params {
		
	}; LevelUpEffect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.StartLevelUpEffect
inline void UUW-PerkLevelUp_02_C::StartLevelUpEffect() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.StartLevelUpEffect");

	struct StartLevelUpEffect_Params {
		
	}; StartLevelUpEffect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.AddToQue
inline void UUW-PerkLevelUp_02_C::AddToQue(struct Unknown PerkInfo, int32_t CurrentLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.AddToQue");

	struct AddToQue_Params {
		struct Unknown PerkInfo;
		int32_t CurrentLevel;
	}; AddToQue_Params Params;

	Params.PerkInfo = PerkInfo;
	Params.CurrentLevel = CurrentLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlayLevelUpPopup
inline void UUW-PerkLevelUp_02_C::PlayLevelUpPopup(struct Unknown PerkInfo, int32_t CurrentLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlayLevelUpPopup");

	struct PlayLevelUpPopup_Params {
		struct Unknown PerkInfo;
		int32_t CurrentLevel;
	}; PlayLevelUpPopup_Params Params;

	Params.PerkInfo = PerkInfo;
	Params.CurrentLevel = CurrentLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.StartUltimateUpdate
inline void UUW-PerkLevelUp_02_C::StartUltimateUpdate(struct Unknown Image_365) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.StartUltimateUpdate");

	struct StartUltimateUpdate_Params {
		struct Unknown Image_365;
	}; StartUltimateUpdate_Params Params;

	Params.Image_365 = Image_365;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.Tick
inline void UUW-PerkLevelUp_02_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.Tick");

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

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.ResetUltimateUpdate
inline void UUW-PerkLevelUp_02_C::ResetUltimateUpdate() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.ResetUltimateUpdate");

	struct ResetUltimateUpdate_Params {
		
	}; ResetUltimateUpdate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.OnAnimationFinished
inline void UUW-PerkLevelUp_02_C::OnAnimationFinished(struct Unknown Animation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.OnAnimationFinished");

	struct OnAnimationFinished_Params {
		struct Unknown Animation;
	}; OnAnimationFinished_Params Params;

	Params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.UpdateUltimateMaterial
inline void UUW-PerkLevelUp_02_C::UpdateUltimateMaterial() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.UpdateUltimateMaterial");

	struct UpdateUltimateMaterial_Params {
		
	}; UpdateUltimateMaterial_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.ExecuteUbergraph_UW-PerkLevelUp_02
inline void UUW-PerkLevelUp_02_C::ExecuteUbergraph_UW-PerkLevelUp_02(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.ExecuteUbergraph_UW-PerkLevelUp_02");

	struct ExecuteUbergraph_UW-PerkLevelUp_02_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-PerkLevelUp_02_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

