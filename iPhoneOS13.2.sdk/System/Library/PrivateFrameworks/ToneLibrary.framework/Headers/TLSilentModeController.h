//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface TLSilentModeController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    int _ringerSwitchChangedNotifyToken;
    long long _silentModeStatus;
}

+ (id)sharedSilentModeController;
// - (void).cxx_destruct;
- (void)_updateSilentModeStatusUsingRingerSwitchChangedNotifyToken:(int)arg1;
- (long long)_silentModeStatusForRingerSwitchChangedNotifyToken:(int)arg1;
- (BOOL)_registerRingerSwitchChangedNotifyToken;
- (void)_cancelRingerSwitchChangedNotifyToken;
- (void)_assertNotRunningOnAccessQueue;
- (void)_assertRunningOnAccessQueue;
- (void)_performBlockOnAccessQueue:(CDUnknownBlockType)arg1;
- (void)_setSilentModeStatus:(long long)arg1;
@property(readonly) long long silentModeStatus;
- (void)dealloc;
- (id)init;

@end

