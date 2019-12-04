//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalCancelable-Protocol.h>

@protocol OS_dispatch_queue;

@interface CalCancelableDispatchBlock : NSObject <CalCancelable>
{
    id /* block */ _block;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) id /* block */ block; // @synthesize block=_block;
- (void)cancel;
- (void)performAfterDelay:(double)arg1;
- (void)performAsync;
- (id)initWithBlock:(id /* block */)arg1 inQueue:(id)arg2;

@end
