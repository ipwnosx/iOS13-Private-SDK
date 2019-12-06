//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CALayer;

@interface MCDButton : UIButton
{
    CALayer *_focusColorLayer;
    BOOL _showBezelInTouch;
    BOOL _showHighlight;
}

@property(nonatomic) BOOL showHighlight; // @synthesize showHighlight=_showHighlight;
@property(nonatomic) BOOL showBezelInTouch; // @synthesize showBezelInTouch=_showBezelInTouch;
// - (void).cxx_destruct;
- (BOOL)shouldUpdateButtonOpacityForKnobUnfocused;
- (id)colorForKnobFocused;
- (id)colorForKnobFocusLayerSelected;
- (id)colorForKnobFocusLayer;
- (void)updateButtonOpacityForKnobUnfocused;
- (id)colorForKnobContentSelected;
- (id)colorForTouchFocusLayerSelected;
- (id)colorForTouchFocusLayer;
- (id)colorForTouchContentSelected;
- (void)_updateButtonStyle;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (double)focusLayerCornerRadius;
- (id)_buttonBackGroundColorTouch;
- (id)tintColorForUnhighlightedTextLabel;
- (void)setHidden:(BOOL)arg1;
@property(nonatomic, getter=isSelected) BOOL selected; // @dynamic selected;
- (void)willMoveToWindow:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (BOOL)canBecomeFocused;
- (BOOL)canShowHighlight;
- (id)initWithFrame:(CGRect)arg1;

@end

