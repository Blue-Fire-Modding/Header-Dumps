#ifndef UE4SS_SDK_RecordCam_HPP
#define UE4SS_SDK_RecordCam_HPP

class ARecordCam_C : UCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCameraComponent* Camera;
    TArray<UTexture*> LutArray;
    int32 LutIndex;
    TArray<FPostProcessSettings> Filters;
    FPostProcessSettings CurrentPPSettings;

    void UserConstructionScript();
    void MovementA(FVector WorldDirection);
    void MovementB(float ScaleValue);
    void ReceiveBeginPlay();
    void NextFilter(bool Right);
    void PreviewFilter();
    void Force PP Settings(FPostProcessSettings PostProcessSettings);
    void ExecuteUbergraph_RecordCam(int32 EntryPoint, FPostProcessSettings K2Node_CustomEvent_PostProcessSettings, bool Temp_bool_Variable, int32 Temp_int_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, bool Temp_bool_Variable_2, FVector K2Node_CustomEvent_WorldDirection, float K2Node_CustomEvent_ScaleValue, bool K2Node_CustomEvent_Right, int32 K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, FPostProcessSettings CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_Select_Default_1, int32 K2Node_Select_Default_2);
}

#endif
