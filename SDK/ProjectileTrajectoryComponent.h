// BlueprintGeneratedClass ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C
class UProjectileTrajectoryComponent_C : public UActorComponent {

public:

	struct Unknown UberGraphFrame; // 0xB0 (8)
	struct TArray<Unknown> BeamsArray; // 0xB8 (16)
	struct Unknown Decal; // 0xC8 (8)
	struct Unknown StartLocation; // 0xD0 (12)
	struct Unknown InitialVelocity; // 0xDC (12)
	float PathLifeTime; // 0xE8 (4)
	float TimeInterval; // 0xEC (4)
	char DrawingType; // 0xF0 (1)
	struct Unknown DesiredStartLocation; // 0xF4 (12)
	struct Unknown InitialLocalVelocity; // 0x100 (12)
	struct Unknown BeamParticle; // 0x110 (8)
	struct Unknown DebugColor; // 0x118 (16)
	float DebugThickness; // 0x128 (4)
	struct Unknown ParticleColor; // 0x12C (16)
	float ParticleColorMultipler; // 0x13C (4)
	struct Unknown DecalMaterial; // 0x140 (8)
	struct Unknown DecalColor; // 0x148 (16)
	struct Unknown DecalScale; // 0x158 (12)
	char ConstantScale : 0; // 0x164 (1)
	struct Unknown ResizerTimer; // 0x168 (8)
	struct Unknown DecalScaleMin; // 0x170 (12)
	struct Unknown DecalScaleMax; // 0x17C (12)
	float ScaleTime; // 0x188 (4)
	char ScaleStart : 0; // 0x18C (1)
	struct Unknown Gravity; // 0x190 (12)
	float InitXAxisValue; // 0x19C (4)
	char CreateBeam : 0; // 0x1A0 (1)
	int32_t HitBeamIndex; // 0x1A4 (4)
	struct Unknown SplineStaticMesh; // 0x1A8 (8)
	struct TArray<Unknown> SplineMeshArray; // 0x1B0 (16)
	struct Unknown S; // 0x1C0 (12)
	struct Unknown S; // 0x1D0 (8)
	char Hit : 0; // 0x1D8 (1)
	char bForceStop : 0; // 0x1D9 (1)
	char FPSMode : 0; // 0x1DA (1)

	void InterpProjectileTrajectoryJumpState(char Jump, struct Unknown Location, struct Unknown Rotation, struct Unknown& StartLocation, struct Unknown& Velocity); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.InterpProjectileTrajectoryJumpState(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResizeDecalFunc(); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ResizeDecalFunc(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetParticleColorDecalColor(); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.SetParticleColorDecalColor(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CalculateStartLocationAndLocalVelocity(struct Unknown& StartLocaton, struct Unknown& ); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.CalculateStartLocationAndLocalVelocity(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ClearBeams(); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ClearBeams(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddNewBeam(struct Unknown NewSourcePoint, struct Unknown NewTargetPoint, int32_t Index); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.AddNewBeam(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void VisualizeSegment(char Selection, struct Unknown Point1, struct Unknown Point2, int32_t Index); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.VisualizeSegment(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetSegmentAtTime(struct Unknown StartLocation, struct Unknown InitialVelocity, struct Unknown Gravity, float Time1, float Time2, struct Unknown& Point1, struct Unknown& Point2); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.GetSegmentAtTime(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DrawProjectileTrajectory(struct Unknown DesiredStartLocation, struct Unknown Gravity, struct Unknown InitialLocalVelocity, float PathLifeTime, float TimeInterval); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.DrawProjectileTrajectory(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BreakDrawingLoop(); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.BreakDrawingLoop(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveTick(float DeltaSeconds); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StartDraw(struct Unknown DesiredStartLocation, struct Unknown Gravity, struct Unknown InitialLocalVelocity, float PathLifeTime, float TimeInterval, char DrawingType); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.StartDraw(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StopDraw(); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.StopDraw(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SpawnActorFromClass(struct Unknown* Class, struct Unknown SpawnTransform, struct Unknown ProjectileVelocity, struct Unknown Sound, struct Unknown NewScale3D, enum class Unknow CollisionHandlingOv, struct Unknown Instigator); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.SpawnActorFromClass(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ForceStopDraw(); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ForceStopDraw(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetForceStopDraw(); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ResetForceStopDraw(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveBeginPlay(); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ReceiveBeginPlay(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsFPS(char bIsThirdPerson); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.IsFPS(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_ProjectileTrajectoryComponent(int32_t EntryPoint); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ExecuteUbergraph_ProjectileTrajectoryComponent(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};
