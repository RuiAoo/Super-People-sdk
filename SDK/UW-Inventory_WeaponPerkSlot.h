// WidgetBlueprintGeneratedClass UW-Inventory_WeaponPerkSlot.UW-Inventory_WeaponPerkSlot_C
class UUW-Inventory_WeaponPerkSlot_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown WeaponPerk_ani; // 0x250 (8)
	struct Unknown Image_102; // 0x258 (8)
	struct Unknown Image_254; // 0x260 (8)
	struct Unknown Image_Grade_Color_Line; // 0x268 (8)

	void SetBuffIcon(struct Unknown Icon, int32_t Rarity); // Function UW-Inventory_WeaponPerkSlot.UW-Inventory_WeaponPerkSlot_C.SetBuffIcon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnLoaded_F0D528FA4CCA8F059BD99488566476C1(struct Unknown Loaded); // Function UW-Inventory_WeaponPerkSlot.UW-Inventory_WeaponPerkSlot_C.OnLoaded_F0D528FA4CCA8F059BD99488566476C1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void AsyncLoadIconTexture(struct Unknown IconTexture); // Function UW-Inventory_WeaponPerkSlot.UW-Inventory_WeaponPerkSlot_C.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-Inventory_WeaponPerkSlot(int32_t EntryPoint); // Function UW-Inventory_WeaponPerkSlot.UW-Inventory_WeaponPerkSlot_C.ExecuteUbergraph_UW-Inventory_WeaponPerkSlot(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-Inventory_WeaponPerkSlot.UW-Inventory_WeaponPerkSlot_C.SetBuffIcon
inline void UUW-Inventory_WeaponPerkSlot_C::SetBuffIcon(struct Unknown Icon, int32_t Rarity) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponPerkSlot.UW-Inventory_WeaponPerkSlot_C.SetBuffIcon");

	struct SetBuffIcon_Params {
		struct Unknown Icon;
		int32_t Rarity;
	}; SetBuffIcon_Params Params;

	Params.Icon = Icon;
	Params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponPerkSlot.UW-Inventory_WeaponPerkSlot_C.OnLoaded_F0D528FA4CCA8F059BD99488566476C1
inline void UUW-Inventory_WeaponPerkSlot_C::OnLoaded_F0D528FA4CCA8F059BD99488566476C1(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponPerkSlot.UW-Inventory_WeaponPerkSlot_C.OnLoaded_F0D528FA4CCA8F059BD99488566476C1");

	struct OnLoaded_F0D528FA4CCA8F059BD99488566476C1_Params {
		struct Unknown Loaded;
	}; OnLoaded_F0D528FA4CCA8F059BD99488566476C1_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponPerkSlot.UW-Inventory_WeaponPerkSlot_C.AsyncLoadIconTexture
inline void UUW-Inventory_WeaponPerkSlot_C::AsyncLoadIconTexture(struct Unknown IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponPerkSlot.UW-Inventory_WeaponPerkSlot_C.AsyncLoadIconTexture");

	struct AsyncLoadIconTexture_Params {
		struct Unknown IconTexture;
	}; AsyncLoadIconTexture_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponPerkSlot.UW-Inventory_WeaponPerkSlot_C.ExecuteUbergraph_UW-Inventory_WeaponPerkSlot
inline void UUW-Inventory_WeaponPerkSlot_C::ExecuteUbergraph_UW-Inventory_WeaponPerkSlot(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponPerkSlot.UW-Inventory_WeaponPerkSlot_C.ExecuteUbergraph_UW-Inventory_WeaponPerkSlot");

	struct ExecuteUbergraph_UW-Inventory_WeaponPerkSlot_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_WeaponPerkSlot_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

