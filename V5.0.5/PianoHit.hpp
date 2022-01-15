#ifndef UE4SS_SDK_PianoHit_HPP
#define UE4SS_SDK_PianoHit_HPP

class APianoHit_C : AMechanics_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* Collision;
    APlayer_Character_BP_C* Player;
    APlayer_AttackWave_C* AttackWave;

    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_PianoHit(int32 EntryPoint, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue);
}

#endif
