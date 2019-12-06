//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class NSArray, UIImage, UIImageView, UIScrollView, _UIRepeatingPressGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _TVDescriptiveAlertView : UIView <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    NSArray *_viewsAboveScrollView;
    NSArray *_viewsBelowScrollView;
    UIView *_defaultFocusView;
    BOOL _isCenteredLayout;
    _UIRepeatingPressGestureRecognizer *_upButtonGesture;
    _UIRepeatingPressGestureRecognizer *_downButtonGesture;
    BOOL _waiting;
    UIImage *_bgImage;
    UIImageView *_bgImageView;
    NSArray *_childViews;
}

@property(retain, nonatomic) UIView *defaultFocusView; // @synthesize defaultFocusView=_defaultFocusView;
@property(retain, nonatomic) NSArray *childViews; // @synthesize childViews=_childViews;
// - (void).cxx_destruct;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)preferredFocusEnvironments;
- (void)_scrollInDirection:(double)arg1;
- (void)_scrollDown;
- (void)_scrollDown:(id)arg1;
- (void)_scrollUp;
- (void)_scrollUp:(id)arg1;
- (void)_setupGestureRecognizers;
- (void)setBgImage:(id)arg1;

@end

