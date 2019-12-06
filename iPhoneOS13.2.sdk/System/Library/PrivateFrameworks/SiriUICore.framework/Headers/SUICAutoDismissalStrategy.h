//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;
@protocol SUICAutoDismissalStrategyDelegate;

@interface SUICAutoDismissalStrategy : NSObject
{
    NSNumber *_lastShouldDismissValue;
    BOOL _userInteractedWithTouchScreen;
    BOOL _userInteractedWithTouchIDSensor;
    BOOL _videoPlaying;
    BOOL _viewRequiringExtendedTimeoutVisible;
    BOOL _shouldDismiss;
    BOOL _deviceSupportsFaceDetection;
    BOOL _deviceSupportsRaiseGestureDetection;
    id <SUICAutoDismissalStrategyDelegate> _delegate;
    long long _latestFaceAwarenessEvent;
    long long _latestDeviceMotionEvent;
    double _idleTimeInterval;
    long long _autoDismissalReason;
    double _idleTimeout;
    double _extendedIdleTimeout;
    double _viewRequiringExtendedTimeoutStartTime;
}

@property(readonly, nonatomic) double viewRequiringExtendedTimeoutStartTime; // @synthesize viewRequiringExtendedTimeoutStartTime=_viewRequiringExtendedTimeoutStartTime;
@property(readonly, nonatomic) BOOL deviceSupportsRaiseGestureDetection; // @synthesize deviceSupportsRaiseGestureDetection=_deviceSupportsRaiseGestureDetection;
@property(readonly, nonatomic) BOOL deviceSupportsFaceDetection; // @synthesize deviceSupportsFaceDetection=_deviceSupportsFaceDetection;
@property(readonly, nonatomic) double extendedIdleTimeout; // @synthesize extendedIdleTimeout=_extendedIdleTimeout;
@property(readonly, nonatomic) double idleTimeout; // @synthesize idleTimeout=_idleTimeout;
@property(nonatomic) long long autoDismissalReason; // @synthesize autoDismissalReason=_autoDismissalReason;
@property(readonly, nonatomic) BOOL shouldDismiss; // @synthesize shouldDismiss=_shouldDismiss;
@property(readonly, nonatomic) double idleTimeInterval; // @synthesize idleTimeInterval=_idleTimeInterval;
@property(nonatomic, getter=isViewRequiringExtendedTimeoutVisible) BOOL viewRequiringExtendedTimeoutVisible; // @synthesize viewRequiringExtendedTimeoutVisible=_viewRequiringExtendedTimeoutVisible;
@property(nonatomic, getter=isVideoPlaying) BOOL videoPlaying; // @synthesize videoPlaying=_videoPlaying;
@property(nonatomic) long long latestDeviceMotionEvent; // @synthesize latestDeviceMotionEvent=_latestDeviceMotionEvent;
@property(nonatomic) long long latestFaceAwarenessEvent; // @synthesize latestFaceAwarenessEvent=_latestFaceAwarenessEvent;
@property(nonatomic) BOOL userInteractedWithTouchIDSensor; // @synthesize userInteractedWithTouchIDSensor=_userInteractedWithTouchIDSensor;
@property(nonatomic) BOOL userInteractedWithTouchScreen; // @synthesize userInteractedWithTouchScreen=_userInteractedWithTouchScreen;
@property(nonatomic) __weak id <SUICAutoDismissalStrategyDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_notifyDelegateOfAutoDismissalDecisionChangeIfNeededPermanent:(BOOL)arg1;
- (void)_notifyDelegateOfAutoDismissalDecisionChangeIfNeeded;
- (id)initWithIdleTimeout:(double)arg1 extendedIdleTimeout:(double)arg2 deviceSupportsFaceDetection:(BOOL)arg3 deviceSupportsRaiseGestureDetection:(BOOL)arg4;

@end

