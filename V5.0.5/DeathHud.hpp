#ifndef UE4SS_SDK_DeathHud_HPP
#define UE4SS_SDK_DeathHud_HPP

class UDeathHud_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Fade_Activate;
    UWidgetAnimation* Idle;
    UWidgetAnimation* Fade;
    UImage* Image_27;
    UImage* Image_135;
    FDeathHud_CRestart Restart;
    void Restart();
    AGameOverController_C* GameOverController;

    void Construct();
    void Remove();
    void CallRestart();
    void ActivateDeathHud();
    void ReBuild();
    void IdleAnim();
    void ExecuteUbergraph_DeathHud(int32 EntryPoint, FTransform CallFunc_MakeTransform_ReturnValue, bool Temp_bool_Variable, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, FVector2D Temp_struct_Variable, AGameOverController_C* CallFunc_FinishSpawningActor_ReturnValue, FVector2D Temp_struct_Variable_1, PCGamepadChange__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsRobiValid_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, UMaterialInstance* CallFunc_GetUIPlatform_UIMaterial, bool CallFunc_GetUIPlatform_NonSquareSize, FVector2D CallFunc_GetUIPlatform_Size, FVector2D K2Node_Select_Default, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1);
    void Restart__DelegateSignature();
}

#endif
