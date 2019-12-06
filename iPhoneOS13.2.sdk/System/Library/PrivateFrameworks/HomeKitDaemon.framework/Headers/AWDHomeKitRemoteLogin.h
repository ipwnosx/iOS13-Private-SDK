//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface AWDHomeKitRemoteLogin : PBCodable <NSCopying>
{
    NSUInteger _delay;
    NSUInteger _timestamp;
    int _loginType;
    int _requester;
    int _resultErrorCode;
   struct {
        unsigned int delay:1;
        unsigned int timestamp:1;
        unsigned int loginType:1;
        unsigned int requester:1;
        unsigned int resultErrorCode:1;
    } _has;
}

@property(nonatomic) NSUInteger delay; // @synthesize delay=_delay;
@property(nonatomic) int resultErrorCode; // @synthesize resultErrorCode=_resultErrorCode;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsRequester:(id)arg1;
- (id)requesterAsString:(int)arg1;
@property(nonatomic) BOOL hasRequester;
@property(nonatomic) int requester; // @synthesize requester=_requester;
@property(nonatomic) BOOL hasDelay;
@property(nonatomic) BOOL hasResultErrorCode;
- (int)StringAsLoginType:(id)arg1;
- (id)loginTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasLoginType;
@property(nonatomic) int loginType; // @synthesize loginType=_loginType;
@property(nonatomic) BOOL hasTimestamp;

@end

