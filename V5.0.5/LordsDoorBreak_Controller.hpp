#ifndef UE4SS_SDK_LordsDoorBreak_Controller_HPP
#define UE4SS_SDK_LordsDoorBreak_Controller_HPP

class ALordsDoorBreak_Controller_C : ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* Billboard_0;
    float Glow_Eyes_Intensity_2D424D9144F55954B4B54B8C889EF343;
    TEnumAsByte<ETimelineDirection::Type> Glow_Eyes__Direction_2D424D9144F55954B4B54B8C889EF343;
    UTimelineComponent* Glow Eyes;
    AActor* TargetA;
    int32 KilledBosses;
    bool IsFinal;
    bool InCutscene;
    ULevelSequence* Cutscene Normal;
    ULevelSequence* Cutscene Final;
    ADoor_BP_C* Door;
    AStaticMeshActor* Mesh_Sirion;
    AStaticMeshActor* Mesh_Samael;
    AStaticMeshActor* Mesh_Beira;
    UMaterialInstanceDynamic* MatSirion;
    UMaterialInstanceDynamic* MatSamael;
    UMaterialInstanceDynamic* MatBeira;
    bool GlowSirion;
    bool GlowSamael;
    bool GlowBeira;
    int32 GlowIndex;
    bool IsCheckBoss;

    void Glow Eyes__FinishedFunc();
    void Glow Eyes__UpdateFunc();
    void ReceiveBeginPlay();
    void Defeat Boss();
    void Finish Cutscene();
    void Close Dialog();
    void CutsceneTXT_01();
    void CutsceneTXT_02();
    void CutsceneTXT_03();
    void TriggerTextLine(const TArray<FText>& TextLines);
    void CutscenePowerOn();
    void CutsceneOpenDoor();
    void UmbraAnimLords();
    void UmbraAnimLordsEnd();
    void SkipCutscene();
    void Check Boss Mask();
    void LevelLoaded();
    void ExecuteUbergraph_LordsDoorBreak_Controller(int32 EntryPoint, FString Temp_string_Variable, FString Temp_string_Variable_1, FString Temp_string_Variable_2, int32 Temp_int_Variable, FString Temp_string_Variable_3, FString Temp_string_Variable_4, FString Temp_string_Variable_5, LevelLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable_1, FString Temp_string_Variable_6, FString Temp_string_Variable_7, FString Temp_string_Variable_8, int32 Temp_int_Variable_2, UAkAudioEvent* Temp_object_Variable, const FString Temp_string_Variable_9, UAkAudioEvent* Temp_object_Variable_1, int32 Temp_int_Variable_3, bool Temp_bool_Variable, int32 Temp_int_Variable_4, APawn* CallFunc_GetPlayerPawn_ReturnValue, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Array_RemoveItem_ReturnValue, float CallFunc_Cutscene_OutputPin, float CallFunc_Cutscene_OutputPin_1, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, int32 Temp_int_Variable_5, bool Temp_bool_Variable_1, const TArray<FText>& K2Node_MakeArray_Array, const TArray<FText>& K2Node_MakeArray_Array_1, const TArray<FText>& K2Node_MakeArray_Array_2, const TArray<FText>& K2Node_CustomEvent_TextLines, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, FString CallFunc_CheckState_Same_ID_3, bool CallFunc_CheckState_Used_3, int32 Temp_int_Variable_6, bool CallFunc_EqualEqual_IntInt_ReturnValue, ULevelSequence* K2Node_Select_Default, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, UMaterialInstanceDynamic* K2Node_Select_Default_1, bool CallFunc_IsRobiValid_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, UAkAudioEvent* K2Node_Select_Default_2, FString CallFunc_CheckState_Same_ID_4, bool CallFunc_CheckState_Used_4, int32 CallFunc_PostEventAtLocation_ReturnValue_2, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FString K2Node_Select_Default_3, FString K2Node_Select_Default_4, FString CallFunc_MakeLiteralString_ReturnValue, FString K2Node_Select_Default_5, FString CallFunc_CheckState_Same_ID_5, bool CallFunc_CheckState_Used_5, FString CallFunc_MakeLiteralString_ReturnValue_1, FString CallFunc_MakeLiteralString_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_CheckState_Same_ID_6, bool CallFunc_CheckState_Used_6, FString CallFunc_CheckState_Same_ID_7, bool CallFunc_CheckState_Used_7, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_MakeLiteralString_ReturnValue_3, FString CallFunc_CheckState_Same_ID_8, bool CallFunc_CheckState_Used_8, FString CallFunc_CheckState_Same_ID_9, bool CallFunc_CheckState_Used_9, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_CheckState_Same_ID_10, bool CallFunc_CheckState_Used_10, float CallFunc_Cutscene_OutputPin_2);
}

#endif
