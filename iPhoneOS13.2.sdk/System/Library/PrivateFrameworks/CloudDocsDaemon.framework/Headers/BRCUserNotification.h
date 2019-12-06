//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCUserNotifier-Protocol.h>

@class NSMutableDictionary;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCUserNotification : NSObject <BRCUserNotifier>
{
//    struct __CFUserNotification _cfUserNotification;
//    struct __CFRunLoopSource _source;
    NSObject<OS_dispatch_source> *_displaySource;
    NSUInteger _nextDisplayBeginTime;
    id _progressSubscriber;
    NSMutableDictionary *_dialogInfo;
}

// - (void).cxx_destruct;
- (void)showErrorDocumentsAppNotVisibleForShareURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)showErrorParticipantLimitReachedForShareMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)showErrorItemUnavailableOrAccessRestrictedForShareMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)showErrorServerNotReachableForShareMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)showErrorDeviceOfflineForShareMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)showErrorReasonUnknownForShareMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)showErrorNativeAppDisabledByProfileForShareMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)showErrorInstallNativeAppForShareMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)showErrorTurnOniCloudDriveForShareMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)showErrorSignInToiCloudForShareMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)showJoinDialogForShareMetadata:(id)arg1 session:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)close;
- (void)moveToFront;
- (id)_localizationKey:(id)arg1 forOSAndTypeOfShare:(id)arg2;
- (id)_localizationKeyForOS:(id)arg1;
- (id)_localizationKey:(id)arg1 forTypeOfShare:(id)arg2;
- (void)_updateDialogWithType:(NSUInteger)arg1 dict:(id)arg2 userReplyBlock:(CDUnknownBlockType)arg3;
- (void)_updateDialogWithType:(NSUInteger)arg1 dict:(id)arg2;
- (void)_displayDialogWithType:(NSUInteger)arg1 dict:(id)arg2 options:(id)arg3 userReplyBlock:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)_logWrapUserReplyBlock:(CDUnknownBlockType)arg1;
- (void)_displayDialogWithType:(NSUInteger)arg1 dict:(id)arg2 userReplyBlock:(CDUnknownBlockType)arg3;
- (void)_hideCurrentDialog;
- (void)dealloc;
- (id)init;

@end

