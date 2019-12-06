//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMControlDrawerButton.h>

#import <CameraUI/CAMControlDrawerExpandableButton-Protocol.h>

@class UIView;
@protocol CAMControlDrawerExpandableButtonDelegate;

@interface CAMControlDrawerCustomButton : CAMControlDrawerButton <CAMControlDrawerExpandableButton>
{
    BOOL _expanded;
    BOOL __touchInTrackedView;
    id <CAMControlDrawerExpandableButtonDelegate> _delegate;
    UIView *__highlightedView;
    UIEdgeInsets _expansionInsets;
}

@property(retain, nonatomic, setter=_setHighlightedView:) UIView *_highlightedView; // @synthesize _highlightedView=__highlightedView;
@property(nonatomic, getter=_isTouchInTrackedView, setter=_setTouchInTrackedView:) BOOL _touchInTrackedView; // @synthesize _touchInTrackedView=__touchInTrackedView;
@property(nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
@property(nonatomic) __weak id <CAMControlDrawerExpandableButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) UIEdgeInsets expansionInsets; // @synthesize expansionInsets=_expansionInsets;
// - (void).cxx_destruct;
- (void)_setExpanded:(BOOL)arg1 animated:(BOOL)arg2 shouldNotify:(BOOL)arg3;
- (void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic, getter=isSelfExpanding) BOOL selfExpanding;
- (void)_updateHighlightedView;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (BOOL)shouldAccessibilityGestureBeginForHUDManager:(id)arg1;
- (BOOL)_shouldRejectAccessibilityGestureForHUDManager:(id)arg1;
- (BOOL)_shouldTrackView:(id)arg1 forTouchAtLocation:(CGPoint)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (BOOL)shouldScaleImageWhileHighlighted;
- (BOOL)isExpandable;

@end

