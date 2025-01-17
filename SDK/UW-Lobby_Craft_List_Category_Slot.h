// WidgetBlueprintGeneratedClass UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C
class UUW-Lobby_Craft_List_Category_Slot_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button_Weapon; // 0x250 (8)
	struct Unknown HorizontalBox_Rarity; // 0x258 (8)
	struct Unknown Image_2; // 0x260 (8)
	struct Unknown Image_3; // 0x268 (8)
	struct Unknown Image_4; // 0x270 (8)
	struct Unknown Image_5; // 0x278 (8)
	struct Unknown Image_6; // 0x280 (8)
	struct Unknown Image_7; // 0x288 (8)
	struct Unknown Image_8; // 0x290 (8)
	struct Unknown Image_310; // 0x298 (8)
	struct Unknown Image_Item_Weapon; // 0x2A0 (8)
	struct Unknown Image_New; // 0x2A8 (8)
	struct Unknown T_Name; // 0x2B0 (8)
	struct Unknown WidgetSwitcher_Own; // 0x2B8 (8)
	struct Unknown ParentWidgetRef; // 0x2C0 (8)
	struct Unknown CraftingInfo; // 0x2C8 (296)
	struct TArray<Unknown> CraftMaterialItemIDList; // 0x3F0 (16)
	int32_t CraftMaterialWeaponID; // 0x400 (4)
	char IsOwn : 0; // 0x404 (1)
	char IsOwnAny : 0; // 0x405 (1)
	struct Unknown DefaultImage; // 0x408 (8)
	struct Unknown PressedDefaultImage; // 0x410 (8)
	char IsNew : 0; // 0x418 (1)

	void SetNew(char IsNew); // Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.SetNew(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetButtonEnabled(char Enabled); // Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.SetButtonEnabled(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void MakeCraftMaterialItemIDList(); // Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.MakeCraftMaterialItemIDList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void CheckOwn(char& OutIsOwn, char& OutIsOwnAny); // Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.CheckOwn(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetWeaponInfo(struct Unknown& CraftingInfo); // Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.SetWeaponInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnLoaded_01779F6241D23AEE08F8DCBEA1B49997(struct Unknown Loaded); // Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.OnLoaded_01779F6241D23AEE08F8DCBEA1B49997(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void AsyncLoadImg(struct Unknown Object); // Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.AsyncLoadImg(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnClickedWeapon(); // Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.OnClickedWeapon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ResetButtonEnabled(); // Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.ResetButtonEnabled(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-Lobby_Craft_List_Category_Slot(int32_t EntryPoint); // Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.ExecuteUbergraph_UW-Lobby_Craft_List_Category_Slot(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.SetNew
inline void UUW-Lobby_Craft_List_Category_Slot_C::SetNew(char IsNew) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.SetNew");

	struct SetNew_Params {
		char IsNew;
	}; SetNew_Params Params;

	Params.IsNew = IsNew;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.SetButtonEnabled
inline void UUW-Lobby_Craft_List_Category_Slot_C::SetButtonEnabled(char Enabled) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.SetButtonEnabled");

	struct SetButtonEnabled_Params {
		char Enabled;
	}; SetButtonEnabled_Params Params;

	Params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.MakeCraftMaterialItemIDList
inline void UUW-Lobby_Craft_List_Category_Slot_C::MakeCraftMaterialItemIDList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.MakeCraftMaterialItemIDList");

	struct MakeCraftMaterialItemIDList_Params {
		
	}; MakeCraftMaterialItemIDList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.CheckOwn
inline void UUW-Lobby_Craft_List_Category_Slot_C::CheckOwn(char& OutIsOwn, char& OutIsOwnAny) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.CheckOwn");

	struct CheckOwn_Params {
		char& OutIsOwn;
		char& OutIsOwnAny;
	}; CheckOwn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutIsOwn = Params.OutIsOwn;
	OutIsOwnAny = Params.OutIsOwnAny;

}

// Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.SetWeaponInfo
inline void UUW-Lobby_Craft_List_Category_Slot_C::SetWeaponInfo(struct Unknown& CraftingInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.SetWeaponInfo");

	struct SetWeaponInfo_Params {
		struct Unknown& CraftingInfo;
	}; SetWeaponInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CraftingInfo = Params.CraftingInfo;

}

// Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.OnLoaded_01779F6241D23AEE08F8DCBEA1B49997
inline void UUW-Lobby_Craft_List_Category_Slot_C::OnLoaded_01779F6241D23AEE08F8DCBEA1B49997(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.OnLoaded_01779F6241D23AEE08F8DCBEA1B49997");

	struct OnLoaded_01779F6241D23AEE08F8DCBEA1B49997_Params {
		struct Unknown Loaded;
	}; OnLoaded_01779F6241D23AEE08F8DCBEA1B49997_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.AsyncLoadImg
inline void UUW-Lobby_Craft_List_Category_Slot_C::AsyncLoadImg(struct Unknown Object) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.AsyncLoadImg");

	struct AsyncLoadImg_Params {
		struct Unknown Object;
	}; AsyncLoadImg_Params Params;

	Params.Object = Object;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-Lobby_Craft_List_Category_Slot_C::BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.OnClickedWeapon
inline void UUW-Lobby_Craft_List_Category_Slot_C::OnClickedWeapon() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.OnClickedWeapon");

	struct OnClickedWeapon_Params {
		
	}; OnClickedWeapon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.ResetButtonEnabled
inline void UUW-Lobby_Craft_List_Category_Slot_C::ResetButtonEnabled() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.ResetButtonEnabled");

	struct ResetButtonEnabled_Params {
		
	}; ResetButtonEnabled_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
inline void UUW-Lobby_Craft_List_Category_Slot_C::BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.ExecuteUbergraph_UW-Lobby_Craft_List_Category_Slot
inline void UUW-Lobby_Craft_List_Category_Slot_C::ExecuteUbergraph_UW-Lobby_Craft_List_Category_Slot(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.ExecuteUbergraph_UW-Lobby_Craft_List_Category_Slot");

	struct ExecuteUbergraph_UW-Lobby_Craft_List_Category_Slot_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Lobby_Craft_List_Category_Slot_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

