//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIColor;

@interface LAUIRadialPingView : UIView
{
    UIColor *_color;
    UIView *_container;
    UIView *_primary;
//     struct array<(anonymous namespace)::blur_container, 2> _blurs;
//     struct periodic_animation_state _pulse;
    BOOL _animating_dirty;
    unsigned char _animating_counter;
    BOOL _animating;
}

@property(nonatomic, getter=isAnimating) BOOL animating; // @synthesize animating=_animating;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)_endExpand;
- (void)_startExpandWithDelay:(double)arg1;
- (void)_updateAnimatingAnimated:(BOOL)arg1;
// - (void)_attachExpandAnimationToContainer:(struct blur_container )arg1 withDelay:(double)arg2;
- (void)_updateExpandForBlurAtIndex:(NSUInteger)arg1 withDelay:(double)arg2;
- (void)_setExpand:(BOOL)arg1 forBlurAtIndex:(NSUInteger)arg2 withDelay:(double)arg3;
- (void)_attachPulseAnimationWithDelay:(double)arg1;
- (void)_setPulse:(BOOL)arg1 withDelay:(double)arg2;
- (void)_updateViewsWithColor;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)tintColorDidChange;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

