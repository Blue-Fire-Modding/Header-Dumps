#ifndef UE4SS_SDK_Organ_HPP
#define UE4SS_SDK_Organ_HPP

class AOrgan_C : AInteractionMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    AOrganController_C* OrganController;

    void Return();
    void ReceiveBeginPlay();
    void PressButton();
    void ExecuteUbergraph_Organ(int32 EntryPoint, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, AOrganController_C* CallFunc_FinishSpawningActor_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1);
}

#endif
