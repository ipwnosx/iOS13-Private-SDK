//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface HUQuickControlBackgroundEffectView : UIView
{
    NSUInteger _effectType;
}

@property(readonly, nonatomic) NSUInteger effectType; // @synthesize effectType=_effectType;
- (void)_configureForCurrentEffectType;
- (void)tintColorDidChange;
- (id)initWithEffectType:(NSUInteger)arg1;

@end

