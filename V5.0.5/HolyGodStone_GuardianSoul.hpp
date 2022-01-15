#ifndef UE4SS_SDK_HolyGodStone_GuardianSoul_HPP
#define UE4SS_SDK_HolyGodStone_GuardianSoul_HPP

class AHolyGodStone_GuardianSoul_C : AHolyGodStone_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UMaterialBillboardComponent* MB_Glow;
    UParticleSystemComponent* P_CovenantSouls;
    float Darkness_Darkness_9593D9104E386D79EAB1B088D876F740;
    TEnumAsByte<ETimelineDirection::Type> Darkness__Direction_9593D9104E386D79EAB1B088D876F740;
    UTimelineComponent* Darkness;
    UMaterialInterface* DisappearNewMat;
    TArray<UMaterialInterface*> DisappearOldMats;

    void CheckQuestFireGuardDoor(const FString Temp_string_Variable, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void Darkness__FinishedFunc();
    void Darkness__UpdateFunc();
    void InpActEvt_PC_Interact_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_0(FKey Key);
    void Change Material(bool New Material);
    void Set New Material(UMaterialInterface* Material);
    void Custom Begin Overlap();
    void Custom End Overlap();
    void Exit From Void();
    void Grab Item();
    void Collect Guardian Key();
    void Force Exit Void();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_HolyGodStone_GuardianSoul(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_Event_New_Material, UMaterialInterface* K2Node_Event_Material, TArray<UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, UMaterialInterface* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, FKey K2Node_InputActionEvent_Key, TArray<FName>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetActorLocation_ReturnValue, FKey K2Node_InputActionEvent_Key_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float CallFunc_Lerp_ReturnValue, bool Temp_bool_Variable, UMaterialInterface* K2Node_Select_Default, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, bool CallFunc_GetItem_Success, bool CallFunc_GetItem_SpecialPopUp, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<FName>& K2Node_MakeArray_Array_1, bool CallFunc_Not_PreBool_ReturnValue);
}

#endif
