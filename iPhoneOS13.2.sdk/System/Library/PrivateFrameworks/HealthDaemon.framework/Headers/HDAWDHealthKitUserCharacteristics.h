//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface HDAWDHealthKitUserCharacteristics : PBCodable <NSCopying>
{
    long long _ageYears;
    long long _biologicalSex;
    long long _heightCm;
    long long _weightKg;
   struct {
        unsigned int ageYears:1;
        unsigned int biologicalSex:1;
        unsigned int heightCm:1;
        unsigned int weightKg:1;
    } _has;
}

@property(nonatomic) long long ageYears; // @synthesize ageYears=_ageYears;
@property(nonatomic) long long biologicalSex; // @synthesize biologicalSex=_biologicalSex;
@property(nonatomic) long long heightCm; // @synthesize heightCm=_heightCm;
@property(nonatomic) long long weightKg; // @synthesize weightKg=_weightKg;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasAgeYears;
@property(nonatomic) BOOL hasBiologicalSex;
@property(nonatomic) BOOL hasHeightCm;
@property(nonatomic) BOOL hasWeightKg;

@end

