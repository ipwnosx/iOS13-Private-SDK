//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class AXPIFingerLayer, CAShapeLayer;
@protocol AXPIFingerAppearanceDelegate;

@interface AXPIFingerView : UIView <CAAnimationDelegate>
{
    BOOL _pressed;
    double _force;
    AXPIFingerLayer *_cursorLayer;
    id <AXPIFingerAppearanceDelegate> _appearanceDelegate;
    CAShapeLayer *_progressLayer;
    id /* CDUnknownBlockType */ _lastProgressCompletionBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ lastProgressCompletionBlock; // @synthesize lastProgressCompletionBlock=_lastProgressCompletionBlock;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(nonatomic) __weak id <AXPIFingerAppearanceDelegate> appearanceDelegate; // @synthesize appearanceDelegate=_appearanceDelegate;
@property(retain, nonatomic) AXPIFingerLayer *cursorLayer; // @synthesize cursorLayer=_cursorLayer;
@property(nonatomic) double force; // @synthesize force=_force;
@property(nonatomic, getter=isPressed) BOOL pressed; // @synthesize pressed=_pressed;
// - (void).cxx_destruct;
- (BOOL)accessibilityIgnoresInvertColors;
- (BOOL)isUserInteractionEnabled;
- (double)_iconScaleForForce:(double)arg1;
- (void)animateToTapWithDuration:(double)arg1;
- (CGPathRef)_drawFullCircleWithCenter:(CGPoint)arg1 radius:(double)arg2 clockwise:(BOOL)arg3;
- (id)_createProgressLayerWithDuration:(double)arg1 center:(CGPoint)arg2 radius:(double)arg3;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)cancelExisingCircularProgressAnimation;
- (void)animateCircularProgressWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setPressed:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isSelected) BOOL selected;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1 appearanceDelegate:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end

