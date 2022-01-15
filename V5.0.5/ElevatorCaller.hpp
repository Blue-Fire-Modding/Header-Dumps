#ifndef UE4SS_SDK_ElevatorCaller_HPP
#define UE4SS_SDK_ElevatorCaller_HPP

class AElevatorCaller_C : AInteractionMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* StaticMesh;
    bool Bottom;
    AElevator_C* Elevator;
    bool bCanFixElevator;
    bool b ;
    int32 FixPrice;
    bool bIsBrokenMode;

    void UserConstructionScript();
    void Fix();
    void Update Mesh();
    void CustomEvent();
    void CustomEvent_0();
    void Broken Dialog();
    void ReceiveBeginPlay();
    void PressButton();
    void ExecuteUbergraph_ElevatorCaller(int32 EntryPoint, UStaticMesh* Temp_object_Variable, Call Elevator__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UStaticMesh* Temp_object_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, const TArray<FText>& K2Node_MakeArray_Array, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, const TArray<FText>& K2Node_MakeArray_Array_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_3, bool K2Node_SwitchInteger_CmpSuccess, const TArray<FText>& K2Node_MakeArray_Array_4, bool CallFunc_HasCurrency_True, FString CallFunc_Conv_IntToString_ReturnValue, bool Temp_bool_Variable, const FTransform CallFunc_GetTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UStaticMesh* K2Node_Select_Default, bool CallFunc_SetStaticMesh_ReturnValue, ANPCBound_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_2);
}

#endif
