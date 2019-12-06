//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuet/_DKSyncOperation.h>

@class NSHashTable, NSMutableArray;

@interface _DKSyncCompositeOperation : _DKSyncOperation
{
    _DKSyncCompositeOperation *_parent;
    _Atomic BOOL _isReadyToStart;
    NSHashTable *_children;
//    struct os_unfair_lock_s _lock;
    NSMutableArray *_errors;
}

@property(readonly) NSMutableArray *errors; // @synthesize errors=_errors;
// - (void).cxx_destruct;
- (void)cancel;
- (void)endOperation;
- (void)_shutdownOperation;
- (void)childOperation:(id)arg1 didEndWithErrors:(id)arg2;
- (void)childOperationWasAdded:(id)arg1;
- (BOOL)isReady;
- (void)setReadyToStart:(BOOL)arg1;
- (BOOL)isAsynchronous;
- (void)dealloc;
- (id)initWithParent:(id)arg1;
- (id)init;

@end

