//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveEventTracker/PETAggregateStateStorage.h>

@class NSMutableData;

@interface PETAggregateStateStorageInMemory : PETAggregateStateStorage
{
    NSMutableData *_data;
//    struct _opaque_pthread_mutex_t _lock;
}

// - (void).cxx_destruct;
- (void)saveCorruptState;
- (void)reset;
- (BOOL)resetLocked;
- (void)expand:(NSUInteger)arg1 andRunWithLock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

