//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSInvocation;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _UIDelayedPresentationContext : NSObject
{
    BOOL _enableUserInteraction;
    long long _reqcnt;
    NSInvocation *_presentInvocation;
    id /* CDUnknownBlockType */ _cancellationHandler;
    double _timeout;
    NSObject<OS_dispatch_source> *_timerSource;
}

@property(retain, nonatomic) NSInvocation *presentInvocation; // @synthesize presentInvocation=_presentInvocation;
@property(copy, nonatomic) id /* CDUnknownBlockType */ cancellationHandler; // @synthesize cancellationHandler=_cancellationHandler;
// - (void).cxx_destruct;
- (void)finishDelayedPresentation:(id)arg1;
- (void)beginDelayedPresentation;
- (void)cancelDelayedPresentation:(BOOL)arg1;
- (long long)incrementRequestCount;
- (long long)decrementRequestCount;
- (long long)requestCount;
- (id)delayingController;
- (id)invocationTarget;
- (id)initWithTimeout:(double)arg1 cancellationHandler:(CDUnknownBlockType)arg2;

@end

