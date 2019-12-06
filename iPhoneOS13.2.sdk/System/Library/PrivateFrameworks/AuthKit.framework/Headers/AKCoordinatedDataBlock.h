//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

@interface AKCoordinatedDataBlock : NSObject
{
    id /* CDUnknownBlockType */ _block;
    id /* CDUnknownBlockType */ _completionHandler;
    BOOL _started;
//    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_group> *_group;
}

+ (id)startCoordinatingBlock:(CDUnknownBlockType)arg1;
// - (void).cxx_destruct;
- (void)_callCompletionWithData:(id)arg1 error:(id)arg2;
- (void)_start;
- (void)setCompletion:(CDUnknownBlockType)arg1;
- (void)start;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

