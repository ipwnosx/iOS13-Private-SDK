//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface MTOSTransaction : NSObject
{
    NSObject<OS_os_transaction> *_transaction;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)transactionWithDescription:(id)arg1 timeout:(double)arg2 timeoutBlock:(CDUnknownBlockType)arg3;
+ (id)transactionWithDescription:(id)arg1 timeout:(double)arg2;
+ (id)transactionWithDescription:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
// - (void).cxx_destruct;
- (void)dealloc;
- (void)_cancel;
- (void)end;
- (id)initWithDescription:(id)arg1 timeout:(double)arg2 timeoutBlock:(CDUnknownBlockType)arg3;

@end

