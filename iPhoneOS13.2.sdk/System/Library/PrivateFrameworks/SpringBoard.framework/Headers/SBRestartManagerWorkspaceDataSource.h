//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBRestartManagerWorkspaceDataSource-Protocol.h>

@interface SBRestartManagerWorkspaceDataSource : NSObject <SBRestartManagerWorkspaceDataSource>
{
}

- (BOOL)isUILocked;
- (id)activePrimaryApplicationBundleID;
- (void)terminateAllApplicationsForReason:(long long)arg1 description:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

