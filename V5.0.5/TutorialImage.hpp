#ifndef UE4SS_SDK_TutorialImage_HPP
#define UE4SS_SDK_TutorialImage_HPP

class UTutorialImage_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Button;
    UTextBlock* Description;
    UImage* Image_67;

    void Set(FText Command, UMaterialInterface* Input, UMaterialInterface* Image, bool NonSquare, bool Empty);
    void ExecuteUbergraph_TutorialImage(int32 EntryPoint, bool Temp_bool_Variable, FVector2D Temp_struct_Variable, FVector2D Temp_struct_Variable_1, FText K2Node_CustomEvent_Command, UMaterialInterface* K2Node_CustomEvent_Input, UMaterialInterface* K2Node_CustomEvent_Image, bool K2Node_CustomEvent_NonSquare, bool K2Node_CustomEvent_Empty, FVector2D K2Node_Select_Default);
}

#endif
