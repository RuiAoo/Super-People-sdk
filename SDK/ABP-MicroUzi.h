// AnimBlueprintGeneratedClass ABP-MicroUzi.ABP-MicroUzi_C
class UABP-MicroUzi_C : public UBravoHotelAnimInstanceWeapon {

public:

	struct Unknown UberGraphFrame; // 0x330 (8)
	struct Unknown AnimGraphNode_Root; // 0x338 (48)
	struct Unknown AnimGraphNode_BlendListByEnum; // 0x368 (176)
	struct Unknown AnimGraphNode_SequencePlayer_3; // 0x418 (120)
	struct Unknown AnimGraphNode_SequencePlayer_2; // 0x490 (120)
	struct Unknown AnimGraphNode_SequencePlayer; // 0x508 (120)
	struct Unknown AnimGraphNode_Slot_4; // 0x580 (72)
	struct Unknown AnimGraphNode_TwoWayBlend; // 0x5C8 (200)
	struct Unknown AnimGraphNode_LayeredBoneBlend; // 0x690 (192)
	struct Unknown AnimGraphNode_LocalRefPose_3; // 0x750 (24)
	struct Unknown AnimGraphNode_Slot_3; // 0x768 (72)
	struct Unknown AnimGraphNode_LocalRefPose_2; // 0x7B0 (24)
	struct Unknown AnimGraphNode_Slot_2; // 0x7C8 (72)
	struct Unknown AnimGraphNode_Slot; // 0x810 (72)
	struct Unknown AnimGraphNode_LocalRefPose; // 0x858 (24)
	struct Unknown AnimGraphNode_BlendListByBool; // 0x870 (160)

	void AnimGraph(struct Unknown& AnimGraph); // Function ABP-MicroUzi.ABP-MicroUzi_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_ABP-MicroUzi(int32_t EntryPoint); // Function ABP-MicroUzi.ABP-MicroUzi_C.ExecuteUbergraph_ABP-MicroUzi(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function ABP-MicroUzi.ABP-MicroUzi_C.AnimGraph
inline void UABP-MicroUzi_C::AnimGraph(struct Unknown& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-MicroUzi.ABP-MicroUzi_C.AnimGraph");

	struct AnimGraph_Params {
		struct Unknown& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-MicroUzi.ABP-MicroUzi_C.ExecuteUbergraph_ABP-MicroUzi
inline void UABP-MicroUzi_C::ExecuteUbergraph_ABP-MicroUzi(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-MicroUzi.ABP-MicroUzi_C.ExecuteUbergraph_ABP-MicroUzi");

	struct ExecuteUbergraph_ABP-MicroUzi_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-MicroUzi_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}
