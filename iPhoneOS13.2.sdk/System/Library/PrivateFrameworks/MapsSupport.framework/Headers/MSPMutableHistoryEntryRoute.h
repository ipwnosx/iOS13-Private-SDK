//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPMutableHistoryEntry.h>

#import <MapsSupport/MSPHistoryEntryRoute-Protocol.h>

@class GEOComposedWaypoint, GEOURLRouteHandle;
@protocol MSPRouteInformationSource;

@interface MSPMutableHistoryEntryRoute : MSPMutableHistoryEntry <MSPHistoryEntryRoute>
{
    id <MSPRouteInformationSource> _routeInformationSource;
}

+ (id)mutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)immutableObjectClass;
@property(copy, nonatomic) id <MSPRouteInformationSource> routeInformationSource; // @synthesize routeInformationSource=_routeInformationSource;
// - (void).cxx_destruct;
- (BOOL)_isUserVisibleDuplicateOfSameClassObject:(id)arg1;
- (id)transferToImmutableIfValidWithError:(out id )arg1;
@property(nonatomic, getter=navigationWasInterrupted) BOOL navigationInterrupted;
@property(readonly, nonatomic) BOOL navigationWasInterrupted;
@property(readonly, nonatomic) GEOURLRouteHandle *routeHandle;
@property(readonly, nonatomic) long long transportType;
@property(readonly, nonatomic) GEOComposedWaypoint *endWaypoint;
@property(readonly, nonatomic) GEOComposedWaypoint *startWaypoint;
- (id)_routeRequestStorage;
- (id)initWithStorage:(id)arg1;

@end

