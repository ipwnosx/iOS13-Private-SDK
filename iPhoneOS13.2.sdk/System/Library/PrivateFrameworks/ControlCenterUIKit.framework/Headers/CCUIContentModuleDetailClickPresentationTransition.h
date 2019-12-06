//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ControlCenterUIKit/_UIClickPresentationTransition-Protocol.h>

@class CCUIContentModuleDetailAnimationController, UIViewController, UIViewPropertyAnimator;

@interface CCUIContentModuleDetailClickPresentationTransition : NSObject <_UIClickPresentationTransition>
{
    UIViewController *_presentedViewController;
    CCUIContentModuleDetailAnimationController *_animationController;
}

@property(readonly, nonatomic) CCUIContentModuleDetailAnimationController *animationController; // @synthesize animationController=_animationController;
@property(readonly, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
// - (void).cxx_destruct;
- (void)transitionDidEnd:(BOOL)arg1;
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
@property(readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
- (id)initWithPresentedViewController:(id)arg1 animationController:(id)arg2;

@end

