#ifndef UE4SS_SDK_HolyGodStone_HPP
#define UE4SS_SDK_HolyGodStone_HPP

class AHolyGodStone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAkComponent* VoidDLCMusicMonolith;
    class UAkComponent* VoidDLCMusic;
    class UAkComponent* Play_Silver_Shard_Last_Collect_Void;
    class UAkComponent* SilverShard;
    class UStaticMeshComponent* StaticMesh;
    class UAkComponent* Ak;
    class UPointLightComponent* PointLight;
    class UBoxComponent* Box1;
    class USceneComponent* DefaultSceneRoot;
    float Timeline_0_Z_D3CD70F44A180B20CD06DC974877B396;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_D3CD70F44A180B20CD06DC974877B396;
    class UTimelineComponent* Timeline_0;
    FString ID;
    bool Used;
    class UPickUp_Action_UI_C* ActionWidget;
    bool IsDLC;
    FString Name;
    FGodStone_Structure GodStoneInfo;
    TEnumAsByte<VoidMusicType::Type> VoidMusicType;
    TArray<class ASilverShard_C*> Shards;
    class UCounter_C* CounterUI;
    int32 Amount;
    float ZOrigin;
    float StartMusicDelay;
    class APlayer_Character_BP_C* Player;
    bool GodstoneFinded;
    FHolyGodStone_CStingerTriggerHoly StingerTriggerHoly;
    void StingerTriggerHoly();
    FHolyGodStone_CStingerTriggerHolyTwo StingerTriggerHolyTwo;
    void StingerTriggerHolyTwo();
    bool VoidMusicNew;
    bool CanLevitate;
    FText TextUsed;
    FText Text;
    TMap<int32, FString> GA VoidNameMap;
    float Timer;
    bool TimerOn;
    FGAVoid_Struct GA Struct;
    bool SaveData;
    bool UseGOG;

    void CheckQuestAllVoids();
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void InpActEvt_PC_Interact_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_0(FKey Key);
    void Begin Play Counter();
    void Show HUD();
    void Update Amount();
    void Remove HUD();
    void ReceiveBeginPlay();
    void BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void RemoveActionW();
    void Levitate();
    void AdjustRtpc();
    void Complete Godstone();
    void UpdateGodStone();
    void CheckPersistence();
    void Callback(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
    void FakeCallback();
    void CallbackMonolith(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
    void Custom Begin Overlap();
    void Custom End Overlap();
    void Force Exit Void();
    void SkippedCutscene();
    void VoidDeath();
    void VoidExit(bool Won);
    void Add HolyGodStone();
    void OnRemovePickupUI(bool bRemove);
    void ExecuteUbergraph_HolyGodStone(int32 EntryPoint);
    void StingerTriggerHolyTwo__DelegateSignature();
    void StingerTriggerHoly__DelegateSignature();
};

#endif
