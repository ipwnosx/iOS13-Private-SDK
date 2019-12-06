//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIColor, UIImageView;

@interface FIUIActionButton : UIButton
{
    BOOL _animatingTouchDown;
    id /* CDUnknownBlockType */ _touchUpAnimationCompleteHandler;
    UIColor *_imageViewTintColor;
    UIColor *_backgroundImageColor;
    UIImageView *_transformingImageView;
}

+ (id)buttonWithTitle:(id)arg1 color:(id)arg2 icon:(id)arg3;
@property(retain, nonatomic) UIImageView *transformingImageView; // @synthesize transformingImageView=_transformingImageView;
@property(nonatomic) BOOL animatingTouchDown; // @synthesize animatingTouchDown=_animatingTouchDown;
@property(retain, nonatomic) UIColor *backgroundImageColor; // @synthesize backgroundImageColor=_backgroundImageColor;
@property(retain, nonatomic) UIColor *imageViewTintColor; // @synthesize imageViewTintColor=_imageViewTintColor;
@property(copy, nonatomic) id /* CDUnknownBlockType */ touchUpAnimationCompleteHandler; // @synthesize touchUpAnimationCompleteHandler=_touchUpAnimationCompleteHandler;
// - (void).cxx_destruct;
- (CGRect)backgroundImageFrame;
- (CGRect)imageRectForContentRect:(CGRect)arg1;
- (CGRect)titleRectForContentRect:(CGRect)arg1;
- (CGRect)backgroundRectForBounds:(CGRect)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)_animateHighlighted:(BOOL)arg1;
- (void)_touchUp;
- (void)_touchDown;
- (void)setEnabled:(BOOL)arg1;
- (void)tintColorDidChange;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setImage:(id)arg1 forState:(NSUInteger)arg2;
- (void)_setupInternalTouchActions;
- (void)turnIntoSolidDotWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

