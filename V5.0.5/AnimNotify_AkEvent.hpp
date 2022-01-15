#ifndef UE4SS_SDK_AnimNotify_AkEvent_HPP
#define UE4SS_SDK_AnimNotify_AkEvent_HPP

class UAnimNotify_AkEvent_C : UAnimNotify
{
    FString Attach Name;
    UAkAudioEvent* Event;
    bool Follow;
    FString EventName;

    bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animationconst TArray<FAkExternalSourceInfo>& Temp_struct_Variable, FVector CallFunc_K2_GetComponentLocation_ReturnValue, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, AActor* CallFunc_GetOwner_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_3, FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_GetAkComponent_ComponentCreated, UAkComponent* CallFunc_GetAkComponent_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue);
}

#endif
