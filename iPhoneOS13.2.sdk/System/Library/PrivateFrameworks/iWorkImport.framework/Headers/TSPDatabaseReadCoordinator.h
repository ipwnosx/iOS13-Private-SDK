//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPReadCoordinatorBase.h>

#import <iWorkImport/TSPDatabaseReaderDelegate-Protocol.h>
#import <iWorkImport/TSPReadCoordinator-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSObject, NSURL, NSUUID, TSPDatabase, TSPFinalizeHandlerQueue, TSPObjectContext;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPDatabaseReadCoordinator : TSPReadCoordinatorBase <TSPDatabaseReaderDelegate, TSPReadCoordinator>
{
    TSPObjectContext *_context;
    NSUUID *_baseObjectUUID;
    NSURL *_packageURL;
    TSPFinalizeHandlerQueue *_finalizeHandlerQueue;
    TSPDatabase *_database;
    NSUInteger _databaseVersion;
    NSMapTable *_objects;
    NSObject<OS_dispatch_queue> *_dataQueue;
    NSMapTable *_dataDictionary;
    NSObject<OS_dispatch_queue> *_appRelativeDataQueue;
    NSMutableDictionary *_appRelativeDataDictionary;
}

// - (void).cxx_destruct;
- (void)reader:(id)arg1 didUnarchiveObject:(id)arg2;
- (void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 fromParentObject:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(BOOL)arg4 allowUnknownObject:(BOOL)arg5 fromParentObject:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (id)databaseReader:(id)arg1 wantsDataForAppRelativePath:(id)arg2 filename:(id)arg3;
- (id)databaseReader:(id)arg1 wantsDataForDatabaseObjectIdentifier:(long long)arg2 filename:(id)arg3;
- (id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2;
- (long long)reader:(id)arg1 wantsObjectIdentifierForUUID:(id)arg2;
- (void)didReferenceExternalObject:(id)arg1 withIdentifier:(long long)arg2;
- (id)externalObjectForIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isReadFinished:(BOOL)arg3;
- (id)unarchivedObjectForIdentifier:(long long)arg1 isReadFinished:(BOOL)arg2;
- (id)context;
@property(readonly, nonatomic) BOOL canRetainObjectReferencedByWeakLazyReference;
@property(readonly, nonatomic) long long sourceType;
@property(readonly, nonatomic) BOOL hasDocumentVersionUUID;
@property(readonly, nonatomic) BOOL isReadingFromDocument;
@property(readonly, nonatomic) NSUUID *baseObjectUUID;
@property(readonly, nonatomic) unsigned char packageIdentifier;
@property(readonly, nonatomic) NSUInteger fileFormatVersion;
- (id)createUpgradedOldAppBundleResourcePath:(id)arg1;
- (id)dataForAppRelativePath:(id)arg1 filename:(id)arg2;
- (id)documentResourceInfoForAppRelativePath:(id)arg1;
- (id)dataForReadChannel:(id)arg1 filename:(id)arg2 linkURLOrNil:(id)arg3;
- (id)dataForLinkURL:(id)arg1 filename:(id)arg2;
- (id)dataForDatabaseObject:(id)arg1 filename:(id)arg2;
- (void)readComponent:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didUpdateLazyReferenceDelegate:(id)arg1;
- (void)readRootObjectWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)endReading;
- (id)initWithContext:(id)arg1 packageURL:(id)arg2 finalizeHandlerQueue:(id)arg3 error:(id )arg4;
- (id)init;

@end

