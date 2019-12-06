//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface AFNetworkAvailability : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    int _notifyToken;
//    struct AvailabilityState _state;
    NSHashTable *_observers;
}

+ (id)sharedAvailability;
// - (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (BOOL)isAvailable;
- (void)_stopObservingAvailability;
- (void)_startObservingAvailability;
- (void)_notifyObservers;
- (void)_availabilityChanged;
- (void)_clearState;
- (void)_updateState;
- (id)init;

@end

