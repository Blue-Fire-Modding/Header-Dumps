#ifndef UE4SS_SDK_BP_ForceCutscene_HPP
#define UE4SS_SDK_BP_ForceCutscene_HPP

class ABP_ForceCutscene_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* Collision;
    USceneComponent* DefaultSceneRoot;
    ACinematic_Controller_Master_C* Cinematic Controller;
    bool CheckID;
    FString ID to Check;

    void BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_ForceCutscene(int32 EntryPoint, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used);
}

#endif
