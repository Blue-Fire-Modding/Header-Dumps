#ifndef UE4SS_SDK_WwisePostAtLocation_HPP
#define UE4SS_SDK_WwisePostAtLocation_HPP

class UWwisePostAtLocation_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkAudioEvent* Ak Event;

    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_WwisePostAtLocation(int32 EntryPoint, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, AActor* K2Node_Event_OwnerActor, int32 CallFunc_PostEvent_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue);
}

#endif
