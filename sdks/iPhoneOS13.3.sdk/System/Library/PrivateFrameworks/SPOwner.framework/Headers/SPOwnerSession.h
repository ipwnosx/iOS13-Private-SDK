//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPOwner/SPLostModeSupportProtocol-Protocol.h>
#import <SPOwner/SPOwnerSessionPrivateProtocol-Protocol.h>
#import <SPOwner/SPTrackingAvoidanceServiceProtocol-Protocol.h>

@class FMXPCServiceDescription, FMXPCSession, NSDate, NSDictionary, NSOperationQueue, NSSet;
@protocol OS_dispatch_queue, OS_dispatch_source, SPOwnerSessionXPCProtocol;

@interface SPOwnerSession : NSObject <SPLostModeSupportProtocol, SPTrackingAvoidanceServiceProtocol, SPOwnerSessionPrivateProtocol>
{
    id /* CDUnknownBlockType */ beaconAddedBlock;
    id /* CDUnknownBlockType */ beaconRemovedBlock;
    id /* CDUnknownBlockType */ beaconsChangedBlock;
    id /* CDUnknownBlockType */ latestLocationsUpdatedBlock;
    NSSet *_locationSources;
    FMXPCServiceDescription *_serviceDescription;
    FMXPCSession *_session;
    id <SPOwnerSessionXPCProtocol> _proxy;
    id <SPOwnerSessionXPCProtocol> _userAgentProxy;
    NSSet *_allBeaconsCache;
    NSSet *_clientObservedBeacons;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_notificationQueue;
    id _beaconsChangedNotificationToken;
    id _tagSeparationBeaconsChangedNotificationToken;
    id _beaconEstimatedLocationChangedNotificationToken;
    NSDictionary *_locationCache;
    NSObject<OS_dispatch_source> *_locationFetchDispatchTimer;
    NSObject<OS_dispatch_source> *_connectionExpiryDispatchTimer;
    NSDate *_fetchLimit;
}

@property(copy, nonatomic) NSDate *fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *connectionExpiryDispatchTimer; // @synthesize connectionExpiryDispatchTimer=_connectionExpiryDispatchTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *locationFetchDispatchTimer; // @synthesize locationFetchDispatchTimer=_locationFetchDispatchTimer;
@property(retain, nonatomic) NSDictionary *locationCache; // @synthesize locationCache=_locationCache;
@property(nonatomic) __weak id beaconEstimatedLocationChangedNotificationToken; // @synthesize beaconEstimatedLocationChangedNotificationToken=_beaconEstimatedLocationChangedNotificationToken;
@property(nonatomic) __weak id tagSeparationBeaconsChangedNotificationToken; // @synthesize tagSeparationBeaconsChangedNotificationToken=_tagSeparationBeaconsChangedNotificationToken;
@property(nonatomic) __weak id beaconsChangedNotificationToken; // @synthesize beaconsChangedNotificationToken=_beaconsChangedNotificationToken;
@property(retain, nonatomic) NSOperationQueue *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSSet *clientObservedBeacons; // @synthesize clientObservedBeacons=_clientObservedBeacons;
@property(retain, nonatomic) NSSet *allBeaconsCache; // @synthesize allBeaconsCache=_allBeaconsCache;
@property(retain, nonatomic) id <SPOwnerSessionXPCProtocol> userAgentProxy; // @synthesize userAgentProxy=_userAgentProxy;
@property(retain, nonatomic) id <SPOwnerSessionXPCProtocol> proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) FMXPCSession *session; // @synthesize session=_session;
@property(retain, nonatomic) FMXPCServiceDescription *serviceDescription; // @synthesize serviceDescription=_serviceDescription;
@property(copy, nonatomic) NSSet *locationSources; // @synthesize locationSources=_locationSources;
@property(copy, nonatomic) id /* CDUnknownBlockType */ latestLocationsUpdatedBlock; // @synthesize latestLocationsUpdatedBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ beaconsChangedBlock; // @synthesize beaconsChangedBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ beaconRemovedBlock; // @synthesize beaconRemovedBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ beaconAddedBlock; // @synthesize beaconAddedBlock;
// - (void).cxx_destruct;
- (void)removeBeacon:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)shareBeacon:(id)arg1 handles:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)unacceptedBeaconsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)allBeaconsWithCompletion:(id /* CDUnknownBlockType */)arg1;
@property(readonly, copy, nonatomic) NSSet *allBeacons;
- (void)updateAllBeaconLocations;
- (void)updateAllBeacons;
- (void)stopRefreshing;
- (void)startRefreshingBeacons:(id)arg1;
- (void)startRefreshing;
- (void)executeCommand:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)addBeaconChangedListener:(id)arg1 beaconUUID:(id)arg2 taskName:(id)arg3 commandIdentifier:(id)arg4 commandIssueDate:(id)arg5;
- (void)finishBeaconFuture:(id)arg1 beaconUUID:(id)arg2;
- (id)executeCommand:(id)arg1;
- (oneway void)forceDistributeKeysWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (oneway void)beaconForUUID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)rawSearchResultsForBeacon:(id)arg1 dateInterval:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)updateConnectionExpiryDispatchTimerWithBeacons:(id)arg1;
- (void)connectionExpiryTimerFired;
- (void)setConnectionExpiryDispatchTimerWithInterval:(double)arg1;
- (void)locationFetchTimerFired;
- (void)setLocationFetchDispatchTimerWithInterval:(double)arg1;
- (void)locationsForBeacons:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)remoteInterface;
- (void)_invalidate;
- (void)dealloc;
- (id)init;

@end
