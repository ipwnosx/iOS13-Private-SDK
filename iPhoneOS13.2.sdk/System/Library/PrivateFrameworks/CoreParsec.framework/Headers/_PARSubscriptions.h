//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/_PARSubscriptions-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface _PARSubscriptions : PBCodable <_PARSubscriptions, NSSecureCoding>
{
    NSData *_subscriptionJSON;
}

@property(copy, nonatomic) NSData *subscriptionJSON; // @synthesize subscriptionJSON=_subscriptionJSON;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;

@end

