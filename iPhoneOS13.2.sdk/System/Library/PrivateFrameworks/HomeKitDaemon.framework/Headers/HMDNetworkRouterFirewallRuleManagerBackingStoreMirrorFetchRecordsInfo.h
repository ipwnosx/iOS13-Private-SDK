//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper.h>

@class CKRecordID, CKRecordZoneID, NSArray, NSMutableSet;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorFetchRecordsInfo : HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper
{
    CKRecordZoneID *_zoneID;
    CKRecordID *_recordID;
    NSArray *_desiredKeys;
    NSMutableSet *_records;
}

@property(readonly, nonatomic) NSMutableSet *records; // @synthesize records=_records;
@property(readonly, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(readonly, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(readonly, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
// - (void).cxx_destruct;
- (id)initWithActivity:(id)arg1 options:(id)arg2 promise:(id)arg3 database:(id)arg4 useAnonymousRequests:(BOOL)arg5 zoneID:(id)arg6 recordID:(id)arg7 desiredKeys:(id)arg8;

@end

