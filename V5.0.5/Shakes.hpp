#ifndef UE4SS_SDK_Shakes_HPP
#define UE4SS_SDK_Shakes_HPP

class UShakes_C : UBlueprintFunctionLibrary
{

    void GlobalCamShake(TSubclassOf<UCameraShake> Shake, bool EpicenterIsPlayer, FVector Epicenter, float InnerRadius, float OuterRadius, float Falloff, UObject* __WorldContext, UBlueFire_Game_Instance_C* GameInstance, bool Temp_bool_Variable, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector K2Node_Select_Default, bool CallFunc_IsRobiValid_ReturnValue);
}

#endif
