//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDAssertionObserver-Protocol.h>

@class HDAssertionManager, HDPowerAssertion;
@protocol OS_dispatch_queue;

@interface HDHeartRateRecoveryManager : NSObject <HDAssertionObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertionManager *_assertionManager;
    HDPowerAssertion *_powerAssertion;
}

// - (void).cxx_destruct;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)assertionManager:(id)arg1 assertionTaken:(id)arg2;
- (id)createAndTakeAssertionForOwnerIdentifier:(id)arg1 sessionStateController:(id)arg2;
- (void)dealloc;
- (id)init;

@end

