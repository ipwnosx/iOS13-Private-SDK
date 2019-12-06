//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class NSString;

@interface NPKProtoAssertionRequest : PBRequest <NSCopying>
{
    int _assertionType;
    NSString *_requestUUIDString;
    BOOL _pending;
   struct {
        unsigned int assertionType:1;
        unsigned int pending:1;
    } _has;
}

@property(nonatomic) BOOL pending; // @synthesize pending=_pending;
@property(retain, nonatomic) NSString *requestUUIDString; // @synthesize requestUUIDString=_requestUUIDString;
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
@property(nonatomic) BOOL hasPending;
- (int)StringAsAssertionType:(id)arg1;
- (id)assertionTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasAssertionType;
@property(nonatomic) int assertionType; // @synthesize assertionType=_assertionType;

@end

