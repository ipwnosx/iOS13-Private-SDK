//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface AWDHomeKitAssistantAccessControl : PBCodable <NSCopying>
{
    NSUInteger _numCapableAccessories;
    NSUInteger _numEnabledAccessories;
    NSUInteger _options;
    NSUInteger _timestamp;
    BOOL _isEnabled;
   struct {
        unsigned int numCapableAccessories:1;
        unsigned int numEnabledAccessories:1;
        unsigned int options:1;
        unsigned int timestamp:1;
        unsigned int isEnabled:1;
    } _has;
}

@property(nonatomic) NSUInteger numCapableAccessories; // @synthesize numCapableAccessories=_numCapableAccessories;
@property(nonatomic) NSUInteger numEnabledAccessories; // @synthesize numEnabledAccessories=_numEnabledAccessories;
@property(nonatomic) NSUInteger options; // @synthesize options=_options;
@property(nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
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
@property(nonatomic) BOOL hasNumCapableAccessories;
@property(nonatomic) BOOL hasNumEnabledAccessories;
@property(nonatomic) BOOL hasOptions;
@property(nonatomic) BOOL hasIsEnabled;
@property(nonatomic) BOOL hasTimestamp;

@end

