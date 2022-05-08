#ifndef UE4SS_SDK_SteamHouse_Machines_HPP
#define UE4SS_SDK_SteamHouse_Machines_HPP

class ASteamHouse_Machines_C : public AMechanics_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBillboardComponent* Billboard;
    bool DebugMode;
    TArray<class ASteamHouseActioner_C*> Hits;
    int32 Amount;
    class AAreaTransition_Elevator_C* Elevator;
    class ANPC_Mira_C* Mira;

    void Count(bool Silent);
    void ReceiveBeginPlay();
    void Update Quest();
    void ExecuteUbergraph_SteamHouse_Machines(int32 EntryPoint);
};

#endif
