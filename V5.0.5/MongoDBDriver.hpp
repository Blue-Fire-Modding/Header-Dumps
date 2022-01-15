#ifndef UE4SS_SDK_MongoDBDriver_HPP
#define UE4SS_SDK_MongoDBDriver_HPP

#include "MongoDBDriver_enums.hpp"

class UMongoClient : UObject
{

    UMongoClient* CreateClient(FString Protocole, FString Address, int32 Port, FString AdditionalParameters);
}

class UDatabaseConnector : UInterface
{
}

class UMongoBlueprintLibrary : UBlueprintFunctionLibrary
{

    uint8 ToUint8(const FDocumentValue& DocumentValue);
    FString ToString(const FDocumentValue& DocumentValue);
    FObjectId ToObjectId(const FDocumentValue& DocumentValue);
    TMap<FString, FDocumentValue> ToMap(const FDocumentValue& DocumentValue);
    FString ToJson(const FDocumentValue& DocumentValue);
    int64 ToInt64(const FDocumentValue& DocumentValue);
    int32 ToInt32(const FDocumentValue& DocumentValue);
    float ToFloat(const FDocumentValue& DocumentValue);
    bool ToBool(const FDocumentValue& DocumentValue);
    TArray<FDocumentValue> ToArray(const FDocumentValue& DocumentValue);
    void SwitchOnType(const FDocumentValue& DocumentValue, EDocumentValueType& Branches);
    FString ObjectIdToString(const FObjectId& ObjectId);
    FObjectId MakeObjectId(FString Value);
    bool IsUndefined(const FDocumentValue& DocumentValue);
    bool IsNull(const FDocumentValue& DocumentValue);
    EDocumentValueType GetType(const FDocumentValue& DocumentValue);
    FDocumentValue FromUint8(uint8 Value);
    FDocumentValue FromString(FString Value);
    FDocumentValue FromObjectId(const FObjectId& Value);
    FDocumentValue FromNull();
    FDocumentValue FromMap(const TMap<FString, FDocumentValue>& Value);
    FDocumentValue FromJSON(FString Value);
    FDocumentValue FromInt64(int64 Value);
    FDocumentValue FromInt32(int32 Value);
    FDocumentValue FromFloat(float Value);
    FDocumentValue FromBool(bool bValue);
    FDocumentValue FromArray(const TArray<FDocumentValue>& Value);
}

class UMongoDbAsyncNodeBase : UBlueprintAsyncActionBase
{
    TScriptInterface<IDatabaseConnector> m_Connector;
}

class UMongoDbListDatabases : UMongoDbAsyncNodeBase
{
    FMongoDbListDatabasesDone Done;
    void DynMultListDatabases(const TArray<FDatabaseData>& Databases);
    FMongoDbListDatabasesFailed Failed;
    void DynMultListDatabases(const TArray<FDatabaseData>& Databases);

    UMongoDbListDatabases* ListDatabases(InterfaceProperty Connector);
}

class UMongoDbCreateCollection : UMongoDbAsyncNodeBase
{
    FMongoDbCreateCollectionDone Done;
    void DynMutlMongo();
    FMongoDbCreateCollectionFailed Failed;
    void DynMutlMongo();

    UMongoDbCreateCollection* CreateCollection(InterfaceProperty Connector, FString DatabaseName, FString CollectionName);
}

class UMongoDbDropDatabase : UMongoDbAsyncNodeBase
{
    FMongoDbDropDatabaseDone Done;
    void DynMutlMongo();
    FMongoDbDropDatabaseFailed Failed;
    void DynMutlMongo();

    UMongoDbDropDatabase* DropDatabase(InterfaceProperty Connector, FString DatabaseName);
}

class UMongoDbDropCollection : UMongoDbAsyncNodeBase
{
    FMongoDbDropCollectionDone Done;
    void DynMutlMongo();
    FMongoDbDropCollectionFailed Failed;
    void DynMutlMongo();

    UMongoDbDropCollection* DropCollection(InterfaceProperty Connector, FString DatabaseName, FString CollectionName);
}

class UMongoDbInsertOne : UMongoDbAsyncNodeBase
{
    FMongoDbInsertOneDone Done;
    void DynMultInsert(const FMongoInsertResult& Result);
    FMongoDbInsertOneFailed Failed;
    void DynMultInsert(const FMongoInsertResult& Result);

    UMongoDbInsertOne* InsertOne(InterfaceProperty Connector, FString DatabaseName, FString CollectionName, FDocumentValue Value);
}

class UMongoDbInsertMany : UMongoDbAsyncNodeBase
{
    FMongoDbInsertManyDone Done;
    void DynMutlMongo();
    FMongoDbInsertManyFailed Failed;
    void DynMutlMongo();

    UMongoDbInsertMany* InsertMany(InterfaceProperty Connector, FString DatabaseName, FString CollectionName, TArray<FDocumentValue> Value);
}

class UMongoDbListIndexes : UMongoDbAsyncNodeBase
{
    FMongoDbListIndexesDone Done;
    void DynMutlMongoIndexes(const TArray<FDatabaseIndex>& Indexes);
    FMongoDbListIndexesFailed Failed;
    void DynMutlMongoIndexes(const TArray<FDatabaseIndex>& Indexes);

    UMongoDbListIndexes* ListIndexes(InterfaceProperty Connector, FString DatabaseName, FString CollectionName);
}

class UMongoDbRenameCollection : UMongoDbAsyncNodeBase
{
    FMongoDbRenameCollectionDone Done;
    void DynMutlMongo();
    FMongoDbRenameCollectionFailed Failed;
    void DynMutlMongo();

    UMongoDbRenameCollection* RenameCollection(InterfaceProperty Connector, FString DatabaseName, FString CollectionName, FString NewCollectionName, bool bOverwriteExisting);
}

class UMongoDbReplaceOne : UMongoDbAsyncNodeBase
{
    FMongoDbReplaceOneDone Done;
    void DynMutlMongo();
    FMongoDbReplaceOneFailed Failed;
    void DynMutlMongo();

    UMongoDbReplaceOne* ReplaceOne(InterfaceProperty Connector, FString DatabaseName, FString CollectionName, FDocumentValue Filter, FDocumentValue Replacement);
}

class UMongoDbUpdateMany : UMongoDbAsyncNodeBase
{
    FMongoDbUpdateManyDone Done;
    void DynMutlMongo();
    FMongoDbUpdateManyFailed Failed;
    void DynMutlMongo();

    UMongoDbUpdateMany* UpdateMany(InterfaceProperty Connector, FString DatabaseName, FString CollectionName, FDocumentValue Filter, FDocumentValue Update);
}

class UMongoDbUpdateOne : UMongoDbAsyncNodeBase
{
    FMongoDbUpdateOneDone Done;
    void DynMutlMongo();
    FMongoDbUpdateOneFailed Failed;
    void DynMutlMongo();

    UMongoDbUpdateOne* UpdateOne(InterfaceProperty Connector, FString DatabaseName, FString CollectionName, FDocumentValue Filter, FDocumentValue Update);
}

class UMongoDbCountDocuments : UMongoDbAsyncNodeBase
{
    FMongoDbCountDocumentsDone Done;
    void DynMutlMongoCounts(const int64 Count);
    FMongoDbCountDocumentsFailed Failed;
    void DynMutlMongoCounts(const int64 Count);

    UMongoDbCountDocuments* CountDocuments(InterfaceProperty Connector, FString DatabaseName, FString CollectionName, FDocumentValue Filter);
}

class UMongoDbGetEstimatedDocumentCount : UMongoDbAsyncNodeBase
{
    FMongoDbGetEstimatedDocumentCountDone Done;
    void DynMutlMongoCounts(const int64 Count);
    FMongoDbGetEstimatedDocumentCountFailed Failed;
    void DynMutlMongoCounts(const int64 Count);

    UMongoDbGetEstimatedDocumentCount* GetEstimatedDocumentCount(InterfaceProperty Connector, FString DatabaseName, FString CollectionName);
}

class UMongoDbCreateIndex : UMongoDbAsyncNodeBase
{
    FMongoDbCreateIndexDone Done;
    void DynMutlMongo();
    FMongoDbCreateIndexFailed Failed;
    void DynMutlMongo();

    UMongoDbCreateIndex* CreateIndex(InterfaceProperty Connector, FString DatabaseName, FString CollectionName, FDocumentValue Keys, FDocumentValue IndexOptions);
}

class UMongoDbDeleteMany : UMongoDbAsyncNodeBase
{
    FMongoDbDeleteManyDone Done;
    void DynMutlMongo();
    FMongoDbDeleteManyFailed Failed;
    void DynMutlMongo();

    UMongoDbDeleteMany* DeleteMany(InterfaceProperty Connector, FString DatabaseName, FString CollectionName, FDocumentValue Filter);
}

class UMongoDbDeleteOne : UMongoDbAsyncNodeBase
{
    FMongoDbDeleteOneDone Done;
    void DynMutlMongo();
    FMongoDbDeleteOneFailed Failed;
    void DynMutlMongo();

    UMongoDbDeleteOne* DeleteOne(InterfaceProperty Connector, FString DatabaseName, FString CollectionName, FDocumentValue Filter);
}

class UMongoDbFind : UMongoDbAsyncNodeBase
{
    FMongoDbFindDone Done;
    void DynMutlMongoDocument(const FDocumentValue Document);
    FMongoDbFindFailed Failed;
    void DynMutlMongoDocument(const FDocumentValue Document);

    UMongoDbFind* Find(InterfaceProperty Connector, FString DatabaseName, FString CollectionName, FDocumentValue Filter);
}

class UMongoDbFindWithOptions : UMongoDbAsyncNodeBase
{
    FMongoDbFindWithOptionsDone Done;
    void DynMutlMongoDocument(const FDocumentValue Document);
    FMongoDbFindWithOptionsFailed Failed;
    void DynMutlMongoDocument(const FDocumentValue Document);

    UMongoDbFindWithOptions* FindWithOptions(InterfaceProperty Connector, FString DatabaseName, FString CollectionName, FDocumentValue Filter, FMongoFindOptions Options);
}

class UMongoDbFindOne : UMongoDbAsyncNodeBase
{
    FMongoDbFindOneDone Done;
    void DynMutlMongoDocument(const FDocumentValue Document);
    FMongoDbFindOneFailed Failed;
    void DynMutlMongoDocument(const FDocumentValue Document);

    UMongoDbFindOne* FindOne(InterfaceProperty Connector, FString DatabaseName, FString CollectionName, FDocumentValue Filter);
}

class UMongoDbFindOneWithOptions : UMongoDbAsyncNodeBase
{
    FMongoDbFindOneWithOptionsDone Done;
    void DynMutlMongoDocument(const FDocumentValue Document);
    FMongoDbFindOneWithOptionsFailed Failed;
    void DynMutlMongoDocument(const FDocumentValue Document);

    UMongoDbFindOneWithOptions* FindOneWithOptions(InterfaceProperty Connector, FString DatabaseName, FString CollectionName, FDocumentValue Filter, FMongoFindOptions Options);
}

class UMongoDbFindOneAndDelete : UMongoDbAsyncNodeBase
{
    FMongoDbFindOneAndDeleteDone Done;
    void DynMutlMongoDocument(const FDocumentValue Document);
    FMongoDbFindOneAndDeleteFailed Failed;
    void DynMutlMongoDocument(const FDocumentValue Document);

    UMongoDbFindOneAndDelete* FindOneAndDelete(InterfaceProperty Connector, FString DatabaseName, FString CollectionName, FDocumentValue Filter);
}

class UMongoDbFindOneAndReplace : UMongoDbAsyncNodeBase
{
    FMongoDbFindOneAndReplaceDone Done;
    void DynMutlMongoDocument(const FDocumentValue Document);
    FMongoDbFindOneAndReplaceFailed Failed;
    void DynMutlMongoDocument(const FDocumentValue Document);

    UMongoDbFindOneAndReplace* FindOneAndReplace(InterfaceProperty Connector, FString DatabaseName, FString CollectionName, FDocumentValue Filter, FDocumentValue Replacement);
}

class UMongoDbFindOneAndUpdate : UMongoDbAsyncNodeBase
{
    FMongoDbFindOneAndUpdateDone Done;
    void DynMutlMongoDocument(const FDocumentValue Document);
    FMongoDbFindOneAndUpdateFailed Failed;
    void DynMutlMongoDocument(const FDocumentValue Document);

    UMongoDbFindOneAndUpdate* FindOneAndUpdate(InterfaceProperty Connector, FString DatabaseName, FString CollectionName, FDocumentValue Filter, FDocumentValue Update);
}

class UMongoDbPing : UMongoDbAsyncNodeBase
{
    FMongoDbPingDone Done;
    void DynMutlMongo();
    FMongoDbPingFailed Failed;
    void DynMutlMongo();

    UMongoDbPing* Ping(InterfaceProperty Connector, FString DatabaseName);
}

class UMongoDbRunCommand : UMongoDbAsyncNodeBase
{
    FMongoDbRunCommandDone Done;
    void DynMutlMongoDocument(const FDocumentValue Document);
    FMongoDbRunCommandFailed Failed;
    void DynMutlMongoDocument(const FDocumentValue Document);

    UMongoDbRunCommand* RunCommand(InterfaceProperty Connector, FString DatabaseName, FDocumentValue Command);
}

class UMongoDbListCollections : UMongoDbAsyncNodeBase
{
    FMongoDbListCollectionsDone Done;
    void DynMutlMongoStrings(const TArray<FString>& Collections);
    FMongoDbListCollectionsFailed Failed;
    void DynMutlMongoStrings(const TArray<FString>& Collections);

    UMongoDbListCollections* ListCollectionNames(InterfaceProperty Connector, FString DatabaseName);
}

class UMongoPool : UObject
{

    UMongoPool* CreatePoolFromURI(FString Uri, const int32 PoolSize, FString PemFile, FString PemPassword, FString CaFile, FString CaDir, FString CrlFile, bool bAllowInvalidCertificate, bool bSslEnabled);
    UMongoPool* CreatePoolForAtlas(FString Protocole, FString Domain, FString DatabaseName, FString Username, FString Password, const int32 MinPoolSize, const int32 MaxPoolSize, FString AdditionalParameters);
    UMongoPool* CreatePool(FString Protocole, FString Address, const int32 Port, const int32 MinPoolSize, const int32 MaxPoolSize, const FString AdditionalParameters);
}

struct UDatabaseData
{
    FString Name;
    float SizeOnDisk;
    bool bHasAnyData;
}

struct UDatabaseIndex
{
    int32 ID;
    FString Name;
}

struct UDocumentValue
{
}

struct UMongoInsertResult
{
    FObjectId InsertedId;
    int32 InsertedCount;
}

struct UObjectId
{
}

struct UDatabaseReadConcern
{
    FString String;
    EMongoReadConcernLevel Level;
}

struct UMongoFindOptions
{
    bool bAllowPartialResults;
    int32 BatchSize;
    FDocumentValue Collation;
    FString Comment;
    int32 Limit;
    FDocumentValue Max;
    FDocumentValue Min;
    int64 MaxAwaitTime;
    int64 MaxTime;
    bool bNoCursorTimeout;
    FDocumentValue Projection;
    bool bReturnKey;
    bool bShowRecordId;
    int64 Skip;
    FDocumentValue Sort;
}

#endif
