#ifndef UE4SS_SDK_BeginPlay_GameIntro_HPP
#define UE4SS_SDK_BeginPlay_GameIntro_HPP

class USequenceDirector_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SequenceEvent__ENTRYPOINTSequenceDirector_2(class AGlobal_Controller_C* Global_Controller);
    void SequenceEvent__ENTRYPOINTSequenceDirector_1(class AGlobal_Controller_C* Global_Controller);
    void SequenceEvent__ENTRYPOINTSequenceDirector_0(class AGlobal_Controller_C* Global_Controller);
    void Global_Controller_Event_0(class AGlobal_Controller_C* Global_Controller);
    void Global_Controller_Event_1(class AGlobal_Controller_C* Global_Controller);
    void Global_Controller_Event_2(class AGlobal_Controller_C* Global_Controller);
    void Global_Controller_Event_3(class AGlobal_Controller_C* Global_Controller);
    void Global_Controller_Event_4(class AGlobal_Controller_C* Global_Controller);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
};

#endif
