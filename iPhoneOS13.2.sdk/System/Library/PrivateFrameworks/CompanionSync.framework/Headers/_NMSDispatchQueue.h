//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface _NMSDispatchQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_q;
    _Atomic BOOL _r;
}

// - (void).cxx_destruct;
- (void)async:(CDUnknownBlockType)arg1;
- (void)sync:(CDUnknownBlockType)arg1;
- (void)resume;
- (void)suspend;
@property(readonly, nonatomic, getter=isSuspended) BOOL suspended;
- (void)dealloc;
- (id)initWithName:(id)arg1 attributes:(id)arg2 target:(id)arg3;
- (id)init;

@end

