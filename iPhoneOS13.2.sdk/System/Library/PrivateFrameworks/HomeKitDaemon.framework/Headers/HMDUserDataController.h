//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDAssistantAccessControlModelUpdateReceiver-Protocol.h>
#import <HomeKitDaemon/HMDMediaContentProfileAccessControlModelUpdateReceiver-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMBModel, HMFTimer, HMFUnfairLock, NSArray, NSDictionary, NSMutableSet, NSUUID;
@protocol HMDSettingsControllerProtocol, HMDUserDataControllerDelegate, HMDUserDataControllerTimerCreator, OS_dispatch_queue;

@interface HMDUserDataController : NSObject <HMDAssistantAccessControlModelUpdateReceiver, HMDMediaContentProfileAccessControlModelUpdateReceiver, HMFLogging, HMFTimerDelegate>
{
    BOOL _isModifyingState;
    BOOL _assistantAccessControlRequiresAuthenticationForSecureRequests;
    NSUInteger _state;
    HMFUnfairLock *_lock;
    NSUUID *_homeUUID;
    NSUUID *_userUUID;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id <HMDUserDataControllerDelegate> _delegate;
    id <HMDUserDataControllerTimerCreator> _timerCreator;
    id <HMDSettingsControllerProtocol> _sharedSettingsController;
    id <HMDSettingsControllerProtocol> _privateSettingsController;
    NSUUID *_sharedSettingsRootUUID;
    NSUUID *_assistantAccessControlModelUUID;
    NSMutableSet *_assistantAccessControlAccessoryUUIDs;
    NSUUID *_mediaContentProfileAccessControlModelUUID;
    NSMutableSet *_mediaContentProfileAccessControlAccessories;
    NSUUID *_privateSettingsRootUUID;
    HMFTimer *_sharedZoneFirstLoadTimer;
    HMFTimer *_privateZoneFirstLoadTimer;
}

+ (id)logCategory;
@property(retain, nonatomic) HMFTimer *privateZoneFirstLoadTimer; // @synthesize privateZoneFirstLoadTimer=_privateZoneFirstLoadTimer;
@property(retain, nonatomic) HMFTimer *sharedZoneFirstLoadTimer; // @synthesize sharedZoneFirstLoadTimer=_sharedZoneFirstLoadTimer;
@property(retain) NSUUID *privateSettingsRootUUID; // @synthesize privateSettingsRootUUID=_privateSettingsRootUUID;
@property(retain) NSMutableSet *mediaContentProfileAccessControlAccessories; // @synthesize mediaContentProfileAccessControlAccessories=_mediaContentProfileAccessControlAccessories;
@property(retain) NSUUID *mediaContentProfileAccessControlModelUUID; // @synthesize mediaContentProfileAccessControlModelUUID=_mediaContentProfileAccessControlModelUUID;
@property(retain) NSMutableSet *assistantAccessControlAccessoryUUIDs; // @synthesize assistantAccessControlAccessoryUUIDs=_assistantAccessControlAccessoryUUIDs;
@property(retain) NSUUID *assistantAccessControlModelUUID; // @synthesize assistantAccessControlModelUUID=_assistantAccessControlModelUUID;
@property(retain) NSUUID *sharedSettingsRootUUID; // @synthesize sharedSettingsRootUUID=_sharedSettingsRootUUID;
@property(readonly) id <HMDSettingsControllerProtocol> privateSettingsController; // @synthesize privateSettingsController=_privateSettingsController;
@property(readonly) id <HMDSettingsControllerProtocol> sharedSettingsController; // @synthesize sharedSettingsController=_sharedSettingsController;
@property(readonly) id <HMDUserDataControllerTimerCreator> timerCreator; // @synthesize timerCreator=_timerCreator;
@property(readonly) __weak id <HMDUserDataControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly) NSUUID *userUUID; // @synthesize userUUID=_userUUID;
@property(readonly) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(readonly) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property BOOL assistantAccessControlRequiresAuthenticationForSecureRequests; // @synthesize assistantAccessControlRequiresAuthenticationForSecureRequests=_assistantAccessControlRequiresAuthenticationForSecureRequests;
// - (void).cxx_destruct;
- (id)logIdentifier;
- (void)timerDidFire:(id)arg1;
- (void)mediaContentProfileAccessControlModelRemoved:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mediaContentProfileAccessControlModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, copy) NSDictionary *privateSettingValuesByKeyPathForAWD;
@property(readonly, copy) NSDictionary *sharedSettingValuesByKeyPathForAWD;
- (void)assistantAccessControlModelRemoved:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)assistantAccessControlModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, copy) HMBModel *assistantAccessControlModelToReset;
- (void)handleRemovedAccessory:(id)arg1;
- (void)handleMediaContentProfileAccessControlUpdatedAccessoryUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleAssistantAccessControlAccessoryUUIDsUpdated:(id)arg1 requireAuthenticationForSecureRequests:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleStartForZoneController:(id)arg1;
- (void)_startupPrivateZone;
- (void)_startupSharedZone;
- (void)_invalidatePrivateZoneFirstLoadTimer;
- (void)_startPrivateZoneFirstLoadTimer;
- (void)performFirstRunOperationsOnPrivateZoneController:(id)arg1;
- (void)_invalidateSharedZoneFirstLoadTimer;
- (void)_startSharedZoneFirstLoadTimer;
- (void)performFirstRunOperationsOnSharedZoneController:(id)arg1;
- (void)initializePrivateZoneController:(id)arg1 userDataModel:(id)arg2;
- (void)initializeSharedZoneController:(id)arg1 userDataModel:(id)arg2;
- (void)eventDidInitializeSharedZone;
- (void)eventDidInitializePrivateZone;
@property NSUInteger state; // @synthesize state=_state;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSArray *mediaContentProfileAccessControlAccessoriesToEncode;
@property(readonly, copy) NSArray *assistantAccessControlAccessoriesToEncode;
- (BOOL)isInitialized;
- (void)configure;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 userID:(id)arg3 homeID:(id)arg4 sharedSettingsController:(id)arg5 privateSettingsController:(id)arg6;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 userID:(id)arg3 homeID:(id)arg4 sharedSettingsController:(id)arg5 privateSettingsController:(id)arg6 timerCreator:(id)arg7;

@end

