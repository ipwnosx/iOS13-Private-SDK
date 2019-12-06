//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NTPBConfig;

@interface NTPBABConfig : PBCodable <NSCopying>
{
    long long _populationCeiling;
    long long _populationFloor;
    NSMutableArray *_configBuckets;
    NTPBConfig *_configControl;
   struct {
        unsigned int populationCeiling:1;
        unsigned int populationFloor:1;
    } _has;
}

+ (Class)configBucketsType;
@property(retain, nonatomic) NSMutableArray *configBuckets; // @synthesize configBuckets=_configBuckets;
@property(retain, nonatomic) NTPBConfig *configControl; // @synthesize configControl=_configControl;
@property(nonatomic) long long populationCeiling; // @synthesize populationCeiling=_populationCeiling;
@property(nonatomic) long long populationFloor; // @synthesize populationFloor=_populationFloor;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)configBucketsAtIndex:(NSUInteger)arg1;
- (NSUInteger)configBucketsCount;
- (void)addConfigBuckets:(id)arg1;
- (void)clearConfigBuckets;
@property(readonly, nonatomic) BOOL hasConfigControl;
@property(nonatomic) BOOL hasPopulationCeiling;
@property(nonatomic) BOOL hasPopulationFloor;

@end

