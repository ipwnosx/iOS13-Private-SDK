//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRoutine/RTFrameworkProtocol-Protocol.h>

@class NSString, NSXPCConnection, RTEventAgentHelper, RTRoutineManagerRegistrantAction, RTRoutineManagerRegistrantScenarioTrigger, RTTokenBucket;
@protocol OS_dispatch_queue;

@interface RTRoutineManager : NSObject <RTFrameworkProtocol>
{
    NSXPCConnection *_xpcConnection;
    id /* block */ _visitHandler;
    id /* block */ _leechedVisitHandler;
    id /* block */ _leechedLowConfidenceVisitHandler;
    id /* block */ _vehicleEventsHandler;
    NSString *_restorationIdentifier;
    RTEventAgentHelper *_eventAgentHelper;
    RTTokenBucket *_clientThrottle;
    RTRoutineManagerRegistrantAction *_actionRegistrant;
    RTRoutineManagerRegistrantScenarioTrigger *_scenarioTriggerRegistrant;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)defaultManager;
+ (id)modeOfTransportationToString:(long long)arg1;
+ (id)routineModeToString:(long long)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) RTRoutineManagerRegistrantScenarioTrigger *scenarioTriggerRegistrant; // @synthesize scenarioTriggerRegistrant=_scenarioTriggerRegistrant;
@property(retain, nonatomic) RTRoutineManagerRegistrantAction *actionRegistrant; // @synthesize actionRegistrant=_actionRegistrant;
@property(retain, nonatomic) RTTokenBucket *clientThrottle; // @synthesize clientThrottle=_clientThrottle;
@property(retain, nonatomic) RTEventAgentHelper *eventAgentHelper; // @synthesize eventAgentHelper=_eventAgentHelper;
@property(retain, nonatomic) NSString *restorationIdentifier; // @synthesize restorationIdentifier=_restorationIdentifier;
@property(copy, nonatomic) id /* block */ vehicleEventsHandler; // @synthesize vehicleEventsHandler=_vehicleEventsHandler;
@property(copy, nonatomic) id /* block */ leechedLowConfidenceVisitHandler; // @synthesize leechedLowConfidenceVisitHandler=_leechedLowConfidenceVisitHandler;
@property(copy, nonatomic) id /* block */ leechedVisitHandler; // @synthesize leechedVisitHandler=_leechedVisitHandler;
@property(copy, nonatomic) id /* block */ visitHandler; // @synthesize visitHandler=_visitHandler;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)stopMonitoringNextPredictedLocationsOfInterest;
- (void)userInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(unsigned long long)arg2 feedback:(id)arg3 geoMapItem:(id)arg4 handler:(id /* block */)arg5;
- (void)userInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(unsigned long long)arg2 feedback:(id)arg3;
- (void)fetchAutomaticVehicleEventDetectionSupportedWithHandler:(id /* block */)arg1;
- (void)stopMonitoringVehicleEvents;
- (void)startMonitoringVehicleEventsWithHandler:(id /* block */)arg1;
- (void)onVehicleEvents:(id)arg1 error:(id)arg2;
- (void)engageInVehicleEventWithIdentifier:(id)arg1;
- (void)updateVehicleEventWithIdentifier:(id)arg1 location:(id)arg2;
- (void)updateVehicleEventWithIdentifier:(id)arg1 geoMapItem:(id)arg2;
- (void)updateVehicleEventWithIdentifier:(id)arg1 photo:(id)arg2;
- (void)updateVehicleEventWithIdentifier:(id)arg1 notes:(id)arg2;
- (void)clearAllVehicleEvents:(id /* block */)arg1;
- (void)clearAllVehicleEventsWithHandler:(id /* block */)arg1;
- (void)clearAllVehicleEvents;
- (void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2 handler:(id /* block */)arg3;
- (void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2;
- (void)fetchLastVehicleEventsWithHandler:(id /* block */)arg1;
- (void)extendLifetimeOfVisitsWithIdentifiers:(id)arg1 handler:(id /* block */)arg2;
- (void)extendLifetimeOfVisitWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)removeVisitWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)removeLocationOfInterestWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 customLabel:(id)arg3 handler:(id /* block */)arg4;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 customLabel:(id)arg2 handler:(id /* block */)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 handler:(id /* block */)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 mapItem:(id)arg2 handler:(id /* block */)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 mapItem:(id)arg3 customLabel:(id)arg4 handler:(id /* block */)arg5;
- (void)addLocationOfInterestOfType:(long long)arg1 mapItem:(id)arg2 customLabel:(id)arg3 handler:(id /* block */)arg4;
- (void)fetchLocationOfInterestWithIdentifier:(id)arg1 withHandler:(id /* block */)arg2;
- (void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)fetchMonitoredScenarioTriggerTypesWithHandler:(id /* block */)arg1;
- (void)onScenarioTrigger:(id)arg1 withError:(id)arg2;
- (void)stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1;
- (void)startMonitoringScenarioTriggerOfType:(unsigned long long)arg1 withHandler:(id /* block */)arg2;
- (void)fetchLocationOfInterestAtLocation:(id)arg1 withHandler:(id /* block */)arg2;
- (void)fetchPathToDiagnosticFilesWithHandler:(id /* block */)arg1;
- (void)fetchStoredVisitsWithOptions:(id)arg1 handler:(id /* block */)arg2;
- (void)onLeechedLowConfidenceVisit:(id)arg1 withError:(id)arg2;
- (void)stopLeechingLowConfidenceVisits;
- (void)startLeechingLowConfidenceVisitsWithHandler:(id /* block */)arg1;
- (void)onLeechedVisit:(id)arg1 withError:(id)arg2;
- (void)stopLeechingVisits;
- (void)startLeechingVisitsWithHandler:(id /* block */)arg1;
- (void)onVisit:(id)arg1 withError:(id)arg2;
- (void)stopMonitoringVisits;
- (void)startMonitoringVisitsWithHandler:(id /* block */)arg1;
- (void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 withHandler:(id /* block */)arg2;
- (void)fetchPredictedLocationsOfInterestAssociatedToTitle:(id)arg1 location:(id)arg2 calendarIdentifier:(id)arg3 withHandler:(id /* block */)arg4;
- (void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 withHandler:(id /* block */)arg2;
- (void)fetchRoutineModeFromLocation:(id)arg1 withHandler:(id /* block */)arg2;
- (void)enumerateStoredLocationsWithOptions:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)fetchAllLocationsOfInterestForSettingsWithHandler:(id /* block */)arg1;
- (void)updateCloudSyncProvisionedForAccount:(_Bool)arg1 handler:(id /* block */)arg2;
- (void)fetchCloudSyncAuthorizationState:(id /* block */)arg1;
- (void)clearRoutineWithHandler:(id /* block */)arg1;
- (void)setRoutineEnabled:(_Bool)arg1 withHandler:(id /* block */)arg2;
- (void)setRoutineEnabled:(_Bool)arg1;
- (void)fetchRoutineStateWithHandler:(id /* block */)arg1;
- (void)fetchRoutineEnabledWithHandler:(id /* block */)arg1;
- (void)fetchPlaceInferencesWithOptions:(id)arg1 handler:(id /* block */)arg2;
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withHandler:(id /* block */)arg4;
- (void)fetchNextPredictedLocationsOfInterestWithHandler:(id /* block */)arg1;
- (void)fetchTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(id /* block */)arg3;
- (void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)fetchLocationsOfInterestVisitedSinceDate:(id)arg1 withHandler:(id /* block */)arg2;
- (void)fetchLocationsOfInterestOfType:(long long)arg1 withHandler:(id /* block */)arg2;
- (void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withHandler:(id /* block */)arg3;
- (_Bool)selectorIsWhitelisted:(SEL)arg1;
- (id)_proxyForServicingSelector:(SEL)arg1 asynchronous:(_Bool)arg2 withErrorHandler:(id /* block */)arg3;
- (id)_proxyForServicingSelector:(SEL)arg1 withErrorHandler:(id /* block */)arg2;
- (void)handleDaemonStart;
- (void)createConnection;
- (void)_createConnection;
- (void)dealloc;
- (id)init;
- (id)initWithRestorationIdentifier:(id)arg1;
- (void)performBluePOIQueryLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(id /* block */)arg3;
- (void)fetchCurrentPredictedLocationsOfInterestLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(id /* block */)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
