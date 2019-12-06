//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSOrderedSet;
@protocol FCKeyedOperationQueueDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface FCKeyedOperationQueue : NSObject
{
    BOOL _suspended;
    id <FCKeyedOperationQueueDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_executionQueue;
    NSMutableOrderedSet *_mutableKeyQueue;
    NSMutableSet *_keysForExecutingOperations;
    long long _maxConcurrentOperationCount;
    NSMutableDictionary *_cancelHandlersByKey;
    NSObject<OS_dispatch_group> *_operationExecutionGroup;
}

@property(retain, nonatomic) NSObject<OS_dispatch_group> *operationExecutionGroup; // @synthesize operationExecutionGroup=_operationExecutionGroup;
@property(retain, nonatomic) NSMutableDictionary *cancelHandlersByKey; // @synthesize cancelHandlersByKey=_cancelHandlersByKey;
@property(nonatomic) long long maxConcurrentOperationCount; // @synthesize maxConcurrentOperationCount=_maxConcurrentOperationCount;
@property(retain, nonatomic) NSMutableSet *keysForExecutingOperations; // @synthesize keysForExecutingOperations=_keysForExecutingOperations;
@property(retain, nonatomic) NSMutableOrderedSet *mutableKeyQueue; // @synthesize mutableKeyQueue=_mutableKeyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue; // @synthesize executionQueue=_executionQueue;
@property(nonatomic, getter=isSuspended) BOOL suspended; // @synthesize suspended=_suspended;
@property(nonatomic) __weak id <FCKeyedOperationQueueDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_enqueueOperationIfNeeded;
- (void)_cancelOperationsIfNeeded;
- (void)notifyWhenAllOperationsAreFinishedUsingBlock:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSOrderedSet *keyQueue;
- (id)initWithDelegate:(id)arg1 maxConcurrentOperationCount:(long long)arg2;
- (id)init;

@end

