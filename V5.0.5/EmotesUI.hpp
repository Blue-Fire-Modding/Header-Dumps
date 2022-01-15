#ifndef UE4SS_SDK_EmotesUI_HPP
#define UE4SS_SDK_EmotesUI_HPP

class UEmotesUI_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* FadeIn;
    UImage* Background;
    UScrollBox* EmoteContainer;
    UEmoteSlot_C* EmoteSlot;
    UEmoteSlot_C* EmoteSlot_0;
    UEmoteSlot_C* EmoteSlot_1;
    UEmoteSlot_C* EmoteSlot_2;
    UEmoteSlot_C* EmoteSlot_3;
    UEmoteSlot_C* EmoteSlot_4;
    UEmoteSlot_C* EmoteSlot_5;
    USelectCommands_C* SelectCommands;
    AEmote_Controller_C* Controller;
    TArray<UEmoteSlot_C*> Emotes;
    int32 SelectedEmote;
    APlayer_Character_BP_C* Player;
    APlayer_Camera_Control_C* CamControl;

    void Construct();
    void Movement(bool Right);
    void Play();
    void PCGamepadChange();
    void ReRun();
    void Remove();
    void Play Selected Emote();
    void RemoveEvent();
    void FadeInAnim();
    void TempRemove();
    void TempReAdd();
    void ExecuteUbergraph_EmotesUI(int32 EntryPoint, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, PCGamepadChange__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AEmote_Controller_C* CallFunc_FinishSpawningActor_ReturnValue, UEmoteSlot_C* CallFunc_Create_ReturnValue, RemoveUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, AddUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_CustomEvent_Right, UEmoteSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, UEmoteSlot_C* CallFunc_Array_Get_Item_1, int32 Temp_int_Variable, UEmoteSlot_C* CallFunc_Array_Get_Item_2, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, UEmoteSlot_C* CallFunc_Array_Get_Item_3, int32 Temp_int_Variable_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_Array_Get_Item_4, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Variable_2, UEmoteSlot_C* CallFunc_Array_Get_Item_5, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, bool Temp_bool_Variable, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 K2Node_Select_Default, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue, UEmoteSlot_C* CallFunc_Create_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, UPanelSlot* CallFunc_AddChild_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_5, int32 CallFunc_PostEventAtLocation_ReturnValue_6, bool CallFunc_IsInViewport_ReturnValue);
}

#endif
