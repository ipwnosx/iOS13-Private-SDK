//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class CKCDPCodeServiceRequestOperationGroup, NSString;

__attribute__((visibility("hidden")))
@interface CKCDPCodeServiceRequestRequestContext : PBCodable <NSCopying>
{
    NSUInteger _dsid;
    NSString *_applicationBundleId;
    NSString *_clientInfo;
    NSString *_containerName;
    int _databaseEnvironment;
    int _databasePartition;
    int _databaseType;
    NSString *_deviceId;
    CKCDPCodeServiceRequestOperationGroup *_operationGroup;
    NSString *_userAgent;
    NSString *_userId;
   struct {
        unsigned int dsid:1;
        unsigned int databaseEnvironment:1;
        unsigned int databasePartition:1;
        unsigned int databaseType:1;
    } _has;
}

@property(retain, nonatomic) CKCDPCodeServiceRequestOperationGroup *operationGroup; // @synthesize operationGroup=_operationGroup;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) NSUInteger dsid; // @synthesize dsid=_dsid;
@property(retain, nonatomic) NSString *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(nonatomic) int databasePartition; // @synthesize databasePartition=_databasePartition;
@property(retain, nonatomic) NSString *applicationBundleId; // @synthesize applicationBundleId=_applicationBundleId;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasOperationGroup;
@property(readonly, nonatomic) BOOL hasUserAgent;
@property(nonatomic) BOOL hasDsid;
@property(readonly, nonatomic) BOOL hasClientInfo;
@property(nonatomic) BOOL hasDatabasePartition;
@property(readonly, nonatomic) BOOL hasApplicationBundleId;
@property(readonly, nonatomic) BOOL hasDeviceId;
- (int)StringAsDatabaseType:(id)arg1;
- (id)databaseTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasDatabaseType;
@property(nonatomic) int databaseType; // @synthesize databaseType=_databaseType;
- (int)StringAsDatabaseEnvironment:(id)arg1;
- (id)databaseEnvironmentAsString:(int)arg1;
@property(nonatomic) BOOL hasDatabaseEnvironment;
@property(nonatomic) int databaseEnvironment; // @synthesize databaseEnvironment=_databaseEnvironment;
@property(readonly, nonatomic) BOOL hasContainerName;
@property(readonly, nonatomic) BOOL hasUserId;

@end

