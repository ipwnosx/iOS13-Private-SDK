//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EFObservable;
@protocol EFObserver, OS_dispatch_queue;

@interface MFLockStateMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    int _token;
    EFObservable<EFObserver> *_observable;
    BOOL _isLocked;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)_receiveLockState:(BOOL)arg1;
@property(readonly, getter=isLocked) BOOL locked;
@property(readonly, nonatomic) EFObservable *lockStateObservable;
- (id)init;
- (void)dealloc;

@end

