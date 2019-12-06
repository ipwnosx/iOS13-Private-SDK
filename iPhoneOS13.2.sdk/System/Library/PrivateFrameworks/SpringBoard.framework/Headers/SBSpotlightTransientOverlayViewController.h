//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransientOverlayViewController.h>

#import <SpringBoard/SPUIRemoteSearchViewDelegate-Protocol.h>

@class SBSpotlightTransientOverlaySpotlightViewController, UIVisualEffectView;
@protocol SBSpotlightTransientOverlayViewControllerDelegate;

@interface SBSpotlightTransientOverlayViewController : SBTransientOverlayViewController <SPUIRemoteSearchViewDelegate>
{
    UIVisualEffectView *_blurEffectView;
    SBSpotlightTransientOverlaySpotlightViewController *_spotlightViewController;
    id <SBSpotlightTransientOverlayViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SBSpotlightTransientOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)dismissSearchView;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)preferredDisplayLayoutElementIdentifier;
- (long long)preferredUnlockedGestureDismissalStyle;
- (long long)preferredLockedGestureDismissalStyle;
- (BOOL)isContentOpaque;
- (CDUnknownBlockType)sceneDeactivationPredicate;
- (BOOL)handleHomeButtonPress;
- (BOOL)shouldAutorotate;
- (NSUInteger)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)dealloc;

@end

