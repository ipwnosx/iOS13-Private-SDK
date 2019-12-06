//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKHostedViewController.h>

@class NSObject, NSString, UIViewController;
@protocol GKFriendRequestViewControllerDelegate;

@interface GKFriendRequestViewController : GKHostedViewController
{
    NSObject<GKFriendRequestViewControllerDelegate> *_delegate;
    NSString *_friendCode;
    NSString *_friendSupportPageURL;
    UIViewController *_requestingViewController;
}

+ (void)presentAlertControllerOn:(id)arg1 withMessage:(id)arg2 andTitle:(id)arg3;
+ (void)presentFriendRequestOn:(id)arg1 withFriendCode:(id)arg2 andFriendSupportPageURL:(id)arg3;
+ (void)addFriends:(id)arg1;
@property(nonatomic) __weak UIViewController *requestingViewController; // @synthesize requestingViewController=_requestingViewController;
@property(retain, nonatomic) NSString *friendSupportPageURL; // @synthesize friendSupportPageURL=_friendSupportPageURL;
@property(retain, nonatomic) NSString *friendCode; // @synthesize friendCode=_friendCode;
@property(nonatomic) __weak NSObject<GKFriendRequestViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)_presentingViewController;
- (void)notifyDelegateOnWillFinish;
- (id)serviceSideViewControllerClassName;
- (id)init;

@end

