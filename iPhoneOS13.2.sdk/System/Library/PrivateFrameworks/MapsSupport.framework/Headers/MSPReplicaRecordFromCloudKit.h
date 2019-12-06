//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPReplicaRecordFromCloud-Protocol.h>

@class CKRecord, MSPVectorTimestamp, NSData, NSString, NSUUID;

@interface MSPReplicaRecordFromCloudKit : NSObject <MSPReplicaRecordFromCloud>
{
    CKRecord *_record;
    NSData *_contents;
    MSPVectorTimestamp *_contentsTimestamp;
    NSUUID *_recordIdentifier;
}

+ (id)recordFromInsertEdit:(id)arg1;
+ (id)tombstoneWithRecordIdentifier:(id)arg1;
+ (id)recordType;
@property(readonly, nonatomic, getter=recordIdentifier) NSUUID *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
@property(readonly, copy, nonatomic) MSPVectorTimestamp *contentsTimestamp; // @synthesize contentsTimestamp=_contentsTimestamp;
@property(readonly, copy, nonatomic) NSData *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isTombstoneRepresentedByCloudRecord) BOOL tombstoneRepresentedByCloudRecord;
- (id)tombstoneRecordRepresentation;
- (id)recordZoneName;
- (id)recordRepresentation;
- (id)recordRepresentationWithType:(id)arg1 recordZoneID:(id)arg2;
- (void)applyUpdateEdit:(id)arg1;
- (id)initWithCKRecord:(id)arg1;
- (id)initWithReplicaRecord:(id)arg1 recordID:(id)arg2;
- (id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 identifier:(id)arg3;

@end

