#ifndef UE4SS_SDK_BP_BeiraPosts_HPP
#define UE4SS_SDK_BP_BeiraPosts_HPP

class ABP_BeiraPosts_C : ANPCBound_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* Scene;
    UStaticMeshComponent* StaticMesh;
    UArrowComponent* CameraDirection;
    UArrowComponent* PlayerDirection;
    bool Awakened;
    UMaterialInstanceDynamic* Mat Glow;
    TArray<FText> Text;

    void DialogStartCall();
    void ReceiveBeginPlay();
    void CustomEvent();
    void Activate Post();
    void ExecuteUbergraph_BP_BeiraPosts(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, ExitDialog__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default, UPlayerController* CallFunc_GetPlayerController_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used);
}

#endif
