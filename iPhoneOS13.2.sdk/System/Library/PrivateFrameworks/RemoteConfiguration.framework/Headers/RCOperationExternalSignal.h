//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteConfiguration/RCOperationRetrySignal-Protocol.h>

@protocol OS_dispatch_group;

@interface RCOperationExternalSignal : NSObject <RCOperationRetrySignal>
{
    BOOL _result;
    NSObject<OS_dispatch_group> *_group;
}

// - (void).cxx_destruct;
- (void)onQueue:(id)arg1 signal:(CDUnknownBlockType)arg2;
- (void)triggerWithRetry:(BOOL)arg1;
- (id)init;

@end

