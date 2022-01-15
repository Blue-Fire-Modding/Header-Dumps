#ifndef UE4SS_SDK_PhysXVehicles_HPP
#define UE4SS_SDK_PhysXVehicles_HPP

#include "PhysXVehicles_enums.hpp"

class UWheeledVehicleMovementComponent : UPawnMovementComponent
{
    uint8 bDeprecatedSpringOffsetMode;
    uint8 bReverseAsBrake;
    uint8 bUseRVOAvoidance;
    uint8 bRawHandbrakeInput;
    uint8 bRawGearUpInput;
    uint8 bRawGearDownInput;
    uint8 bWasAvoidanceUpdated;
    float Mass;
    TArray<FWheelSetup> WheelSetups;
    float DragCoefficient;
    float ChassisWidth;
    float ChassisHeight;
    float DragArea;
    float EstimatedMaxEngineSpeed;
    float MaxEngineRPM;
    float DebugDragMagnitude;
    FVector InertiaTensorScale;
    float MinNormalizedTireLoad;
    float MinNormalizedTireLoadFiltered;
    float MaxNormalizedTireLoad;
    float MaxNormalizedTireLoadFiltered;
    float ThresholdLongitudinalSpeed;
    int32 LowForwardSpeedSubStepCount;
    int32 HighForwardSpeedSubStepCount;
    TArray<UVehicleWheel*> Wheels;
    float RVOAvoidanceRadius;
    float RVOAvoidanceHeight;
    float AvoidanceConsiderationRadius;
    float RVOSteeringStep;
    float RVOThrottleStep;
    int32 AvoidanceUID;
    FNavAvoidanceMask AvoidanceGroup;
    FNavAvoidanceMask GroupsToAvoid;
    FNavAvoidanceMask GroupsToIgnore;
    float AvoidanceWeight;
    FVector PendingLaunchVelocity;
    FReplicatedVehicleState ReplicatedState;
    float RawSteeringInput;
    float RawThrottleInput;
    float RawBrakeInput;
    float SteeringInput;
    float ThrottleInput;
    float BrakeInput;
    float HandbrakeInput;
    float IdleBrakeInput;
    float StopThreshold;
    float WrongDirectionThreshold;
    FVehicleInputRate ThrottleInputRate;
    FVehicleInputRate BrakeInputRate;
    FVehicleInputRate HandbrakeInputRate;
    FVehicleInputRate SteeringInputRate;
    AController* OverrideController;

    void SetUseAutoGears(bool bUseAuto);
    void SetThrottleInput(float Throttle);
    void SetTargetGear(int32 GearNum, bool bImmediate);
    void SetSteeringInput(float Steering);
    void SetHandbrakeInput(bool bNewHandbrake);
    void SetGroupsToIgnoreMask(const FNavAvoidanceMask& GroupMask);
    void SetGroupsToIgnore(int32 GroupFlags);
    void SetGroupsToAvoidMask(const FNavAvoidanceMask& GroupMask);
    void SetGroupsToAvoid(int32 GroupFlags);
    void SetGearUp(bool bNewGearUp);
    void SetGearDown(bool bNewGearDown);
    void SetBrakeInput(float Brake);
    void SetAvoidanceGroupMask(const FNavAvoidanceMask& GroupMask);
    void SetAvoidanceGroup(int32 GroupFlags);
    void SetAvoidanceEnabled(bool bEnable);
    void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 CurrentGear);
    bool GetUseAutoGears();
    int32 GetTargetGear();
    float GetForwardSpeed();
    float GetEngineRotationSpeed();
    float GetEngineMaxRotationSpeed();
    int32 GetCurrentGear();
}

class USimpleWheeledVehicleMovementComponent : UWheeledVehicleMovementComponent
{

    void SetSteerAngle(float SteerAngle, int32 WheelIndex);
    void SetDriveTorque(float DriveTorque, int32 WheelIndex);
    void SetBrakeTorque(float BrakeTorque, int32 WheelIndex);
}

class UTireConfig : UDataAsset
{
    float FrictionScale;
    TArray<FTireConfigMaterialFriction> TireFrictionScales;
}

class UVehicleAnimInstance : UAnimInstance
{
    UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent;

    AWheeledVehicle* GetVehicle();
}

class UVehicleWheel : UObject
{
    UStaticMesh* CollisionMesh;
    bool bDontCreateShape;
    bool bAutoAdjustCollisionSize;
    FVector Offset;
    float ShapeRadius;
    float ShapeWidth;
    float Mass;
    float DampingRate;
    float SteerAngle;
    bool bAffectedByHandbrake;
    UTireType* TireType;
    UTireConfig* TireConfig;
    float LatStiffMaxLoad;
    float LatStiffValue;
    float LongStiffValue;
    float SuspensionForceOffset;
    float SuspensionMaxRaise;
    float SuspensionMaxDrop;
    float SuspensionNaturalFrequency;
    float SuspensionDampingRatio;
    TEnumAsByte<EWheelSweepType> SweepType;
    float MaxBrakeTorque;
    float MaxHandBrakeTorque;
    UWheeledVehicleMovementComponent* VehicleSim;
    int32 WheelIndex;
    float DebugLongSlip;
    float DebugLatSlip;
    float DebugNormalizedTireLoad;
    float DebugWheelTorque;
    float DebugLongForce;
    float DebugLatForce;
    FVector Location;
    FVector OldLocation;
    FVector Velocity;

    bool IsInAir();
    float GetSuspensionOffset();
    float GetSteerAngle();
    float GetRotationAngle();
}

class AWheeledVehicle : APawn
{
    USkeletalMeshComponent* Mesh;
    UWheeledVehicleMovementComponent* VehicleMovement;
}

class UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent
{
    FVehicleEngineData EngineSetup;
    FVehicleDifferential4WData DifferentialSetup;
    float AckermannAccuracy;
    FVehicleTransmissionData TransmissionSetup;
    FRuntimeFloatCurve SteeringCurve;
}

struct UAnimNode_WheelHandler : FAnimNode_SkeletalControlBase
{
}

struct UTireConfigMaterialFriction
{
    UPhysicalMaterial* PhysicalMaterial;
    float FrictionScale;
}

struct UVehicleAnimInstanceProxy : FAnimInstanceProxy
{
}

struct UVehicleInputRate
{
    float RiseRate;
    float FallRate;
}

struct UReplicatedVehicleState
{
    float SteeringInput;
    float ThrottleInput;
    float BrakeInput;
    float HandbrakeInput;
    int32 CurrentGear;
}

struct UWheelSetup
{
    TSubclassOf<UVehicleWheel> WheelClass;
    FName BoneName;
    FVector AdditionalOffset;
    bool bDisableSteering;
}

struct UVehicleTransmissionData
{
    bool bUseGearAutoBox;
    float GearSwitchTime;
    float GearAutoBoxLatency;
    float FinalRatio;
    TArray<FVehicleGearData> ForwardGears;
    float ReverseGearRatio;
    float NeutralGearUpRatio;
    float ClutchStrength;
}

struct UVehicleGearData
{
    float Ratio;
    float DownRatio;
    float UpRatio;
}

struct UVehicleEngineData
{
    FRuntimeFloatCurve TorqueCurve;
    float MaxRPM;
    float MOI;
    float DampingRateFullThrottle;
    float DampingRateZeroThrottleClutchEngaged;
    float DampingRateZeroThrottleClutchDisengaged;
}

struct UVehicleDifferential4WData
{
    TEnumAsByte<EVehicleDifferential4W::Type> DifferentialType;
    float FrontRearSplit;
    float FrontLeftRightSplit;
    float RearLeftRightSplit;
    float CentreBias;
    float FrontBias;
    float RearBias;
}

#endif
