// WidgetBlueprintGeneratedClass UW-StatupWidget.UW-StatupWidget_C
class UUW-StatupWidget_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Anim_MoveUp_HUD; // 0x250 (8)
	struct Unknown Anim_MoveRight; // 0x258 (8)
	struct Unknown Anim_MoveUp; // 0x260 (8)
	struct Unknown UW-StatupWidget_Item_Attack; // 0x268 (8)
	struct Unknown UW-StatupWidget_Item_Capacity; // 0x270 (8)
	struct Unknown UW-StatupWidget_Item_Damage; // 0x278 (8)
	struct Unknown UW-StatupWidget_Item_Decrement; // 0x280 (8)
	struct Unknown UW-StatupWidget_Item_Health; // 0x288 (8)
	struct Unknown UW-StatupWidget_Item_Speed; // 0x290 (8)
	struct Unknown VerticalBox_Stats; // 0x298 (8)

	void SetStatInfo(struct Unknown& StatupParams, char IsUpAnim); // Function UW-StatupWidget.UW-StatupWidget_C.SetStatInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnAnimationFinished(struct Unknown Animation); // Function UW-StatupWidget.UW-StatupWidget_C.OnAnimationFinished(BlueprintCosmetic|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-StatupWidget(int32_t EntryPoint); // Function UW-StatupWidget.UW-StatupWidget_C.ExecuteUbergraph_UW-StatupWidget(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-StatupWidget.UW-StatupWidget_C.SetStatInfo
inline void UUW-StatupWidget_C::SetStatInfo(struct Unknown& StatupParams, char IsUpAnim) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-StatupWidget.UW-StatupWidget_C.SetStatInfo");

	struct SetStatInfo_Params {
		struct Unknown& StatupParams;
		char IsUpAnim;
	}; SetStatInfo_Params Params;

	Params.IsUpAnim = IsUpAnim;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	StatupParams = Params.StatupParams;

}

// Function UW-StatupWidget.UW-StatupWidget_C.OnAnimationFinished
inline void UUW-StatupWidget_C::OnAnimationFinished(struct Unknown Animation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-StatupWidget.UW-StatupWidget_C.OnAnimationFinished");

	struct OnAnimationFinished_Params {
		struct Unknown Animation;
	}; OnAnimationFinished_Params Params;

	Params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-StatupWidget.UW-StatupWidget_C.ExecuteUbergraph_UW-StatupWidget
inline void UUW-StatupWidget_C::ExecuteUbergraph_UW-StatupWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-StatupWidget.UW-StatupWidget_C.ExecuteUbergraph_UW-StatupWidget");

	struct ExecuteUbergraph_UW-StatupWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-StatupWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

