//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class UITargetedPreview, UIView, UIViewPropertyAnimator;

@protocol _UIClickPresentationTransition 
- (void)transitionDidEnd:(_Bool)arg1;
- (void)performTransitionFromView:(UIView *)arg1 toView:(UIView *)arg2 containerView:(UIView *)arg3;

@optional
@property(readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property(copy, nonatomic) UITargetedPreview *sourcePreview;
- (void)transitionWillReverse;
- (void)prepareTransitionFromView:(UIView *)arg1 toView:(UIView *)arg2 containerView:(UIView *)arg3;
@end
