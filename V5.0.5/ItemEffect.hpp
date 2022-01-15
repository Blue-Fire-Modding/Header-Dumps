#ifndef UE4SS_SDK_ItemEffect_HPP
#define UE4SS_SDK_ItemEffect_HPP

class UItemEffect_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_0;
    UImage* Image_1;
    USizeBox* SizeBox_0;
    UTextBlock* TextBlock_1;
    bool HideImage;

    void Set(int32 Number, UTexture2D* Texture);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ItemEffect(int32 EntryPoint, int32 K2Node_CustomEvent_Number, UTexture2D* K2Node_CustomEvent_Texture, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, bool K2Node_Event_IsDesignTime);
}

#endif
