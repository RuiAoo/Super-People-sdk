// WidgetBlueprintGeneratedClass UW-ReplayGuideWidget.UW-ReplayGuideWidget_C
class UUW-ReplayGuideWidget_C : public UUserWidget {

public:

	struct Unknown FollowCamGuide; // 0x248 (8)
	struct Unknown FreeCamGuide; // 0x250 (8)
	struct Unknown KeyImageWidget_C_1; // 0x258 (8)
	struct Unknown KeyImageWidget_C_2; // 0x260 (8)
	struct Unknown KeyImageWidget_C_3; // 0x268 (8)
	struct Unknown KeyImageWidget_C_4; // 0x270 (8)
	struct Unknown KeyImageWidget_C_5; // 0x278 (8)
	struct Unknown KeyImageWidget_C_6; // 0x280 (8)
	struct Unknown KeyImageWidget_C_7; // 0x288 (8)
	struct Unknown KeyImageWidget_C_8; // 0x290 (8)
	struct Unknown KeyImageWidget_C_10; // 0x298 (8)
	struct Unknown KeyImageWidget_C_153; // 0x2A0 (8)
	struct Unknown KeyImageWidget_C_154; // 0x2A8 (8)
	struct Unknown KeyImageWidget_C_155; // 0x2B0 (8)
	struct Unknown KeyImageWidget_C_157; // 0x2B8 (8)
	struct Unknown KeyImageWidget_C_158; // 0x2C0 (8)
	struct Unknown KeyImageWidget_C_159; // 0x2C8 (8)
	struct Unknown KeyImageWidget_C_160; // 0x2D0 (8)
	struct Unknown KillCamGuide; // 0x2D8 (8)
	struct Unknown T_Guide; // 0x2E0 (8)
	struct Unknown TextBlock_1; // 0x2E8 (8)
	struct Unknown TextBlock_2; // 0x2F0 (8)
	struct Unknown TextBlock_4; // 0x2F8 (8)
	struct Unknown TextBlock_5; // 0x300 (8)
	struct Unknown TextBlock_6; // 0x308 (8)
	struct Unknown TextBlock_7; // 0x310 (8)
	struct Unknown TextBlock_8; // 0x318 (8)
	struct Unknown TextBlock_9; // 0x320 (8)
	struct Unknown TextBlock_10; // 0x328 (8)
	struct Unknown TextBlock_11; // 0x330 (8)
	struct Unknown TextBlock_13; // 0x338 (8)
	struct Unknown TextBlock_14; // 0x340 (8)
	struct Unknown TextBlock_15; // 0x348 (8)
	struct Unknown TextBlock_16; // 0x350 (8)
	struct Unknown TextBlock_17; // 0x358 (8)
	struct Unknown WidgetSwitcher_132; // 0x360 (8)

	void SetKillCamGuide(); // Function UW-ReplayGuideWidget.UW-ReplayGuideWidget_C.SetKillCamGuide(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ChangeGuide(enum class Unknow CameraType); // Function UW-ReplayGuideWidget.UW-ReplayGuideWidget_C.ChangeGuide(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-ReplayGuideWidget.UW-ReplayGuideWidget_C.SetKillCamGuide
inline void UUW-ReplayGuideWidget_C::SetKillCamGuide() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayGuideWidget.UW-ReplayGuideWidget_C.SetKillCamGuide");

	struct SetKillCamGuide_Params {
		
	}; SetKillCamGuide_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayGuideWidget.UW-ReplayGuideWidget_C.ChangeGuide
inline void UUW-ReplayGuideWidget_C::ChangeGuide(enum class Unknow CameraType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayGuideWidget.UW-ReplayGuideWidget_C.ChangeGuide");

	struct ChangeGuide_Params {
		enum class Unknow CameraType;
	}; ChangeGuide_Params Params;

	Params.CameraType = CameraType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

