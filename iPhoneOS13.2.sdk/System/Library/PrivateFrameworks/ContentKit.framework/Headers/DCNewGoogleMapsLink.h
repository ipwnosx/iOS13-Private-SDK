//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/DCMapsLink.h>

@class NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface DCNewGoogleMapsLink : DCMapsLink
{
    BOOL _showsTransit;
    BOOL _showsBicycling;
    BOOL _showsStreetView;
    BOOL _showsTraffic;
    BOOL _parsed;
    int _linkType;
    NSUInteger _mapType;
    NSUInteger _directionsMode;
    long long _zoomLevel;
    NSURL *_URL;
    NSArray *_mapsURLComponents;
    NSString *_location;
}

+ (id)mapsLinkWithURL:(id)arg1;
+ (BOOL)isMapsURL:(id)arg1;
@property(readonly, nonatomic) BOOL parsed; // @synthesize parsed=_parsed;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSArray *mapsURLComponents; // @synthesize mapsURLComponents=_mapsURLComponents;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
// - (void).cxx_destruct;
- (void)parseMapsData;
- (id)dataString;
- (void)parse;
- (void)parseLatLonZoom;
- (id)latLonZoomString;
- (void)parseLinkType;
@property(readonly, nonatomic) int linkType; // @synthesize linkType=_linkType;
- (id)mapsURLComponentAtIndex:(long long)arg1;
- (id)streetViewLocation;
- (BOOL)showsBicycling;
- (BOOL)showsStreetView;
- (BOOL)showsTransit;
- (BOOL)showsTraffic;
- (NSUInteger)mapType;
- (long long)zoomLevel;
- (id)centerLocation;
- (NSUInteger)directionsMode;
- (id)destinationAddress;
- (id)startAddress;
- (id)searchLocation;
- (id)searchNearQuery;
- (id)searchQuery;
- (id)initWithURL:(id)arg1;

@end

