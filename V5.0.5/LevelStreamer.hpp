#ifndef UE4SS_SDK_LevelStreamer_HPP
#define UE4SS_SDK_LevelStreamer_HPP

class ALevelStreamer_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* LevelStreamingBound_SM;
    USceneComponent* DefaultSceneRoot;
    TArray<TEnumAsByte<Areas::Type>> Area;
    bool Load;
    TArray<FName> Level;
    APlayer_Character_BP_C* Player;

    void UserConstructionScript();
    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_LevelStreamer(int32 EntryPoint, APawn* CallFunc_GetPlayerPawn_ReturnValue, AActor* K2Node_Event_OtherActor, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess);
}

#endif
