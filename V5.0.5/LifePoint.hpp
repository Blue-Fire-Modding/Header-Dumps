#ifndef UE4SS_SDK_LifePoint_HPP
#define UE4SS_SDK_LifePoint_HPP

class ULifePoint_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* VFXScale;
    UWidgetAnimation* Scale;
    UWidgetAnimation* Last;
    UImage* BackGlow;
    UImage* LifeImage;
    UImage* VFX;
    UMaterialInstanceDynamic* Material;
    bool HolyBlessing;
    FLifePoint_CRemove Remove;
    void Remove();

    void Empty(bool Effect);
    void Full(bool Effect);
    void Current(float Value, bool Effect);
    void SetExtra();
    void Construct();
    void UpdateAnim(int32 Fill);
    void EffectSlot(bool On, float Percent, float Direction);
    void Play Anim Scale();
    void ExecuteUbergraph_LifePoint(int32 EntryPoint, int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, bool Temp_bool_Variable, FName Temp_name_Variable, FName Temp_name_Variable_1, bool Temp_bool_Variable_1, FName Temp_name_Variable_2, FName Temp_name_Variable_3, bool Temp_bool_Variable_2, FName Temp_name_Variable_4, FName Temp_name_Variable_5, bool Temp_bool_Variable_3, FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, bool K2Node_CustomEvent_Effect_2, bool K2Node_CustomEvent_Effect_1, FName K2Node_Select_Default, FName K2Node_Select_Default_1, float K2Node_CustomEvent_Value, bool K2Node_CustomEvent_Effect, FName K2Node_Select_Default_2, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 K2Node_CustomEvent_Fill, float K2Node_Select_Default_3, bool K2Node_CustomEvent_On, float K2Node_CustomEvent_Percent, float K2Node_CustomEvent_Direction, float CallFunc_SelectFloat_ReturnValue, FLinearColor K2Node_Select_Default_4, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
    void Remove__DelegateSignature();
}

#endif
