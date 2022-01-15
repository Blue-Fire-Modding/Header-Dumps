#ifndef UE4SS_SDK_CastleExteriorEnd_HPP
#define UE4SS_SDK_CastleExteriorEnd_HPP

class USequenceDirector_C : ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SequenceEvent__ENTRYPOINTSequenceDirector_0(AGlobal_Controller_C* Global_Controller);
    void ParticleSystemComponent0_Event_0(UParticleSystemComponent* ParticleSystemComponent0, bool bReset);
    void Global_Controller_Event_0(AGlobal_Controller_C* Global_Controller);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint, AGlobal_Controller_C* K2Node_CustomEvent_Global_Controller, UParticleSystemComponent* K2Node_CustomEvent_ParticleSystemComponent0, bool K2Node_CustomEvent_bReset);
}

#endif
