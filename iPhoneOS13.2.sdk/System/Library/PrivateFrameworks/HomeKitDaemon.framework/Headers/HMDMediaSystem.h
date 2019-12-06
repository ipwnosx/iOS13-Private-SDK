//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDAccessorySettingGroup, HMDAppleMediaAccessory, HMDApplicationData, HMDHome, HMDMediaSession, HMDMediaSystemSymptomHandler, HMFMessageDispatcher, HMFTimer, NSArray, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDMediaSystem : NSObject <NSSecureCoding, HMFDumpState, HMFLogging, HMDBackingStoreObjectProtocol, HMFTimerDelegate, HMDHomeMessageReceiver>
{
    NSString *_name;
    NSArray *_components;
    HMDApplicationData *_appData;
    HMDAccessorySettingGroup *_rootSettings;
    HMDMediaSession *_mediaSession;
    NSString *_configuredName;
    NSUUID *_uuid;
    HMDHome *_home;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    HMFTimer *_auditSettingsTimer;
    HMFTimer *_fixupSettingsTimer;
    HMDMediaSystemSymptomHandler *_symptomsHandler;
}

+ (BOOL)hasMessageReceiverChildren;
+ (BOOL)supportsSecureCoding;
+ (id)sortMediaComponents:(id)arg1;
+ (void)_configureMediaSystemComponents:(id)arg1 mediaSystem:(id)arg2;
+ (id)logCategory;
@property(readonly) HMDMediaSystemSymptomHandler *symptomsHandler; // @synthesize symptomsHandler=_symptomsHandler;
@property(retain, nonatomic) HMFTimer *fixupSettingsTimer; // @synthesize fixupSettingsTimer=_fixupSettingsTimer;
@property(retain, nonatomic) HMFTimer *auditSettingsTimer; // @synthesize auditSettingsTimer=_auditSettingsTimer;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *configuredName; // @synthesize configuredName=_configuredName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
@property(readonly, copy) NSSet *messageReceiverChildren;
- (id)modelObjectWithChangeType:(NSUInteger)arg1;
- (id)backingStoreObjects;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)handleRemovedRootSettingsModel:(id)arg1 message:(id)arg2;
- (void)_appDataRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_notifyClientsOfUpdatedRootSettings:(id)arg1;
- (void)notifyClientsOfUpdatedRootSettings:(id)arg1;
- (void)handleAddedRootSettingsModel:(id)arg1 message:(id)arg2;
- (void)_appDataUpdated:(id)arg1 message:(id)arg2;
- (void)_transactionMediaSystemUpdated:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
@property(readonly, nonatomic) HMDAppleMediaAccessory *targetAccessory;
@property(retain, nonatomic) HMDAccessorySettingGroup *rootSettings; // @synthesize rootSettings=_rootSettings;
@property(retain, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
@property(retain, nonatomic) HMDMediaSession *mediaSession; // @synthesize mediaSession=_mediaSession;
@property(readonly, nonatomic) NSArray *accessories;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (id)serialize;
- (void)handleRemovedAccessory:(id)arg1;
- (void)handleHomeCloudZoneReadyNotification:(id)arg1;
- (void)_updateAppData:(id)arg1;
- (void)_handleAppData:(id)arg1;
- (void)_updateMediaSystem:(id)arg1;
- (void)_handleUpdateMediaSystem:(id)arg1;
- (void)_registerForNotifications;
- (void)_registerForMessages;
- (void)timerDidFire:(id)arg1;
- (void)auditMediaComponents;
- (void)_fixupAccessorySettingAfterTimerFire;
- (void)_fixupAccessorySetting;
- (void)fixupAccessorySetting;
- (void)_updateMediaSystemSettingsGroup;
- (void)updateMediaSystemSettingsGroup;
- (void)addModels:(id)arg1 settingsGroup:(id)arg2;
- (void)_updateSettings:(id)arg1;
- (void)_setupSettings:(id)arg1;
- (id)_mergeSetting:(id)arg1 item:(id)arg2 groupMetadata:(id)arg3;
- (void)_auditRootSettingsAfterTimerFire;
- (void)_auditRootSettingsGroup:(NSUInteger)arg1;
- (void)auditRootSettingsGroup:(NSUInteger)arg1;
- (void)unconfigureMediaSystemComponents:(id)arg1;
- (void)unconfigureMediaSystemComponents;
- (void)configureMediaSystemComponents:(id)arg1;
- (void)configureQueue:(id)arg1 messageDispatcher:(id)arg2;
- (BOOL)isValid;
- (id)container;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)dumpState;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)logIdentifier;
- (id)initWithMediaSystemModel:(id)arg1 home:(id)arg2;
- (id)init;
- (id)assistantObject;
- (id)url;

@end

