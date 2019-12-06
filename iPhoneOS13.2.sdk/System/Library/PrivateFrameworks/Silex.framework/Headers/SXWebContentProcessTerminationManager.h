//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXWebContentProcessTerminationManager-Protocol.h>

@class NSMutableArray;
@protocol SXWebContentErrorReporting, SXWebContentProcessTerminationPolicyDecider;

@interface SXWebContentProcessTerminationManager : NSObject <SXWebContentProcessTerminationManager>
{
    id <SXWebContentProcessTerminationPolicyDecider> _throttler;
    id <SXWebContentErrorReporting> _errorReporter;
    NSMutableArray *_onRetryBlocks;
}

@property(readonly, nonatomic) NSMutableArray *onRetryBlocks; // @synthesize onRetryBlocks=_onRetryBlocks;
@property(readonly, nonatomic) id <SXWebContentErrorReporting> errorReporter; // @synthesize errorReporter=_errorReporter;
@property(readonly, nonatomic) id <SXWebContentProcessTerminationPolicyDecider> throttler; // @synthesize throttler=_throttler;
// - (void).cxx_destruct;
- (void)onRetry:(CDUnknownBlockType)arg1;
- (void)webContentProcessTerminated;
- (id)initWithTerminationThrottler:(id)arg1 errorReporter:(id)arg2;

@end

