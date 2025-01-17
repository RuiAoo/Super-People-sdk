// Enum AudioMixer.EAudioSpectrumType
enum class EAudioSpectrumType : uint8_t {
	MagnitudeSpectrum = 0,
	PowerSpectrum = 1,
	EAudioSpectrumType_MAX = 2,
};

// Enum AudioMixer.EFFTWindowType
enum class EFFTWindowType : uint8_t {
	None = 0,
	Hamming = 1,
	Hann = 2,
	Blackman = 3,
	EFFTWindowType_MAX = 4,
};

// Enum AudioMixer.EFFTPeakInterpolationMethod
enum class EFFTPeakInterpolationMethod : uint8_t {
	NearestNeighbor = 0,
	Linear = 1,
	Quadratic = 2,
	EFFTPeakInterpolationMethod_MAX = 3,
};

// Enum AudioMixer.EFFTSize
enum class EFFTSize : uint8_t {
	DefaultSize = 0,
	Min = 1,
	Small = 2,
	Medium = 3,
	Large = 4,
	Max = 5,
};

// Enum AudioMixer.ESubmixEffectDynamicsChannelLinkMode
enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t {
	Disabled = 0,
	Average = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsChannelLinkMode_MAX = 4,
};

// Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8_t {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsPeakMode_MAX = 4,
};

// Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8_t {
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	Count = 4,
	ESubmixEffectDynamicsProcessorType_MAX = 5,
};

// Class AudioMixer.SynthComponent
class USynthComponent : public USceneComponent {

public:

	char bAutoDestroy : 0; // 0x230 (1)
	char bStopWhenOwnerDestroyed : 0; // 0x230 (1)
	char bAllowSpatialization : 0; // 0x230 (1)
	char bOverrideAttenuation : 0; // 0x230 (1)
	char bOutputToBusOnly : 0; // 0x234 (1)
	struct Unknown AttenuationSettings; // 0x238 (8)
	struct Unknown AttenuationOverrides; // 0x240 (928)
	struct Unknown ConcurrencySettings; // 0x5E0 (8)
	struct TSet<Unknown> ConcurrencySet; // 0x5E8 (80)
	struct Unknown SoundClass; // 0x638 (8)
	struct Unknown SourceEffectChain; // 0x640 (8)
	struct Unknown SoundSubmix; // 0x648 (8)
	struct TArray<Unknown> SoundSubmixSends; // 0x650 (16)
	struct TArray<Unknown> BusSends; // 0x660 (16)
	struct Unknown Modulation; // 0x670 (16)
	struct TArray<Unknown> PreEffectBusSends; // 0x680 (16)
	char bIsUISound : 0; // 0x690 (1)
	char bIsPreviewSound : 0; // 0x690 (1)
	int32_t EnvelopeFollowerAttackTime; // 0x694 (4)
	int32_t EnvelopeFollowerReleaseTime; // 0x698 (4)
	struct FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x6A0 (16)
	struct Unknown Synth; // 0x6D0 (8)
	struct Unknown AudioComponent; // 0x6D8 (8)

	void Stop(); // Function AudioMixer.SynthComponent.Stop(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3BBA9B0>
	void Start(); // Function AudioMixer.SynthComponent.Start(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3BBA6D0>
	void SetVolumeMultiplier(float VolumeMultiplier); // Function AudioMixer.SynthComponent.SetVolumeMultiplier(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3BBA650>
	void SetSubmixSend(struct Unknown Submix, float SendLevel); // Function AudioMixer.SynthComponent.SetSubmixSend(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3BBA580>
	char IsPlaying(); // Function AudioMixer.SynthComponent.IsPlaying(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3BB97C0>
};

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset {

public:

	struct Unknown Settings; // 0xB8 (80)

	void SetSettings(struct Unknown& Settings); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3BBA0F0>
	void SetExternalSubmix(struct Unknown Submix); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3BBA070>
};

// Class AudioMixer.SubmixEffectSubmixEQPreset
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset {

public:

	struct Unknown Settings; // 0x78 (16)

	void SetSettings(struct Unknown& InSettings); // Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18EE960>
};

// Class AudioMixer.SubmixEffectReverbPreset
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset {

public:

	struct Unknown Settings; // 0x9C (52)

	void SetSettingsWithReverbEffect(struct Unknown InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3BBA480>
	void SetSettings(struct Unknown& InSettings); // Function AudioMixer.SubmixEffectReverbPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3BBA2C0>
};

// Class AudioMixer.SubmixEffectReverbFastPreset
class USubmixEffectReverbFastPreset : public USoundEffectSubmixPreset {

public:

	struct Unknown Settings; // 0xA0 (56)

	void SetSettingsWithReverbEffect(struct Unknown InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3BBA380>
	void SetSettings(struct Unknown& InSettings); // Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3BBA200>
};

// Class AudioMixer.SynthSound
class USynthSound : public USoundWaveProcedural {

public:

	struct Unknown OwningSynthComponent; // 0x360 (8)
};

// ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
struct FSubmixEffectDynamicsProcessorSettings {
	enum class Unknow DynamicsProcessorType; // 0x0 (1)
	enum class Unknow PeakMode; // 0x1 (1)
	enum class Unknow LinkMode; // 0x2 (1)
	float InputGainDb; // 0x4 (4)
	float ThresholdDb; // 0x8 (4)
	float Ratio; // 0xC (4)
	float KneeBandwidthDb; // 0x10 (4)
	float LookAheadMsec; // 0x14 (4)
	float AttackTimeMsec; // 0x18 (4)
	float ReleaseTimeMsec; // 0x1C (4)
	struct Unknown ExternalSubmix; // 0x20 (8)
	char bChannelLinked : 0; // 0x28 (1)
	char bAnalogMode : 0; // 0x28 (1)
	char bKeyAudition : 0; // 0x28 (1)
	float KeyGainDb; // 0x2C (4)
	float OutputGainDb; // 0x30 (4)
	struct Unknown KeyHighshelf; // 0x34 (12)
	struct Unknown KeyLowshelf; // 0x40 (12)
};

// ScriptStruct AudioMixer.SubmixEffectDynamicProcessorFilterSettings
struct FSubmixEffectDynamicProcessorFilterSettings {
	char bEnabled : 0; // 0x0 (1)
	float Cutoff; // 0x4 (4)
	float GainDb; // 0x8 (4)
};

// ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
struct FSubmixEffectSubmixEQSettings {
	struct TArray<Unknown> EQBands; // 0x0 (16)
};

// ScriptStruct AudioMixer.SubmixEffectEQBand
struct FSubmixEffectEQBand {
	float Frequency; // 0x0 (4)
	float Bandwidth; // 0x4 (4)
	float GainDb; // 0x8 (4)
	char bEnabled : 0; // 0xC (1)
};

// ScriptStruct AudioMixer.SubmixEffectReverbSettings
struct FSubmixEffectReverbSettings {
	float Density; // 0x0 (4)
	float Diffusion; // 0x4 (4)
	float Gain; // 0x8 (4)
	float GainHF; // 0xC (4)
	float DecayTime; // 0x10 (4)
	float DecayHFRatio; // 0x14 (4)
	float ReflectionsGain; // 0x18 (4)
	float ReflectionsDelay; // 0x1C (4)
	float LateGain; // 0x20 (4)
	float LateDelay; // 0x24 (4)
	float AirAbsorptionGainHF; // 0x28 (4)
	float WetLevel; // 0x2C (4)
	float DryLevel; // 0x30 (4)
};

// ScriptStruct AudioMixer.SubmixEffectReverbFastSettings
struct FSubmixEffectReverbFastSettings {
	char bBypass : 0; // 0x0 (1)
	float Density; // 0x4 (4)
	float Diffusion; // 0x8 (4)
	float Gain; // 0xC (4)
	float GainHF; // 0x10 (4)
	float DecayTime; // 0x14 (4)
	float DecayHFRatio; // 0x18 (4)
	float ReflectionsGain; // 0x1C (4)
	float ReflectionsDelay; // 0x20 (4)
	float LateGain; // 0x24 (4)
	float LateDelay; // 0x28 (4)
	float AirAbsorptionGainHF; // 0x2C (4)
	float WetLevel; // 0x30 (4)
	float DryLevel; // 0x34 (4)
};

// Function AudioMixer.SynthComponent.Stop
inline void USynthComponent::Stop() {
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.Stop");

	struct Stop_Params {
		
	}; Stop_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AudioMixer.SynthComponent.Start
inline void USynthComponent::Start() {
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.Start");

	struct Start_Params {
		
	}; Start_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AudioMixer.SynthComponent.SetVolumeMultiplier
inline void USynthComponent::SetVolumeMultiplier(float VolumeMultiplier) {
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.SetVolumeMultiplier");

	struct SetVolumeMultiplier_Params {
		float VolumeMultiplier;
	}; SetVolumeMultiplier_Params Params;

	Params.VolumeMultiplier = VolumeMultiplier;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AudioMixer.SynthComponent.SetSubmixSend
inline void USynthComponent::SetSubmixSend(struct Unknown Submix, float SendLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.SetSubmixSend");

	struct SetSubmixSend_Params {
		struct Unknown Submix;
		float SendLevel;
	}; SetSubmixSend_Params Params;

	Params.Submix = Submix;
	Params.SendLevel = SendLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AudioMixer.SynthComponent.IsPlaying
inline char USynthComponent::IsPlaying() {
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.IsPlaying");

	struct IsPlaying_Params {
		
		char ReturnValue;

	}; IsPlaying_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
inline void USubmixEffectDynamicsProcessorPreset::SetSettings(struct Unknown& Settings) {
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings");

	struct SetSettings_Params {
		struct Unknown& Settings;
	}; SetSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Settings = Params.Settings;

}

// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
inline void USubmixEffectDynamicsProcessorPreset::SetExternalSubmix(struct Unknown Submix) {
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix");

	struct SetExternalSubmix_Params {
		struct Unknown Submix;
	}; SetExternalSubmix_Params Params;

	Params.Submix = Submix;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
inline void USubmixEffectSubmixEQPreset::SetSettings(struct Unknown& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings");

	struct SetSettings_Params {
		struct Unknown& InSettings;
	}; SetSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
inline void USubmixEffectReverbPreset::SetSettingsWithReverbEffect(struct Unknown InReverbEffect, float WetLevel, float DryLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect");

	struct SetSettingsWithReverbEffect_Params {
		struct Unknown InReverbEffect;
		float WetLevel;
		float DryLevel;
	}; SetSettingsWithReverbEffect_Params Params;

	Params.InReverbEffect = InReverbEffect;
	Params.WetLevel = WetLevel;
	Params.DryLevel = DryLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AudioMixer.SubmixEffectReverbPreset.SetSettings
inline void USubmixEffectReverbPreset::SetSettings(struct Unknown& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbPreset.SetSettings");

	struct SetSettings_Params {
		struct Unknown& InSettings;
	}; SetSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect
inline void USubmixEffectReverbFastPreset::SetSettingsWithReverbEffect(struct Unknown InReverbEffect, float WetLevel, float DryLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect");

	struct SetSettingsWithReverbEffect_Params {
		struct Unknown InReverbEffect;
		float WetLevel;
		float DryLevel;
	}; SetSettingsWithReverbEffect_Params Params;

	Params.InReverbEffect = InReverbEffect;
	Params.WetLevel = WetLevel;
	Params.DryLevel = DryLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings
inline void USubmixEffectReverbFastPreset::SetSettings(struct Unknown& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings");

	struct SetSettings_Params {
		struct Unknown& InSettings;
	}; SetSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

