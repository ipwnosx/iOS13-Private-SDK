//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSXPCConnection;

@interface BYBuddyDaemonGeneralClient : NSObject
{
    NSLock *_connectionLock;
    NSXPCConnection *_connection;
}

// - (void).cxx_destruct;
- (id)_daemonConnection;
- (void)cancelDataMigratorDeferredExit;
- (void)deferDataMigratorExit;
- (void)performSilentICDPUpgrade;
- (void)observeFinishSetupTriggers;
- (id)backupMetadata;
- (void)ensureShortLivedTokenUpgrade;
- (void)ensureSilentLoginUpgrade;
- (BOOL)setupAssistantNeedsToRun;
- (id)init;

@end
