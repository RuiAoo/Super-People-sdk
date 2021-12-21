// Enum OodleNetworkHandlerComponent.EOodleEnableMode
enum class EOodleEnableMode : uint8 {
	EOodleEnableMode = 0,
	EOodleEnableMode = 1,
	EOodleEnableMode = 2
};

// Class OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet
struct UOodleNetworkTrainerCommandlet : UCommandlet {
	char bCompressionTest; //  0x80 Size(1)
	int32_t HashTableSize; //  0x84 Size(4)
	int32_t DictionarySize; //  0x88 Size(4)
	int32_t DictionaryTrials; //  0x8c Size(4)
	int32_t TrialRandomness; //  0x90 Size(4)
	int32_t TrialGenerations; //  0x94 Size(4)
	char bNoTrials; //  0x98 Size(1)
};
