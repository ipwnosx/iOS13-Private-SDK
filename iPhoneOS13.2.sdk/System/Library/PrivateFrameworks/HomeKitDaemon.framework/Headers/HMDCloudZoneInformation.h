//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>

@class NSString, NSUUID;

@interface HMDCloudZoneInformation : HMFObject <NSSecureCoding, HMDBackingStoreObjectProtocol>
{
    BOOL _fetchFailed;
    BOOL _firstFetch;
    BOOL _zoneCreated;
    BOOL _handlesCloudRecord;
    NSUUID *_uuid;
    NSString *_ownerName;
    long long _schemaVersion;
}

+ (BOOL)supportsSecureCoding;
+ (id)shortDescription;
+ (id)cloudZonesArrayWithCloudZones:(id)arg1;
+ (id)cloudZoneInformationWithCloudZones:(id)arg1;
+ (id)cloudZonesWithDictionary:(id)arg1;
@property(nonatomic, getter=doesHandlesCloudRecord) BOOL handlesCloudRecord; // @synthesize handlesCloudRecord=_handlesCloudRecord;
@property(nonatomic) long long schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(nonatomic, getter=isZoneCreated) BOOL zoneCreated; // @synthesize zoneCreated=_zoneCreated;
@property(nonatomic, getter=isFirstFetch) BOOL firstFetch; // @synthesize firstFetch=_firstFetch;
@property(nonatomic, getter=didFetchFailed) BOOL fetchFailed; // @synthesize fetchFailed=_fetchFailed;
@property(retain, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
// - (void).cxx_destruct;
- (id)emptyModelObjectWithChangeType:(NSUInteger)arg1 parent:(id)arg2;
- (id)modelObjectWithChangeType:(NSUInteger)arg1 version:(long long)arg2 parent:(id)arg3;
- (id)modelObjectWithChangeType:(NSUInteger)arg1 parent:(id)arg2;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)updateCloudZoneInformationWithModel:(id)arg1 message:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)shortDescription;
- (id)initWithOwnerName:(id)arg1 uuid:(id)arg2;
- (id)init;

@end

