//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteConfiguration/RCOperationRetrySignal-Protocol.h>

@class NSString;

@interface RCOperationDelayedRetrySignal : NSObject <RCOperationRetrySignal>
{
    NSUInteger _signalTime;
    double _delay;
}

@property(readonly, copy) NSString *description;
- (void)onQueue:(id)arg1 signal:(CDUnknownBlockType)arg2;
- (id)initWithDelay:(double)arg1;

@end

