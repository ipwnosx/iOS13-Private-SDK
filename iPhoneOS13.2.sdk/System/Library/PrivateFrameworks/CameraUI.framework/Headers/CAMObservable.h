//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CAMObservable : NSObject
{
    long long _nestedChanges;
    NSMutableArray *_pendingChangeBlocks;
    long long _numAppliedPendingChanges;
    NSUInteger _currentChange;
    BOOL _isEnumeratingObservers;
    NSObject<OS_dispatch_queue> *_observersQueue;
    BOOL _observersQueue_shouldCopyChangeObserversOnWrite;
    NSMapTable *_observersQueue_changeObserversWithContexts;
}

// - (void).cxx_destruct;
- (void)_observersQueue_copyChangeObserversForWriteIfNeeded;
- (void)_applyPendingChanges;
- (void)_publishChanges;
- (void)_didChange;
- (void)_willChange;
- (void)enumerateObserversUsingBlock:(CDUnknownBlockType)arg1;
- (void)signalChange:(NSUInteger)arg1;
- (void)didPublishChanges;
- (void)didPerformChanges;
- (void)willPerformChanges;
- (id)mutableChangeObject;
- (void)unregisterChangeObserver:(id)arg1 context:(void )arg2;
- (void)registerChangeObserver:(id)arg1 context:(void )arg2;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)init;

@end

