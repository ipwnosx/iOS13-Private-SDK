//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class AWDHomeKitCameraIDSSessionSetup, AWDHomeKitCameraSnapshotIDSTransfer, AWDHomeKitCameraSnapshotMessaging, AWDHomeKitVendorInformation, NSString;

@interface AWDHomeKitCameraSnapshot : PBCodable <NSCopying>
{
    NSUInteger _timestamp;
    int _certified;
    AWDHomeKitCameraSnapshotMessaging *_controllerMessaging;
    unsigned int _errorCode;
    AWDHomeKitCameraIDSSessionSetup *_idsSessionSetup;
    AWDHomeKitCameraSnapshotIDSTransfer *_phoneToWatch;
    unsigned int _receivedSnapshotFromAccessory;
    AWDHomeKitCameraSnapshotMessaging *_residentMessaging;
    AWDHomeKitCameraSnapshotIDSTransfer *_residentToPhone;
    unsigned int _sentSnapshotRequestToAccessory;
    NSString *_sessionID;
    unsigned int _underlyingErrorCode;
    NSString *_underlyingErrorDomain;
    AWDHomeKitVendorInformation *_vendorDetails;
    AWDHomeKitCameraSnapshotMessaging *_watchMessaging;
    BOOL _forNotification;
    BOOL _isLocal;
   struct {
        unsigned int timestamp:1;
        unsigned int certified:1;
        unsigned int errorCode:1;
        unsigned int receivedSnapshotFromAccessory:1;
        unsigned int sentSnapshotRequestToAccessory:1;
        unsigned int underlyingErrorCode:1;
        unsigned int forNotification:1;
        unsigned int isLocal:1;
    } _has;
}

@property(nonatomic) unsigned int underlyingErrorCode; // @synthesize underlyingErrorCode=_underlyingErrorCode;
@property(retain, nonatomic) NSString *underlyingErrorDomain; // @synthesize underlyingErrorDomain=_underlyingErrorDomain;
@property(retain, nonatomic) AWDHomeKitCameraSnapshotIDSTransfer *phoneToWatch; // @synthesize phoneToWatch=_phoneToWatch;
@property(retain, nonatomic) AWDHomeKitCameraSnapshotIDSTransfer *residentToPhone; // @synthesize residentToPhone=_residentToPhone;
@property(retain, nonatomic) AWDHomeKitCameraSnapshotMessaging *residentMessaging; // @synthesize residentMessaging=_residentMessaging;
@property(retain, nonatomic) AWDHomeKitCameraSnapshotMessaging *controllerMessaging; // @synthesize controllerMessaging=_controllerMessaging;
@property(retain, nonatomic) AWDHomeKitCameraSnapshotMessaging *watchMessaging; // @synthesize watchMessaging=_watchMessaging;
@property(nonatomic) unsigned int receivedSnapshotFromAccessory; // @synthesize receivedSnapshotFromAccessory=_receivedSnapshotFromAccessory;
@property(nonatomic) unsigned int sentSnapshotRequestToAccessory; // @synthesize sentSnapshotRequestToAccessory=_sentSnapshotRequestToAccessory;
@property(retain, nonatomic) AWDHomeKitCameraIDSSessionSetup *idsSessionSetup; // @synthesize idsSessionSetup=_idsSessionSetup;
@property(nonatomic) BOOL forNotification; // @synthesize forNotification=_forNotification;
@property(nonatomic) BOOL isLocal; // @synthesize isLocal=_isLocal;
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // @synthesize vendorDetails=_vendorDetails;
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
@property(nonatomic) BOOL hasUnderlyingErrorCode;
@property(readonly, nonatomic) BOOL hasUnderlyingErrorDomain;
@property(readonly, nonatomic) BOOL hasPhoneToWatch;
@property(readonly, nonatomic) BOOL hasResidentToPhone;
@property(readonly, nonatomic) BOOL hasResidentMessaging;
@property(readonly, nonatomic) BOOL hasControllerMessaging;
@property(readonly, nonatomic) BOOL hasWatchMessaging;
@property(nonatomic) BOOL hasReceivedSnapshotFromAccessory;
@property(nonatomic) BOOL hasSentSnapshotRequestToAccessory;
@property(readonly, nonatomic) BOOL hasIdsSessionSetup;
@property(nonatomic) BOOL hasForNotification;
@property(nonatomic) BOOL hasIsLocal;
@property(nonatomic) BOOL hasErrorCode;
@property(readonly, nonatomic) BOOL hasSessionID;
@property(nonatomic) BOOL hasTimestamp;
- (int)StringAsCertified:(id)arg1;
- (id)certifiedAsString:(int)arg1;
@property(nonatomic) BOOL hasCertified;
@property(nonatomic) int certified; // @synthesize certified=_certified;
@property(readonly, nonatomic) BOOL hasVendorDetails;

@end

