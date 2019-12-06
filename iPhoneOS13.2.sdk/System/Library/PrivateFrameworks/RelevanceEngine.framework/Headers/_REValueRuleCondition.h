//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RECondition.h>

#import <RelevanceEngine/REAutomaticExportedInterface-Protocol.h>

@class REFeature;

@interface _REValueRuleCondition : RECondition <REAutomaticExportedInterface>
{
    BOOL _allowsEmptyValueForFeature;
    REFeature *_feature;
    long long _relation;
    NSUInteger _value;
}

@property(readonly, nonatomic) NSUInteger value; // @synthesize value=_value;
@property(readonly, nonatomic) long long relation; // @synthesize relation=_relation;
@property(readonly, nonatomic) REFeature *feature; // @synthesize feature=_feature;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)_inflectionFeatureValuePairs;
- (BOOL)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id )arg3;
- (id)_notCondition;
- (id)_dependentFeatures;
- (void)dealloc;
- (id)initWithFeature:(id)arg1 relation:(long long)arg2 value:(NSUInteger)arg3;

@end

