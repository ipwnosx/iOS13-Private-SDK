//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSProcessIdentity-Protocol.h>

@class FBSProcessExecutionProvision, FBSProcessTerminationRequest, FBSProcessWatchdog, NSError;

@protocol FBSProcessInternal <FBSProcessIdentity>
- (void)_terminateWithRequest:(FBSProcessTerminationRequest *)arg1 forWatchdog:(FBSProcessWatchdog *)arg2;
- (FBSProcessTerminationRequest *)_watchdog:(FBSProcessWatchdog *)arg1 terminationRequestForViolatedProvision:(FBSProcessExecutionProvision *)arg2 error:(NSError *)arg3;
- (BOOL)_watchdog:(FBSProcessWatchdog *)arg1 shouldTerminateWithDeclineReason:(out id )arg2;
- (void)_watchdogStopped:(FBSProcessWatchdog *)arg1;
- (void)_watchdogStarted:(FBSProcessWatchdog *)arg1;
@end

