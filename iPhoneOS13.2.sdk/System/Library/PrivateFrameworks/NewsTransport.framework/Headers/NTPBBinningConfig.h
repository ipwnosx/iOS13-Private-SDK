//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface NTPBBinningConfig : PBCodable <NSCopying>
{
    double _decreaseConsumptionThreshold;
    long long _evaluationFrequency;
    long long _historyLength;
    double _increaseConsumptionThreshold;
    long long _minimumArticleCount;
    int _defaultChannelBin;
    int _defaultTopicBin;
    BOOL _enabled;
   struct {
        unsigned int decreaseConsumptionThreshold:1;
        unsigned int evaluationFrequency:1;
        unsigned int historyLength:1;
        unsigned int increaseConsumptionThreshold:1;
        unsigned int minimumArticleCount:1;
        unsigned int defaultChannelBin:1;
        unsigned int defaultTopicBin:1;
        unsigned int enabled:1;
    } _has;
}

@property(nonatomic) long long minimumArticleCount; // @synthesize minimumArticleCount=_minimumArticleCount;
@property(nonatomic) double decreaseConsumptionThreshold; // @synthesize decreaseConsumptionThreshold=_decreaseConsumptionThreshold;
@property(nonatomic) double increaseConsumptionThreshold; // @synthesize increaseConsumptionThreshold=_increaseConsumptionThreshold;
@property(nonatomic) long long historyLength; // @synthesize historyLength=_historyLength;
@property(nonatomic) long long evaluationFrequency; // @synthesize evaluationFrequency=_evaluationFrequency;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasDefaultChannelBin;
@property(nonatomic) int defaultChannelBin; // @synthesize defaultChannelBin=_defaultChannelBin;
@property(nonatomic) BOOL hasDefaultTopicBin;
@property(nonatomic) int defaultTopicBin; // @synthesize defaultTopicBin=_defaultTopicBin;
@property(nonatomic) BOOL hasMinimumArticleCount;
@property(nonatomic) BOOL hasDecreaseConsumptionThreshold;
@property(nonatomic) BOOL hasIncreaseConsumptionThreshold;
@property(nonatomic) BOOL hasHistoryLength;
@property(nonatomic) BOOL hasEvaluationFrequency;
@property(nonatomic) BOOL hasEnabled;

@end

