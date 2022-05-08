#ifndef UE4SS_SDK_TargetLock_HPP
#define UE4SS_SDK_TargetLock_HPP

class UTargetLock_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Lock;
    class UWidgetAnimation* Loop;
    class UImage* Backup;

    void Stop();
    void ModifierOn();
    void ModifierOff();
    void Set Visibility(bool Visible);
    void LockEv();
    void CheckDash(bool Index);
    void ExecuteUbergraph_TargetLock(int32 EntryPoint);
};

#endif
