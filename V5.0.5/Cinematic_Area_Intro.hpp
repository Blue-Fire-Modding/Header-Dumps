#ifndef UE4SS_SDK_Cinematic_Area_Intro_HPP
#define UE4SS_SDK_Cinematic_Area_Intro_HPP

class ACinematic_Area_Intro_C : ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UArrowComponent* Arrow;
    bool Enable;
    ULevelSequence* Sequence_0;
    TEnumAsByte<StreamingChunks::Type> Chunk;
    bool NotVisited;
    bool MoveTo;
    bool FadeIn;
    bool FadeOut;
    float FadeInDuration;
    AActor* TargetA;
    bool ShowHudEnd;
    bool CustomID;
    bool bUseMusicFix;
    FString MusixFixID;
    bool BindPlayerToFixTimer;

    void UserConstructionScript(FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue);
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void StartCutscene();
    void End();
    void AreaName();
    void SkipCutscene();
    void Write Custom ID();
    void Cutscene Begin Play Used();
    void CustomEvent_0();
    void ExecuteUbergraph_Cinematic_Area_Intro(int32 EntryPoint, float CallFunc_Cutscene_OutputPin, APawn* CallFunc_GetPlayerPawn_ReturnValue, LevelLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AActor* K2Node_Event_OtherActor, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_Cutscene_OutputPin_1, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, float CallFunc_Cutscene_OutputPin_2, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_2, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
}

#endif
