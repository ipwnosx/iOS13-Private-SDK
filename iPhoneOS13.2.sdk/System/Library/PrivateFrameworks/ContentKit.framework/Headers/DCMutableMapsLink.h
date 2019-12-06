//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/DCMapsLink.h>

@class NSString;

@interface DCMutableMapsLink : DCMapsLink
{
    NSString *_searchQuery;
    NSString *_searchNearQuery;
    NSString *_searchLocation;
    NSString *_startAddress;
    NSString *_destinationAddress;
    NSUInteger _directionsMode;
    NSString *_centerLocation;
    long long _zoomLevel;
    NSUInteger _mapType;
    BOOL _showsTraffic;
    BOOL _showsTransit;
    BOOL _showsStreetView;
    BOOL _showsBicycling;
    NSString *_streetViewLocation;
}

@property(copy, nonatomic) NSString *streetViewLocation; // @synthesize streetViewLocation=_streetViewLocation;
@property(nonatomic) BOOL showsBicycling; // @synthesize showsBicycling=_showsBicycling;
@property(nonatomic) BOOL showsStreetView; // @synthesize showsStreetView=_showsStreetView;
@property(nonatomic) BOOL showsTransit; // @synthesize showsTransit=_showsTransit;
@property(nonatomic) BOOL showsTraffic; // @synthesize showsTraffic=_showsTraffic;
@property(nonatomic) NSUInteger mapType; // @synthesize mapType=_mapType;
@property(nonatomic) long long zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(copy, nonatomic) NSString *centerLocation; // @synthesize centerLocation=_centerLocation;
@property(nonatomic) NSUInteger directionsMode; // @synthesize directionsMode=_directionsMode;
@property(copy, nonatomic) NSString *destinationAddress; // @synthesize destinationAddress=_destinationAddress;
@property(copy, nonatomic) NSString *startAddress; // @synthesize startAddress=_startAddress;
@property(copy, nonatomic) NSString *searchLocation; // @synthesize searchLocation=_searchLocation;
@property(copy, nonatomic) NSString *searchNearQuery; // @synthesize searchNearQuery=_searchNearQuery;
@property(copy, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
// - (void).cxx_destruct;

@end

