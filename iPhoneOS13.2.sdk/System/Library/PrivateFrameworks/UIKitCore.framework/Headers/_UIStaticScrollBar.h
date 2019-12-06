//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"


@class NSArray, NSInvocation, UIButton, UIScrollView;

@interface _UIStaticScrollBar : UIView <UIScrollAccessory>
{
    UIButton *_upButton;
    UIButton *_downButton;
    UIView *_dividerLine;
    NSInvocation *_invocation;
    NSArray *_constraints;
    BOOL _shouldInsetButtonsForIndex;
    UIScrollView *_scrollView;
    long long _edge;
}

@property(nonatomic) BOOL shouldInsetButtonsForIndex; // @synthesize shouldInsetButtonsForIndex=_shouldInsetButtonsForIndex;
@property(nonatomic) long long edge; // @synthesize edge=_edge;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
// - (void).cxx_destruct;
- (CGRect)centeringBounds;
@property(readonly, nonatomic) long long desiredAccessoryEdge;
- (void)buttonTapped:(id)arg1;
- (void)update;
- (int)_axis;
@property(readonly, nonatomic) BOOL overlay;
- (id)_constraintsForEdge:(long long)arg1;
- (void)updateConstraints;
- (void)layoutSubviews;
- (void)_setupSubviewsIfNeeded;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

