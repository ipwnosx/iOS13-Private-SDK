//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIFeedbackGenerator.h>

@class _UIImpactFeedbackGeneratorConfiguration;

@interface UIImpactFeedbackGenerator : UIFeedbackGenerator
{
    long long _style;
}

+ (Class)_configurationClass;
- (id)_stats_key;
- (id)_styleString;
- (id)_ui_descriptionBuilder;
- (void)impactOccurredWithIntensity:(double)arg1;
- (void)impactOccurred;
- (void)_impactOccurredWithIntensity:(double)arg1;
@property(readonly, nonatomic, getter=_impactConfiguration) _UIImpactFeedbackGeneratorConfiguration *impactConfiguration;
- (id)initWithStyle:(long long)arg1 coordinateSpace:(id)arg2;
- (id)initWithStyle:(long long)arg1;

@end
