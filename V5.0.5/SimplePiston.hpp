#ifndef UE4SS_SDK_SimplePiston_HPP
#define UE4SS_SDK_SimplePiston_HPP

class ASimplePiston_C : ASteamHouseMachines_Anim_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* Ak;
    UAkComponent* AkLoop;
    UStaticMeshComponent* Cube;
    UStaticMeshComponent* Piston;
    UStaticMeshComponent* Gear;
    UStaticMeshComponent* GA;
    UStaticMeshComponent* GB;
    UStaticMeshComponent* GC;
    USkeletalMeshComponent* Animations;
    UStaticMeshComponent* Base;

    void ReceiveBeginPlay();
    void Activate();
    void ExecuteUbergraph_SimplePiston(int32 EntryPoint, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, bool CallFunc_IsRobiValid_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, AEmitter* K2Node_DynamicCast_AsEmitter, bool K2Node_DynamicCast_bSuccess);
}

#endif
