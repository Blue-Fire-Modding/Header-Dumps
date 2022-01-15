#ifndef UE4SS_SDK_SpeedTimer_HPP
#define UE4SS_SDK_SpeedTimer_HPP

class USpeedTimer_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Pause;
    UCanvasPanel* CanvasPanel_0;
    UImage* Image_147;
    UImage* PauseImg;
    UTextBlock* TimeTxt;
    float TickTimer;
    APlayer_Character_BP_C* Player;
    bool Block Timer;

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void TempRemove();
    void TempReAdd();
    void Play();
    void Stop();
    void Destruct();
    void SpeedTimer Control(bool Block Timer);
    void ExecuteUbergraph_SpeedTimer(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, RemoveUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AddUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue_1, FString K2Node_Select_Default, int32 CallFunc_Percent_IntInt_ReturnValue_2, int32 CallFunc_Divide_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, FString CallFunc_Conv_IntToString_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_Conv_IntToString_ReturnValue_3, FString K2Node_Select_Default_1, FString CallFunc_Concat_StrStr_ReturnValue_3, FString CallFunc_Concat_StrStr_ReturnValue_4, FString K2Node_Select_Default_2, bool CallFunc_Less_IntInt_ReturnValue_3, FString CallFunc_Concat_StrStr_ReturnValue_5, FString CallFunc_Concat_StrStr_ReturnValue_6, FString K2Node_Select_Default_3, FString CallFunc_Concat_StrStr_ReturnValue_7, FString CallFunc_Concat_StrStr_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_9, FText CallFunc_Conv_StringToText_ReturnValue, bool Temp_bool_Variable_4, UMaterialInterface* Temp_object_Variable, UMaterialInterface* Temp_object_Variable_1, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Multiply_FloatFloat_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInViewport_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool Temp_bool_IsClosed_Variable, bool K2Node_CustomEvent_Block_Timer, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UMaterialInterface* K2Node_Select_Default_4, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
}

#endif
