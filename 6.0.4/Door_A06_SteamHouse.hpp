#ifndef UE4SS_SDK_Door_A06_SteamHouse_HPP
#define UE4SS_SDK_Door_A06_SteamHouse_HPP

class ADoor_A06_SteamHouse_C : public ADoor_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_SpikeFence;
    class UStaticMeshComponent* StaticMesh1_0;
    float Move_Door_Steamhouse_Position_DCD25067449562CADF5339971BB82C6A;
    TEnumAsByte<ETimelineDirection::Type> Move_Door_Steamhouse__Direction_DCD25067449562CADF5339971BB82C6A;
    class UTimelineComponent* Move Door Steamhouse;
    FVector OriginalLocation_StaticMesh;
    float Offset Door;

    void UserConstructionScript();
    void Move Door Steamhouse__FinishedFunc();
    void Move Door Steamhouse__UpdateFunc();
    void OpenTimelineRun();
    void CloseTimelineRun();
    void InstantOpenExtra();
    void Build Extra 1();
    void ReceiveBeginPlay();
    void Force Close();
    void ExecuteUbergraph_Door_A06_SteamHouse(int32 EntryPoint);
};

#endif
