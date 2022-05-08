#ifndef UE4SS_SDK_Shakes_HPP
#define UE4SS_SDK_Shakes_HPP

class UShakes_C : public UBlueprintFunctionLibrary
{

    void GlobalCamShake(TSubclassOf<class UCameraShake> Shake, bool EpicenterIsPlayer, FVector Epicenter, float InnerRadius, float OuterRadius, float Falloff, class UObject* __WorldContext);
};

#endif
