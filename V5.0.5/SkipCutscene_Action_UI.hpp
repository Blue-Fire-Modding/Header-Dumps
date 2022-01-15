#ifndef UE4SS_SDK_SkipCutscene_Action_UI_HPP
#define UE4SS_SDK_SkipCutscene_Action_UI_HPP

class USkipCutscene_Action_UI_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Fade;
    UWidgetAnimation* Show;
    UImage* ActionInput;
    UTextBlock* ActionText;
    UImage* Background;
    UHorizontalBox* HorizontalBox_0;
    UOverlay* Overlay_0;
    TEnumAsByte<PlatformInput::Type> Action;
    bool CreateController;
    ASkipCutscene_Controller_C* Controller;
    ULevelSequencePlayer* CurrentSequence;

    void Construct();
    void Remove();
    void SetPlatformIcon();
    void Set Text Skip Cutscene(bool Skip Cutscene);
    void Replay();
    void ExecuteUbergraph_SkipCutscene_Action_UI(int32 EntryPoint, bool Temp_bool_Variable, FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ASkipCutscene_Controller_C* CallFunc_FinishSpawningActor_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, UMaterialInstance* CallFunc_GetUIPlatform_UIMaterial, bool CallFunc_GetUIPlatform_NonSquareSize, FVector2D CallFunc_GetUIPlatform_Size, int32 CallFunc_PostEventAtLocation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_CustomEvent_Skip_cutscene, FText CallFunc_MakeLiteralText_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1, FLinearColor K2Node_Select_Default, bool Temp_bool_Variable_1, const FText K2Node_Select_Default_1, PCGamepadChange__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsRobiValid_ReturnValue);
}

#endif
