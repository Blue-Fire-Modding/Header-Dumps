#ifndef UE4SS_SDK_HolyGodStone_Duck_HPP
#define UE4SS_SDK_HolyGodStone_Duck_HPP

class AHolyGodStone_Duck_C : AHolyGodStone_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* P_Shine_Sanctuary;
    UMaterialBillboardComponent* MB_Glow;
    float Darkness_Darkness_2FF9AB464AD2D6416E3A198C044AC96D;
    TEnumAsByte<ETimelineDirection::Type> Darkness__Direction_2FF9AB464AD2D6416E3A198C044AC96D;
    UTimelineComponent* Darkness;
    UMaterialInterface* DisappearNewMat;
    TArray<UMaterialInterface*> DisappearOldMats;

    void Darkness__FinishedFunc();
    void Darkness__UpdateFunc();
    void InpActEvt_PC_Interact_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_0(FKey Key);
    void Change Material(bool New Material);
    void Set New Material(UMaterialInterface* Material);
    void Exit From Void();
    void Grab Item();
    void ReceiveBeginPlay();
    void Force Exit Void();
    void Custom Begin Overlap();
    void Custom End Overlap();
    void ExecuteUbergraph_HolyGodStone_Duck(int32 EntryPoint, FKey K2Node_InputActionEvent_Key_1, FKey K2Node_InputActionEvent_Key, int32 Temp_int_Array_Index_Variable, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, float CallFunc_Lerp_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_Event_New_Material, UMaterialInterface* K2Node_Event_Material, TArray<UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, UMaterialInterface* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_Variable, UMaterialInterface* K2Node_Select_Default, TArray<FName>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetActorLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, bool CallFunc_GetItem_Success, bool CallFunc_GetItem_SpecialPopUp, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<FName>& K2Node_MakeArray_Array_1);
}

#endif
