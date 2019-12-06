//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDNanoSyncDescription-Protocol.h>
#import <HealthDaemon/HDNanoSyncPersistentUserInfoCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface HDCodableNanoSyncActivationRestore : PBCodable <HDNanoSyncDescription, HDNanoSyncPersistentUserInfoCopying, NSCopying>
{
    long long _sequenceNumber;
    NSString *_defaultSourceBundleIdentifier;
    NSMutableArray *_obliteratedHealthPairingUUIDs;
    NSData *_restoreIdentifier;
    int _statusCode;
   struct {
        unsigned int sequenceNumber:1;
        unsigned int statusCode:1;
    } _has;
}

+ (Class)obliteratedHealthPairingUUIDsType;
+ (id)activationRestoreWithRestoreUUID:(id)arg1 sequenceNumber:(long long)arg2 statusCode:(int)arg3;
+ (id)persistentUserInfoKey;
+ (id)retreiveFromPersistentUserInfo:(id)arg1;
@property(retain, nonatomic) NSMutableArray *obliteratedHealthPairingUUIDs; // @synthesize obliteratedHealthPairingUUIDs=_obliteratedHealthPairingUUIDs;
@property(retain, nonatomic) NSString *defaultSourceBundleIdentifier; // @synthesize defaultSourceBundleIdentifier=_defaultSourceBundleIdentifier;
@property(nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) NSData *restoreIdentifier; // @synthesize restoreIdentifier=_restoreIdentifier;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (id)obliteratedHealthPairingUUIDsAtIndex:(NSUInteger)arg1;
- (NSUInteger)obliteratedHealthPairingUUIDsCount;
- (void)addObliteratedHealthPairingUUIDs:(id)arg1;
- (void)clearObliteratedHealthPairingUUIDs;
@property(readonly, nonatomic) BOOL hasDefaultSourceBundleIdentifier;
- (int)StringAsStatusCode:(id)arg1;
- (id)statusCodeAsString:(int)arg1;
@property(nonatomic) BOOL hasStatusCode;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) BOOL hasSequenceNumber;
@property(readonly, nonatomic) BOOL hasRestoreIdentifier;
- (id)nanoSyncDescription;
- (id)decodedObliteratedHealthPairingUUIDs;
- (void)encodeObliteratedHealthPairingUUIDs:(id)arg1;
- (id)decodedRestoreUUID;
- (BOOL)hasRequiredFields;
- (id)copyForPersistentUserInfo;
- (void)addToPersistentUserInfo:(id)arg1;

@end

