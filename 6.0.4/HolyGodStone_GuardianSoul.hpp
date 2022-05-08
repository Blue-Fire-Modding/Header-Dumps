#ifndef UE4SS_SDK_HolyGodStone_GuardianSoul_HPP
#define UE4SS_SDK_HolyGodStone_GuardianSoul_HPP

class AHolyGodStone_GuardianSoul_C : public AHolyGodStone_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMaterialBillboardComponent* MB_Glow;
    class UParticleSystemComponent* P_CovenantSouls;
    float Darkness_Darkness_9593D9104E386D79EAB1B088D876F740;
    TEnumAsByte<ETimelineDirection::Type> Darkness__Direction_9593D9104E386D79EAB1B088D876F740;
    class UTimelineComponent* Darkness;
    class UMaterialInterface* DisappearNewMat;
    TArray<class UMaterialInterface*> DisappearOldMats;

    void CheckQuestFireGuardDoor();
    void Darkness__FinishedFunc();
    void Darkness__UpdateFunc();
    void InpActEvt_PC_Interact_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_0(FKey Key);
    void Change Material(bool New Material);
    void Set New Material(class UMaterialInterface* Material);
    void Custom Begin Overlap();
    void Custom End Overlap();
    void Exit From Void();
    void Grab Item();
    void Collect Guardian Key();
    void Force Exit Void();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_HolyGodStone_GuardianSoul(int32 EntryPoint);
};

#endif
