// WidgetBlueprintGeneratedClass UW-RoutePingWidget_Point.UW-RoutePingWidget_Point_C
class UUW-RoutePingWidget_Point_C : public UBravoHotelRoutePingWidget {

public:

	struct Unknown Anim_OnShow; // 0x248 (8)
	struct Unknown BackColor; // 0x250 (8)
	struct Unknown T_Num; // 0x258 (8)
	struct FMulticastInlineDelegate OnMarkerClicked; // 0x260 (16)

	void SetPointAngle(float Angle); // Function UW-RoutePingWidget_Point.UW-RoutePingWidget_Point_C.SetPointAngle(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SelectPointIcon(int32_t Index, char IsLastPoint, char IsUpdate); // Function UW-RoutePingWidget_Point.UW-RoutePingWidget_Point_C.SelectPointIcon(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetTeamColor(struct Unknown LinearColor); // Function UW-RoutePingWidget_Point.UW-RoutePingWidget_Point_C.SetTeamColor(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnMarkerClicked__DelegateSignature(struct Unknown Button, char mapObjectID); // Function UW-RoutePingWidget_Point.UW-RoutePingWidget_Point_C.OnMarkerClicked__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-RoutePingWidget_Point.UW-RoutePingWidget_Point_C.SetPointAngle
inline void UUW-RoutePingWidget_Point_C::SetPointAngle(float Angle) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RoutePingWidget_Point.UW-RoutePingWidget_Point_C.SetPointAngle");

	struct SetPointAngle_Params {
		float Angle;
	}; SetPointAngle_Params Params;

	Params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RoutePingWidget_Point.UW-RoutePingWidget_Point_C.SelectPointIcon
inline void UUW-RoutePingWidget_Point_C::SelectPointIcon(int32_t Index, char IsLastPoint, char IsUpdate) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RoutePingWidget_Point.UW-RoutePingWidget_Point_C.SelectPointIcon");

	struct SelectPointIcon_Params {
		int32_t Index;
		char IsLastPoint;
		char IsUpdate;
	}; SelectPointIcon_Params Params;

	Params.Index = Index;
	Params.IsLastPoint = IsLastPoint;
	Params.IsUpdate = IsUpdate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RoutePingWidget_Point.UW-RoutePingWidget_Point_C.SetTeamColor
inline void UUW-RoutePingWidget_Point_C::SetTeamColor(struct Unknown LinearColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RoutePingWidget_Point.UW-RoutePingWidget_Point_C.SetTeamColor");

	struct SetTeamColor_Params {
		struct Unknown LinearColor;
	}; SetTeamColor_Params Params;

	Params.LinearColor = LinearColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RoutePingWidget_Point.UW-RoutePingWidget_Point_C.OnMarkerClicked__DelegateSignature
inline void UUW-RoutePingWidget_Point_C::OnMarkerClicked__DelegateSignature(struct Unknown Button, char mapObjectID) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RoutePingWidget_Point.UW-RoutePingWidget_Point_C.OnMarkerClicked__DelegateSignature");

	struct OnMarkerClicked__DelegateSignature_Params {
		struct Unknown Button;
		char mapObjectID;
	}; OnMarkerClicked__DelegateSignature_Params Params;

	Params.Button = Button;
	Params.mapObjectID = mapObjectID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

