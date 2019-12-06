//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLLazyObject : NSObject
{
    BOOL _shouldRetryBlockOnNil;
//     struct os_unfair_lock_s _lock;
    id /* CDUnknownBlockType */ _block;
    id _object;
}

// - (void).cxx_destruct;
- (void)invalidateWithHandler:(CDUnknownBlockType)arg1;
- (void)invalidate;
@property(readonly) id objectValue;
- (id)initWithRetry:(BOOL)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithRetriableBlock:(CDUnknownBlockType)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithObject:(id)arg1;
- (id)init;

@end

