//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class HDCloudSyncOperationConfiguration, HDCloudSyncZone, NSDictionary, NSSet;

@interface HDCloudSyncFetchOperationResult : NSObject <NSCopying>
{
    HDCloudSyncOperationConfiguration *_configuration;
    long long _status;
    NSDictionary *_zonesByIdentifier;
    HDCloudSyncZone *_primaryPushZone;
}

@property(readonly, nonatomic) HDCloudSyncZone *primaryPushZone; // @synthesize primaryPushZone=_primaryPushZone;
@property(readonly, nonatomic) NSDictionary *zonesByIdentifier; // @synthesize zonesByIdentifier=_zonesByIdentifier;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) HDCloudSyncOperationConfiguration *configuration; // @synthesize configuration=_configuration;
// - (void).cxx_destruct;
@property(readonly, nonatomic) long long minimumSupportedProtocolVersion;
- (id)masterZoneForContainerID:(id)arg1;
@property(readonly, nonatomic) NSSet *pullZones;
@property(readonly, nonatomic) NSSet *seizedZones;
- (id)_storeDescriptionForZone:(id)arg1;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithStatus:(long long)arg1 configuration:(id)arg2 zonesByIdentifier:(id)arg3;

@end

