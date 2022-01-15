#ifndef UE4SS_SDK_EnemyHealth_HPP
#define UE4SS_SDK_EnemyHealth_HPP

class UEnemyHealth_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* LifeFXBar;
    USizeBox* SizeBox_1;
    UMaterialInstanceDynamic* LifeBarMat;
    float Percent;
    float LerpPercent;
    float Size;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetHealth(float Health, float Max Health);
    void TempRemove();
    void TempReAdd();
    void ExecuteUbergraph_EnemyHealth(int32 EntryPoint, RemoveUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AddUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float K2Node_CustomEvent_Health, float K2Node_CustomEvent_Max_Health, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, float CallFunc_FInterpTo_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess);
}

#endif
