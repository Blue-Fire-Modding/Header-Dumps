#ifndef UE4SS_SDK_A01_SmallShrine_HPP
#define UE4SS_SDK_A01_SmallShrine_HPP

class AA01_SmallShrine_C : ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    AStaticMeshActor* D02_Uthas_Collisions_Spikes_2_ExecuteUbergraph_A01_SmallShrine_RefProperty;
    AAreaExit_C* AreaExit_Uthas-Graveyard_ExecuteUbergraph_A01_SmallShrine_RefProperty;

    void ReceiveBeginPlay();
    void Hit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_A01_SmallShrine(int32 EntryPoint, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, ActorHitSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchInteger_CmpSuccess, AActor* K2Node_CustomEvent_SelfActor, AActor* K2Node_CustomEvent_OtherActor, FVector K2Node_CustomEvent_NormalImpulse, const FHitResult K2Node_CustomEvent_Hit, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_ApplyDamage_ReturnValue);
}

#endif
