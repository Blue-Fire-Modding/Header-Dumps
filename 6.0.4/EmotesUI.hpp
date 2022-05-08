#ifndef UE4SS_SDK_EmotesUI_HPP
#define UE4SS_SDK_EmotesUI_HPP

class UEmotesUI_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIn;
    class UImage* Background;
    class UScrollBox* EmoteContainer;
    class UEmoteSlot_C* EmoteSlot;
    class UEmoteSlot_C* EmoteSlot_0;
    class UEmoteSlot_C* EmoteSlot_1;
    class UEmoteSlot_C* EmoteSlot_2;
    class UEmoteSlot_C* EmoteSlot_3;
    class UEmoteSlot_C* EmoteSlot_4;
    class UEmoteSlot_C* EmoteSlot_5;
    class USelectCommands_C* SelectCommands;
    class AEmote_Controller_C* Controller;
    TArray<class UEmoteSlot_C*> Emotes;
    int32 SelectedEmote;
    class APlayer_Character_BP_C* Player;
    class APlayer_Camera_Control_C* CamControl;

    void Construct();
    void Movement(bool Right);
    void Play();
    void PCGamepadChange();
    void ReRun();
    void Remove();
    void Play Selected Emote();
    void RemoveEvent();
    void FadeInAnim();
    void TempRemove();
    void TempReAdd();
    void ExecuteUbergraph_EmotesUI(int32 EntryPoint);
};

#endif
