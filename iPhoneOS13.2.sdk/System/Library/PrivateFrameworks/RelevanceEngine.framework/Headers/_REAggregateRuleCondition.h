//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RECondition.h>

#import <RelevanceEngine/REAutomaticExportedInterface-Protocol.h>

@class NSSet;

@interface _REAggregateRuleCondition : RECondition <REAutomaticExportedInterface>
{
    NSUInteger _type;
    NSSet *_conditions;
}

@property(readonly, nonatomic) NSSet *conditions; // @synthesize conditions=_conditions;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (BOOL)_acceptsLeftFeatureMap:(id)arg1 rightFeatureMap:(id)arg2;
- (BOOL)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id )arg3;
- (id)_inflectionFeatureValuePairs;
- (BOOL)_needsProbability;
- (BOOL)_validForRanking;
- (BOOL)_requiresTwoFeatures;
- (id)_notCondition;
- (id)_dependentFeatures;
@property(readonly, nonatomic) NSUInteger count;
- (id)initWithConditions:(id)arg1 type:(NSUInteger)arg2;

@end

