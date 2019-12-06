//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKAppContext, UINavigationController;

@interface VUIGDPRPresentationManager : NSObject
{
    UINavigationController *_navigationController;
    IKAppContext *_appContext;
}

+ (id)_sharedInstance;
+ (BOOL)shouldShowWelcomeScreen;
+ (void)acceptGDPRAndSyncWithServers:(CDUnknownBlockType)arg1;
+ (void)showOfflineGDPRWelcomeScreen;
+ (BOOL)showGDPRWelcomeScreen:(id)arg1;
@property(nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
// - (void).cxx_destruct;
- (void)_handleOfflineContinueButton;
- (void)_handleContinueButton;
- (void)_dismissAllModalsIfPresent:(id)arg1;
- (void)_showIOSWelcomeControllerWithAppContext:(id)arg1 offline:(BOOL)arg2;
- (BOOL)isShowing;

@end

