//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKTimeScopeControl.h>

@class UISegmentedControl;

@interface _HKTimeScopeControlBar : HKTimeScopeControl
{
    UISegmentedControl *_segments;
}

// - (void).cxx_destruct;
- (void)_segmentValueChanged:(id)arg1;
- (void)setSelectedTimeScope:(long long)arg1;
- (long long)selectedTimeScope;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1 timeScopes:(id)arg2 shortTextStyle:(BOOL)arg3;

@end
