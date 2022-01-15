#ifndef UE4SS_SDK_Door_BP_VoidGate_HPP
#define UE4SS_SDK_Door_BP_VoidGate_HPP

class ADoor_BP_VoidGate_C : UDoor_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float GlowTimeline_TurnOn_374DE063406956231E9A96B19DBD71DD;
    TEnumAsByte<ETimelineDirection::Type> GlowTimeline__Direction_374DE063406956231E9A96B19DBD71DD;
    UTimelineComponent* GlowTimeline;
    UMaterialInstanceDynamic* GlowDoor;
    APostProcessVolume* PostProcessVolume;

    void GlowTimeline__FinishedFunc();
    void GlowTimeline__UpdateFunc();
    void ReceiveBeginPlay();
    void Replay();
    void ExecuteUbergraph_Door_BP_VoidGate(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue);
}

#endif
