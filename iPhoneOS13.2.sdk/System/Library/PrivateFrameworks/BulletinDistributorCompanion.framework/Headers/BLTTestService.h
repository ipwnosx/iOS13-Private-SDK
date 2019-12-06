//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface BLTTestService : NSObject
{
    NSXPCConnection *_connection;
}

+ (id)sharedTestService;
// - (void).cxx_destruct;
- (void)_connectIfNecessary;
- (void)removeSectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)overriddenSettingsWithCompletion:(CDUnknownBlockType)arg1;
- (void)originalSettingsWithCompletion:(CDUnknownBlockType)arg1;
- (void)settingOverridesWithCompletion:(CDUnknownBlockType)arg1;
- (void)willAlertForSectionID:(id)arg1 subtype:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)disableStandaloneTestModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(NSUInteger)arg1 maximumSendDelay:(NSUInteger)arg2 minimumResponseDelay:(NSUInteger)arg3 maximumResponseDelay:(NSUInteger)arg4 completion:(CDUnknownBlockType)arg5;
- (void)getStandaloneTestModeEnabledWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearSectionInfoSentCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)spoolSectionInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendAllSectionInfoWithSpool:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendSectionInfoWithSectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addBulletin:(id)arg1 forFeed:(NSUInteger)arg2 playLightsAndSirens:(BOOL)arg3 attachment:(id)arg4 attachmentType:(long long)arg5 alwaysSend:(BOOL)arg6 completion:(CDUnknownBlockType)arg7;
- (void)addBulletin:(id)arg1 forFeed:(NSUInteger)arg2 playLightsAndSirens:(BOOL)arg3 attachment:(id)arg4 attachmentType:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)dealloc;
- (id)init;

@end

