#ifndef UE4SS_SDK_Counter_Vessel_HPP
#define UE4SS_SDK_Counter_Vessel_HPP

class UCounter_Vessel_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* FadeHUD;
    UBorder* Border_13;
    UImage* CounterImg;
    UTextBlock* CounterTxt;
    UImage* Image;
    UImage* Image_138;
    UImage* Image_416;
    UVesselSlot_C* VesselSlot;
    UVesselSlot_C* VesselSlot_1;
    UVesselSlot_C* VesselSlot_2;
    UVesselSlot_C* VesselSlot_3;
    UVesselSlot_C* VesselSlot_4;
    UVesselSlot_C* VesselSlot_5;
    UVesselSlot_C* VesselSlot_6;
    UVesselSlot_C* VesselSlot_7;
    UVesselSlot_C* VesselSlot_8;
    UVesselSlot_C* VesselSlot_9;
    UVesselSlot_C* VesselSlot_10;
    UVesselSlot_C* VesselSlot_11;
    UVesselSlot_C* VesselSlot_12;
    UVesselSlot_C* VesselSlot_13;
    UVesselSlot_C* VesselSlot_182;
    UWrapBox* WrapBox_111;
    FCounter_Vessel_CCounterUpdate CounterUpdate;
    void CounterUpdate();
    bool Hidden;

    void Construct();
    void UpdateValue(int32 Amount, bool Has Total, int32 Total);
    void UpdateImage(UMaterialInterface* Material);
    void HideHUD();
    void ShowHUD();
    void Re Construct();
    void TempRemove();
    void TempReAdd();
    void Reset();
    void ExecuteUbergraph_Counter_Vessel(int32 EntryPoint, TArray<UWidget*>& CallFunc_GetAllChildren_ReturnValue, RemoveUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, AddUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UWidget* CallFunc_Array_Get_Item, UVesselSlot_C* K2Node_DynamicCast_AsVessel_Slot, bool K2Node_DynamicCast_bSuccess, int32 K2Node_CustomEvent_Amount, bool K2Node_CustomEvent_Has_Total, int32 K2Node_CustomEvent_Total, FString CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue_1, bool Temp_bool_Variable, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString K2Node_Select_Default, UMaterialInterface* K2Node_CustomEvent_Material, FText CallFunc_Conv_StringToText_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UWidget* CallFunc_GetChildAt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, UVesselSlot_C* K2Node_DynamicCast_AsVessel_Slot_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess_2);
    void CounterUpdate__DelegateSignature();
}

#endif
