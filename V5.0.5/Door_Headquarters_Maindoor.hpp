#ifndef UE4SS_SDK_Door_Headquarters_Maindoor_HPP
#define UE4SS_SDK_Door_Headquarters_Maindoor_HPP

class ADoor_Headquarters_Maindoor_C : UDoor_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* SM_SpikeFence_B;
    UStaticMeshComponent* SM_SpikeFence_A;
    UStaticMeshComponent* Fence_VB;
    UStaticMeshComponent* Fence_VT;
    UStaticMeshComponent* Fence_HR;
    UStaticMeshComponent* Fence_HL;
    float Move_Fence_Lerp_A0DB5A6B406837FFDAA61989E65E9169;
    TEnumAsByte<ETimelineDirection::Type> Move_Fence__Direction_A0DB5A6B406837FFDAA61989E65E9169;
    UTimelineComponent* Move Fence;
    float OLD_Move_Fence_Lerp_3086C50F4CA48E3D3B8498A514D6B824;
    TEnumAsByte<ETimelineDirection::Type> OLD_Move_Fence__Direction_3086C50F4CA48E3D3B8498A514D6B824;
    UTimelineComponent* OLD Move Fence;

    void Move Fence__FinishedFunc();
    void Move Fence__UpdateFunc();
    void Move Fence__StopSound__EventFunc();
    void Move Fence__StartSound__EventFunc();
    void OLD Move Fence__FinishedFunc();
    void OLD Move Fence__UpdateFunc();
    void InstantCustomFenceUnlock();
    void TriggerCustomFence(bool Instant, int32 Index);
    void Check Index(int32 Index, bool Begin Play);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Door_Headquarters_Maindoor(int32 EntryPoint, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 Temp_int_Variable, int32 Temp_int_Variable_1, UAkAudioEvent* Temp_object_Variable, UAkAudioEvent* Temp_object_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Variable_4, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, bool K2Node_Event_Instant, int32 K2Node_Event_Index, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, UAkAudioEvent* K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_1, bool K2Node_Select_Default_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_Add_FloatFloat_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue_2, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_2, UStaticMeshComponent* K2Node_Select_Default_2, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, float CallFunc_BreakVector_X_4, float CallFunc_BreakVector_Y_4, float CallFunc_BreakVector_Z_4, float CallFunc_Add_FloatFloat_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_3, int32 K2Node_CustomEvent_Index, bool K2Node_CustomEvent_Begin_Play, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, UStaticMeshComponent* K2Node_Select_Default_3, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, bool CallFunc_IsRobiValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_BreakVector_X_5, float CallFunc_BreakVector_Y_5, float CallFunc_BreakVector_Z_5, float CallFunc_Add_FloatFloat_ReturnValue_4, FVector CallFunc_MakeVector_ReturnValue_4, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_4, int32 CallFunc_PostEventAtLocation_ReturnValue_1, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Select_Default_4, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_5, FVector CallFunc_MakeVector_ReturnValue_5, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_5);
}

#endif
