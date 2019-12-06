//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNLocationRecorder-Protocol.h>

@class GEOComposedRouteLeg, MNTrace, NSDate, NSMapTable, NSString;
@protocol MNTraceRecorderBackgroundGuard;

@interface MNTraceRecorder : NSObject <MNLocationRecorder>
{
    MNTrace *_trace;
    NSString *_tracePath;
    NSDate *_recordingStartTime;
    BOOL _corrupted;
    BOOL _closed;
    BOOL _created;
//    struct sqlite3_stmt _updateStart;
//    struct sqlite3_stmt _updateEnd;
//    struct sqlite3_stmt _updateDirectionsFeedback;
//    struct sqlite3_stmt _updateActiveTransportType;
//    struct sqlite3_stmt _environmentInfoInsert;
//    struct sqlite3_stmt _debugSettingInsert;
//    struct sqlite3_stmt _audioSettingInsert;
//    struct sqlite3_stmt _stylesheetInsert;
//    struct sqlite3_stmt _locationInsert;
//    struct sqlite3_stmt _locationErrorInsert;
//    struct sqlite3_stmt _lastLocationIDStatement;
//    struct sqlite3_stmt _matchInfoInsert;
//    struct sqlite3_stmt _directionsRequestInsert;
//    struct sqlite3_stmt _routeRequestInsert;
//    struct sqlite3_stmt _routeResponseUpdate;
//    struct sqlite3_stmt _routeResponseErrorInsert;
//    struct sqlite3_stmt _routeSelectionInsert;
//    struct sqlite3_stmt _routeSelectionUpdate;
//    struct sqlite3_stmt _likelyRouteInsert;
//    struct sqlite3_stmt _etaTrafficUpdateRequestInsert;
//    struct sqlite3_stmt _etaTrafficUpdateResponseInsert;
//    struct sqlite3_stmt _etaTrafficUpdateResponseErrorInsert;
//    struct sqlite3_stmt _realtimeTransitUpdateRequestInsert;
//    struct sqlite3_stmt _realtimeTransitUpdateResponseInsert;
//    struct sqlite3_stmt _realtimeTransitUpdateResponseErrorInsert;
//    struct sqlite3_stmt _vehicleSpeedInsert;
//    struct sqlite3_stmt _vehicleHeadingInsert;
//    struct sqlite3_stmt _motionDataInsert;
//    struct sqlite3_stmt _compassHeadingInsert;
//    struct sqlite3_stmt _navigationEventInsert;
//    struct sqlite3_stmt _navigationEventLastRowIDStatement;
//    struct sqlite3_stmt _navigationEventUpdateLocationIDStatement;
//    struct sqlite3_stmt _routeLegGuidanceInsert;
//    struct sqlite3_stmt _routeLegEndGuidanceUpdate;
//    struct sqlite3_stmt _traceEventInsert;
//    struct sqlite3_stmt _scheduleProjectionInsert;
//    struct sqlite3_stmt _scheduleProjectionUpdate;
//    struct sqlite3_stmt _commuteDestinationsInsert;
//    struct sqlite3_stmt _commuteDirectionsRequestInsert;
//    struct sqlite3_stmt _commuteDirectionsResponseUpdate;
    NSMapTable *_routeRequests;
    NSUInteger _routeRequestCount;
    NSUInteger _routeSelectionCount;
    NSUInteger _etaTrafficUpdateCount;
    NSMapTable *_commuteDirectionsRequests;
    NSMapTable *_eventsPendingLocationReference;
    GEOComposedRouteLeg *_currentLeg;
    id /* CDUnknownBlockType */ _timeSinceRecordingBeganHandler;
    id /* CDUnknownBlockType */ _errorHandler;
    BOOL _lastPauseSpokenAudio;
    long long _lastVolumeSetting;
    NSUInteger _lastLaneEventHash;
    id <MNTraceRecorderBackgroundGuard> _backgroundGuardDelegate;
}

@property(nonatomic) __weak id <MNTraceRecorderBackgroundGuard> backgroundGuardDelegate; // @synthesize backgroundGuardDelegate=_backgroundGuardDelegate;
@property(copy, nonatomic) id /* CDUnknownBlockType */ timeSinceRecordingBeganHandler; // @synthesize timeSinceRecordingBeganHandler=_timeSinceRecordingBeganHandler;
@property(retain, nonatomic) NSDate *recordingStartTime; // @synthesize recordingStartTime=_recordingStartTime;
@property(readonly, nonatomic) MNTrace *trace; // @synthesize trace=_trace;
// - (void).cxx_destruct;
- (void)_executeStatementForQuery:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_updateNavigationEventsWithLocationReference:(id)arg1;
- (void)recordDirectionsFeedback:(id)arg1;
- (void)recordCommuteDirectionsResponse:(id)arg1 error:(id)arg2 forRequest:(id)arg3;
- (void)recordCommuteDirectionsRequest:(id)arg1 forDestinationID:(NSUInteger)arg2;
- (void)recordCommuteDestinationWithID:(NSUInteger)arg1 name:(id)arg2 waypoint:(id)arg3;
- (void)updateActualArrivalTime:(double)arg1 arrivalTimeDelta:(double)arg2 forStepIndex:(NSUInteger)arg3;
- (void)recordProjectedArrivalTime:(double)arg1 actualArrivalTime:(double)arg2 arrivalTimeDelta:(double)arg3 matchType:(long long)arg4 vehicleType:(long long)arg5 lastKnownLocation:(id)arg6 forStepIndex:(NSUInteger)arg7 withDuration:(double)arg8 andManeuverType:(int)arg9;
- (void)_logError:(id)arg1 resultCode:(int)arg2;
- (void)recordCompassHeading:(double)arg1 magneticHeading:(double)arg2 accuracy:(double)arg3 timestamp:(id)arg4;
- (void)recordMotionUpdate:(NSUInteger)arg1 exitType:(NSUInteger)arg2 confidence:(NSUInteger)arg3;
- (void)recordVehicleHeading:(double)arg1 timestamp:(id)arg2;
- (void)recordVehicleSpeed:(double)arg1 timestamp:(id)arg2;
- (void)recordTransitUpdateError:(id)arg1;
- (void)recordTransitUpdateResponse:(id)arg1;
- (void)recordTransitUpdateRequest:(id)arg1 withTimestamp:(double)arg2;
- (void)recordETATrafficUpdateError:(id)arg1;
- (void)recordETATrafficUpdateResponse:(id)arg1;
- (void)recordETATrafficUpdateRequest:(id)arg1;
- (void)recordETATrafficUpdateRequest:(id)arg1 forDestination:(id)arg2;
- (void)recordLikelyRouteRequest:(id)arg1 response:(id)arg2 waypoints:(id)arg3;
- (void)recordInitialCourse:(double)arg1;
- (void)recordRouteDeselected;
- (void)recordRouteSelected:(id)arg1 routeIndex:(NSUInteger)arg2;
- (void)recordRouteError:(id)arg1;
- (void)recordRouteError:(id)arg1 forRouteRequest:(id)arg2;
- (void)recordRouteResponse:(id)arg1 forRouteRequest:(id)arg2;
- (void)recordRouteRequest:(id)arg1 waypoints:(id)arg2;
- (void)recordDirectionsRequest:(id)arg1 response:(id)arg2 error:(id)arg3 waypoints:(id)arg4 requestTimestamp:(double)arg5 responseTimestamp:(double)arg6;
- (void)endTransaction;
- (void)beginTransaction;
- (void)resetRouteSelections;
- (void)recordNavigationEvent:(long long)arg1 forLocation:(id)arg2 description:(id)arg3;
- (void)recordTraceEventAtTime:(double)arg1 eventType:(long long)arg2 stage:(long long)arg3 description:(id)arg4;
- (void)recordTraceEventForEventType:(long long)arg1 stage:(long long)arg2 description:(id)arg3;
- (void)recordTraceEvent:(id)arg1;
- (void)recordGuidanceWasEnded;
- (void)recordGuidanceWasEndedAtTime:(double)arg1;
- (void)recordGuidanceWasStartedForRouteLeg:(id)arg1;
- (void)recordGuidanceWasStartedForRouteLeg:(id)arg1 timestamp:(double)arg2;
- (void)recordActiveTransportType:(int)arg1 timestamp:(double)arg2;
- (void)resetLocationsForSimulation;
- (void)setRouteGenius:(BOOL)arg1;
- (void)recordError:(id)arg1;
- (void)recordLocationUpdateResume;
- (void)recordLocationUpdatePause;
- (void)recordLocation:(id)arg1 correctedLocation:(id)arg2;
//  (void)recordSimulatedCoordinate:(struct CLLocationCoordinate2D)arg1 course:(double)arg2 altitude:(double)arg3 speed:(double)arg4 timestamp:(double)arg5 activeTransportType:(int)arg6;
- (void)recordLocation:(id)arg1 timestamp:(double)arg2;
- (void)_recordLocationEvent:(long long)arg1 recordingTimestamp:(double)arg2 location:(id)arg3 correctedLocation:(id)arg4;
//  (void)_recordLocationEvent:(long long)arg1 recordingTimestamp:(double)arg2 coordinate:(struct CLLocationCoordinate2D)arg3 rawCoordinate:(struct CLLocationCoordinate2D)arg4 timestamp:(double)arg5 horizontalAccuracy:(double)arg6 verticalAccuracy:(double)arg7 altitude:(double)arg8 speed:(double)arg9 speedAccuracy:(double)arg10 course:(double)arg11 rawCourse:(double)arg12 type:(int)arg13 courseAccuracy:(double)arg14 correctedCoordinate:(struct CLLocationCoordinate2D)arg15 correctedCourse:(double)arg16 matchType:(int)arg17 activeTransportType:(int)arg18 matchInfo:(id)arg19 correctedLocation:(id)arg20 speedLimit:(int)arg21 shieldText:(id)arg22 shieldType:(int)arg23;
- (void)recordLocation:(id)arg1 rawLocation:(id)arg2;
- (void)_recordLocationMatchInfoOnWriteQueue:(id)arg1 forLocationID:(int)arg2;
- (void)recordMiscInfo:(id)arg1 value:(id)arg2;
- (void)recordStylesheet:(id)arg1 data:(id)arg2;
- (void)recordAudioSetting:(BOOL)arg1 volume:(long long)arg2;
- (void)recordDebugSetting:(id)arg1 settingValue:(id)arg2;
- (void)recordEnvironmentInfo:(id)arg1 value:(id)arg2;
- (double)timeSinceRecordingBegan;
- (void)saveTraceWithHandler:(CDUnknownBlockType)arg1;
- (void)saveTraceSynchronously;
- (void)cancelTrace;
- (void)saveTrace;
- (void)startWritingTraceToFileAtPath:(id)arg1 shouldPrepareStatements:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startWritingTraceToFileAtPath:(id)arg1;
- (void)startWritingTraceToFile;
- (void)startWritingTraceToFileWithCompletion:(CDUnknownBlockType)arg1;
- (void)startWritingTraceToFileIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_closeTraceDB;
- (void)setDestinationSearchResultData:(id)arg1;
- (void)setOriginSearchResultData:(id)arg1;
- (void)_prepareStatements;
- (void)_initializeTraceDB;
- (void)_createTrace;
- (void)_openExistingTrace;
- (BOOL)_isTracePathValid:(id)arg1;
- (void)_serializationError:(id)arg1;
- (void)_logSqliteErrorWithResult:(int)arg1 file:(const char )arg2 line:(int)arg3;
- (void)_dispatchWrite:(CDUnknownBlockType)arg1;
@property(nonatomic) BOOL copyToCrashReporterDirectory;
- (void)dealloc;
- (id)initWithPath:(id)arg1 clMapMatching:(BOOL)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)startWritingTraceToPath:(id)arg1 withErrorHandler:(CDUnknownBlockType)arg2;
- (void)openForRecordingWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

