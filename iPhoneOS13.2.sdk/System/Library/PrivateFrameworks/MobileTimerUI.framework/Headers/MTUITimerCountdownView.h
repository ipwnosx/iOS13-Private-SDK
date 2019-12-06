//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CALayer, CAShapeLayer, UIColor;

@interface MTUITimerCountdownView : UIView
{
    double _remainingTime;
    double _duration;
    long long _state;
    CAShapeLayer *_backgroundCircleLayer;
    CAShapeLayer *_countdownCircleLayer;
    UIColor *_barColor;
    UIColor *_backgroundBarColor;
    double _barWidth;
    CALayer *_mainLayer;
}

@property(retain) CALayer *mainLayer; // @synthesize mainLayer=_mainLayer;
@property double barWidth; // @synthesize barWidth=_barWidth;
@property(retain) UIColor *backgroundBarColor; // @synthesize backgroundBarColor=_backgroundBarColor;
@property(retain) UIColor *barColor; // @synthesize barColor=_barColor;
@property(retain) CAShapeLayer *countdownCircleLayer; // @synthesize countdownCircleLayer=_countdownCircleLayer;
@property(retain) CAShapeLayer *backgroundCircleLayer; // @synthesize backgroundCircleLayer=_backgroundCircleLayer;
@property long long state; // @synthesize state=_state;
@property double duration; // @synthesize duration=_duration;
@property double remainingTime; // @synthesize remainingTime=_remainingTime;
// - (void).cxx_destruct;
- (BOOL)isStarted;
- (void)resume;
- (void)stop;
- (void)pause;
- (double)angleForValue:(double)arg1 total:(double)arg2;
- (double)degToRad:(double)arg1;
- (void)start;
- (void)setAnimationRemainingTime:(double)arg1 totalTime:(double)arg2;
- (void)setupBackgroundCircle;
- (void)layoutSubviews;
- (id)initWithBarColor:(id)arg1 backgroundBarColor:(id)arg2 barWidth:(double)arg3 remainingTime:(double)arg4 duration:(double)arg5;
- (id)initWithBarColor:(id)arg1 backgroundBarColor:(id)arg2 barWidth:(double)arg3;

@end

