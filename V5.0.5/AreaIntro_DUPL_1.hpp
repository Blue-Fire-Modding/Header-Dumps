#ifndef UE4SS_SDK_AreaIntro_DUPL_1_HPP
#define UE4SS_SDK_AreaIntro_DUPL_1_HPP

class AAreaIntro_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* Billboard;
    UBoxComponent* Box;
    USceneComponent* Scene;
    TEnumAsByte<StreamingChunks::Type> CurrentChunk;
    TEnumAsByte<Areas::Type> Area;
    bool NotVisited;
    bool Music;
    bool MainArea;
    bool HideIfNotVisited;
    bool DoOnce;

    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void ExecuteUbergraph_AreaIntro(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, AActor* K2Node_Event_OtherActor, int32 CallFunc_PostEventAtLocation_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_IsClosed_Variable);
}

#endif
