// BlueprintGeneratedClass BP-ProjectileGrenade_Bomb_Perk.BP-ProjectileGrenade_Bomb_Perk_C
class ABP-ProjectileGrenade_Bomb_Perk_C : public ABravoHotelProjectileGrenadeBomb {

public:

	struct Unknown UberGraphFrame; // 0x678 (8)
	struct Unknown Ak; // 0x680 (8)

	void BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct Unknown HitComponent, struct Unknown OtherActor, struct Unknown OtherComp, struct Unknown NormalImpulse, struct Unknown& Hit); // Function BP-ProjectileGrenade_Bomb_Perk.BP-ProjectileGrenade_Bomb_Perk_C.BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_BP-ProjectileGrenade_Bomb_Perk(int32_t EntryPoint); // Function BP-ProjectileGrenade_Bomb_Perk.BP-ProjectileGrenade_Bomb_Perk_C.ExecuteUbergraph_BP-ProjectileGrenade_Bomb_Perk(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function BP-ProjectileGrenade_Bomb_Perk.BP-ProjectileGrenade_Bomb_Perk_C.BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
inline void ABP-ProjectileGrenade_Bomb_Perk_C::BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct Unknown HitComponent, struct Unknown OtherActor, struct Unknown OtherComp, struct Unknown NormalImpulse, struct Unknown& Hit) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-ProjectileGrenade_Bomb_Perk.BP-ProjectileGrenade_Bomb_Perk_C.BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	struct BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params {
		struct Unknown HitComponent;
		struct Unknown OtherActor;
		struct Unknown OtherComp;
		struct Unknown NormalImpulse;
		struct Unknown& Hit;
	}; BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params Params;

	Params.HitComponent = HitComponent;
	Params.OtherActor = OtherActor;
	Params.OtherComp = OtherComp;
	Params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Hit = Params.Hit;

}

// Function BP-ProjectileGrenade_Bomb_Perk.BP-ProjectileGrenade_Bomb_Perk_C.ExecuteUbergraph_BP-ProjectileGrenade_Bomb_Perk
inline void ABP-ProjectileGrenade_Bomb_Perk_C::ExecuteUbergraph_BP-ProjectileGrenade_Bomb_Perk(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-ProjectileGrenade_Bomb_Perk.BP-ProjectileGrenade_Bomb_Perk_C.ExecuteUbergraph_BP-ProjectileGrenade_Bomb_Perk");

	struct ExecuteUbergraph_BP-ProjectileGrenade_Bomb_Perk_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-ProjectileGrenade_Bomb_Perk_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

