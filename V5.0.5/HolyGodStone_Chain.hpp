#ifndef UE4SS_SDK_HolyGodStone_Chain_HPP
#define UE4SS_SDK_HolyGodStone_Chain_HPP

class AHolyGodStone_Chain_C : AHolyGodStone_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* CovenantSoulBase;
    USceneComponent* ScenePOI;
    UCapsuleComponent* Collision;
    float Glow_Effect_Glow_EE423CB240DACE3053C455979DC16CC3;
    TEnumAsByte<ETimelineDirection::Type> Glow_Effect__Direction_EE423CB240DACE3053C455979DC16CC3;
    UTimelineComponent* Glow Effect;
    int32 CounterDamage;
    UMaterialInstanceDynamic* Material Glow;

    void Glow Effect__FinishedFunc();
    void Glow Effect__UpdateFunc();
    void InpActEvt_PC_Interact_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void Exit From Void();
    void ReceiveBeginPlay();
    void Make Glow();
    void ExecuteUbergraph_HolyGodStone_Chain(int32 EntryPoint, int32 Temp_int_Variable, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable_1, FKey K2Node_InputActionEvent_Key, bool CallFunc_EqualEqual_IntInt_ReturnValue, FKey K2Node_InputActionEvent_Key_1, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool Temp_bool_Variable, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool K2Node_MultiGate_FirstRun, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, TArray<FName>& K2Node_MakeArray_Array, uint8 K2Node_Select_Default, TArray<FName>& K2Node_MakeArray_Array_1, bool CallFunc_Not_PreBool_ReturnValue);
}

#endif
