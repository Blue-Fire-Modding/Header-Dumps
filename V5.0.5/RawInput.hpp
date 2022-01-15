#ifndef UE4SS_SDK_RawInput_HPP
#define UE4SS_SDK_RawInput_HPP

class URawInputFunctionLibrary : UBlueprintFunctionLibrary
{

    TArray<FRegisteredDeviceInfo> GetRegisteredDevices();
}

class URawInputSettings : UDeveloperSettings
{
    TArray<FRawInputDeviceConfiguration> DeviceConfigurations;
    bool bRegisterDefaultDevice;
}

struct URegisteredDeviceInfo
{
    int32 Handle;
    int32 VendorID;
    int32 ProductID;
    FString DeviceName;
}

struct URawInputDeviceConfiguration
{
    FString VendorID;
    FString ProductID;
    TArray<FRawInputDeviceAxisProperties> AxisProperties;
    TArray<FRawInputDeviceButtonProperties> ButtonProperties;
}

struct URawInputDeviceButtonProperties
{
    uint8 bEnabled;
    FKey Key;
}

struct URawInputDeviceAxisProperties
{
    uint8 bEnabled;
    FKey Key;
    uint8 bInverted;
    uint8 bGamepadStick;
    float Offset;
}

#endif
