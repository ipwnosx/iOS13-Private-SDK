//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBApplicationWakeLifecycleHandling-Protocol.h>

@class BKSProcessAssertion, FBProcessManager;

@interface SBLegacyVOIPRefreshWakeTracker : NSObject <SBApplicationWakeLifecycleHandling>
{
    FBProcessManager *_processManager;
    BKSProcessAssertion *_appKeepAliveAssertion;
}

@property(retain, nonatomic) BKSProcessAssertion *appKeepAliveAssertion; // @synthesize appKeepAliveAssertion=_appKeepAliveAssertion;
// - (void).cxx_destruct;
- (id)_createAssertionForBundleID:(id)arg1;
- (void)_activateAppIfNeeded:(id)arg1;
- (double)wakeDuration;
- (void)endWake;
- (BOOL)beginWakeForApplication:(id)arg1;
- (void)dealloc;
- (id)initWithProcessManager:(id)arg1;
- (id)init;

@end

