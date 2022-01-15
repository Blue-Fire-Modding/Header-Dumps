#ifndef UE4SS_SDK_WheelMachine_HPP
#define UE4SS_SDK_WheelMachine_HPP

class AWheelMachine_C : ASteamHouseMachines_Anim_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* AkLoop;
    UAkComponent* Ak;
    UStaticMeshComponent* Spout;
    UStaticMeshComponent* Gear1;
    UStaticMeshComponent* Gear;
    UStaticMeshComponent* Wheel;
    USkeletalMeshComponent* Animations;
    UStaticMeshComponent* Base;

    void ReceiveBeginPlay();
    void Activate();
    void ExecuteUbergraph_WheelMachine(int32 EntryPoint, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, bool CallFunc_IsRobiValid_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, AEmitter* K2Node_DynamicCast_AsEmitter, bool K2Node_DynamicCast_bSuccess);
}

#endif
