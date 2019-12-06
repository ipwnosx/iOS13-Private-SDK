//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class FBProcess, FBProcessWatchdogEventContext, FBSProcessTerminationRequest, FBSProcessWatchdogPolicy, NSError;

@protocol FBProcessWatchdogProviding <NSObject>
- (FBSProcessWatchdogPolicy *)watchdogPolicyForProcess:(FBProcess *)arg1 eventContext:(FBProcessWatchdogEventContext *)arg2;

@optional
- (FBSProcessTerminationRequest *)watchdogTerminationRequestForProcess:(FBProcess *)arg1 error:(NSError *)arg2;
@end

