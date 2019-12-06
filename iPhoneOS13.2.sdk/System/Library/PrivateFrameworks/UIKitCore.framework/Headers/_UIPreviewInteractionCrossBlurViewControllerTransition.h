//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIPreviewInteractionViewControllerTransition-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionCrossBlurViewControllerTransition : NSObject <_UIPreviewInteractionViewControllerTransition>
{
    CGRect _initialPlatterRect;
    CGRect _finalPlatterRect;
    BOOL _dismissTransition;
}

@property(nonatomic, getter=isDismissTransition) BOOL dismissTransition; // @synthesize dismissTransition=_dismissTransition;
- (void)transitionDidEnd:(BOOL)arg1;
- (void)performDisappearanceTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)prepareDisappearanceTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)performAppearanceTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)prepareAppearanceTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;

@end

