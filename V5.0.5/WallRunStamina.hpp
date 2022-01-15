#ifndef UE4SS_SDK_WallRunStamina_HPP
#define UE4SS_SDK_WallRunStamina_HPP

class UWallRunStamina_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Bar;
    UMaterialInstanceDynamic* Material;
    float Value;
    float LerpValue;
    bool InVoid;

    void Construct();
    void Update(float Value);
    void StartUpdate(bool Void);
    void UpdateLocation();
    void StopUpdate();
    void Hit(float AmountReduce);
    void Land(bool Instant);
    void Refill();
    void Hide();
    void TempRemove();
    void TempReAdd();
    void ExecuteUbergraph_WallRunStamina(int32 EntryPoint, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FLinearColor CallFunc_SelectColor_ReturnValue, RemoveUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AddUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float K2Node_CustomEvent_Value, FVector2D CallFunc_GetViewportSize_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue, FVector2D CallFunc_Divide_Vector2DVector2D_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, FVector2D CallFunc_Multiply_Vector2DVector2D_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_CustomEvent_Void, FVector CallFunc_Add_VectorVector_ReturnValue, FVector2D CallFunc_ProjectWorldLocationToScreen_ScreenLocation, bool CallFunc_ProjectWorldLocationToScreen_ReturnValue, FVector2D CallFunc_Subtract_Vector2DVector2D_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, float K2Node_CustomEvent_AmountReduce, bool CallFunc_IsRobiValid_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, bool K2Node_CustomEvent_Instant, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, FLinearColor CallFunc_SelectColor_ReturnValue_1, bool CallFunc_IsInViewport_ReturnValue);
}

#endif
