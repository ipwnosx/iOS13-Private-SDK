//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MNTrace : NSObject
{
//    struct sqlite3 _db;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSObject<OS_dispatch_group> *_writeGroup;
    NSArray *_bookmarks;
    NSArray *_bookmarkImages;
    NSUInteger _version;
    NSUInteger _originalVersion;
    BOOL _isSimulation;
    BOOL _isRouteGenius;
    BOOL _usesCLMapCorrection;
    double _initialCourse;
    NSArray *_locations;
    NSArray *_directions;
    NSArray *_etaUpdates;
    NSArray *_headingData;
    NSArray *_motionData;
    NSArray *_vehicleHeadingData;
    NSArray *_vehicleSpeedData;
    NSData *_startWaypointData;
    NSData *_endWaypointData;
    NSArray *_routeSelections;
    NSArray *_annotatedUserBehavior;
    NSArray *_annotatedUserEnvironments;
    NSArray *_commuteDestinations;
    NSArray *_commuteDirectionsRequests;
    BOOL _copyToCrashReporter;
    int _mainTransportType;
    NSString *_tracePath;
    NSDictionary *_miscInfo;
}

@property(retain, nonatomic) NSArray *bookmarkImages; // @synthesize bookmarkImages=_bookmarkImages;
@property(retain, nonatomic) NSDictionary *miscInfo; // @synthesize miscInfo=_miscInfo;
@property(retain, nonatomic) NSArray *commuteDirectionsRequests; // @synthesize commuteDirectionsRequests=_commuteDirectionsRequests;
@property(retain, nonatomic) NSArray *commuteDestinations; // @synthesize commuteDestinations=_commuteDestinations;
@property(retain, nonatomic) NSArray *annotatedUserEnvironments; // @synthesize annotatedUserEnvironments=_annotatedUserEnvironments;
@property(retain, nonatomic) NSArray *annotatedUserBehavior; // @synthesize annotatedUserBehavior=_annotatedUserBehavior;
@property(retain, nonatomic) NSArray *routeSelections; // @synthesize routeSelections=_routeSelections;
@property(retain, nonatomic) NSData *endWaypointData; // @synthesize endWaypointData=_endWaypointData;
@property(retain, nonatomic) NSData *startWaypointData; // @synthesize startWaypointData=_startWaypointData;
@property(retain, nonatomic) NSArray *vehicleSpeedData; // @synthesize vehicleSpeedData=_vehicleSpeedData;
@property(retain, nonatomic) NSArray *vehicleHeadingData; // @synthesize vehicleHeadingData=_vehicleHeadingData;
@property(retain, nonatomic) NSArray *motionData; // @synthesize motionData=_motionData;
@property(retain, nonatomic) NSArray *headingData; // @synthesize headingData=_headingData;
@property(retain, nonatomic) NSArray *etaUpdates; // @synthesize etaUpdates=_etaUpdates;
@property(retain, nonatomic) NSArray *directions; // @synthesize directions=_directions;
@property(retain, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(nonatomic) double initialCourse; // @synthesize initialCourse=_initialCourse;
@property(nonatomic) BOOL usesCLMapCorrection; // @synthesize usesCLMapCorrection=_usesCLMapCorrection;
@property(nonatomic) BOOL isRouteGenius; // @synthesize isRouteGenius=_isRouteGenius;
@property(nonatomic) BOOL isSimulation; // @synthesize isSimulation=_isSimulation;
@property(nonatomic) NSUInteger originalVersion; // @synthesize originalVersion=_originalVersion;
@property(nonatomic) NSUInteger version; // @synthesize version=_version;
@property(nonatomic) BOOL copyToCrashReporter; // @synthesize copyToCrashReporter=_copyToCrashReporter;
@property(readonly, nonatomic) NSString *tracePath; // @synthesize tracePath=_tracePath;
@property(retain, nonatomic) NSArray *bookmarks; // @synthesize bookmarks=_bookmarks;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *writeGroup; // @synthesize writeGroup=_writeGroup;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *writeQueue; // @synthesize writeQueue=_writeQueue;
// property(readonly, nonatomic) struct sqlite3 db; // @synthesize db=_db;
// - (void).cxx_destruct;
- (void)copyTraceToCrashReporter;
- (id)_handleOpenErrorWithPath:(id)arg1;
@property(readonly, nonatomic) int mainTransportType; // @synthesize mainTransportType=_mainTransportType;
- (BOOL)closeTrace;
- (BOOL)startWritingTraceToFile:(id)arg1;
- (BOOL)startWritingTraceToPath:(id)arg1;
- (BOOL)createTempTraceForRecording;
- (BOOL)openTrace:(id)arg1 outError:(id )arg2;
- (void)dealloc;
- (id)init;
- (id)serializableBookmarks;

@end

