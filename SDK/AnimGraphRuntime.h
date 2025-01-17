// Enum AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8_t {
	Inner = 0,
	Outer = 1,
	ESphericalLimitType_MAX = 2,
};

// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class AnimPhysSimSpaceType : uint8_t {
	Component = 0,
	Actor = 1,
	World = 2,
	RootRelative = 3,
	BoneRelative = 4,
	AnimPhysSimSpaceType_MAX = 5,
};

// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class AnimPhysLinearConstraintType : uint8_t {
	Free = 0,
	Limited = 1,
	AnimPhysLinearConstraintType_MAX = 2,
};

// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class AnimPhysAngularConstraintType : uint8_t {
	Angular = 0,
	Cone = 1,
	AnimPhysAngularConstraintType_MAX = 2,
};

// Enum AnimGraphRuntime.EBlendListTransitionType
enum class EBlendListTransitionType : uint8_t {
	StandardBlend = 0,
	Inertialization = 1,
	EBlendListTransitionType_MAX = 2,
};

// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8_t {
	Bone = 0,
	MorphTarget = 1,
	MaterialParameter = 2,
	EDrivenDestinationMode_MAX = 3,
};

// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8_t {
	AddToInput = 0,
	ReplaceComponent = 1,
	AddToRefPose = 2,
	EDrivenBoneModificationMode_MAX = 3,
};

// Enum AnimGraphRuntime.EConstraintOffsetOption
enum class EConstraintOffsetOption : uint8_t {
	None = 0,
	Offset_RefPose = 1,
	EConstraintOffsetOption_MAX = 2,
};

// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class CopyBoneDeltaMode : uint8_t {
	Accumulate = 0,
	Copy = 1,
	CopyBoneDeltaMode_MAX = 2,
};

// Enum AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8_t {
	Linear = 0,
	Cubic = 1,
	Sinusoidal = 2,
	EaseInOutExponent2 = 3,
	EaseInOutExponent3 = 4,
	EaseInOutExponent4 = 5,
	EaseInOutExponent5 = 6,
	MAX = 7,
};

// Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8_t {
	BMM_Ignore = 0,
	BMM_Replace = 1,
	BMM_Additive = 2,
	BMM_MAX = 3,
};

// Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : uint8_t {
	Add = 0,
	Scale = 1,
	Blend = 2,
	WeightedMovingAverage = 3,
	RemapCurve = 4,
	EModifyCurveApplyMode_MAX = 5,
};

// Enum AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput : uint8_t {
	DrivePoses = 0,
	DriveCurves = 1,
	EPoseDriverOutput_MAX = 2,
};

// Enum AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource : uint8_t {
	Rotation = 0,
	Translation = 1,
	EPoseDriverSource_MAX = 2,
};

// Enum AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8_t {
	SwingAndTwist = 0,
	SwingOnly = 1,
	Translation = 2,
	EPoseDriverType_MAX = 3,
};

// Enum AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : uint8_t {
	NamedSnapshot = 0,
	SnapshotPin = 1,
	ESnapshotSourceMode_MAX = 2,
};

// Enum AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : uint8_t {
	EIT_LocalSpace = 0,
	EIT_Additive = 1,
	EIT_MAX = 2,
};

// Enum AnimGraphRuntime.ESimulationSpace
enum class ESimulationSpace : uint8_t {
	ComponentSpace = 0,
	WorldSpace = 1,
	BaseBoneSpace = 2,
	ESimulationSpace_MAX = 3,
};

// Enum AnimGraphRuntime.EScaleChainInitialLength
enum class EScaleChainInitialLength : uint8_t {
	FixedDefaultLengthValue = 0,
	Distance = 1,
	ChainLength = 2,
	EScaleChainInitialLength_MAX = 3,
};

// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8_t {
	NoReset = 0,
	StartPosition = 1,
	ExplicitTime = 2,
	ESequenceEvalReinit_MAX = 3,
};

// Enum AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	ESplineBoneAxis_MAX = 4,
};

// Enum AnimGraphRuntime.ERotationComponent
enum class ERotationComponent : uint8_t {
	EulerX = 0,
	EulerY = 1,
	EulerZ = 2,
	QuaternionAngle = 3,
	SwingAngle = 4,
	TwistAngle = 5,
	ERotationComponent_MAX = 6,
};

// Enum AnimGraphRuntime.EEasingFuncType
enum class EEasingFuncType : uint8_t {
	Linear = 0,
	Sinusoidal = 1,
	Cubic = 2,
	QuadraticInOut = 3,
	CubicInOut = 4,
	HermiteCubic = 5,
	QuarticInOut = 6,
	QuinticInOut = 7,
	CircularIn = 8,
	CircularOut = 9,
	CircularInOut = 10,
	ExpIn = 11,
	ExpOut = 12,
	ExpInOut = 13,
	CustomCurve = 14,
	EEasingFuncType_MAX = 15,
};

// Enum AnimGraphRuntime.ERBFNormalizeMethod
enum class ERBFNormalizeMethod : uint8_t {
	OnlyNormalizeAboveOne = 0,
	AlwaysNormalize = 1,
	NormalizeWithinMedian = 2,
	NoNormalization = 3,
	ERBFNormalizeMethod_MAX = 4,
};

// Enum AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : uint8_t {
	Euclidean = 0,
	Quaternion = 1,
	SwingAngle = 2,
	TwistAngle = 3,
	DefaultMethod = 4,
	ERBFDistanceMethod_MAX = 5,
};

// Enum AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType : uint8_t {
	Gaussian = 0,
	Exponential = 1,
	Linear = 2,
	Cubic = 3,
	Quintic = 4,
	DefaultFunction = 5,
	ERBFFunctionType_MAX = 6,
};

// Enum AnimGraphRuntime.ERBFSolverType
enum class ERBFSolverType : uint8_t {
	Additive = 0,
	Interpolative = 1,
	ERBFSolverType_MAX = 2,
};

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
class UAnimNotify_PlayMontageNotify : public UAnimNotify {

public:

	struct FName NotifyName; // 0x38 (8)
};

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState {

public:

	struct FName NotifyName; // 0x30 (8)
};

// Class AnimGraphRuntime.PlayMontageCallbackProxy
class UPlayMontageCallbackProxy : public Object {

public:

	struct FMulticastInlineDelegate OnCompleted; // 0x28 (16)
	struct FMulticastInlineDelegate OnBlendOut; // 0x38 (16)
	struct FMulticastInlineDelegate OnInterrupted; // 0x48 (16)
	struct FMulticastInlineDelegate OnNotifyBegin; // 0x58 (16)
	struct FMulticastInlineDelegate OnNotifyEnd; // 0x68 (16)

	void OnNotifyEndReceived(struct FName NotifyName, struct Unknown& BranchingPointNotifyPayload); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived(Final|Native|Protected|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x39F78C0>
	void OnNotifyBeginReceived(struct FName NotifyName, struct Unknown& BranchingPointNotifyPayload); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived(Final|Native|Protected|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x39F77E0>
	void OnMontageEnded(struct Unknown Montage, char bInterrupted); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded(Final|Native|Protected) // <BravoHotelClient-Win64-Shipping.protected.exe+0x39F7710>
	void OnMontageBlendingOut(struct Unknown Montage, char bInterrupted); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut(Final|Native|Protected) // <BravoHotelClient-Win64-Shipping.protected.exe+0x39F7640>
	struct Unknown CreateProxyObjectForPlayMontage(struct Unknown InSkeletalMeshComponent, struct Unknown MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection); // Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x39F6040>
};

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
struct FAnimNode_SkeletalControlBase : FAnimNode_Base {
	struct Unknown ComponentPose; // 0x10 (16)
	int32_t LODThreshold; // 0x20 (4)
	float ActualAlpha; // 0x24 (4)
	enum class Unknow AlphaInputType; // 0x28 (1)
	char bAlphaBoolEnabled : 0; // 0x29 (1)
	float ALPHA; // 0x2C (4)
	struct Unknown AlphaScaleBias; // 0x30 (8)
	struct Unknown AlphaBoolBlend; // 0x38 (72)
	struct FName AlphaCurveName; // 0x80 (8)
	struct Unknown AlphaScaleBiasClamp; // 0x88 (48)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase {
	float X; // 0x30 (4)
	float Y; // 0x34 (4)
	float Z; // 0x38 (4)
	float PlayRate; // 0x3C (4)
	char bLoop : 0; // 0x40 (1)
	char bResetPlayTimeWhenBlendSpaceChanges : 0; // 0x41 (1)
	float StartPosition; // 0x44 (4)
	struct Unknown BlendSpace; // 0x48 (8)
	struct Unknown PreviousBlendSpace; // 0xD8 (8)
};

// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer {
	struct Unknown BasePose; // 0x140 (16)
	int32_t LODThreshold; // 0x150 (4)
	struct FName SourceSocketName; // 0x154 (8)
	struct FName PivotSocketName; // 0x15C (8)
	struct Unknown LookAtLocation; // 0x164 (12)
	struct Unknown SocketAxis; // 0x170 (12)
	float ALPHA; // 0x17C (4)
};

// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase {
	float LinearDampingOverride; // 0xC8 (4)
	float AngularDampingOverride; // 0xCC (4)
	struct Unknown RelativeSpaceBone; // 0x130 (16)
	struct Unknown BoundBone; // 0x140 (16)
	struct Unknown ChainEnd; // 0x150 (16)
	struct Unknown BoxExtents; // 0x160 (12)
	struct Unknown LocalJointOffset; // 0x16C (12)
	float GravityScale; // 0x178 (4)
	struct Unknown GravityOverride; // 0x17C (12)
	float LinearSpringConstant; // 0x188 (4)
	float AngularSpringConstant; // 0x18C (4)
	float WindScale; // 0x190 (4)
	struct Unknown ComponentLinearAccScale; // 0x194 (12)
	struct Unknown ComponentLinearVelScale; // 0x1A0 (12)
	struct Unknown ComponentAppliedLinearAccClamp; // 0x1AC (12)
	float AngularBiasOverride; // 0x1B8 (4)
	int32_t NumSolverIterationsPreUpdate; // 0x1BC (4)
	int32_t NumSolverIterationsPostUpdate; // 0x1C0 (4)
	struct Unknown ConstraintSetup; // 0x1C4 (72)
	struct TArray<Unknown> SphericalLimits; // 0x210 (16)
	float SphereCollisionRadius; // 0x220 (4)
	struct Unknown ExternalForce; // 0x224 (12)
	struct TArray<Unknown> PlanarLimits; // 0x230 (16)
	enum class Unknow CollisionType; // 0x240 (1)
	enum class Unknow SimulationSpace; // 0x241 (1)
	char bUseSphericalLimits : 0; // 0x244 (1)
	char bUsePlanarLimit : 0; // 0x244 (1)
	char bDoUpdate : 0; // 0x244 (1)
	char bDoEval : 0; // 0x244 (1)
	char bOverrideLinearDamping : 0; // 0x244 (1)
	char bOverrideAngularBias : 0; // 0x244 (1)
	char bOverrideAngularDamping : 0; // 0x244 (1)
	char bEnableWind : 0; // 0x244 (1)
	char bUseGravityOverride : 0; // 0x245 (1)
	char bLinearSpring : 0; // 0x245 (1)
	char bAngularSpring : 0; // 0x245 (1)
	char bChain : 0; // 0x245 (1)
	struct Unknown RetargetingSettings; // 0x250 (304)
};

// ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
struct FRotationRetargetingInfo {
	char bEnabled : 0; // 0x0 (1)
	struct Unknown Source; // 0x10 (48)
	struct Unknown Target; // 0x40 (48)
	enum class Unknow RotationComponent; // 0x70 (1)
	struct Unknown TwistAxis; // 0x74 (12)
	char bUseAbsoluteAngle : 0; // 0x80 (1)
	float SourceMinimum; // 0x84 (4)
	float SourceMaximum; // 0x88 (4)
	float TargetMinimum; // 0x8C (4)
	float TargetMaximum; // 0x90 (4)
	enum class Unknow EasingType; // 0x94 (1)
	struct Unknown CustomCurve; // 0x98 (136)
	char bFlipEasing : 0; // 0x120 (1)
	float EasingWeight; // 0x124 (4)
	char bClamp : 0; // 0x128 (1)
};

// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
struct FAnimPhysPlanarLimit {
	struct Unknown DrivingBone; // 0x0 (16)
	struct Unknown PlaneTransform; // 0x10 (48)
};

// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
struct FAnimPhysSphericalLimit {
	struct Unknown DrivingBone; // 0x0 (16)
	struct Unknown SphereLocalOffset; // 0x10 (12)
	float LimitRadius; // 0x1C (4)
	enum class Unknow LimitType; // 0x20 (1)
};

// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
struct FAnimPhysConstraintSetup {
	enum class Unknow LinearXLimitType; // 0x0 (1)
	enum class Unknow LinearYLimitType; // 0x1 (1)
	enum class Unknow LinearZLimitType; // 0x2 (1)
	struct Unknown LinearAxesMin; // 0x4 (12)
	struct Unknown LinearAxesMax; // 0x10 (12)
	enum class Unknow AngularConstraintType; // 0x1C (1)
	enum class Unknow TwistAxis; // 0x1D (1)
	enum class Unknow AngularTargetAxis; // 0x1E (1)
	float ConeAngle; // 0x20 (4)
	struct Unknown AngularLimitsMin; // 0x24 (12)
	struct Unknown AngularLimitsMax; // 0x30 (12)
	struct Unknown AngularTarget; // 0x3C (12)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
struct FAnimNode_ApplyAdditive : FAnimNode_Base {
	struct Unknown Base; // 0x10 (16)
	struct Unknown Additive; // 0x20 (16)
	float ALPHA; // 0x30 (4)
	struct Unknown AlphaScaleBias; // 0x34 (8)
	int32_t LODThreshold; // 0x3C (4)
	struct Unknown AlphaBoolBlend; // 0x40 (72)
	struct FName AlphaCurveName; // 0x88 (8)
	struct Unknown AlphaScaleBiasClamp; // 0x90 (48)
	enum class Unknow AlphaInputType; // 0xC4 (1)
	char bAlphaBoolEnabled : 0; // 0xC5 (1)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase {
	struct TArray<Unknown> AngularRangeLimits; // 0xC8 (16)
	struct TArray<Unknown> AngularOffsets; // 0xD8 (16)
};

// ScriptStruct AnimGraphRuntime.AngularRangeLimit
struct FAngularRangeLimit {
	struct Unknown LimitMin; // 0x0 (12)
	struct Unknown LimitMax; // 0xC (12)
	struct Unknown Bone; // 0x18 (16)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
struct FAnimNode_BlendBoneByChannel : FAnimNode_Base {
	struct Unknown A; // 0x10 (16)
	struct Unknown B; // 0x20 (16)
	struct TArray<Unknown> BoneDefinitions; // 0x30 (16)
	float ALPHA; // 0x50 (4)
	struct Unknown AlphaScaleBias; // 0x58 (8)
	char TransformsSpace; // 0x60 (1)
};

// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
struct FBlendBoneByChannelEntry {
	struct Unknown SourceBone; // 0x0 (16)
	struct Unknown TargetBone; // 0x10 (16)
	char bBlendTranslation : 0; // 0x20 (1)
	char bBlendRotation : 0; // 0x21 (1)
	char bBlendScale : 0; // 0x22 (1)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
struct FAnimNode_BlendListBase : FAnimNode_Base {
	struct TArray<Unknown> BlendPose; // 0x10 (16)
	struct TArray<Unknown> BlendTime; // 0x20 (16)
	enum class Unknow TransitionType; // 0x30 (1)
	enum class Unknow BlendType; // 0x31 (1)
	char bResetChildOnActivation : 0; // 0x32 (1)
	struct Unknown CustomBlendCurve; // 0x38 (8)
	struct Unknown BlendProfile; // 0x40 (8)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
	char bActiveValue : 0; // 0x98 (1)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
	struct TArray<Unknown> EnumToPoseIndex; // 0x98 (16)
	char ActiveEnumValue; // 0xA8 (1)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
	int32_t ActiveChildIndex; // 0x98 (4)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	float NormalizedTime; // 0xE0 (4)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase {
	struct Unknown SourceBone; // 0xC8 (16)
	struct Unknown DrivingCurve; // 0xD8 (8)
	float Multiplier; // 0xE0 (4)
	float RangeMin; // 0xE4 (4)
	float RangeMax; // 0xE8 (4)
	float RemappedMin; // 0xEC (4)
	float RemappedMax; // 0xF0 (4)
	struct FName ParameterName; // 0xF4 (8)
	struct Unknown TargetBone; // 0xFC (16)
	enum class Unknow DestinationMode; // 0x10C (1)
	enum class Unknow ModificationMode; // 0x10D (1)
	char SourceComponent; // 0x10E (1)
	char bUseRange : 0; // 0x10F (1)
	char bAffectTargetTranslationX : 0; // 0x10F (1)
	char bAffectTargetTranslationY : 0; // 0x10F (1)
	char bAffectTargetTranslationZ : 0; // 0x10F (1)
	char bAffectTargetRotationX : 0; // 0x10F (1)
	char bAffectTargetRotationY : 0; // 0x10F (1)
	char bAffectTargetRotationZ : 0; // 0x10F (1)
	char bAffectTargetScaleX : 0; // 0x10F (1)
	char bAffectTargetScaleY : 0; // 0x110 (1)
	char bAffectTargetScaleZ : 0; // 0x110 (1)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
struct FAnimNode_CCDIK : FAnimNode_SkeletalControlBase {
	struct Unknown EffectorLocation; // 0xC8 (12)
	char EffectorLocationSpace; // 0xD4 (1)
	struct Unknown EffectorTarget; // 0xE0 (96)
	struct Unknown TipBone; // 0x140 (16)
	struct Unknown RootBone; // 0x150 (16)
	float Precision; // 0x160 (4)
	int32_t MaxIterations; // 0x164 (4)
	char bStartFromTail : 0; // 0x168 (1)
	char bEnableRotationLimit : 0; // 0x169 (1)
	struct TArray<Unknown> RotationLimitPerJoints; // 0x170 (16)
};

// ScriptStruct AnimGraphRuntime.BoneSocketTarget
struct FBoneSocketTarget {
	char bUseSocket : 0; // 0x0 (1)
	struct Unknown BoneReference; // 0x4 (16)
	struct Unknown SocketReference; // 0x20 (64)
};

// ScriptStruct AnimGraphRuntime.SocketReference
struct FSocketReference {
	struct FName SocketName; // 0x30 (8)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase {
	struct Unknown BoneToModify; // 0xC8 (16)
	struct TArray<Unknown> ConstraintSetup; // 0xD8 (16)
	struct TArray<Unknown> ConstraintWeights; // 0xE8 (16)
};

// ScriptStruct AnimGraphRuntime.Constraint
struct FConstraint {
	struct Unknown TargetBone; // 0x0 (16)
	enum class Unknow OffsetOption; // 0x10 (1)
	enum class Unknow TransformType; // 0x11 (1)
	struct Unknown PerAxis; // 0x12 (3)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	struct Unknown SourceBone; // 0xC8 (16)
	struct Unknown TargetBone; // 0xD8 (16)
	char bCopyTranslation : 0; // 0xE8 (1)
	char bCopyRotation : 0; // 0xE9 (1)
	char bCopyScale : 0; // 0xEA (1)
	char ControlSpace; // 0xEB (1)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase {
	struct Unknown SourceBone; // 0xC8 (16)
	struct Unknown TargetBone; // 0xD8 (16)
	char bCopyTranslation : 0; // 0xE8 (1)
	char bCopyRotation : 0; // 0xE9 (1)
	char bCopyScale : 0; // 0xEA (1)
	enum class Unknow CopyMode; // 0xEB (1)
	float TranslationMultiplier; // 0xEC (4)
	float RotationMultiplier; // 0xF0 (4)
	float ScaleMultiplier; // 0xF4 (4)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base {
	struct TWeakObjectPtr<struct Unknown> SourceMeshComponent; // 0x10 (8)
	char bUseAttachedParent : 0; // 0x18 (1)
	char bCopyCurves : 0; // 0x19 (1)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
struct FAnimNode_CurveSource : FAnimNode_Base {
	struct Unknown SourcePose; // 0x10 (16)
	struct FName SourceBinding; // 0x20 (8)
	float ALPHA; // 0x28 (4)
	struct TScriptInterface<IUnknown> CurveSource; // 0x30 (16)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase {
	struct Unknown EffectorTransform; // 0xD0 (48)
	struct Unknown EffectorTarget; // 0x100 (96)
	struct Unknown TipBone; // 0x160 (16)
	struct Unknown RootBone; // 0x170 (16)
	float Precision; // 0x180 (4)
	int32_t MaxIterations; // 0x184 (4)
	char EffectorTransformSpace; // 0x188 (1)
	char EffectorRotationSource; // 0x189 (1)
};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	struct Unknown RightHandFK; // 0xC8 (16)
	struct Unknown LeftHandFK; // 0xD8 (16)
	struct Unknown RightHandIK; // 0xE8 (16)
	struct Unknown LeftHandIK; // 0xF8 (16)
	struct TArray<Unknown> IKBonesToMove; // 0x108 (16)
	float HandFKWeight; // 0x118 (4)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
struct FAnimNode_LayeredBoneBlend : FAnimNode_Base {
	struct Unknown BasePose; // 0x10 (16)
	struct TArray<Unknown> BlendPoses; // 0x20 (16)
	struct TArray<Unknown> LayerSetup; // 0x30 (16)
	struct TArray<Unknown> BlendWeights; // 0x40 (16)
	char bMeshSpaceRotationBlend : 0; // 0x50 (1)
	char bMeshSpaceScaleBlend : 0; // 0x51 (1)
	char CurveBlendOption; // 0x52 (1)
	char bBlendRootMotionBasedOnRootBone : 0; // 0x53 (1)
	int32_t LODThreshold; // 0x58 (4)
	struct TArray<Unknown> PerBoneBlendWeights; // 0x60 (16)
	struct Unknown SkeletonGuid; // 0x70 (16)
	struct Unknown VirtualBoneGuid; // 0x80 (16)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase {
	float ReachPrecision; // 0xC8 (4)
	int32_t MaxIterations; // 0xCC (4)
	struct TArray<Unknown> LegsDefinition; // 0xD0 (16)
};

// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
struct FAnimLegIKDefinition {
	struct Unknown IKFootBone; // 0x0 (16)
	struct Unknown FKFootBone; // 0x10 (16)
	int32_t NumBonesInLimb; // 0x20 (4)
	float MinRotationAngle; // 0x24 (4)
	char FootBoneForwardAxis; // 0x28 (1)
	char HingeRotationAxis; // 0x29 (1)
	char bEnableRotationLimit : 0; // 0x2A (1)
	char bEnableKneeTwistCorrection : 0; // 0x2B (1)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase {
	struct Unknown BoneToModify; // 0xC8 (16)
	struct Unknown LookAtTarget; // 0xE0 (96)
	struct Unknown LookAtLocation; // 0x140 (12)
	struct Unknown LookAt_Axis; // 0x14C (16)
	char bUseLookUpAxis : 0; // 0x15C (1)
	char InterpolationType; // 0x15D (1)
	struct Unknown LookUp_Axis; // 0x160 (16)
	float LookAtClamp; // 0x170 (4)
	float InterpolationTime; // 0x174 (4)
	float InterpolationTriggerThreashold; // 0x178 (4)
};

// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base {
	struct Unknown Base; // 0x10 (16)
	struct Unknown Additive; // 0x20 (16)
	char bMeshSpaceAdditive : 0; // 0x30 (1)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase {
	struct Unknown BoneToModify; // 0xC8 (16)
	struct Unknown Translation; // 0xD8 (12)
	struct Unknown Rotation; // 0xE4 (12)
	struct Unknown Scale; // 0xF0 (12)
	char TranslationMode; // 0xFC (1)
	char RotationMode; // 0xFD (1)
	char ScaleMode; // 0xFE (1)
	char TranslationSpace; // 0xFF (1)
	char RotationSpace; // 0x100 (1)
	char ScaleSpace; // 0x101 (1)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
struct FAnimNode_ModifyCurve : FAnimNode_Base {
	struct Unknown SourcePose; // 0x10 (16)
	struct TArray<Unknown> CurveValues; // 0x20 (16)
	struct TArray<Unknown> CurveNames; // 0x30 (16)
	float ALPHA; // 0x50 (4)
	enum class Unknow ApplyMode; // 0x54 (1)
};

// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
struct FAnimNode_MultiWayBlend : FAnimNode_Base {
	struct TArray<Unknown> Poses; // 0x10 (16)
	struct TArray<Unknown> DesiredAlphas; // 0x20 (16)
	struct Unknown AlphaScaleBias; // 0x40 (8)
	char bAdditiveNode : 0; // 0x48 (1)
	char bNormalizeAlpha : 0; // 0x49 (1)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase {
	struct Unknown BoneToObserve; // 0xC8 (16)
	char DisplaySpace; // 0xD8 (1)
	char bRelativeToRefPose : 0; // 0xD9 (1)
	struct Unknown Translation; // 0xDC (12)
	struct Unknown Rotation; // 0xE8 (12)
	struct Unknown Scale; // 0xF4 (12)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase {
	struct Unknown PoseAsset; // 0x30 (8)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler {
	struct Unknown SourcePose; // 0x78 (16)
	enum class Unknow BlendOption; // 0x88 (1)
	struct Unknown CustomCurve; // 0x90 (8)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
struct FAnimNode_PoseByName : FAnimNode_PoseHandler {
	struct FName PoseName; // 0x78 (8)
	float PoseWeight; // 0x80 (4)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
struct FAnimNode_PoseDriver : FAnimNode_PoseHandler {
	struct Unknown SourcePose; // 0x78 (16)
	struct TArray<Unknown> SourceBones; // 0x88 (16)
	struct TArray<Unknown> OnlyDriveBones; // 0x98 (16)
	struct TArray<Unknown> PoseTargets; // 0xA8 (16)
	struct Unknown EvalSpaceBone; // 0xE8 (16)
	struct Unknown RBFParams; // 0xF8 (44)
	enum class Unknow DriveSource; // 0x124 (1)
	enum class Unknow DriveOutput; // 0x125 (1)
	char bOnlyDriveSelectedBones : 0; // 0x126 (1)
};

// ScriptStruct AnimGraphRuntime.RBFParams
struct FRBFParams {
	int32_t TargetDimensions; // 0x0 (4)
	enum class Unknow SolverType; // 0x4 (1)
	float Radius; // 0x8 (4)
	enum class Unknow Function; // 0xC (1)
	enum class Unknow DistanceMethod; // 0xD (1)
	char TwistAxis; // 0xE (1)
	float WeightThreshold; // 0x10 (4)
	enum class Unknow NormalizeMethod; // 0x14 (1)
	struct Unknown MedianReference; // 0x18 (12)
	float MedianMin; // 0x24 (4)
	float MedianMax; // 0x28 (4)
};

// ScriptStruct AnimGraphRuntime.PoseDriverTarget
struct FPoseDriverTarget {
	struct TArray<Unknown> BoneTransforms; // 0x0 (16)
	struct Unknown TargetRotation; // 0x10 (12)
	float TargetScale; // 0x1C (4)
	enum class Unknow DistanceMethod; // 0x20 (1)
	enum class Unknow FunctionType; // 0x21 (1)
	char bApplyCustomCurve : 0; // 0x22 (1)
	struct Unknown CustomCurve; // 0x28 (128)
	struct FName DrivenName; // 0xA8 (8)
	char bIsHidden : 0; // 0xB8 (1)
};

// ScriptStruct AnimGraphRuntime.PoseDriverTransform
struct FPoseDriverTransform {
	struct Unknown TargetTranslation; // 0x0 (12)
	struct Unknown TargetRotation; // 0xC (12)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
struct FAnimNode_PoseSnapshot : FAnimNode_Base {
	struct FName SnapshotName; // 0x10 (8)
	struct Unknown Snapshot; // 0x18 (56)
	enum class Unknow Mode; // 0x50 (1)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
struct FAnimNode_RandomPlayer : FAnimNode_Base {
	struct TArray<Unknown> Entries; // 0x10 (16)
	char bShuffleMode : 0; // 0x70 (1)
};

// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
struct FRandomPlayerSequenceEntry {
	struct Unknown Sequence; // 0x0 (8)
	float ChanceToPlay; // 0x8 (4)
	int32_t MinLoopCount; // 0xC (4)
	int32_t MaxLoopCount; // 0x10 (4)
	float MinPlayRate; // 0x14 (4)
	float MaxPlayRate; // 0x18 (4)
	struct Unknown BlendIn; // 0x20 (48)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
struct FAnimNode_RefPose : FAnimNode_Base {
	char RefPoseType; // 0x10 (1)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase {
	struct Unknown OverridePhysicsAsset; // 0xC8 (8)
	struct Unknown OverrideWorldGravity; // 0x168 (12)
	struct Unknown ExternalForce; // 0x174 (12)
	struct Unknown ComponentLinearAccScale; // 0x180 (12)
	struct Unknown ComponentLinearVelScale; // 0x18C (12)
	struct Unknown ComponentAppliedLinearAccClamp; // 0x198 (12)
	float CachedBoundsScale; // 0x1A4 (4)
	struct Unknown BaseBoneRef; // 0x1A8 (16)
	char OverlapChannel; // 0x1B8 (1)
	enum class Unknow SimulationSpace; // 0x1B9 (1)
	char bForceDisableCollisionBetweenConstraintBodies : 0; // 0x1BA (1)
	char bEnableWorldGeometry : 0; // 0x1BC (1)
	char bOverrideWorldGravity : 0; // 0x1BC (1)
	char bTransferBoneVelocities : 0; // 0x1BC (1)
	char bFreezeIncomingPoseOnStart : 0; // 0x1BC (1)
	char bClampLinearTranslationLimitToRefPose : 0; // 0x1BC (1)
	struct Unknown OverrideSolverIterations; // 0x1C0 (24)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody_Chaos
struct FAnimNode_RigidBody_Chaos : FAnimNode_SkeletalControlBase {
	struct Unknown OverridePhysicsAsset; // 0xC8 (8)
	struct Unknown OverrideWorldGravity; // 0xD0 (12)
	struct Unknown ExternalForce; // 0xDC (12)
	struct Unknown ComponentLinearAccScale; // 0xE8 (12)
	struct Unknown ComponentLinearVelScale; // 0xF4 (12)
	struct Unknown ComponentAppliedLinearAccClamp; // 0x100 (12)
	float CachedBoundsScale; // 0x10C (4)
	struct Unknown BaseBoneRef; // 0x110 (16)
	char OverlapChannel; // 0x120 (1)
	enum class Unknow SimulationSpace; // 0x121 (1)
	char bForceDisableCollisionBetweenConstraintBodies : 0; // 0x122 (1)
	char bEnableWorldGeometry : 0; // 0x123 (1)
	char bOverrideWorldGravity : 0; // 0x123 (1)
	char bTransferBoneVelocities : 0; // 0x123 (1)
	char bFreezeIncomingPoseOnStart : 0; // 0x123 (1)
	char bClampLinearTranslationLimitToRefPose : 0; // 0x123 (1)
	struct Unknown OverrideSolverIterations; // 0x124 (24)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
struct FAnimNode_RotateRootBone : FAnimNode_Base {
	struct Unknown BasePose; // 0x10 (16)
	float Pitch; // 0x20 (4)
	float Yaw; // 0x24 (4)
	struct Unknown PitchScaleBiasClamp; // 0x28 (48)
	struct Unknown YawScaleBiasClamp; // 0x58 (48)
	struct Unknown MeshToComponent; // 0x88 (12)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	struct Unknown TargetBone; // 0xC8 (16)
	struct Unknown SourceBone; // 0xD8 (16)
	float Multiplier; // 0xE8 (4)
	char RotationAxisToRefer; // 0xEC (1)
	char bIsAdditive : 0; // 0xED (1)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer {
	struct Unknown BasePose; // 0xE0 (16)
	int32_t LODThreshold; // 0xF0 (4)
	float ALPHA; // 0xF4 (4)
	struct Unknown AlphaScaleBias; // 0xF8 (8)
	struct Unknown AlphaBoolBlend; // 0x100 (72)
	struct FName AlphaCurveName; // 0x148 (8)
	struct Unknown AlphaScaleBiasClamp; // 0x150 (48)
	enum class Unknow AlphaInputType; // 0x184 (1)
	char bAlphaBoolEnabled : 0; // 0x185 (1)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
struct FAnimNode_ScaleChainLength : FAnimNode_Base {
	struct Unknown InputPose; // 0x10 (16)
	float DefaultChainLength; // 0x20 (4)
	struct Unknown ChainStartBone; // 0x24 (16)
	struct Unknown ChainEndBone; // 0x34 (16)
	struct Unknown TargetLocation; // 0x44 (12)
	float ALPHA; // 0x50 (4)
	struct Unknown AlphaScaleBias; // 0x58 (8)
	enum class Unknow ChainInitialLength; // 0x60 (1)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase {
	struct Unknown Sequence; // 0x30 (8)
	float ExplicitTime; // 0x38 (4)
	char bShouldLoop : 0; // 0x3C (1)
	char bTeleportToExplicitTime : 0; // 0x3D (1)
	char ReinitializationBehavior; // 0x3E (1)
	float StartPosition; // 0x40 (4)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Slot
struct FAnimNode_Slot : FAnimNode_Base {
	struct Unknown Source; // 0x10 (16)
	struct FName SlotName; // 0x20 (8)
	char bAlwaysUpdateSourcePose : 0; // 0x28 (1)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
struct FAnimNode_SplineIK : FAnimNode_SkeletalControlBase {
	struct Unknown StartBone; // 0xC8 (16)
	struct Unknown EndBone; // 0xD8 (16)
	enum class Unknow BoneAxis; // 0xE8 (1)
	char bAutoCalculateSpline : 0; // 0xE9 (1)
	int32_t PointCount; // 0xEC (4)
	struct TArray<Unknown> ControlPoints; // 0xF0 (16)
	float Roll; // 0x100 (4)
	float TwistStart; // 0x104 (4)
	float TwistEnd; // 0x108 (4)
	struct Unknown TwistBlend; // 0x110 (48)
	float Stretch; // 0x140 (4)
	float Offset; // 0x144 (4)
};

// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
struct FSplineIKCachedBoneData {
	struct Unknown Bone; // 0x0 (16)
	int32_t RefSkeletonIndex; // 0x10 (4)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase {
	struct Unknown SpringBone; // 0xC8 (16)
	float MaxDisplacement; // 0xD8 (4)
	float SpringStiffness; // 0xDC (4)
	float SpringDamping; // 0xE0 (4)
	float ErrorResetThresh; // 0xE4 (4)
	char bLimitDisplacement : 0; // 0x124 (1)
	char bTranslateX : 0; // 0x124 (1)
	char bTranslateY : 0; // 0x124 (1)
	char bTranslateZ : 0; // 0x124 (1)
	char bRotateX : 0; // 0x124 (1)
	char bRotateY : 0; // 0x124 (1)
	char bRotateZ : 0; // 0x124 (1)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
struct FAnimNode_Trail : FAnimNode_SkeletalControlBase {
	struct Unknown TrailBone; // 0x100 (16)
	int32_t ChainLength; // 0x110 (4)
	char ChainBoneAxis; // 0x114 (1)
	char bInvertChainBoneAxis : 0; // 0x115 (1)
	char bLimitStretch : 0; // 0x115 (1)
	char bLimitRotation : 0; // 0x115 (1)
	char bUsePlanarLimit : 0; // 0x115 (1)
	char bActorSpaceFakeVel : 0; // 0x115 (1)
	char bReorientParentToChild : 0; // 0x115 (1)
	float MaxDeltaTime; // 0x118 (4)
	float RelaxationSpeedScale; // 0x11C (4)
	struct Unknown TrailRelaxationSpeed; // 0x120 (136)
	struct Unknown RelaxationSpeedScaleInputProcessor; // 0x1A8 (48)
	struct TArray<Unknown> RotationLimits; // 0x1D8 (16)
	struct TArray<Unknown> RotationOffsets; // 0x1E8 (16)
	struct TArray<Unknown> PlanarLimits; // 0x1F8 (16)
	float StretchLimit; // 0x208 (4)
	struct Unknown FakeVelocity; // 0x20C (12)
	struct Unknown BaseJoint; // 0x218 (16)
	float LastBoneRotationAnimAlphaBlend; // 0x228 (4)
};

// ScriptStruct AnimGraphRuntime.RotationLimit
struct FRotationLimit {
	struct Unknown LimitMin; // 0x0 (12)
	struct Unknown LimitMax; // 0xC (12)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase {
	struct Unknown BaseFrame; // 0xC8 (32)
	struct Unknown TwistFrame; // 0xE8 (32)
	struct Unknown TwistPlaneNormalAxis; // 0x108 (16)
	float RangeMax; // 0x118 (4)
	float RemappedMin; // 0x11C (4)
	float RemappedMax; // 0x120 (4)
	struct Unknown Curve; // 0x124 (12)
};

// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
struct FReferenceBoneFrame {
	struct Unknown Bone; // 0x0 (16)
	struct Unknown Axis; // 0x10 (16)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase {
	struct Unknown IKBone; // 0xC8 (16)
	float StartStretchRatio; // 0xD8 (4)
	float MaxStretchScale; // 0xDC (4)
	struct Unknown EffectorLocation; // 0xE0 (12)
	struct Unknown EffectorTarget; // 0xF0 (96)
	struct Unknown JointTargetLocation; // 0x150 (12)
	struct Unknown JointTarget; // 0x160 (96)
	struct Unknown TwistAxis; // 0x1C0 (16)
	char EffectorLocationSpace; // 0x1D0 (1)
	char JointTargetLocationSpace; // 0x1D1 (1)
	char bAllowStretching : 0; // 0x1D2 (1)
	char bTakeRotationFromEffectorSpace : 0; // 0x1D2 (1)
	char bMaintainEffectorRelRot : 0; // 0x1D2 (1)
	char bAllowTwist : 0; // 0x1D2 (1)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
struct FAnimNode_TwoWayBlend : FAnimNode_Base {
	struct Unknown A; // 0x10 (16)
	struct Unknown B; // 0x20 (16)
	enum class Unknow AlphaInputType; // 0x30 (1)
	char bAlphaBoolEnabled : 0; // 0x31 (1)
	char bResetChildOnActivation : 0; // 0x31 (1)
	float ALPHA; // 0x34 (4)
	struct Unknown AlphaScaleBias; // 0x38 (8)
	struct Unknown AlphaBoolBlend; // 0x40 (72)
	struct FName AlphaCurveName; // 0x88 (8)
	struct Unknown AlphaScaleBiasClamp; // 0x90 (48)
};

// ScriptStruct AnimGraphRuntime.PositionHistory
struct FPositionHistory {
	struct TArray<Unknown> Positions; // 0x0 (16)
	float Range; // 0x10 (4)
};

// ScriptStruct AnimGraphRuntime.RBFEntry
struct FRBFEntry {
	struct TArray<Unknown> Values; // 0x0 (16)
};

// ScriptStruct AnimGraphRuntime.RBFTarget
struct FRBFTarget : FRBFEntry {
	float ScaleFactor; // 0x10 (4)
	char bApplyCustomCurve : 0; // 0x14 (1)
	struct Unknown CustomCurve; // 0x18 (128)
	enum class Unknow DistanceMethod; // 0x98 (1)
	enum class Unknow FunctionType; // 0x99 (1)
};

// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
inline void UPlayMontageCallbackProxy::OnNotifyEndReceived(struct FName NotifyName, struct Unknown& BranchingPointNotifyPayload) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived");

	struct OnNotifyEndReceived_Params {
		struct FName NotifyName;
		struct Unknown& BranchingPointNotifyPayload;
	}; OnNotifyEndReceived_Params Params;

	Params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	BranchingPointNotifyPayload = Params.BranchingPointNotifyPayload;

}

// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
inline void UPlayMontageCallbackProxy::OnNotifyBeginReceived(struct FName NotifyName, struct Unknown& BranchingPointNotifyPayload) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived");

	struct OnNotifyBeginReceived_Params {
		struct FName NotifyName;
		struct Unknown& BranchingPointNotifyPayload;
	}; OnNotifyBeginReceived_Params Params;

	Params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	BranchingPointNotifyPayload = Params.BranchingPointNotifyPayload;

}

// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
inline void UPlayMontageCallbackProxy::OnMontageEnded(struct Unknown Montage, char bInterrupted) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded");

	struct OnMontageEnded_Params {
		struct Unknown Montage;
		char bInterrupted;
	}; OnMontageEnded_Params Params;

	Params.Montage = Montage;
	Params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
inline void UPlayMontageCallbackProxy::OnMontageBlendingOut(struct Unknown Montage, char bInterrupted) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut");

	struct OnMontageBlendingOut_Params {
		struct Unknown Montage;
		char bInterrupted;
	}; OnMontageBlendingOut_Params Params;

	Params.Montage = Montage;
	Params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
inline struct Unknown UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(struct Unknown InSkeletalMeshComponent, struct Unknown MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage");

	struct CreateProxyObjectForPlayMontage_Params {
		struct Unknown InSkeletalMeshComponent;
		struct Unknown MontageToPlay;
		float PlayRate;
		float StartingPosition;
		struct FName StartingSection;
		struct Unknown ReturnValue;

	}; CreateProxyObjectForPlayMontage_Params Params;

	Params.InSkeletalMeshComponent = InSkeletalMeshComponent;
	Params.MontageToPlay = MontageToPlay;
	Params.PlayRate = PlayRate;
	Params.StartingPosition = StartingPosition;
	Params.StartingSection = StartingSection;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

