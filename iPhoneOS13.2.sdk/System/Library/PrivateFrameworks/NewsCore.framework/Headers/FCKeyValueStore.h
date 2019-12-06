//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCJSONEncodableObjectProviding-Protocol.h>

@class FCKeyValueStoreClassRegistry, NSDictionary, NSMutableDictionary, NSString;
@protocol FCKeyValueStoreMigrating, NFLocking;

@interface FCKeyValueStore : NSObject <FCJSONEncodableObjectProviding>
{
    BOOL _shouldExportJSONSidecar;
    BOOL _unsafeWaitingOnSave;
    NSString *_name;
    NSUInteger _storeSize;
    NSMutableDictionary *_unsafeObjectsByKey;
    id <NFLocking> _lock;
    NSString *_storeDirectory;
    NSUInteger _clientVersion;
    NSUInteger _optionsMask;
    FCKeyValueStoreClassRegistry *_classRegistry;
    id <FCKeyValueStoreMigrating> _migrator;
    id /* CDUnknownBlockType */ _objectHandler;
    id /* CDUnknownBlockType */ _arrayObjectHandler;
    id /* CDUnknownBlockType */ _dictionaryKeyHandler;
    id /* CDUnknownBlockType */ _dictionaryValueHandler;
}

+ (BOOL)shouldDumpToJSON;
+ (id)persistenceQueue;
@property(copy, nonatomic) id /* CDUnknownBlockType */ dictionaryValueHandler; // @synthesize dictionaryValueHandler=_dictionaryValueHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ dictionaryKeyHandler; // @synthesize dictionaryKeyHandler=_dictionaryKeyHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ arrayObjectHandler; // @synthesize arrayObjectHandler=_arrayObjectHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ objectHandler; // @synthesize objectHandler=_objectHandler;
@property(retain, nonatomic) id <FCKeyValueStoreMigrating> migrator; // @synthesize migrator=_migrator;
@property(retain, nonatomic) FCKeyValueStoreClassRegistry *classRegistry; // @synthesize classRegistry=_classRegistry;
@property(nonatomic) NSUInteger optionsMask; // @synthesize optionsMask=_optionsMask;
@property(nonatomic) NSUInteger clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *storeDirectory; // @synthesize storeDirectory=_storeDirectory;
@property(retain, nonatomic) id <NFLocking> lock; // @synthesize lock=_lock;
@property(nonatomic) BOOL unsafeWaitingOnSave; // @synthesize unsafeWaitingOnSave=_unsafeWaitingOnSave;
@property(retain, nonatomic) NSMutableDictionary *unsafeObjectsByKey; // @synthesize unsafeObjectsByKey=_unsafeObjectsByKey;
@property(nonatomic) NSUInteger storeSize; // @synthesize storeSize=_storeSize;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) BOOL shouldExportJSONSidecar; // @synthesize shouldExportJSONSidecar=_shouldExportJSONSidecar;
// - (void).cxx_destruct;
- (id)fc_jsonString;
- (id)fc_jsonStringWithDictionary:(id)arg1;
- (id)fc_jsonEncodableDictionary;
- (id)fc_jsonEncodableDictionaryWithDictionary:(id)arg1;
- (id)jsonEncodableObject;
- (void)setCloudBackupEnabled:(BOOL)arg1;
- (BOOL)_threadSafe;
- (BOOL)_persistOnlyInMemoryEnabled;
- (BOOL)_isCloudBackupEnabled;
- (BOOL)_shouldMigrateOnUpgrade;
- (void)_clearStore;
- (id)_initializeStoreDirectoryWithName:(id)arg1;
- (void)_logCacheStatus;
- (void)_save;
- (void)_maybeSaveJSONRepresentationWithDictionary:(id)arg1;
- (id)_loadFromDisk;
- (id)_dictionary;
- (void)_maybeWriteObjectsByKey:(CDUnknownBlockType)arg1;
- (void)_writeObjectsByKey:(CDUnknownBlockType)arg1;
- (void)_readObjectsByKey:(CDUnknownBlockType)arg1;
- (void)setJSONEncodingHandlersWithObjectHandler:(CDUnknownBlockType)arg1 arrayObjectHandler:(CDUnknownBlockType)arg2 dictionaryKeyHandler:(CDUnknownBlockType)arg3 dictionaryValueHandler:(CDUnknownBlockType)arg4;
- (void)save;
- (void)saveWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSDictionary *asDictionary;
- (void)addAllEntriesToDictionary:(id)arg1;
- (id)keysOfEntriesPassingTest:(CDUnknownBlockType)arg1;
- (id)allKeys;
- (BOOL)boolValueForKey:(id)arg1;
- (void)setBoolValue:(BOOL)arg1 forKey:(id)arg2;
- (id)objectsForKeys:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)updateObjectsForKeys:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)removeAllObjects;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)setObjects:(id)arg1 forKeys:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (BOOL)containsObjectForKey:(id)arg1;
- (id)initWithName:(id)arg1 directory:(id)arg2 version:(NSUInteger)arg3 options:(NSUInteger)arg4 classRegistry:(id)arg5;
- (id)initWithName:(id)arg1 directory:(id)arg2 version:(NSUInteger)arg3 options:(NSUInteger)arg4 classRegistry:(id)arg5 migrator:(id)arg6;
- (id)init;

@end

