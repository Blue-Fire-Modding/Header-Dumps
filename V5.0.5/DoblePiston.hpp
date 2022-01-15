#ifndef UE4SS_SDK_DoblePiston_HPP
#define UE4SS_SDK_DoblePiston_HPP

class ADoblePiston_C : ASteamHouseMachines_Anim_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* AkLoop;
    UAkComponent* Ak;
    UStaticMeshComponent* pistin ;
    UStaticMeshComponent* pistin U;
    UStaticMeshComponent* Wheel;
    UStaticMeshComponent* Wheel U;
    UStaticMeshComponent* Piston;
    UStaticMeshComponent* Piston U;
    USkeletalMeshComponent* Animations;
    UStaticMeshComponent* BaseMachine;

    void ReceiveBeginPlay();
    void Activate();
    void ExecuteUbergraph_DoblePiston(int32 EntryPoint, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, bool CallFunc_IsRobiValid_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, AEmitter* K2Node_DynamicCast_AsEmitter, bool K2Node_DynamicCast_bSuccess);
}

#endif
