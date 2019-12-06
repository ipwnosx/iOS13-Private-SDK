//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKitUI/AKAuthorizationContainerViewController.h>


@class UITapGestureRecognizer, UIVisualEffectView;

@interface AKAuthorizationContaineriPhoneViewController : AKAuthorizationContainerViewController <UIViewControllerTransitioningDelegate>
{
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIVisualEffectView *_blurBackgroundView;
    CGSize _containerContentSize;
}

@property(nonatomic) CGSize containerContentSize; // @synthesize containerContentSize=_containerContentSize;
@property(retain, nonatomic) UIVisualEffectView *blurBackgroundView; // @synthesize blurBackgroundView=_blurBackgroundView;
// - (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)_delegate_authorizationContainerViewControllerDidDismiss;
- (BOOL)_delegate_authorizationContainerViewControllerShouldDismiss;
- (void)_handleTapGesture:(id)arg1;
- (CGRect)_dismissalFrameForContentSize:(CGSize)arg1;
- (CGRect)_layoutFrameForContentSize:(CGSize)arg1;
- (void)_layoutContainerView:(BOOL)arg1;
- (void)setContainerContentSize:(CGSize)arg1 animated:(BOOL)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithRootViewController:(id)arg1 authorizationContext:(id)arg2;
- (id)init;

@end

