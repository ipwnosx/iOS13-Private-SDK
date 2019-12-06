//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <MobileTimerUI/MTClock-Protocol.h>

@class NSCalendar, NSDate, NSTimeZone, UIImage, UIImageView;

@interface MTUIAnalogClockView : UIView <MTClock>
{
    long long _runMode;
    UIImage *_faceDayImage;
    UIImage *_faceNightImage;
    UIImageView *_faceView;
    UIView *_dayHands[3];
    UIView *_nightHands[3];
    UIImageView *_middleDotDay;
    UIImageView *_middleDotNight;
    UIImageView *_middleRedDot;
    NSDate *_time;
    BOOL _nighttime;
    double _seconds;
    int _flutterIndex;
    BOOL _isRenderStateStale;
    NSCalendar *_calendar;
    BOOL _minuteHourAnimationTriggered;
}

+ (id)imageInBundleForName:(id)arg1;
+ (id)overSecondHandDotImage;
+ (id)makeOverSecondHandDotImage;
+ (id)overHourHandDotForDayTime:(BOOL)arg1;
+ (id)overHourHandDotImageForDaytime:(BOOL)arg1;
+ (id)makeDotImageSize:(double)arg1 color:(id)arg2;
+ (id)clockHand:(long long)arg1 daytime:(BOOL)arg2;
+ (id)makeClockHand:(long long)arg1 daytime:(BOOL)arg2;
+ (id)clockFaceForDaytime:(BOOL)arg1 ignoreCache:(BOOL)arg2;
+ (id)clockFaceForDaytime:(BOOL)arg1;
+ (void)adjustNumberalCenter:(CGPoint )arg1 forNumeralIndex:(long long)arg2;
+ (id)makeClockFaceForDaytime:(BOOL)arg1;
+ (id)imageForType:(int)arg1 dayTime:(BOOL)arg2 generation:(CDUnknownBlockType)arg3 ignoreCache:(BOOL)arg4;
+ (id)imageForType:(int)arg1 dayTime:(BOOL)arg2 generation:(CDUnknownBlockType)arg3;
+ (BOOL)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(BOOL)arg2;
+ (id)imageCacheNameForType:(int)arg1 daytime:(BOOL)arg2;
+ (CGPoint)shadowRotationalCenterForHand:(long long)arg1;
+ (CGPoint)handRotationalCenterForHand:(long long)arg1;
+ (id)shadowInfoAtIndex:(NSUInteger)arg1;
+ (CGSize)clockSize;
+ (double)overSecondHandDotSize;
+ (double)overHourHandDotSize;
+ (BOOL)hasOverSecondHandDot;
+ (BOOL)hasOverHourHandDot;
+ (double)antialiasPaddingRatio;
+ (UIEdgeInsets)shadowInsets;
+ (BOOL)doesFaceHaveShadow;
+ (id)numeralFont;
+ (double)numeralInset;
+ (id)nightTimeSecondHandColor;
+ (id)dayTimeSecondHandColor;
+ (id)nightTimeMinuteHandColor;
+ (id)dayTimeMinuteHandColor;
+ (id)nightTimeHourHandColor;
+ (id)dayTimeHourHandColor;
+ (id)overSecondHandDotColor;
+ (id)nightTimeOverHourHandDotColor;
+ (id)dayTimeOverHourHandDotColor;
+ (id)nightTimeFaceColor;
+ (id)nightTimeTextColor;
+ (id)dayTimeFaceColor;
+ (id)dayTimeTextColor;
+ (id)resourcePath;
+ (long long)style;
+ (double)hourHandWidth;
+ (double)minuteHandWidth;
+ (double)secondHandWidth;
+ (double)hourHandLength;
+ (double)minuteHandLength;
+ (double)secondHandOverhangLength;
+ (double)secondHandMainLength;
+ (double)secondHandLength;
+ (double)faceRadius;
+ (id)analogClockWithStyle:(long long)arg1;
+ (UIEdgeInsets)insetsForStyle:(long long)arg1;
+ (CGSize)sizeForStyle:(long long)arg1;
+ (void)unregisterSweepingClock:(id)arg1;
+ (void)unregisterTickingClock:(id)arg1;
+ (void)unregisterClock:(id)arg1;
+ (void)registerSweepingClock:(id)arg1;
+ (void)registerTickingClock:(id)arg1;
+ (void)registerClock:(id)arg1;
+ (BOOL)isClockRegistered:(id)arg1;
+ (void)updateTimeForAllSweeping;
+ (void)updateFlutterForAllTicking;
+ (void)updateTimeForAllTicking;
+ (id)cacheVersionHash;
+ (id)cacheVersionedPath;
+ (id)cacheTopLevelPath;
+ (void)initialize;
+ (Class)classForStyle:(long long)arg1;
@property(readonly, nonatomic, getter=isNighttime) BOOL nighttime; // @synthesize nighttime=_nighttime;
@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(readonly, nonatomic) UIImageView *faceView; // @synthesize faceView=_faceView;
@property(nonatomic) long long runMode; // @synthesize runMode=_runMode;
// - (void).cxx_destruct;
- (void)handleLocaleChange;
- (void)stop;
- (void)start;
@property(readonly, nonatomic, getter=isStarted) BOOL started;
@property(retain, nonatomic) NSTimeZone *timeZone;
- (void)setTime:(id)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) long long minute;
@property(readonly, nonatomic) long long hour;
- (void)updateTimeAnimated:(BOOL)arg1;
- (void)updateTime;
- (void)updateFlutter;
- (void)setHandAngle:(double)arg1 forHandIndex:(long long)arg2;
- (void)updateTimeContinuously:(long long)arg1;
- (void)setHandTransformForHandIndex:(long long)arg1;
- (CGSize)intrinsicContentSize;
@property(readonly, nonatomic) long long style;
- (id)init;
- (void)setFrame:(CGRect)arg1;
- (double)coarseUpdateInterval;
- (double)updateInterval;

@end

