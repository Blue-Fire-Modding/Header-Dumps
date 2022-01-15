#ifndef UE4SS_SDK_FlipFlop_Controller_HPP
#define UE4SS_SDK_FlipFlop_Controller_HPP

class AFlipFlop_Controller_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;
    bool Debug;
    float Time;
    float DelayAudio;
    TArray<AFlipFlop_Platform_C*> Batch1;
    TArray<AFlipFlop_Platform_C*> Batch2;
    float TimeOffset;
    float DamageTime;
    bool Damage;
    UMaterialInterface* MaterialDamage;
    UMaterialInterface* MaterialNoDamage;
    bool canDamage;
    bool DisableAllCollisions;
    APlayer_Character_BP_C* Player;
    bool CheckGrab;

    void ReleaseGrab(UObject* Platform, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue);
    void ReceiveBeginPlay();
    void Toggle();
    void PreToggleSound();
    void ExecuteUbergraph_FlipFlop_Controller(int32 EntryPoint, uint8 Temp_byte_Variable, bool Temp_bool_Variable, uint8 Temp_byte_Variable_1, bool Temp_bool_Variable_1, uint8 Temp_byte_Variable_2, bool Temp_bool_Variable_2, uint8 Temp_byte_Variable_3, uint8 Temp_byte_Variable_4, bool Temp_bool_Variable_3, uint8 Temp_byte_Variable_5, bool Temp_bool_Variable_4, uint8 Temp_byte_Variable_6, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable_5, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, uint8 Temp_byte_Variable_7, bool Temp_bool_Variable_6, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_4, bool Temp_bool_Variable_7, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_5, AFlipFlop_Platform_C* CallFunc_Array_Get_Item, AFlipFlop_Platform_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, float K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, uint8 K2Node_Select_Default_1, uint8 K2Node_Select_Default_2, int32 Temp_int_Loop_Counter_Variable_4, AFlipFlop_Platform_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_5, AFlipFlop_Platform_C* CallFunc_Array_Get_Item_3, bool CallFunc_IsRobiValid_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool Temp_bool_Variable_8, UMaterialInterface* K2Node_Select_Default_3, UMaterialInterface* K2Node_Select_Default_4, AFlipFlop_Platform_C* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4, AFlipFlop_Platform_C* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_5, uint8 K2Node_Select_Default_5, uint8 K2Node_Select_Default_6, float CallFunc_Divide_FloatFloat_ReturnValue, uint8 K2Node_Select_Default_7, uint8 K2Node_Select_Default_8, UPlayer_Character_BP_C* CallFunc_GetActorOfClass_ReturnValue);
}

#endif
