//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class GEOComposedRoute, GEOComposedRouteTraffic, GEOETARoute, GEORouteIncident, NSArray, NSData, NSDate;

@interface MNTrafficIncidentAlert : NSObject <NSSecureCoding>
{
    NSData *_alertID;
    NSData *_etaResponseID;
    NSUInteger _alertType;
    GEOETARoute *_oldETARoute;
    GEOComposedRoute *_originalRoute;
    GEOComposedRouteTraffic *_originalRouteTraffic;
    GEOComposedRoute *_alternateRoute;
    GEOComposedRouteTraffic *_alternateRouteTraffic;
//     CDStruct_3f2a7a20 _startValidCoordinateRange;
//     CDStruct_3f2a7a20 _endValidCoordinateRange;
//     CDStruct_3f2a7a20 _incidentCoordinate;
//     CDStruct_3f2a7a20 _alternateEndValidCoordinateRange;
    NSDate *_alertDate;
    double _distanceToIncident;
    NSDate *_eta;
    BOOL _isAutomaticReroute;
}

+ (BOOL)supportsSecureCoding;
+ (id)trafficIncidentAlertForDetails:(id)arg1;
@property(readonly, nonatomic) BOOL isAutomaticReroute; // @synthesize isAutomaticReroute=_isAutomaticReroute;
@property(readonly, nonatomic) NSDate *alertDate; // @synthesize alertDate=_alertDate;
// @property(readonly, nonatomic) CDStruct_3f2a7a20 alternateEndValidCoordinateRange; // @synthesize alternateEndValidCoordinateRange=_alternateEndValidCoordinateRange;
// @property(readonly, nonatomic) CDStruct_3f2a7a20 incidentCoordinate; // @synthesize incidentCoordinate=_incidentCoordinate;
// @property(readonly, nonatomic) CDStruct_3f2a7a20 endValidCoordinateRange; // @synthesize endValidCoordinateRange=_endValidCoordinateRange;
// @property(readonly, nonatomic) CDStruct_3f2a7a20 startValidCoordinateRange; // @synthesize startValidCoordinateRange=_startValidCoordinateRange;
@property(readonly, nonatomic) GEOComposedRouteTraffic *alternateRouteTraffic; // @synthesize alternateRouteTraffic=_alternateRouteTraffic;
@property(readonly, nonatomic) GEOComposedRoute *alternateRoute; // @synthesize alternateRoute=_alternateRoute;
@property(readonly, nonatomic) GEOComposedRouteTraffic *originalRouteTraffic; // @synthesize originalRouteTraffic=_originalRouteTraffic;
@property(readonly, nonatomic) GEOComposedRoute *originalRoute; // @synthesize originalRoute=_originalRoute;
@property(readonly, nonatomic) GEOETARoute *oldETARoute; // @synthesize oldETARoute=_oldETARoute;
@property(retain, nonatomic) NSDate *eta; // @synthesize eta=_eta;
@property(nonatomic) double distanceToIncident; // @synthesize distanceToIncident=_distanceToIncident;
@property(readonly, nonatomic) NSUInteger alertType; // @synthesize alertType=_alertType;
@property(readonly, nonatomic) NSData *etaResponseID; // @synthesize etaResponseID=_etaResponseID;
@property(readonly, nonatomic) NSData *alertID; // @synthesize alertID=_alertID;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dynamicStringValues;
// - (CDStruct_c3b9c2ee)_divergenceCoordinate;
// - (CDStruct_3f2a7a20)_routeCoordinateAtDuration:(double)arg1 beforeRouteCoordinate:(CDStruct_3f2a7a20)arg2;
- (void)_findRouteDivergence;
@property(readonly, nonatomic) NSUInteger secondsSaved;
- (void)updateAlertIDWithAlert:(id)arg1;
- (void)updateLocation:(id)arg1;
- (BOOL)isSimilarTo:(id)arg1;
@property(readonly, nonatomic) double alertDisplayDuration;
@property(readonly, nonatomic) double newEstimatedTime;
@property(readonly, nonatomic) double oldEstimatedTime;
@property(readonly, nonatomic) GEORouteIncident *oldETARouteIncident;
@property(readonly, nonatomic) NSArray *spokenTexts;
@property(readonly, nonatomic) NSArray *alertDescriptions;
@property(readonly, nonatomic) NSArray *alertTitles;
- (id)initWithTrafficIncidentAlertDetails:(id)arg1;
- (id)initWithRoute:(id)arg1 traffic:(id)arg2 etaRoute:(id)arg3 etaResponse:(id)arg4;

@end

