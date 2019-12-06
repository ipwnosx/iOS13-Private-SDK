//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, REMChangeSet, REMChangeToken, REMChangeTracking, REMObjectID, REMStore;
@protocol REMDAAccountProviding;

@interface REMDAChangeTrackingHelper : NSObject
{
    id <REMDAAccountProviding> _account;
    REMChangeSet *_changeSet;
    REMChangeToken *_sinceToken;
    REMChangeToken *_upToToken;
    REMStore *_remStore;
    REMChangeTracking *_changeTracking;
    REMObjectID *_cached_remAccountObjectID;
    NSMutableDictionary *_cached_insertedModelObjectResultsByModelClassName;
    NSMutableDictionary *_cached_updatedModelObjectResultsByModelClassName;
}

+ (BOOL)shouldIgnoreChangeOfModelClassProperties:(Class)arg1 withChangeObject:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *cached_updatedModelObjectResultsByModelClassName; // @synthesize cached_updatedModelObjectResultsByModelClassName=_cached_updatedModelObjectResultsByModelClassName;
@property(retain, nonatomic) NSMutableDictionary *cached_insertedModelObjectResultsByModelClassName; // @synthesize cached_insertedModelObjectResultsByModelClassName=_cached_insertedModelObjectResultsByModelClassName;
@property(retain, nonatomic) REMObjectID *cached_remAccountObjectID; // @synthesize cached_remAccountObjectID=_cached_remAccountObjectID;
@property(retain, nonatomic) REMChangeTracking *changeTracking; // @synthesize changeTracking=_changeTracking;
@property(retain, nonatomic) REMStore *remStore; // @synthesize remStore=_remStore;
@property(retain, nonatomic) REMChangeToken *upToToken; // @synthesize upToToken=_upToToken;
@property(retain, nonatomic) REMChangeToken *sinceToken; // @synthesize sinceToken=_sinceToken;
@property(retain, nonatomic) REMChangeSet *changeSet; // @synthesize changeSet=_changeSet;
@property(readonly, nonatomic) id <REMDAAccountProviding> account; // @synthesize account=_account;
// - (void).cxx_destruct;
- (id)_rem_accountObjectID;
- (id)_rem_changeTracking;
- (id)_rem_changeTrackingClientName;
- (void)clearCachedModelObjectResultsForModelClass:(Class)arg1;
- (void)_setCachedModeObjectResults:(id)arg1 forModelClass:(Class)arg2 changeType:(long long)arg3;
- (id)_cachedModeObjectResultsForModelClass:(Class)arg1 changeType:(long long)arg2;
- (long long)_changeTypeMaskFromChangeType:(long long)arg1;
- (id)_fetchModelObjectsOfClass:(Class)arg1 withObjectIDs:(id)arg2;
- (id)_fetchModelObjectOfClass:(Class)arg1 withObjectID:(id)arg2 includeMarkedForDelete:(BOOL)arg3;
- (void)_handleLazyDeletionChange:(id)arg1 ofModelClass:(Class)arg2 forClientID:(id)arg3 deleteHandler:(CDUnknownBlockType)arg4 undeleteHandler:(CDUnknownBlockType)arg5;
- (id)_changedModelObjectsOfClass:(Class)arg1 ofChangeTypes:(long long)arg2;
- (id)changedIdentifiersOfModelClass:(Class)arg1 ofChangeType:(long long)arg2;
- (id)changedModelObjectsOfModelClass:(Class)arg1 ofChangeType:(long long)arg2;
- (void)markChangesConsumed;
- (id)fetchChangesSinceLastConsumed;
- (id)fetchAndInitializeChangeTrackingStateIfNeeded;
- (id)initWithREMDAAccount:(id)arg1 withREMStore:(id)arg2;

@end

