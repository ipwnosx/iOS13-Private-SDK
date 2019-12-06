//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class GEODirectionsRequest, GEODirectionsResponse, GEORouteAttributes, MNTraceRecordingData, NSArray, NSDictionary, NSString;

@interface MNStartNavigationDetails : NSObject <NSSecureCoding>
{
    int _navigationType;
    BOOL _fullGuidance;
    NSString *_tracePlaybackPath;
    MNTraceRecordingData *_traceRecordingData;
    BOOL _shouldSimulateLocations;
    NSString *_traceRecordingNameOverride;
    BOOL _copyTraceToCrashReporter;
    GEORouteAttributes *_routeAttributes;
    GEODirectionsRequest *_directionsRequest;
    GEODirectionsResponse *_directionsResponse;
    NSString *_requestingAppIdentifier;
    NSArray *_routes;
    NSUInteger _selectedRouteIndex;
    NSDictionary *_traffic;
    BOOL _isReconnecting;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL copyTraceToCrashReporter; // @synthesize copyTraceToCrashReporter=_copyTraceToCrashReporter;
@property(copy, nonatomic) NSString *traceRecordingNameOverride; // @synthesize traceRecordingNameOverride=_traceRecordingNameOverride;
@property(nonatomic) BOOL shouldSimulateLocations; // @synthesize shouldSimulateLocations=_shouldSimulateLocations;
@property(retain, nonatomic) MNTraceRecordingData *traceRecordingData; // @synthesize traceRecordingData=_traceRecordingData;
@property(copy, nonatomic) NSString *tracePlaybackPath; // @synthesize tracePlaybackPath=_tracePlaybackPath;
@property(copy, nonatomic) NSString *requestingAppIdentifier; // @synthesize requestingAppIdentifier=_requestingAppIdentifier;
@property(nonatomic) NSUInteger selectedRouteIndex; // @synthesize selectedRouteIndex=_selectedRouteIndex;
@property(copy, nonatomic) NSDictionary *traffic; // @synthesize traffic=_traffic;
@property(copy, nonatomic) NSArray *routes; // @synthesize routes=_routes;
@property(copy, nonatomic) GEODirectionsResponse *directionsResponse; // @synthesize directionsResponse=_directionsResponse;
@property(copy, nonatomic) GEODirectionsRequest *directionsRequest; // @synthesize directionsRequest=_directionsRequest;
@property(copy, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
@property(nonatomic) BOOL fullGuidance; // @synthesize fullGuidance=_fullGuidance;
@property(nonatomic) int navigationType; // @synthesize navigationType=_navigationType;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *fullDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic) BOOL isReconnecting;

@end

