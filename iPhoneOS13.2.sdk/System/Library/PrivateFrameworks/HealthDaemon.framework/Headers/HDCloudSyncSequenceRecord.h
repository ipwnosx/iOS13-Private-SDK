//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDCloudSyncRecord.h>

@class CKRecordID, HDSyncAnchorMap, NSSet;

@interface HDCloudSyncSequenceRecord : HDCloudSyncRecord
{
    BOOL _active;
    int _protocolVersion;
    NSUInteger _changeIndex;
    long long _baselineEpoch;
    NSUInteger _childRecordCount;
    HDSyncAnchorMap *_syncAnchorMap;
    NSSet *_includedIdentifiers;
    long long _slot;
}

+ (BOOL)hasFutureSchema:(id)arg1;
+ (BOOL)isSequenceRecordID:(id)arg1;
+ (BOOL)isSequenceRecord:(id)arg1;
+ (id)recordIDsWithZoneID:(id)arg1;
+ (id)recordIDWithZoneID:(id)arg1 sequenceSlot:(long long)arg2;
+ (id)_recordNameForSequenceSlot:(long long)arg1;
+ (id)recordWithCKRecord:(id)arg1 error:(id )arg2;
@property(nonatomic) long long slot; // @synthesize slot=_slot;
@property(readonly, nonatomic) int protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(readonly, copy, nonatomic) NSSet *includedIdentifiers; // @synthesize includedIdentifiers=_includedIdentifiers;
@property(readonly, nonatomic) HDSyncAnchorMap *syncAnchorMap; // @synthesize syncAnchorMap=_syncAnchorMap;
@property(readonly, nonatomic) NSUInteger childRecordCount; // @synthesize childRecordCount=_childRecordCount;
@property(readonly, nonatomic) long long baselineEpoch; // @synthesize baselineEpoch=_baselineEpoch;
@property(readonly, nonatomic) NSUInteger changeIndex; // @synthesize changeIndex=_changeIndex;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
// - (void).cxx_destruct;
- (void)_unitTest_setChildRecordCount:(NSUInteger)arg1;
- (id)description;
- (void)decrementChildRecordCount:(NSUInteger)arg1;
- (void)incrementChildRecordCount;
- (void)updateFrozenSyncAnchorMapWithSyncAnchorMap:(id)arg1;
- (void)replaceSyncAnchorMapWithSyncAnchorMap:(id)arg1;
- (void)updateSyncAnchorMapWithSyncAnchorMap:(id)arg1;
- (void)resetChangeIndex:(NSUInteger)arg1;
- (void)incrementChangeIndex;
@property(copy, nonatomic) CKRecordID *firstUnfrozenChangeRecord;
@property(readonly, nonatomic) HDSyncAnchorMap *frozenSyncAnchorMap;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initForSequenceSlot:(long long)arg1 syncAnchorMap:(id)arg2 active:(BOOL)arg3 changeIndex:(NSUInteger)arg4 childRecordCount:(NSUInteger)arg5 baselineEpoch:(long long)arg6 includedIdentifiers:(id)arg7 protocolVersion:(int)arg8 storeRecordID:(id)arg9 record:(id)arg10 schemaVersion:(long long)arg11;
- (id)initForSequenceSlot:(long long)arg1 syncAnchorMap:(id)arg2 changeIndex:(NSUInteger)arg3 baselineEpoch:(long long)arg4 includedIdentifiers:(id)arg5 storeRecord:(id)arg6;

@end

