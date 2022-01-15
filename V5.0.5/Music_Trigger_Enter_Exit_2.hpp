#ifndef UE4SS_SDK_Music_Trigger_Enter_Exit_2_HPP
#define UE4SS_SDK_Music_Trigger_Enter_Exit_2_HPP

class AMusic_Trigger_Enter_Exit_2_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Mesh;
    UAkComponent* Ak_Component;
    UBoxComponent* Box;
    USceneComponent* DefaultSceneRoot;
    UAkAudioEvent* Ak_Event_Start;
    TSubclassOf<UAkComponent> Component;
    UAkAudioEvent* Ak_Event_Stop;
    bool StartInBeginPlay;
    FString ID;
    APlayer_Character_BP_C* Player;
    bool CustomIntroGlass;
    bool StartMusicWithIntroCutscene;
    FString IDIntroCutscene;
    float DelayMusic;
    ACinematic_Controller_Master_C* Target;
    bool UseMeshForCollision;
    bool ShowMeshCollisionPreview;
    UStaticMesh* StaticMesh;

    void UserConstructionScript();
    void Play2();
    void Replay Event Start();
    void ChangeCol();
    void ReceiveEndPlay(uint8 EndPlayReason);
    void ReceiveBeginPlay();
    void ReceiveActorEndOverlap(AActor* OtherActor);
    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void Play();
    void PlayerDeath();
    void ExecuteUbergraph_Music_Trigger_Enter_Exit_2(int32 EntryPoint, Die__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsRobiValid_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, bool CallFunc_IsRobiValid_ReturnValue_1, MusicIntroGlass__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsRobiValid_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, TArray<AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, bool CallFunc_IsRobiValid_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_1, uint8 K2Node_Event_EndPlayReason, TArray<AActor*>& CallFunc_GetOverlappingActors_OverlappingActors_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, AActor* K2Node_Event_OtherActor_1, AActor* K2Node_Event_OtherActor, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsRobiValid_ReturnValue_5, bool Temp_bool_Variable, int32 CallFunc_PostEventAtLocation_ReturnValue_2, TArray<AActor*>& K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, UPlayer_Character_BP_C* CallFunc_GetActorOfClass_ReturnValue, StartMusicIntroCutscene__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2);
}

#endif
