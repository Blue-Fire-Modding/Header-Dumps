#ifndef UE4SS_SDK_LifeStatue_HPP
#define UE4SS_SDK_LifeStatue_HPP

class ALifeStatue_C : UCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    UDecalComponent* Decal;
    UStaticMeshComponent* A01_MinerShrine;
    UChildActorComponent* ChildActor;
    UMaterialInstanceDynamic* Glow Material;
    UMaterialInstanceDynamic* Material_Stone;
    UMaterialInstanceDynamic* Material Glow;

    void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void VFX Glow(bool Show);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_LifeStatue(int32 EntryPoint, bool Temp_bool_Variable, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, bool K2Node_CustomEvent_Show, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, UMaterialInstanceDynamic* K2Node_Select_Default);
}

#endif
