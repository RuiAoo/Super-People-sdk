// WidgetBlueprintGeneratedClass UW-CompassUnitWidget.UW-CompassUnitWidget_C
class UUW-CompassUnitWidget_C : public UBravoHotelCompassUnitWidget {

public:

	struct Unknown InvalidationBox_1; // 0x250 (8)
	struct Unknown InvalidationBox_2; // 0x258 (8)
	struct Unknown SpecialText; // 0x260 (8)

	struct FText GetAngleText(int32_t Angle, char& IsNormal); // Function UW-CompassUnitWidget.UW-CompassUnitWidget_C.GetAngleText(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Initialize(float Direction, int32_t NormalDirectionFontSize, int32_t SpecialDirectionFontSize); // Function UW-CompassUnitWidget.UW-CompassUnitWidget_C.Initialize(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-CompassUnitWidget.UW-CompassUnitWidget_C.GetAngleText
inline struct FText UUW-CompassUnitWidget_C::GetAngleText(int32_t Angle, char& IsNormal) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassUnitWidget.UW-CompassUnitWidget_C.GetAngleText");

	struct GetAngleText_Params {
		int32_t Angle;
		char& IsNormal;
		struct FText ReturnValue;

	}; GetAngleText_Params Params;

	Params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsNormal = Params.IsNormal;


	return params.ReturnValue;
}

// Function UW-CompassUnitWidget.UW-CompassUnitWidget_C.Initialize
inline void UUW-CompassUnitWidget_C::Initialize(float Direction, int32_t NormalDirectionFontSize, int32_t SpecialDirectionFontSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassUnitWidget.UW-CompassUnitWidget_C.Initialize");

	struct Initialize_Params {
		float Direction;
		int32_t NormalDirectionFontSize;
		int32_t SpecialDirectionFontSize;
	}; Initialize_Params Params;

	Params.Direction = Direction;
	Params.NormalDirectionFontSize = NormalDirectionFontSize;
	Params.SpecialDirectionFontSize = SpecialDirectionFontSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

