//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AKAppleIDAuthenticationInAppContext, RUIStyle, UINavigationController;

@protocol AKAppleIDAuthenticationInAppContextDelegate <NSObject>

@optional
- (void)willPresentModalNavigationController:(UINavigationController *)arg1;
- (RUIStyle *)remoteUIStyle;
- (void)contextDidEndPresentingSecondaryUI:(AKAppleIDAuthenticationInAppContext *)arg1;
- (void)contextWillBeginPresentingSecondaryUI:(AKAppleIDAuthenticationInAppContext *)arg1;
- (void)contextDidDismissLoginAlertController:(AKAppleIDAuthenticationInAppContext *)arg1;
- (void)contextWillDismissLoginAlertController:(AKAppleIDAuthenticationInAppContext *)arg1;
- (void)contextDidPresentLoginAlertController:(AKAppleIDAuthenticationInAppContext *)arg1;
@end

