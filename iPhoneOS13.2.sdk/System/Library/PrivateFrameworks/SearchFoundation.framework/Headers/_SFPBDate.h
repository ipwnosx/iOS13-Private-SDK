//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/_SFPBDate-Protocol.h>

@class NSData;

@interface _SFPBDate : PBCodable <_SFPBDate, NSSecureCoding>
{
    double _secondsSince1970;
}

@property(nonatomic) double secondsSince1970; // @synthesize secondsSince1970=_secondsSince1970;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)initWithNSDate:(id)arg1;

@end

