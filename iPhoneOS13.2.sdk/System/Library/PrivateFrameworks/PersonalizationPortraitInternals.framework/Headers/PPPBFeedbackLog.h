//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString, PPPBFeedbackMetadata;

@interface PPPBFeedbackLog : PBCodable <NSCopying>
{
    NSString *_assetVersion;
    NSMutableArray *_experimentalGroups;
    NSMutableArray *_extractedDonations;
    PPPBFeedbackMetadata *_feedbackMetadata;
    NSString *_homeLocationGeohash;
    int _predictionType;
    NSMutableArray *_scoredItems;
    struct {
        unsigned int predictionType:1;
    } _has;
}

+ (Class)experimentalGroupsType;
+ (Class)extractedDonationsType;
+ (Class)scoredItemsType;
@property(retain, nonatomic) NSString *assetVersion; // @synthesize assetVersion=_assetVersion;
@property(retain, nonatomic) NSString *homeLocationGeohash; // @synthesize homeLocationGeohash=_homeLocationGeohash;
@property(retain, nonatomic) NSMutableArray *experimentalGroups; // @synthesize experimentalGroups=_experimentalGroups;
@property(retain, nonatomic) NSMutableArray *extractedDonations; // @synthesize extractedDonations=_extractedDonations;
@property(retain, nonatomic) NSMutableArray *scoredItems; // @synthesize scoredItems=_scoredItems;
@property(retain, nonatomic) PPPBFeedbackMetadata *feedbackMetadata; // @synthesize feedbackMetadata=_feedbackMetadata;
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
@property(readonly, nonatomic) BOOL hasAssetVersion;
@property(readonly, nonatomic) BOOL hasHomeLocationGeohash;
- (id)experimentalGroupsAtIndex:(NSUInteger)arg1;
- (NSUInteger)experimentalGroupsCount;
- (void)addExperimentalGroups:(id)arg1;
- (void)clearExperimentalGroups;
- (id)extractedDonationsAtIndex:(NSUInteger)arg1;
- (NSUInteger)extractedDonationsCount;
- (void)addExtractedDonations:(id)arg1;
- (void)clearExtractedDonations;
- (id)scoredItemsAtIndex:(NSUInteger)arg1;
- (NSUInteger)scoredItemsCount;
- (void)addScoredItems:(id)arg1;
- (void)clearScoredItems;
@property(nonatomic) BOOL hasPredictionType;
@property(nonatomic) int predictionType; // @synthesize predictionType=_predictionType;
@property(readonly, nonatomic) BOOL hasFeedbackMetadata;

@end

