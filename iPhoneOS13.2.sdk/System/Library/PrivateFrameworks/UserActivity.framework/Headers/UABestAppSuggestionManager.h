//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection, UABestAppSuggestion;
@protocol UABestAppSuggestionManagerDelegate;

@interface UABestAppSuggestionManager : NSObject
{
    id <UABestAppSuggestionManagerDelegate> _delegate;
    BOOL _listeningForBestAppSuggestions;
    int _bestAppNotificationCount;
    UABestAppSuggestion *_lastBestAppSuggestion;
    NSXPCConnection *_connection;
}

@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
// - (void).cxx_destruct;
- (void)launchAppWithBestAppSuggestion:(id)arg1;
- (void)launchAppWithBundleIdentifier:(id)arg1 userActivityUniqueIdentifier:(id)arg2 userActivityTypeIdentifier:(id)arg3;
- (void)launchAppWithBundleIdentifier:(id)arg1 userActivityUniqueIdentifier:(id)arg2 userActivityTypeIdentifier:(id)arg3 deviceName:(id)arg4 deviceIdentifier:(id)arg5 deviceType:(id)arg6;
- (void)launchAppWithBundleIdentifier:(id)arg1 taskContinuationIdentifier:(id)arg2;
- (void)notifyBestAppsChanged:(id)arg1 when:(id)arg2 confidence:(double)arg3;
- (BOOL)isActivityInfo:(id)arg1 atTime:(id)arg2 similarToAppSuggestion:(id)arg3;
- (id)createAppSuggestionFromActivityInfo:(id)arg1 atTime:(id)arg2;
- (void)bestAppSuggestionLaunchWasCancelled:(id)arg1;
- (void)bestAppSuggestionWasLaunched:(id)arg1 withInteractionType:(int)arg2;
- (void)queueFetchOfPayloadForBestAppSuggestion:(id)arg1;
- (BOOL)fetchAllNearbyAppSuggestions;
- (id)bestAppSuggestions:(long long)arg1;
- (BOOL)determineBestAppWithDelay:(double)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)bestAppSuggestion;
- (void)stopListeningForBestAppSuggestions;
- (void)startListeningForBestAppSuggestions;
- (void)removeBestApp:(id)arg1 options:(id)arg2;
- (void)removeBestAppByUUID:(id)arg1 options:(id)arg2;
@property __weak id <UABestAppSuggestionManagerDelegate> delegate; // @dynamic delegate;
- (void)dealloc;
- (id)init;

@end

