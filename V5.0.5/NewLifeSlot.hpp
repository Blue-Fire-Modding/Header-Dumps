#ifndef UE4SS_SDK_NewLifeSlot_HPP
#define UE4SS_SDK_NewLifeSlot_HPP

class UNewLifeSlot_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* ConsumeItem;
    UWidgetAnimation* ChangeItemAnim;
    UWidgetAnimation* AimCharge;
    UWidgetAnimation* AimIdle;
    UWidgetAnimation* LifeVFX;
    UWidgetAnimation* RegenAnim;
    UWidgetAnimation* FadeHUD;
    UWidgetAnimation* CollectCurrency;
    UWidgetAnimation* ChargeSpecialMove;
    UWidgetAnimation* Hit;
    UWidgetAnimation* Target;
    UWrapBox* LifeBox;
    ULifePoint_C* LifePoint;
    ULifePoint_C* LifePoint_1;
    ULifePoint_C* LifePoint_2;
    ULifePoint_C* LifePoint_3;
    ULifePoint_C* LifePoint_4;
    ULifePoint_C* LifePoint_5;
    ULifePoint_C* LifePoint_6;
    ULifePoint_C* LifePoint_7;
    ULifePoint_C* LifePoint_8;
    ULifePoint_C* LifePoint_9;
    ULifePoint_C* LifePoint_10;
    ULifePoint_C* LifePoint_11;
    ULifePoint_C* LifePoint_12;
    ULifePoint_C* LifePoint_13;
    ULifePoint_C* LifePoint_14;
    ULifePoint_C* LifePoint_15;
    ULifePoint_C* LifePoint_16;
    ULifePoint_C* LifePoint_17;
    ULifePoint_C* LifePoint_74;
    ULifePoint_C* LifePoint_176;
    UBorder* MainBorder;
    APlayer_Character_BP_C* Player;
    UMaterialInstanceDynamic* LifeMat;
    UBlueFire_Game_Instance_C* GameInstance;
    bool Hidden;
    float RagePercent;
    UMaterialInstanceDynamic* RageBarMat;
    float LifePercent;
    float LifeLerpPercent;
    float RageLerpPercent;
    int32 TempHealth;
    bool Animate;
    TArray<ULifePoint_C*> LifeSlots;
    bool LifeReduce;
    int32 PreviousHealth;
    bool AddLife;

    float Get_Rage_Percent_0(float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue_1, float CallFunc_FInterpTo_ReturnValue_1);
    void UpdateLifeHud(bool Animate, bool ChangeSlotCount, bool AddLife);
    void Regen();
    void HealthSlotsRun(bool FirstRun);
    void UpdateSlotCount();
    void Remove();
    void Construct();
    void HideHUD();
    void ShowHUD();
    void ConsumeItemPlay();
    void ExecuteUbergraph_NewLifeSlot(int32 EntryPoint, float Temp_float_Variable, float Temp_float_Variable_1, int32 Temp_int_Variable, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, float Temp_float_Variable_6, Remove__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_Animate, bool K2Node_CustomEvent_ChangeSlotCount, bool K2Node_CustomEvent_AddLife, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, bool K2Node_CustomEvent_FirstRun, float Temp_float_Variable_7, bool CallFunc_EqualEqual_IntInt_ReturnValue, float Temp_float_Variable_8, ULifePoint_C* CallFunc_Create_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue, float Temp_float_Variable_9, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Variable_2, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue_3, ULifePoint_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, ULifePoint_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 CallFunc_Multiply_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_SelectInt_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, float K2Node_Select_Default, float K2Node_Select_Default_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_7, FSave_PlayerStats K2Node_MakeStruct_Save_PlayerStats);
}

#endif
