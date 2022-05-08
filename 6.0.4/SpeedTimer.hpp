#ifndef UE4SS_SDK_SpeedTimer_HPP
#define UE4SS_SDK_SpeedTimer_HPP

class USpeedTimer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Pause;
    class UCanvasPanel* CanvasPanel_0;
    class UImage* Image_147;
    class UImage* PauseImg;
    class UTextBlock* TimeTxt;
    float TickTimer;
    class APlayer_Character_BP_C* Player;
    bool Block Timer;

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void TempRemove();
    void TempReAdd();
    void Play();
    void Stop();
    void Destruct();
    void SpeedTimer Control(bool Block Timer);
    void ExecuteUbergraph_SpeedTimer(int32 EntryPoint);
};

#endif
