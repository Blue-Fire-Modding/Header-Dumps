#ifndef UE4SS_SDK_SoundUtilities_HPP
#define UE4SS_SDK_SoundUtilities_HPP

class USoundSimple : USoundBase
{
    TArray<FSoundVariation> Variations;
    USoundWave* SoundWave;
}

class USoundUtilitiesBPFunctionLibrary : UBlueprintFunctionLibrary
{

    float GetPitchScaleFromMIDIPitch(int32 BaseMidiNote, int32 TargetMidiNote);
    int32 GetMIDIPitchFromFrequency(float Frequency);
    float GetFrequencyFromMIDIPitch(int32 MidiNote);
    float GetBeatTempo(float BeatsPerMinute, int32 BeatMultiplier, int32 DivisionsOfWholeNote);
}

struct USoundVariation
{
    USoundWave* SoundWave;
    float ProbabilityWeight;
    FVector2D VolumeRange;
    FVector2D PitchRange;
}

#endif
