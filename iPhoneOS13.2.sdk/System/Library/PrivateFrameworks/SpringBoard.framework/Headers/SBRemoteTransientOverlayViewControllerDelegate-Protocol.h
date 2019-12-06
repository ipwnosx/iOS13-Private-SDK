//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSError, NSString, SBRemoteTransientOverlayViewController, SBUIRemoteAlertButtonAction;

@protocol SBRemoteTransientOverlayViewControllerDelegate <NSObject>
- (SBUIRemoteAlertButtonAction *)remoteTransientOverlayViewController:(SBRemoteTransientOverlayViewController *)arg1 requestsActionForHandlingButtonEvents:(NSUInteger)arg2;
- (BOOL)remoteTransientOverlayViewController:(SBRemoteTransientOverlayViewController *)arg1 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(NSString *)arg2;
- (void)remoteTransientOverlayViewController:(SBRemoteTransientOverlayViewController *)arg1 didTerminateWithError:(NSError *)arg2;
- (void)remoteTransientOverlayViewControllerRequestsInvalidation:(SBRemoteTransientOverlayViewController *)arg1;
- (void)remoteTransientOverlayViewControllerRequestsDeactivation:(SBRemoteTransientOverlayViewController *)arg1;
- (void)remoteTransientOverlayViewControllerDidInvalidate:(SBRemoteTransientOverlayViewController *)arg1;

@optional
- (void)remoteTransientOverlayViewController:(SBRemoteTransientOverlayViewController *)arg1 didDisappearAnimated:(BOOL)arg2;
- (void)remoteTransientOverlayViewController:(SBRemoteTransientOverlayViewController *)arg1 willDisappearAnimated:(BOOL)arg2;
- (void)remoteTransientOverlayViewController:(SBRemoteTransientOverlayViewController *)arg1 didAppearAnimated:(BOOL)arg2;
- (void)remoteTransientOverlayViewController:(SBRemoteTransientOverlayViewController *)arg1 willAppearAnimated:(BOOL)arg2;
@end

