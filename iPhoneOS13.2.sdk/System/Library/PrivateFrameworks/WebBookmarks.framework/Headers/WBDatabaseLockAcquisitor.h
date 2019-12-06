//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol WBDatabaseLockAcquisitorDelegate;

@interface WBDatabaseLockAcquisitor : NSObject
{
    NSTimer *_timer;
    Class _webBookmarkCollectionClass;
    BOOL _lockAcquired;
    long long _maxRetryCount;
    long long _retryCount;
    id <WBDatabaseLockAcquisitorDelegate> _delegate;
}

@property(nonatomic) __weak id <WBDatabaseLockAcquisitorDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_retryTimerFired:(id)arg1;
- (void)_startTimerWithTimeout:(double)arg1 retryInterval:(double)arg2;
- (void)_stopTimer;
- (BOOL)_attemptToLockSyncAndNotifyDelegateOnFailure:(BOOL)arg1;
- (void)releaseLock;
- (void)acquireLockWithTimeout:(double)arg1 retryInterval:(double)arg2;
- (void)acquireLockWithTimeout:(double)arg1;
- (void)dealloc;
- (id)initWithWebBookmarkCollectionClass:(Class)arg1;

@end

