// BlueprintGeneratedClass BP-Projectile_Base.BP-Projectile_Base_C
class ABP-Projectile_Base_C : public ABravoHotelProjectileBullet {

public:

	struct Unknown UberGraphFrame; // 0x520 (8)
	struct Unknown ParticleSystem; // 0x528 (8)

	void ReceiveBeginPlay(); // Function BP-Projectile_Base.BP-Projectile_Base_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_BP-Projectile_Base(int32_t EntryPoint); // Function BP-Projectile_Base.BP-Projectile_Base_C.ExecuteUbergraph_BP-Projectile_Base(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function BP-Projectile_Base.BP-Projectile_Base_C.ReceiveBeginPlay
inline void ABP-Projectile_Base_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Projectile_Base.BP-Projectile_Base_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Projectile_Base.BP-Projectile_Base_C.ExecuteUbergraph_BP-Projectile_Base
inline void ABP-Projectile_Base_C::ExecuteUbergraph_BP-Projectile_Base(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Projectile_Base.BP-Projectile_Base_C.ExecuteUbergraph_BP-Projectile_Base");

	struct ExecuteUbergraph_BP-Projectile_Base_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-Projectile_Base_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

