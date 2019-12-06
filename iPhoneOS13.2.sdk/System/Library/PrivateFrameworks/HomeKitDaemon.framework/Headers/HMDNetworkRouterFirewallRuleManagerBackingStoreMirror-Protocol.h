//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CKRecordID, CKRecordZoneID, HMBProcessingOptions, NAFuture, NSObject, NSSet, NSString;
@protocol OS_xpc_object;

@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreMirror <NSObject>
@property(retain, nonatomic) NSSet *watchedRecordIDs;
@property(readonly, nonatomic) NAFuture *shutdownFuture;
@property(readonly, nonatomic) NAFuture *startupFuture;
- (BOOL)removeOverridesForZoneName:(NSString *)arg1 recordName:(NSString *)arg2 options:(HMBProcessingOptions *)arg3 error:(id )arg4;
- (BOOL)removeAllOverridesWithOptions:(HMBProcessingOptions *)arg1 error:(id )arg2;
- (BOOL)removeOverridesForRecordIDs:(NSSet *)arg1 options:(HMBProcessingOptions *)arg2 error:(id )arg3;
- (BOOL)addOverrides:(NSDictionary )arg1 replace:(BOOL)arg2 options:(HMBProcessingOptions *)arg3 error:(id )arg4;
- (NSDictionary )fetchOverridesForZoneName:(NSString *)arg1 options:(HMBProcessingOptions *)arg2 error:(id )arg3;
- (NSDictionary )fetchAllOverridesWithOptions:(HMBProcessingOptions *)arg1 error:(id )arg2;
- (NSDictionary )fetchOverridesForRecordIDs:(NSSet *)arg1 options:(HMBProcessingOptions *)arg2 error:(id )arg3;
- (BOOL)removeAllLocalRulesWithOptions:(HMBProcessingOptions *)arg1 error:(id )arg2;
- (NSDictionary )fetchNetworkDeclarationDataForZoneName:(NSString *)arg1 options:(HMBProcessingOptions *)arg2 error:(id )arg3;
- (NSDictionary )fetchAllNetworkDeclarationDataWithOptions:(HMBProcessingOptions *)arg1 error:(id )arg2;
- (NSDictionary )fetchNetworkDeclarationDataForRecordIDs:(NSSet *)arg1 options:(HMBProcessingOptions *)arg2 error:(id )arg3;
- (void)fetchCloudRecordsForZoneID:(CKRecordZoneID *)arg1 recordID:(CKRecordID *)arg2 options:(HMBProcessingOptions *)arg3 completion:(void (^)(NSSet *, NSError *))arg4;
- (void)fetchCloudRecordIDsForZoneID:(CKRecordZoneID *)arg1 options:(HMBProcessingOptions *)arg2 completion:(void (^)(NSSet *, NSError *))arg3;
- (void)fetchCloudChangesWithOptions:(HMBProcessingOptions *)arg1 ignoreLastFetchedAccessories:(BOOL)arg2 xpcActivity:(NSObject<OS_xpc_object> *)arg3 completion:(void (^)(NSSet *, NSError *))arg4;
@end

