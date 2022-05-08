#ifndef UE4SS_SDK_Cutscenes_HPP
#define UE4SS_SDK_Cutscenes_HPP

class UCutscenes_C : public UBlueprintFunctionLibrary
{

    void ToggleHud(bool Enable, class UObject* __WorldContext);
    void GetInput(class UObject* __WorldContext, bool& Input);
    void InputCutscene(bool Enable, bool Hide/Show HUD, bool CamAllowed, bool KeepEnemiesFrozen, bool AffectTimer, bool LoseSpinCharge, bool DontDisableWallGrab, class UObject* __WorldContext);
};

#endif
