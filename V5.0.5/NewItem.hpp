#ifndef UE4SS_SDK_NewItem_HPP
#define UE4SS_SDK_NewItem_HPP

class UNewItem_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Fade;
    UWidgetAnimation* Idle;
    UWidgetAnimation* Intro;
    UTextBlock* Amount;
    UImage* Background;
    UBorder* Border_82;
    UTextBlock* Description;
    UImage* DescriptionBar;
    UImage* Glow;
    UImage* Image_127;
    UImage* Item;
    UTextBlock* Name;
    UImage* Ok;
    USpacer* Spacer_0;
    UTextBlock* TextBlock_78;
    FNewItem_CRemoved Removed;
    void Removed();
    bool HasPickup;

    void Out();
    void PlayNewItem(FText InText, UMaterialInterface* Material_Image, FText Description, const TArray<FItemEffectInfo>& Stats, const bool ShowStats, uint8 InventoryItemType, bool KeyItem, const TArray<UAkAudioEvent*>& AkEvent, int32 Amount);
    void Construct();
    void UpdateUI();
    void ExecuteUbergraph_NewItem(int32 EntryPoint, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool Temp_bool_Variable, ANewItemController_C* CallFunc_FinishSpawningActor_ReturnValue, uint8 Temp_byte_Variable, const UAkAudioEvent* Temp_object_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, FString Temp_string_Variable, TArray<AActor*>& CallFunc_GetAllActorsWithTag_OutActors, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FText K2Node_CustomEvent_InText, UMaterialInterface* K2Node_CustomEvent_Material_Image, FText K2Node_CustomEvent_Description, const TArray<FItemEffectInfo>& K2Node_CustomEvent_Stats, const bool K2Node_CustomEvent_ShowStats, uint8 K2Node_CustomEvent_InventoryItemType, bool K2Node_CustomEvent_KeyItem, const TArray<UAkAudioEvent*>& K2Node_CustomEvent_AkEvent, int32 K2Node_CustomEvent_Amount, int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, AActor* CallFunc_Array_Get_Item, FString CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString K2Node_Select_Default, FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Left_ReturnValue, int32 CallFunc_Len_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue_1, FString CallFunc_Conv_BoolToString_ReturnValue, FText K2Node_Select_Default_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_Conv_TextToString_ReturnValue_1, FString Temp_string_Variable_1, FString CallFunc_Left_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_3, int32 CallFunc_Len_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FText K2Node_Select_Default_2, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, UMaterialInstance* CallFunc_GetUIPlatform_UIMaterial, bool CallFunc_GetUIPlatform_NonSquareSize, FVector2D CallFunc_GetUIPlatform_Size, FString CallFunc_MakeLiteralString_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue_2, UMaterialInstance* CallFunc_GetUIPlatform_UIMaterial_1, bool CallFunc_GetUIPlatform_NonSquareSize_1, FVector2D CallFunc_GetUIPlatform_Size_1, uint8 Temp_byte_Variable_1, FText CallFunc_MakeLiteralText_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue_2, FText CallFunc_MakeLiteralText_ReturnValue_3, const FText K2Node_Select_Default_3, FText CallFunc_MakeLiteralText_ReturnValue_4, FText CallFunc_MakeLiteralText_ReturnValue_5, FText CallFunc_MakeLiteralText_ReturnValue_6, FText CallFunc_MakeLiteralText_ReturnValue_7, UMaterialInstance* CallFunc_GetUIPlatform_UIMaterial_2, bool CallFunc_GetUIPlatform_NonSquareSize_2, FVector2D CallFunc_GetUIPlatform_Size_2, FText CallFunc_MakeLiteralText_ReturnValue_8, FString CallFunc_Conv_TextToString_ReturnValue_3, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue_9, UMaterialInstance* CallFunc_GetUIPlatform_UIMaterial_3, bool CallFunc_GetUIPlatform_NonSquareSize_3, FVector2D CallFunc_GetUIPlatform_Size_3, const FText K2Node_Select_Default_4, FString CallFunc_Conv_TextToString_ReturnValue_4, FString CallFunc_Concat_StrStr_ReturnValue_4, FString CallFunc_Concat_StrStr_ReturnValue_5, FString CallFunc_Concat_StrStr_ReturnValue_6, FString CallFunc_Concat_StrStr_ReturnValue_7, FString K2Node_Select_Default_5, FText CallFunc_Conv_StringToText_ReturnValue_3, PCGamepadChange__DelegateSignature K2Node_CreateDelegate_OutputDelegate);
    void Removed__DelegateSignature();
}

#endif
