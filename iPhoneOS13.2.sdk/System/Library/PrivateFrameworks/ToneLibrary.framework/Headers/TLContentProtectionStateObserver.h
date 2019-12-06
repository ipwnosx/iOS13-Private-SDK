//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface TLContentProtectionStateObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSMutableDictionary *_blocksScheduledForProtectedContentUnlockedEvent;
    long long _contentProtectionStatus;
    long long _unlockedSinceBootStatus;
}

+ (id)sharedContentProtectionStateObserver;
// - (void).cxx_destruct;
- (long long)_queryCurrentUnlockedSinceBootStatus;
- (void)_loadContentProtectionStatusIfNeeded;
- (void)_loadUnlockedSinceBootStatusIfNeeded;
- (void)_assertNotRunningOnAccessQueue;
- (void)_assertRunningOnAccessQueue;
- (void)_cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)arg1;
- (void)cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)arg1;
- (id)_performBlockAfterProtectedContentUnlocked:(CDUnknownBlockType)arg1;
- (id)performBlockAfterProtectedContentUnlocked:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

