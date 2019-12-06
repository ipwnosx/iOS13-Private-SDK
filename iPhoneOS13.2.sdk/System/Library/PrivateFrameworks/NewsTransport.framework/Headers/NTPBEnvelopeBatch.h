//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface NTPBEnvelopeBatch : PBCodable <NSCopying>
{
    int _envelopeDroppedCountDueToSizeLimit;
    NSMutableArray *_envelopes;
    int _majorVersion;
    int _minorVersion;
    int _patchVersion;
   struct {
        unsigned int envelopeDroppedCountDueToSizeLimit:1;
        unsigned int majorVersion:1;
        unsigned int minorVersion:1;
        unsigned int patchVersion:1;
    } _has;
}

+ (Class)envelopeType;
@property(nonatomic) int envelopeDroppedCountDueToSizeLimit; // @synthesize envelopeDroppedCountDueToSizeLimit=_envelopeDroppedCountDueToSizeLimit;
@property(nonatomic) int patchVersion; // @synthesize patchVersion=_patchVersion;
@property(nonatomic) int minorVersion; // @synthesize minorVersion=_minorVersion;
@property(nonatomic) int majorVersion; // @synthesize majorVersion=_majorVersion;
@property(retain, nonatomic) NSMutableArray *envelopes; // @synthesize envelopes=_envelopes;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasEnvelopeDroppedCountDueToSizeLimit;
@property(nonatomic) BOOL hasPatchVersion;
@property(nonatomic) BOOL hasMinorVersion;
@property(nonatomic) BOOL hasMajorVersion;
- (id)envelopeAtIndex:(NSUInteger)arg1;
- (NSUInteger)envelopesCount;
- (void)addEnvelope:(id)arg1;
- (void)clearEnvelopes;

@end

