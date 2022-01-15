#ifndef UE4SS_SDK_Dance_Platform_Bp_HPP
#define UE4SS_SDK_Dance_Platform_Bp_HPP

class ADance_Platform_Bp_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* Box;
    UStaticMeshComponent* Dance_Platform;
    TEnumAsByte<E_Emotes::Type> Emote;
    ADance_Platform_Bp_C* Target;
    AChest_Master_C* Chest;
    bool Completed;
    FString ID;
    bool Platform;
    AActor* Camera;
    APlayer_Character_BP_C* PlayerCharacter;

    void UserConstructionScript(FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue);
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void Emoted(uint8 NewParam);
    void Run();
    void Materials();
    void ExecuteUbergraph_Dance_Platform_Bp(int32 EntryPoint, int32 CallFunc_PostEventAtLocation_ReturnValue, UTexture* Temp_object_Variable, UTexture* Temp_object_Variable_1, UTexture* Temp_object_Variable_2, UTexture* Temp_object_Variable_3, UTexture* Temp_object_Variable_4, UTexture* Temp_object_Variable_5, UTexture* Temp_object_Variable_6, UTexture* Temp_object_Variable_7, UTexture* Temp_object_Variable_8, UTexture* Temp_object_Variable_9, UTexture* Temp_object_Variable_10, UTexture* Temp_object_Variable_11, UTexture* Temp_object_Variable_12, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, Emote__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UTexture* Temp_object_Variable_13, int32 Temp_int_Variable, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool CallFunc_IsRobiValid_ReturnValue, UTexture* Temp_object_Variable_14, AActor* K2Node_Event_OtherActor, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, uint8 K2Node_CustomEvent_NewParam, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, UTexture* Temp_object_Variable_15, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, int32 Temp_int_Variable_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, ADance_Platform_Bp_C* K2Node_Select_Default, float K2Node_Select_Default_1, bool K2Node_Select_Default_2, float CallFunc_Cutscene_OutputPin, float CallFunc_Cutscene_OutputPin_1, bool CallFunc_IsRobiValid_ReturnValue_2, UPlayerController* CallFunc_GetPlayerController_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, uint8 Temp_byte_Variable, UTexture* K2Node_Select_Default_3, UTexture* K2Node_Select_Default_4, int32 CallFunc_PostEventAtLocation_ReturnValue_1);
}

#endif
