//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CRCarPlayAppPolicyEvaluator, UNSCriticalAlertAuthorizationAlertController, UNSDefaultDataProviderFactory, UNSNotificationAuthorizationAlertController;
@protocol OS_dispatch_queue;

@interface UNSNotificationAuthorizationService : NSObject
{
    UNSDefaultDataProviderFactory *_dataProviderFactory;
    UNSCriticalAlertAuthorizationAlertController *_criticalAlertAuthorizationAlertController;
    UNSNotificationAuthorizationAlertController *_notificationAuthorizationAlertController;
    NSObject<OS_dispatch_queue> *_queue;
    CRCarPlayAppPolicyEvaluator *_policyEvaluator;
}

// - (void).cxx_destruct;
- (BOOL)_queue_isSpokenAvailableForApplication:(id)arg1;
- (BOOL)_queue_isCarPlayAvailableForApplication:(id)arg1;
- (void)_queue_requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_queue_requestAuthorizationWithOptions:(NSUInteger)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)authorizedBundleIdentifiersForBundleIdentifiers:(id)arg1;
- (void)requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestAuthorizationWithOptions:(NSUInteger)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithDataProviderFactory:(id)arg1;

@end

