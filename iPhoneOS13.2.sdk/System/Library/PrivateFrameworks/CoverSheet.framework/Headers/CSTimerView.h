//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFLockScreenDateSubtitleView.h>

#import <CoverSheet/PTSettingsKeyObserver-Protocol.h>

@class NSDate;

@interface CSTimerView : SBFLockScreenDateSubtitleView <PTSettingsKeyObserver>
{
    NSDate *_endDate;
}

// - (void).cxx_destruct;
- (id)_timerFont;
- (id)_newTimerDialForSettings:(id)arg1;
- (void)_updateLegibilityStrength;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)updateTimerLabel;
- (void)setEndDate:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)dealloc;
- (id)init;

@end

