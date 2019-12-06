//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/_VUISBIconProgressTransition.h>

@class CAMediaTimingFunction;

__attribute__((visibility("hidden")))
@interface _VUISBIconProgressPausedTransition : _VUISBIconProgressTransition
{
    double _totalElapsedTime;
    double _duration;
    CAMediaTimingFunction *_timingFunction;
    BOOL _toPaused;
    double _fraction;
}

+ (id)newTransitionToPaused:(BOOL)arg1;
- (void)_updateElapsedTimeFromFraction;
- (void)_updateTimingFunction;
- (void)_updateView:(id)arg1;
- (BOOL)isCompleteWithView:(id)arg1;
- (void)completeTransitionAndUpdateView:(id)arg1;
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;
- (void)updateToPaused:(BOOL)arg1;
- (void)dealloc;
- (id)_initToPaused:(BOOL)arg1;

@end

