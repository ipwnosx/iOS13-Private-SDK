//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFScheduler-Protocol.h>

@protocol OS_dispatch_queue;

@interface _SBFQueueScheduler : NSObject <SBFScheduler>
{
    NSObject<OS_dispatch_queue> *_queue;
}

// - (void).cxx_destruct;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (id)performBlock:(CDUnknownBlockType)arg1;
- (id)initWithQueue:(id)arg1;

@end

