//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface ATXScoredPrediction : NSObject <NSCopying, NSSecureCoding>
{
    float _score;
    id _predictedItem;
}

+ (BOOL)supportsSecureCoding;
+ (id)predictionsFrom:(id)arg1;
@property(readonly, nonatomic) float score; // @synthesize score=_score;
@property(readonly, nonatomic) id predictedItem; // @synthesize predictedItem=_predictedItem;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (BOOL)isEqualToScoredPredictionItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithBundleId:(id)arg1 score:(float)arg2;
- (id)initWithPredictedItem:(id)arg1 score:(float)arg2;
- (id)init;

@end

