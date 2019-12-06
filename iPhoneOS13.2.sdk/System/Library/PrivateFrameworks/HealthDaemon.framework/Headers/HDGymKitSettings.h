//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>
#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/NRDevicePropertyObserver-Protocol.h>

@class HDProfile, NRDevice;
@protocol HDGymKitSettingsDelegate;

@interface HDGymKitSettings : NSObject <HDDatabaseProtectedDataObserver, HDDataObserver, NRDevicePropertyObserver>
{
    HDProfile *_profile;
    NSUInteger _nfcPermission;
//    struct os_unfair_lock_s _lock;
    int _privacyNotificationToken;
    NRDevice *_currentDevice;
    id <HDGymKitSettingsDelegate> _delegate;
}

@property(nonatomic) __weak id <HDGymKitSettingsDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_setConnectedGymPreferencesDefaultNFCAlwaysOnEnabled:(BOOL)arg1;
- (void)_enableNFCAlwaysOnIfWatchWorkout;
- (void)_stopObservingWatchWorkouts;
- (void)_startObservingWatchWorkouts;
- (void)_handleNFCPreferencesForNFCAlwaysOn:(BOOL)arg1;
- (void)_setNFCAlwaysOnPreferenceIfNecessary;
- (void)_monitorFieldAndPrivacySettings;
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
@property(readonly, nonatomic) BOOL fitnessTrackingEnabled;
@property(readonly, nonatomic) NSUInteger nfcPermission;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;

@end

