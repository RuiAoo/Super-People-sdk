// WidgetBlueprintGeneratedClass CrossHairDetailInfo.CrossHairDetailInfo_C
class UCrossHairDetailInfo_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown 1-1; // 0x250 (8)
	struct Unknown CurDesc; // 0x258 (8)

	void SetData(struct FText Title, struct Unknown Image); // Function CrossHairDetailInfo.CrossHairDetailInfo_C.SetData(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_CrossHairDetailInfo(int32_t EntryPoint); // Function CrossHairDetailInfo.CrossHairDetailInfo_C.ExecuteUbergraph_CrossHairDetailInfo(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function CrossHairDetailInfo.CrossHairDetailInfo_C.SetData
inline void UCrossHairDetailInfo_C::SetData(struct FText Title, struct Unknown Image) {
	static auto fn = UObject::FindObject<UFunction>("Function CrossHairDetailInfo.CrossHairDetailInfo_C.SetData");

	struct SetData_Params {
		struct FText Title;
		struct Unknown Image;
	}; SetData_Params Params;

	Params.Title = Title;
	Params.Image = Image;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CrossHairDetailInfo.CrossHairDetailInfo_C.ExecuteUbergraph_CrossHairDetailInfo
inline void UCrossHairDetailInfo_C::ExecuteUbergraph_CrossHairDetailInfo(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function CrossHairDetailInfo.CrossHairDetailInfo_C.ExecuteUbergraph_CrossHairDetailInfo");

	struct ExecuteUbergraph_CrossHairDetailInfo_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_CrossHairDetailInfo_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

