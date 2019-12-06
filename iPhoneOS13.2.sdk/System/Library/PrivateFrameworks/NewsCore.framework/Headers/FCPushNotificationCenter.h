//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCPushNotificationHandling-Protocol.h>

@class FCCKPrivateDatabase, NSMapTable;

@interface FCPushNotificationCenter : NSObject <FCPushNotificationHandling>
{
    BOOL _syncingEnabled;
    FCCKPrivateDatabase *_privateDatabase;
    NSMapTable *_recordZoneObservers;
}

@property(nonatomic, getter=isSyncingEnabled) BOOL syncingEnabled; // @synthesize syncingEnabled=_syncingEnabled;
@property(retain, nonatomic) NSMapTable *recordZoneObservers; // @synthesize recordZoneObservers=_recordZoneObservers;
@property(retain, nonatomic) FCCKPrivateDatabase *privateDatabase; // @synthesize privateDatabase=_privateDatabase;
// - (void).cxx_destruct;
- (void)_saveDatabaseServerChangeToken:(id)arg1;
- (void)_deleteLocalDataForRecordZoneIDs:(id)arg1;
- (void)_fetchChangesForRecordZoneIDs:(id)arg1;
- (id)serverChangeTokenKey;
- (void)_handlePrivateDatabaseNotification:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleRemoteNotification:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeRecordZoneObserver:(id)arg1;
- (void)addObserver:(id)arg1 forChangesToRecordZoneID:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)initWithPrivateDatabase:(id)arg1 storeDirectory:(id)arg2;
- (id)init;
- (void)prepareForUse;
- (void)disableSyncing;
- (void)enableSyncing;

@end

