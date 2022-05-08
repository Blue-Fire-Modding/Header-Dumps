#ifndef UE4SS_SDK_IntroGlass_HPP
#define UE4SS_SDK_IntroGlass_HPP

class AIntroGlass_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_Drips1;
    class UParticleSystemComponent* P_Drips;
    class UStaticMeshComponent* IntroGlass_Liquid;
    class UParticleSystemComponent* P_IntroGlassLiquid;
    class UStaticMeshComponent* Liquid;
    class UStaticMeshComponent* IntroGlass_01;
    class USceneComponent* DefaultSceneRoot;
    FIntroGlass_CBreak Break;
    void Break();
    class APlayer_Character_BP_C* Player;
    FString ID;
    bool Used;
    class UMaterialInstanceDynamic* Material;

    void InpActEvt_Gamepad_Horizontal_Attack_K2Node_InputActionEvent_7(FKey Key);
    void InpActEvt_PC_Horizontal_Attack_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_Gamepad_Vertical_Attack_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_PC_Vertical_Attack_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_Gamepad_Emote_Menu_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_Gamepad_Quick_Emote_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_PC_Emote_Menu_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_PC_Quick_Emote_K2Node_InputActionEvent_0(FKey Key);
    void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
    void ReceiveBeginPlay();
    void Empty Event();
    void Glass Broken();
    void ExecuteUbergraph_IntroGlass(int32 EntryPoint);
    void Break__DelegateSignature();
};

#endif
