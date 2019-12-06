//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ICDocCamPhysicalCaptureNotifierDelegate;

__attribute__((visibility("hidden")))
@interface ICDocCamPhysicalCaptureNotifier : NSObject
{
    BOOL _enabled;
    id <ICDocCamPhysicalCaptureNotifierDelegate> _delegate;
    long long _state;
    long long __volumeUpButtonState;
    long long __volumeDownButtonState;
}

@property(nonatomic, setter=_setVolumeDownButtonState:) long long _volumeDownButtonState; // @synthesize _volumeDownButtonState=__volumeDownButtonState;
@property(nonatomic, setter=_setVolumeUpButtonState:) long long _volumeUpButtonState; // @synthesize _volumeUpButtonState=__volumeUpButtonState;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic, setter=_setState:) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <ICDocCamPhysicalCaptureNotifierDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_updateStateAndNotifyDelegateIfNeeded;
- (void)_handleVolumeDownButtonDownNotification:(id)arg1;
- (void)_handleVolumeDownButtonUpNotification:(id)arg1;
- (void)_handleVolumeUpButtonDownNotification:(id)arg1;
- (void)_handleVolumeUpButtonUpNotification:(id)arg1;
- (void)_updateCaptureButtonNotifications;
- (void)dealloc;
- (id)init;

@end

