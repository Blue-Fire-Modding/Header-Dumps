enum class EMongoReadConcernLevel
{
    Local = 0,
    Majority = 1,
    Linearizable = 2,
    ServerDefault = 3,
    Unknown = 4,
    Available = 5,
    Snapshot = 6,
    EMongoReadConcernLevel_MAX = 7,
}

enum class EDocumentValueType
{
    Int32 = 0,
    Int64 = 1,
    Float = 2,
    String = 3,
    Boolean = 4,
    Array = 5,
    ObjectId = 6,
    Json = 7,
    Map = 8,
    Null = 9,
    Undefined = 10,
    EDocumentValueType_MAX = 11,
}

