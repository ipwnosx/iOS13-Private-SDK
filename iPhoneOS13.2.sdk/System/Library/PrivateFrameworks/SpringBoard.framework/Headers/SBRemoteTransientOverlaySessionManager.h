//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBRemoteTransientOverlaySessionHostDelegate-Protocol.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, SBRemoteTransientOverlaySessionManagerDelegate;

@interface SBRemoteTransientOverlaySessionManager : NSObject <SBRemoteTransientOverlaySessionHostDelegate>
{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    NSMutableDictionary *_sessionIDToSession;
    id <SBRemoteTransientOverlaySessionManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <SBRemoteTransientOverlaySessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)_existingSessionsWithDefinition:(id)arg1 options:(long long)arg2;
- (id)_createSessionWithDefinition:(id)arg1;
- (id)sessionsWithDefinition:(id)arg1 options:(long long)arg2;
- (id)sessionWithDefinition:(id)arg1 options:(long long)arg2;
- (BOOL)hasSessionWithServiceProcessIdentifier:(int)arg1 options:(long long)arg2;
- (BOOL)hasSessionWithPendingButtonEvents:(NSUInteger)arg1 options:(long long)arg2;
- (id)existingSessionWithSessionID:(id)arg1 options:(long long)arg2;
- (id)existingSessionsWithDefinition:(id)arg1 options:(long long)arg2;
- (id)createSessionWithDefinition:(id)arg1;
- (void)remoteTransientOverlaySession:(id)arg1 requestsHandlingForButtonEvents:(NSUInteger)arg2 viewController:(id)arg3;
- (void)remoteTransientOverlaySession:(id)arg1 didInvalidateWithReason:(long long)arg2 error:(id)arg3;
- (BOOL)remoteTransientOverlaySession:(id)arg1 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(id)arg2;
- (BOOL)remoteTransientOverlaySession:(id)arg1 performPresentationRequest:(id)arg2;
- (BOOL)remoteTransientOverlaySession:(id)arg1 performDismissalRequest:(id)arg2;
- (BOOL)remoteTransientOverlaySession:(id)arg1 shouldActivateWithContext:(id)arg2;
- (long long)activeWallpaperVariantForRemoteTransientOverlaySession:(id)arg1;
- (id)init;

@end

