//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAShapeLayer.h>

@protocol AXPIFingerAppearanceDelegate;

@interface AXPIFingerLayer : CAShapeLayer
{
    BOOL _isSelected;
    BOOL _pressed;
    CAShapeLayer *_outerStrokeLayer;
    CAShapeLayer *_innerStrokeLayer;
    id <AXPIFingerAppearanceDelegate> _appearanceDelegate;
    CGRect _outerFrame;
}

@property(readonly, nonatomic) CGRect outerFrame; // @synthesize outerFrame=_outerFrame;
@property(nonatomic) __weak id <AXPIFingerAppearanceDelegate> appearanceDelegate; // @synthesize appearanceDelegate=_appearanceDelegate;
@property(retain, nonatomic) CAShapeLayer *innerStrokeLayer; // @synthesize innerStrokeLayer=_innerStrokeLayer;
@property(retain, nonatomic) CAShapeLayer *outerStrokeLayer; // @synthesize outerStrokeLayer=_outerStrokeLayer;
@property(nonatomic, getter=isPressed) BOOL pressed; // @synthesize pressed=_pressed;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_isSelected;
// - (void).cxx_destruct;
- (void)animateToTapWithDuration:(double)arg1;
- (void)dealloc;
- (id)initWithAppearanceDelegate:(id)arg1;

@end

