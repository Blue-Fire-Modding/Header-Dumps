#ifndef UE4SS_SDK_DT_Master_HPP
#define UE4SS_SDK_DT_Master_HPP

class UDT_Master_C : public UDamageType
{
    class UAkAudioEvent* Event;
    bool Reset;
    bool CanBeShieldBlocked;
    bool HitLaunch;
    bool IsEnemy;

};

#endif
