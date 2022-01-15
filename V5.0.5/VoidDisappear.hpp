#ifndef UE4SS_SDK_VoidDisappear_HPP
#define UE4SS_SDK_VoidDisappear_HPP

class AVoidDisappear_C : AMechanics_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<AActor*> ActorsToDesappear;
    bool HiddenMat;
    TMap<FString, UMaterialInterface*> MaterialMap;
    UMaterialInterface* MatInvisible;
    bool Print;
    float Delay Order;
    APlayer_Character_BP_C* Player;
    bool CheckGrab;
    bool VM Fix;
    bool DontDisappear;

    void IsVM(const UObject* Object, bool& Is VM, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_Split_LeftS, FString CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
    void Activate(bool ExternalControl, bool BeginPlay, bool ChangeCamera, bool Instant, bool Is Cutscene, bool Affect Timer);
    void Deactivate(bool Instant, bool Change Camera);
    void Disappear(bool Desappear);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_VoidDisappear(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, FString CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, FString CallFunc_Conv_IntToString_ReturnValue_1, bool K2Node_Event_ExternalControl, bool K2Node_Event_BeginPlay, bool K2Node_Event_ChangeCamera, bool K2Node_Event_Instant_1, bool K2Node_Event_Is_Cutscene, bool K2Node_Event_Affect_Timer, bool K2Node_Event_Instant, bool K2Node_Event_Change_Camera, bool K2Node_CustomEvent_Desappear, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_3, int32 CallFunc_Array_Length_ReturnValue, AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess, FString CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsVM_Is_VM, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue_1, TArray<UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_IsVM_Is_VM_1, InterfaceProperty K2Node_DynamicCast_AsIDisappeareable, bool K2Node_DynamicCast_bSuccess_1, AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsVM_Is_VM_2, FString CallFunc_GetDisplayName_ReturnValue_3, TArray<UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_1, FString CallFunc_GetDisplayName_ReturnValue_4, UMaterialInterface* CallFunc_Array_Get_Item_2, FString CallFunc_Concat_StrStr_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_3, FString CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, FString CallFunc_Concat_StrStr_ReturnValue_5, InterfaceProperty K2Node_DynamicCast_AsIDisappeareable_1, bool K2Node_DynamicCast_bSuccess_3, UMaterialInterface* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool Temp_bool_Variable, UMaterialInterface* K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, UPlayer_Character_BP_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
}

#endif
