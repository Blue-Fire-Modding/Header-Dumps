#ifndef UE4SS_SDK_LoadScreen_HPP
#define UE4SS_SDK_LoadScreen_HPP

class ULoadScreen_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Hint;
    UWidgetAnimation* Fade;
    UTextBlock* HintText;
    UImage* Image_0;
    UImage* Image_111;
    UImage* Image_128;
    UImage* Image_193;
    UTextBlock* LoadText;
    UTextBlock* TextBlock_401;
    FLoadScreen_CPlay Play;
    void Play();
    bool ReadyToPlay;
    float Delay Start Input;
    UBlueFire_Game_Instance_C* GameInstance;
    TArray<FText> Hints;
    ALoadScreenInput_C* Input;

    void Load();
    void Construct();
    void ChangeInput();
    void ChangeHint();
    void FirstHint();
    void PreConstruct(bool IsDesignTime);
    void Start LoadScreen();
    void ExecuteUbergraph_LoadScreen(int32 EntryPoint, bool CallFunc_IsRobiValid_ReturnValue, bool Temp_bool_Variable, PCGamepadChange__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FVector2D Temp_struct_Variable, FVector2D Temp_struct_Variable_1, int32 Temp_int_Variable, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ALoadScreenInput_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UMaterialInstance* CallFunc_GetUIPlatform_UIMaterial, bool CallFunc_GetUIPlatform_NonSquareSize, FVector2D CallFunc_GetUIPlatform_Size, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, FVector2D K2Node_Select_Default, FText CallFunc_MakeLiteralText_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue_2, FText CallFunc_MakeLiteralText_ReturnValue_3, FText CallFunc_MakeLiteralText_ReturnValue_4, FText CallFunc_MakeLiteralText_ReturnValue_5, FText CallFunc_MakeLiteralText_ReturnValue_6, FText CallFunc_MakeLiteralText_ReturnValue_7, FText CallFunc_MakeLiteralText_ReturnValue_8, FText CallFunc_MakeLiteralText_ReturnValue_9, FText CallFunc_MakeLiteralText_ReturnValue_10, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, FText CallFunc_MakeLiteralText_ReturnValue_11, int32 CallFunc_RandomInteger_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_12, FText CallFunc_MakeLiteralText_ReturnValue_13, FText CallFunc_MakeLiteralText_ReturnValue_14, FText CallFunc_MakeLiteralText_ReturnValue_15, FText CallFunc_MakeLiteralText_ReturnValue_16, FText CallFunc_MakeLiteralText_ReturnValue_17, FText CallFunc_MakeLiteralText_ReturnValue_18, FText CallFunc_MakeLiteralText_ReturnValue_19, FText K2Node_Select_Default_1);
    void Play__DelegateSignature();
}

#endif
