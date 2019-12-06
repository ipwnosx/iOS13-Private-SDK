//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class GEOComposedRoute, GEOComposedWaypoint, GEODirectionsRequest, GEODirectionsResponse, GEONavigationGuidanceState, MNActiveRouteInfo, MNLocation, MNStartNavigationDetails, NSArray, NSMapTable, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MNNavigationDetails : NSObject <NSSecureCoding>
{
    MNStartNavigationDetails *_startNavigationDetails;
    NSUInteger _state;
    int _navigationType;
    int _desiredNavigationType;
    int _desiredTransportType;
    MNLocation *_location;
    NSUInteger _routeIndex;
    BOOL _isDetour;
    GEONavigationGuidanceState *_guidanceState;
    MNActiveRouteInfo *_currentRoute;
    NSArray *_previewRoutes;
    NSArray *_alternateRoutes;
    GEOComposedWaypoint *_originalOrigin;
    GEOComposedWaypoint *_originalDestination;
    NSArray *_possibleCommuteDestinations;
    NSMapTable *_routeIDLookup;
    NSMutableDictionary *_routeLookup;
    NSMutableDictionary *_trafficIncidentAlerts;
    BOOL _guidancePromptsEnabled;
    BOOL _isInPreArrivalState;
    BOOL _traceIsPlaying;
    int _headingOrientation;
    int _navigationState;
    GEODirectionsRequest *_directionsRequest;
    GEODirectionsResponse *_directionsResponse;
    NSUInteger _reconnectionRouteIndex;
    NSUInteger _selectedPreviewRouteIndex;
    double _proceedToRouteDistance;
    NSString *_displayString;
    double _remainingTime;
    double _remainingDistance;
    NSUInteger _closestStepIndex;
    double _distanceUntilSign;
    double _timeUntilSign;
    double _distanceUntilManeuver;
    double _timeUntilManeuver;
    NSString *_currentVoiceLanguage;
    NSString *_tracePath;
    double _traceDuration;
    double _tracePosition;
    NSArray *_traceBookmarks;
    NSMutableDictionary *_trackedCommuteDestinations;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSMutableDictionary *trackedCommuteDestinations; // @synthesize trackedCommuteDestinations=_trackedCommuteDestinations;
@property(retain, nonatomic) NSArray *traceBookmarks; // @synthesize traceBookmarks=_traceBookmarks;
@property(nonatomic) double tracePosition; // @synthesize tracePosition=_tracePosition;
@property(nonatomic) double traceDuration; // @synthesize traceDuration=_traceDuration;
@property(nonatomic) BOOL traceIsPlaying; // @synthesize traceIsPlaying=_traceIsPlaying;
@property(copy, nonatomic) NSString *tracePath; // @synthesize tracePath=_tracePath;
@property(readonly, nonatomic) NSArray *possibleCommuteDestinations; // @synthesize possibleCommuteDestinations=_possibleCommuteDestinations;
@property(retain, nonatomic) NSString *currentVoiceLanguage; // @synthesize currentVoiceLanguage=_currentVoiceLanguage;
@property(nonatomic) double timeUntilManeuver; // @synthesize timeUntilManeuver=_timeUntilManeuver;
@property(nonatomic) double distanceUntilManeuver; // @synthesize distanceUntilManeuver=_distanceUntilManeuver;
@property(nonatomic) double timeUntilSign; // @synthesize timeUntilSign=_timeUntilSign;
@property(nonatomic) double distanceUntilSign; // @synthesize distanceUntilSign=_distanceUntilSign;
@property(nonatomic) NSUInteger closestStepIndex; // @synthesize closestStepIndex=_closestStepIndex;
@property(nonatomic) double remainingDistance; // @synthesize remainingDistance=_remainingDistance;
@property(nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
@property(retain, nonatomic) NSString *displayString; // @synthesize displayString=_displayString;
@property(nonatomic) double proceedToRouteDistance; // @synthesize proceedToRouteDistance=_proceedToRouteDistance;
@property(retain, nonatomic) GEOComposedWaypoint *originalDestination; // @synthesize originalDestination=_originalDestination;
@property(retain, nonatomic) GEOComposedWaypoint *originalOrigin; // @synthesize originalOrigin=_originalOrigin;
@property(readonly, nonatomic) NSUInteger selectedPreviewRouteIndex; // @synthesize selectedPreviewRouteIndex=_selectedPreviewRouteIndex;
@property(readonly, nonatomic) NSUInteger reconnectionRouteIndex; // @synthesize reconnectionRouteIndex=_reconnectionRouteIndex;
@property(readonly, nonatomic) NSUInteger routeIndex; // @synthesize routeIndex=_routeIndex;
@property(nonatomic) BOOL isInPreArrivalState; // @synthesize isInPreArrivalState=_isInPreArrivalState;
@property(retain, nonatomic) GEONavigationGuidanceState *guidanceState; // @synthesize guidanceState=_guidanceState;
@property(nonatomic) int navigationState; // @synthesize navigationState=_navigationState;
@property(nonatomic) int headingOrientation; // @synthesize headingOrientation=_headingOrientation;
@property(nonatomic) BOOL isDetour; // @synthesize isDetour=_isDetour;
@property(nonatomic) BOOL guidancePromptsEnabled; // @synthesize guidancePromptsEnabled=_guidancePromptsEnabled;
@property(retain, nonatomic) MNLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) GEODirectionsResponse *directionsResponse; // @synthesize directionsResponse=_directionsResponse;
@property(retain, nonatomic) GEODirectionsRequest *directionsRequest; // @synthesize directionsRequest=_directionsRequest;
@property(nonatomic) int desiredTransportType; // @synthesize desiredTransportType=_desiredTransportType;
@property(nonatomic) int desiredNavigationType; // @synthesize desiredNavigationType=_desiredNavigationType;
@property(nonatomic) int navigationType; // @synthesize navigationType=_navigationType;
@property(nonatomic) NSUInteger state; // @synthesize state=_state;
// - (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSMutableDictionary *routeLookup;
@property(readonly, nonatomic) NSMapTable *routeIDLookup;
- (void)_updateRouteIDLookup;
- (id)removeTrafficIncidentAlert:(id)arg1;
- (id)updateWithTrafficIncidentAlert:(id)arg1;
- (id)routeLookupIDs;
- (id)routeInfoForRoute:(id)arg1;
- (id)routeInfoForID:(id)arg1;
- (void)updateLocationFromDetails:(id)arg1;
- (void)updateETATrafficForRoute:(id)arg1;
- (void)setCurrentRoute:(id)arg1 withAlternateRoutes:(id)arg2;
- (void)setPreviewRoutes:(id)arg1 withSelectedRouteIndex:(NSUInteger)arg2;
- (void)updatePossibleCommuteDestinations:(id)arg1;
@property(readonly, nonatomic) NSUInteger legIndex;
@property(readonly, nonatomic) NSUInteger stepIndex;
@property(readonly, nonatomic) NSArray *alternateRoutes;
@property(readonly, nonatomic) NSArray *previewRoutes;
@property(readonly, nonatomic) GEOComposedRoute *currentRoute;
- (void)copySerializableValuesFrom:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

