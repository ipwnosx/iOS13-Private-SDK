//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMSpring.h>

@interface CAMTrackingSpring : CAMSpring
{
    CAMSpring *__settleProgressSpring;
    double __convergenceStartValue;
    struct {
        double value;
        double strength;
    } __secondaryTarget;
}

@property(nonatomic, setter=_convergenceStartValue:) double _convergenceStartValue; // @synthesize _convergenceStartValue=__convergenceStartValue;
@property(nonatomic, setter=_setSecondaryTarget:) CDStruct_c3b9c2ee _secondaryTarget; // @synthesize _secondaryTarget=__secondaryTarget;
@property(retain, nonatomic, setter=_setSettlingSpring:) CAMSpring *_settleProgressSpring; // @synthesize _settleProgressSpring=__settleProgressSpring;
- (void)updateForTimestamp:(double)arg1;
- (void)resetToValue:(double)arg1 animated:(_Bool)arg2;
- (void)resetToValue:(double)arg1;
@property(readonly, nonatomic) _Bool hasSecondaryTarget;
- (void)removeSecondaryTargetAnimated:(_Bool)arg1;
- (void)setSecondaryTarget:(double)arg1 withStrength:(double)arg2 animated:(_Bool)arg3;
- (void)setTarget:(double)arg1 animated:(_Bool)arg2;
- (void)_beginConverging;
@property(readonly, nonatomic) double convergenceProgress;
- (_Bool)isConverged;
- (id)initWithTension:(double)arg1 friction:(double)arg2 epsilon:(double)arg3;

@end
