// BlueprintGeneratedClass BP-DestructibleComponent.BP-DestructibleComponent_C
class UBP-DestructibleComponent_C : public UBravoHotelDestructibleComponent {

public:

	struct Unknown UberGraphFrame; // 0x620 (8)
	float DestructibleMeshLifeTime; // 0x628 (4)
	char IsLegacyMethodEnable : 0; // 0x62C (1)
	float StaticMeshLifeSpanTime; // 0x630 (4)
	char GameStarted : 0; // 0x634 (1)
	float DefaultHpCache; // 0x638 (4)
	char IsDestructedBeforeGameStart : 0; // 0x63C (1)
	char Is : 0; // 0x63D (1)
	struct FMulticastInlineDelegate DestructEventDispatcher; // 0x640 (16)
	float LinearDamping; // 0x650 (4)
	float MassInKg; // 0x654 (4)
	float AngularDamping; // 0x658 (4)
	char ClassType; // 0x65C (1)

	void OnRep_IsDestructedBeforeGameStart(); // Function BP-DestructibleComponent.BP-DestructibleComponent_C.OnRep_IsDestructedBeforeGameStart(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Destruct(float Damage, struct Unknown HitLocation, struct Unknown ImpactDirection, struct Unknown& DM); // Function BP-DestructibleComponent.BP-DestructibleComponent_C.Destruct(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveBeginPlay(); // Function BP-DestructibleComponent.BP-DestructibleComponent_C.ReceiveBeginPlay(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void K2_OnDestructComponent(float DamageAmount, struct Unknown& HitInfo, struct Unknown EventInstigator, struct Unknown DamageCauser, struct Unknown& ShotInfo); // Function BP-DestructibleComponent.BP-DestructibleComponent_C.K2_OnDestructComponent(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetLifeSpan(float LifeSpan); // Function BP-DestructibleComponent.BP-DestructibleComponent_C.SetLifeSpan(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetCollisionEnableWithDelay(float DelayTime); // Function BP-DestructibleComponent.BP-DestructibleComponent_C.SetCollisionEnableWithDelay(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_BP-DestructibleComponent(int32_t EntryPoint); // Function BP-DestructibleComponent.BP-DestructibleComponent_C.ExecuteUbergraph_BP-DestructibleComponent(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void DestructEventDispatcher__DelegateSignature(); // Function BP-DestructibleComponent.BP-DestructibleComponent_C.DestructEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function BP-DestructibleComponent.BP-DestructibleComponent_C.OnRep_IsDestructedBeforeGameStart
inline void UBP-DestructibleComponent_C::OnRep_IsDestructedBeforeGameStart() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DestructibleComponent.BP-DestructibleComponent_C.OnRep_IsDestructedBeforeGameStart");

	struct OnRep_IsDestructedBeforeGameStart_Params {
		
	}; OnRep_IsDestructedBeforeGameStart_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DestructibleComponent.BP-DestructibleComponent_C.Destruct
inline void UBP-DestructibleComponent_C::Destruct(float Damage, struct Unknown HitLocation, struct Unknown ImpactDirection, struct Unknown& DM) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DestructibleComponent.BP-DestructibleComponent_C.Destruct");

	struct Destruct_Params {
		float Damage;
		struct Unknown HitLocation;
		struct Unknown ImpactDirection;
		struct Unknown& DM;
	}; Destruct_Params Params;

	Params.Damage = Damage;
	Params.HitLocation = HitLocation;
	Params.ImpactDirection = ImpactDirection;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DM = Params.DM;

}

// Function BP-DestructibleComponent.BP-DestructibleComponent_C.ReceiveBeginPlay
inline void UBP-DestructibleComponent_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DestructibleComponent.BP-DestructibleComponent_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DestructibleComponent.BP-DestructibleComponent_C.K2_OnDestructComponent
inline void UBP-DestructibleComponent_C::K2_OnDestructComponent(float DamageAmount, struct Unknown& HitInfo, struct Unknown EventInstigator, struct Unknown DamageCauser, struct Unknown& ShotInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DestructibleComponent.BP-DestructibleComponent_C.K2_OnDestructComponent");

	struct K2_OnDestructComponent_Params {
		float DamageAmount;
		struct Unknown& HitInfo;
		struct Unknown EventInstigator;
		struct Unknown DamageCauser;
		struct Unknown& ShotInfo;
	}; K2_OnDestructComponent_Params Params;

	Params.DamageAmount = DamageAmount;
	Params.EventInstigator = EventInstigator;
	Params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	HitInfo = Params.HitInfo;
	ShotInfo = Params.ShotInfo;

}

// Function BP-DestructibleComponent.BP-DestructibleComponent_C.SetLifeSpan
inline void UBP-DestructibleComponent_C::SetLifeSpan(float LifeSpan) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DestructibleComponent.BP-DestructibleComponent_C.SetLifeSpan");

	struct SetLifeSpan_Params {
		float LifeSpan;
	}; SetLifeSpan_Params Params;

	Params.LifeSpan = LifeSpan;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DestructibleComponent.BP-DestructibleComponent_C.SetCollisionEnableWithDelay
inline void UBP-DestructibleComponent_C::SetCollisionEnableWithDelay(float DelayTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DestructibleComponent.BP-DestructibleComponent_C.SetCollisionEnableWithDelay");

	struct SetCollisionEnableWithDelay_Params {
		float DelayTime;
	}; SetCollisionEnableWithDelay_Params Params;

	Params.DelayTime = DelayTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DestructibleComponent.BP-DestructibleComponent_C.ExecuteUbergraph_BP-DestructibleComponent
inline void UBP-DestructibleComponent_C::ExecuteUbergraph_BP-DestructibleComponent(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DestructibleComponent.BP-DestructibleComponent_C.ExecuteUbergraph_BP-DestructibleComponent");

	struct ExecuteUbergraph_BP-DestructibleComponent_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-DestructibleComponent_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DestructibleComponent.BP-DestructibleComponent_C.DestructEventDispatcher__DelegateSignature
inline void UBP-DestructibleComponent_C::DestructEventDispatcher__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DestructibleComponent.BP-DestructibleComponent_C.DestructEventDispatcher__DelegateSignature");

	struct DestructEventDispatcher__DelegateSignature_Params {
		
	}; DestructEventDispatcher__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

