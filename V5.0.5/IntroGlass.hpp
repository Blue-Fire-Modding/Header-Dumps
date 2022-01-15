#ifndef UE4SS_SDK_IntroGlass_HPP
#define UE4SS_SDK_IntroGlass_HPP

class AIntroGlass_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* P_Drips1;
    UParticleSystemComponent* P_Drips;
    UStaticMeshComponent* IntroGlass_Liquid;
    UParticleSystemComponent* P_IntroGlassLiquid;
    UStaticMeshComponent* Liquid;
    UStaticMeshComponent* IntroGlass_01;
    USceneComponent* DefaultSceneRoot;
    FIntroGlass_CBreak Break;
    void Break();
    APlayer_Character_BP_C* Player;
    FString ID;
    bool Used;
    UMaterialInstanceDynamic* Material;

    void InpActEvt_Gamepad_Horizontal_Attack_K2Node_InputActionEvent_7(FKey Key);
    void InpActEvt_PC_Horizontal_Attack_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_Gamepad_Vertical_Attack_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_PC_Vertical_Attack_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_Gamepad_Emote_Menu_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_Gamepad_Quick_Emote_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_PC_Emote_Menu_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_PC_Quick_Emote_K2Node_InputActionEvent_0(FKey Key);
    void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void ReceiveBeginPlay();
    void Empty Event();
    void Glass Broken();
    void ExecuteUbergraph_IntroGlass(int32 EntryPoint, FKey K2Node_InputKeyEvent_Key, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable, FKey K2Node_InputActionEvent_Key_2, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_IsClosed_Variable, FVector CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool K2Node_MultiGate_FirstRun, int32 K2Node_MultiGate_Data, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, bool CallFunc_SetStaticMesh_ReturnValue, FKey K2Node_InputActionEvent_Key_3, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FKey K2Node_InputActionEvent_Key, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, bool CallFunc_SetStaticMesh_ReturnValue_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, FKey K2Node_InputActionEvent_Key_4, UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, FKey K2Node_InputActionEvent_Key_1, FKey K2Node_InputActionEvent_Key_5, FKey K2Node_InputActionEvent_Key_6, FKey K2Node_InputActionEvent_Key_7, UAnimMontage* Temp_object_Variable, UAnimMontage* Temp_object_Variable_1, bool Temp_bool_Variable_1, UAnimMontage* K2Node_Select_Default, float CallFunc_PlayAnimMontage_ReturnValue);
    void Break__DelegateSignature();
}

#endif
