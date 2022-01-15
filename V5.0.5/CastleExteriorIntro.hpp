#ifndef UE4SS_SDK_CastleExteriorIntro_HPP
#define UE4SS_SDK_CastleExteriorIntro_HPP

class USequenceDirector_C : ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SequenceEvent__ENTRYPOINTSequenceDirector_0(UParticleSystemComponent* ParticleSystemComponent0);
    void ParticleSystemComponent0_Event_0(UParticleSystemComponent* ParticleSystemComponent0, bool bReset);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint, UParticleSystemComponent* K2Node_CustomEvent_ParticleSystemComponent0, bool K2Node_CustomEvent_bReset);
}

#endif
