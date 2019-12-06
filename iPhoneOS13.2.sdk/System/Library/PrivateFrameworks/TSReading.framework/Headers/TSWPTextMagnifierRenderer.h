//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CALayer;
@protocol TSWPTextMagnifierRendererDelegate;

@interface TSWPTextMagnifierRenderer : UIView
{
    id <TSWPTextMagnifierRendererDelegate> _delegate;
    CALayer *_underlayLayer;
    CALayer *_canvasLayer;
    CALayer *_overlayLayer;
    int _autoscrollDirections;
}

@property(nonatomic) int autoscrollDirections; // @synthesize autoscrollDirections=_autoscrollDirections;
@property(nonatomic) id <TSWPTextMagnifierRendererDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drawLayer:(id)arg1 inContext:(CGContextRef )arg2;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)p_createChildLayer;
- (void)setNeedsDisplay;
- (void)canvasNeedsDisplay;
- (void)tearDown;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

