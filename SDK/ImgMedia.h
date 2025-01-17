// Class ImgMedia.ImgMediaSource
class UImgMediaSource : public UBaseMediaSource {

public:

	struct Unknown FrameRateOverride; // 0x88 (8)
	struct FString ProxyOverride; // 0x90 (16)
	struct Unknown SequencePath; // 0xA0 (16)

	void SetSequencePath(struct FString Path); // Function ImgMedia.ImgMediaSource.SetSequencePath(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10B74A0>
	struct FString GetSequencePath(); // Function ImgMedia.ImgMediaSource.GetSequencePath(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10B73B0>
	void GetProxies(struct TArray<Unknown>& OutProxies); // Function ImgMedia.ImgMediaSource.GetProxies(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10B72E0>
};

// Function ImgMedia.ImgMediaSource.SetSequencePath
inline void UImgMediaSource::SetSequencePath(struct FString Path) {
	static auto fn = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.SetSequencePath");

	struct SetSequencePath_Params {
		struct FString Path;
	}; SetSequencePath_Params Params;

	Params.Path = Path;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ImgMedia.ImgMediaSource.GetSequencePath
inline struct FString UImgMediaSource::GetSequencePath() {
	static auto fn = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.GetSequencePath");

	struct GetSequencePath_Params {
		
		struct FString ReturnValue;

	}; GetSequencePath_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function ImgMedia.ImgMediaSource.GetProxies
inline void UImgMediaSource::GetProxies(struct TArray<Unknown>& OutProxies) {
	static auto fn = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.GetProxies");

	struct GetProxies_Params {
		struct TArray<Unknown>& OutProxies;
	}; GetProxies_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutProxies = Params.OutProxies;

}

