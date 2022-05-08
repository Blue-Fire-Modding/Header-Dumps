#ifndef UE4SS_SDK_BlueFireHud_HPP
#define UE4SS_SDK_BlueFireHud_HPP

class ABlueFireHud_C : public AHUD
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class UBlueFire_Game_Instance_C* GameInstance;
    FString Text;

    void Set Void Debugger(bool bEnable, class UBlueFire_Game_Instance_C* Game Instance);
    void ReceiveDrawHUD(int32 SizeX, int32 SizeY);
    void ExecuteUbergraph_BlueFireHud(int32 EntryPoint);
};

#endif
