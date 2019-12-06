//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class NSString;

@interface ICIAMSynchronizeMessagesRequest : PBRequest <NSCopying>
{
    long long _commandSerialNumber;
    long long _dSID;
    NSString *_deviceID;
    BOOL _activeCommandsOnly;
    struct {
        unsigned int commandSerialNumber:1;
        unsigned int dSID:1;
        unsigned int activeCommandsOnly:1;
    } _has;
}

@property(nonatomic) BOOL activeCommandsOnly; // @synthesize activeCommandsOnly=_activeCommandsOnly;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(nonatomic) long long dSID; // @synthesize dSID=_dSID;
@property(nonatomic) long long commandSerialNumber; // @synthesize commandSerialNumber=_commandSerialNumber;
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
@property(nonatomic) BOOL hasActiveCommandsOnly;
@property(readonly, nonatomic) BOOL hasDeviceID;
@property(nonatomic) BOOL hasDSID;
@property(nonatomic) BOOL hasCommandSerialNumber;

@end

