//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <GameCenterUI/GKContentRefresh-Protocol.h>
#import <GameCenterUI/GKURLHandling-Protocol.h>

@class NSString;

@interface UIViewController (GKAdditions) <GKContentRefresh, GKURLHandling>
+ (id)_gkKeyWindowRootViewController;
- (_Bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (id)_gkPresentActivityViewControllerForActivityItems:(id)arg1 fromView:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_gkPresentActivityViewController:(id)arg1 fromView:(id)arg2;
- (void)_gkDismissActivityViewControllerAnimated:(_Bool)arg1;
- (void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2;
- (void)_gkSetContentsNeedUpdateWithHandler:(id /* block */)arg1;
- (void)_gkForceNextContentUpdate;
- (void)_gkResetContents;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id /* block */)arg1;
- (id)_gkAlertControllerForBarButtonItem:(id)arg1;
- (id)_gkPresentAlertForError:(id)arg1 title:(id)arg2 defaultMessage:(id)arg3;
- (id)_gkPresentConfirmationAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 block:(id /* block */)arg4;
- (id)_gkPresentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 dismissHandler:(id /* block */)arg4;
- (id)_gkPresentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3;
- (id)_gkInGameUIUnavailableAlertWithRestrictionMode:(long long)arg1 dismissHandler:(id /* block */)arg2;
- (void)_gkPresentSendDialogForChallenge:(id)arg1 selectPlayers:(id)arg2 defaultMessage:(id)arg3 complete:(id /* block */)arg4;
- (void)_gkPresentSendDialogForChallenge:(id)arg1 selectPlayers:(id)arg2 defaultMessage:(id)arg3;
- (void)_gkPresentChallengeVC:(id)arg1;
- (CDStruct_b207fc29)_gkBubbleFlowAdoptionInfo;
- (CDStruct_b207fc29)_gkMakeBubbleFlowAdoptionInfo;
- (id)_gkReturnBubbleViewToOverlayWithBubbleType:(long long)arg1 expectedFrame:(struct CGRect)arg2;
- (id)_gkReturnBubbleViewToOverlayWithBubbleType:(long long)arg1;
- (id)_gkBorrowBubbleViewFromOverlayWithBubbleType:(long long)arg1 expectedFrame:(struct CGRect)arg2 andMoveTo:(id)arg3;
- (void)_gkAddPositionConstraintsForOverlayBubble:(id)arg1 center:(struct CGPoint)arg2 movingFromView:(id)arg3 toView:(id)arg4;
- (id)_gkBorrowBubbleViewFromOverlayWithBubbleType:(long long)arg1 andMoveTo:(id)arg2;
@property(nonatomic) long long gkFocusBubbleType;
- (_Bool)_gkIsTransitioningToTheLocalPlayerViewController;
- (_Bool)_gkIsTransitioningFromTheLocalPlayerViewController;
- (long long)_gkDesiredUserInterfaceIdiom;
- (_Bool)_gkShouldUsePadUI;
- (_Bool)_gkCanBeRemovedFromParentWhenCovered;
- (_Bool)_gkUsesFormSheetForBubbleFlowModalPresentationOnPad;
- (_Bool)_gkUsesBubbleFlowModalPresentation;
- (_Bool)_gkShouldPushViewControllerInsteadOfUsingPopoverOnCompactWidthPad;
- (id)_gkRepresentedObject;
- (void)_gkRestorePopoverWithViewControllers:(id)arg1 completion:(id /* block */)arg2;
- (void)_gkDidTransitionModalPresentationForTraitCollection:(id)arg1;
- (void)_gkWillTransitionModalPresentationForTraitCollection:(id)arg1;
- (id)_gkViewControllersForRestoringPopover;
- (void)_gkPushPresentedViewControllerForCompactSizeClass:(id)arg1;
@property(retain, nonatomic, setter=_gkSetSourcePresentingViewController:) UIViewController *_gkSourcePresentingViewController;
- (_Bool)_gkWantsCustomRightBarButtonItemInViewService;
- (void)_gkRestoreStatusBarStyle:(_Bool)arg1;
- (void)_gkSaveStatusBarStyle:(_Bool)arg1;
- (void)_gkSaveStatusBarStyleAnimated:(_Bool)arg1 setToStyle:(long long)arg2;
- (void)_gkPopViewControllerAnimated:(_Bool)arg1;
- (void)_gkPushViewController:(id)arg1 replaceCurrent:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_gkPushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_gkDismissViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_gkPresentViewController:(id)arg1 asPopoverFromView:(id)arg2 animated:(_Bool)arg3;
- (void)_gkPresentViewController:(id)arg1 animated:(_Bool)arg2;
- (id)_gkOriginatingViewControllerAutoDetermined;
- (id)_gkOriginatingViewController;
- (void)_gkSetOriginatingViewController:(id)arg1;
- (void)_gkRemoveViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_gkShowViewController:(id)arg1;
- (void)_gkAddMenuButtonTapGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2;
- (void)_gkModifyTopConstraintToLayoutGuideForSubview:(id)arg1;
- (id)_gkExtensionViewController;
- (_Bool)_gkWantsCustomRightBarButtonItemInViewService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@end
