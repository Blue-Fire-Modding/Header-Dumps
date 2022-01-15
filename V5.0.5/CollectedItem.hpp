#ifndef UE4SS_SDK_CollectedItem_HPP
#define UE4SS_SDK_CollectedItem_HPP

class UCollectedItem_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Intro;
    UTextBlock* Amount;
    UImage* Background;
    UTextBlock* Description;
    UImage* Image_355;
    UImage* ItemImage;
    UTextBlock* Text;

    void Play(FText InText, UMaterialInterface* Material_Image, FText Description, int32 Value);
    void Construct();
    void TempRemove();
    void TempReAdd();
    void ExecuteUbergraph_CollectedItem(int32 EntryPoint, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, RemoveUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AddUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FText K2Node_CustomEvent_InText, UMaterialInterface* K2Node_CustomEvent_Material_Image, FText K2Node_CustomEvent_Description, int32 K2Node_CustomEvent_Value, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_ToLower_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsInViewport_ReturnValue);
}

#endif
