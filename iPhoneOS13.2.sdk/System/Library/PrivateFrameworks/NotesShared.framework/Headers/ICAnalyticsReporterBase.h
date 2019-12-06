//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ICAnalyticsReporterAccessibilityDelegate;

@interface ICAnalyticsReporterBase : NSObject
{
    id <ICAnalyticsReporterAccessibilityDelegate> _accessibilityDelegate;
}

+ (long long)roundIntegerValue:(long long)arg1;
+ (double)roundDoubleValue:(double)arg1;
+ (id)instrumentationKeyForKey:(id)arg1;
@property(nonatomic) __weak id <ICAnalyticsReporterAccessibilityDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
// - (void).cxx_destruct;
- (id)whitelistedSubkeysForAccessibilityForKey:(id)arg1;
- (id)whitelistedKeysForAccessibility;
- (void)setAXVariantValueIfNecessary:(long long)arg1 forKey:(id)arg2;
- (void)addAXVariantValueIfNecessary:(long long)arg1 forKey:(id)arg2 withSignature:(id)arg3;
- (BOOL)shouldLogKeyForAccessibility:(id)arg1 withSignature:(id)arg2;
- (id)keyForCurrentlyActiveAssistiveTechnology;
- (id)instrumentationAXKeyForKey:(id)arg1;
- (id)instrumentationKeyForKey:(id)arg1;
- (void)pushValue:(double)arg1 toDistributionKey:(id)arg2 withSignature:(id)arg3;
- (void)pushValue:(double)arg1 toDistributionKey:(id)arg2;
- (void)setValue:(long long)arg1 forScalarKey:(id)arg2;
- (void)addValue:(long long)arg1 forKey:(id)arg2 withSignature:(id)arg3;
- (void)addValue:(long long)arg1 forScalarKey:(id)arg2;

@end

