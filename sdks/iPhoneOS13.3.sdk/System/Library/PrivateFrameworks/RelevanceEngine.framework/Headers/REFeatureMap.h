//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/MLFeatureProvider-Protocol.h>
#import <RelevanceEngine/_REFeatureMapLoggingProperties-Protocol.h>

@class NSArray, NSDictionary, NSSet;

@interface REFeatureMap : NSObject <MLFeatureProvider, _REFeatureMapLoggingProperties, NSCopying>
{
    NSUInteger _hash;
    NSUInteger _values;
    NSDictionary *_indices;
}

+ (id)defaultFeatureName;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *loggingValues;
@property(readonly, nonatomic) NSSet *allFeatures;
- (id)description;
- (void)enumerateFeatureValuesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateEmptyFeaturesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateStringFeaturesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateDoubleFeaturesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateInt64FeaturesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateBoolFeaturesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateFeaturesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)hasValueForFeature:(id)arg1;
- (NSUInteger)valueForFeature:(id)arg1;
- (id)featureValueForFeature:(id)arg1;
- (void)removeAllValues;
- (void)removeValueForFeature:(id)arg1;
- (void)setFeatureValue:(id)arg1 forFeature:(id)arg2;
- (void)setValue:(NSUInteger)arg1 forFeature:(id)arg2;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (NSUInteger)_count;
- (void)dealloc;
- (id)initWithFeatureMap:(id)arg1;
- (void)enumerateInt64FeaturesUsingIndexedBlock:(id /* CDUnknownBlockType */)arg1 emptyFeatureBlock:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic) NSUInteger featureCount;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;

@end
