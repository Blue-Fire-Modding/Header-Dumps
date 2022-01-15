#ifndef UE4SS_SDK_BossHealth_HPP
#define UE4SS_SDK_BossHealth_HPP

class UBossHealth_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* FadeIn;
    UCanvasPanel* CanvasPanel_5;
    UImage* LifeFXBar;
    UTextBlock* NameTxt;
    UMaterialInstanceDynamic* LifeBarMat;
    float Percent;
    float LerpPercent;
    bool IsHeal;

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetHealth(float Health, float Max Health);
    void Set Name(const FText& Name);
    void Fade();
    void Construct();
    void Change Bar Size(float Size X);
    void SetMaxHeal(bool Show, float Health, float Max Health);
    void ExecuteUbergraph_BossHealth(int32 EntryPoint, bool Temp_bool_Variable, float CallFunc_Conv_BoolToFloat_ReturnValue, bool Temp_bool_IsClosed_Variable, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float K2Node_CustomEvent_Health_1, float K2Node_CustomEvent_Max_Health_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, float CallFunc_FInterpTo_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, const FText K2Node_CustomEvent_Name, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float K2Node_CustomEvent_Size_X, FVector2D CallFunc_MakeVector2D_ReturnValue, bool K2Node_CustomEvent_Show, float K2Node_CustomEvent_Health, float K2Node_CustomEvent_Max_Health, float CallFunc_NormalizeToRange_ReturnValue_1, float K2Node_Select_Default);
}

#endif
