#ifndef UE4SS_SDK_DemoEnd_HPP
#define UE4SS_SDK_DemoEnd_HPP

class UDemoEnd_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Return;
    UWidgetAnimation* Fade;
    UCanvasPanel* CanvasPanel_0;
    UTextBlock* DemoMain;
    UTextBlock* Description;

    void Construct();
    void ExecuteUbergraph_DemoEnd(int32 EntryPoint, FTransform CallFunc_MakeTransform_ReturnValue, bool Temp_bool_Variable, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, FText Temp_text_Variable, ADemoEndController_C* CallFunc_FinishSpawningActor_ReturnValue, FText Temp_text_Variable_1, bool Temp_bool_Variable_1, FText Temp_text_Variable_2, FText Temp_text_Variable_3, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, FText K2Node_Select_Default, FText K2Node_Select_Default_1);
}

#endif
