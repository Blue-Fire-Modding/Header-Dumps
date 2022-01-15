#ifndef UE4SS_SDK_Serialization_HPP
#define UE4SS_SDK_Serialization_HPP

struct UStructSerializerTestStruct
{
    FStructSerializerNumericTestStruct Numerics;
    FStructSerializerBooleanTestStruct Booleans;
    FStructSerializerObjectTestStruct Objects;
    FStructSerializerBuiltinTestStruct Builtins;
    FStructSerializerArrayTestStruct Arrays;
    FStructSerializerMapTestStruct Maps;
    FStructSerializerSetTestStruct Sets;
}

struct UStructSerializerSetTestStruct
{
    TSet<FString> StrSet;
    TSet<int32> IntSet;
    TSet<FName> NameSet;
    TSet<FStructSerializerBuiltinTestStruct> StructSet;
}

struct UStructSerializerBuiltinTestStruct
{
    FGuid Guid;
    FName Name;
    FString String;
    FText Text;
    FVector Vector;
    FVector4 Vector4;
    FRotator Rotator;
    FQuat Quat;
    FColor Color;
}

struct UStructSerializerMapTestStruct
{
    TMap<int32, FString> IntToStr;
    TMap<FString, FString> StrToStr;
    TMap<FString, FVector> StrToVec;
    TMap<FString, FStructSerializerBuiltinTestStruct> StrToStruct;
}

struct UStructSerializerArrayTestStruct
{
    TArray<int32> Int32Array;
    TArray<uint8> ByteArray;
    int32 StaticSingleElement;
    int32 StaticInt32Array;
    float StaticFloatArray;
    TArray<FVector> VectorArray;
    TArray<FStructSerializerBuiltinTestStruct> StructArray;
}

struct UStructSerializerObjectTestStruct
{
    UClass* Class;
    TSubclassOf<UMetaData> SubClass;
    TSoftClassPtr<UMetaData> SoftClass;
    UObject* Object;
    TWeakObjectPtr<UMetaData> WeakObject;
    TSoftObjectPtr<UMetaData> SoftObject;
    FSoftClassPath ClassPath;
    FSoftObjectPath ObjectPath;
}

struct UStructSerializerBooleanTestStruct
{
    bool BoolFalse;
    bool BoolTrue;
    uint8 Bitfield0;
    uint8 Bitfield1;
    uint8 Bitfield2Set;
    uint8 Bitfield3;
    uint8 Bitfield4Set;
    uint8 Bitfield5Set;
    uint8 Bitfield6;
    uint8 Bitfield7Set;
}

struct UStructSerializerNumericTestStruct
{
    int8 Int8;
    int16 Int16;
    int32 Int32;
    int64 Int64;
    uint8 UInt8;
    uint16 UInt16;
    uint32 UInt32;
    uint64 UInt64;
    float Float;
    double Double;
}

struct UStructSerializerByteArray
{
    int32 Dummy1;
    TArray<uint8> ByteArray;
    int32 Dummy2;
    TArray<int8> Int8Array;
    int32 Dummy3;
}

#endif