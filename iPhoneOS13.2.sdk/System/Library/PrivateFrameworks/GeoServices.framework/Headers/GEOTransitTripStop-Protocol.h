//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GEOLatLng, GEOStyleAttributes, NSArray, NSString, NSTimeZone;
@protocol GEOTransitDeparture;

@protocol GEOTransitTripStop <NSObject>
@property(readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property(readonly, nonatomic) GEOLatLng *location;
@property(readonly, nonatomic) NSUInteger stationIdentifier;
@property(readonly, nonatomic) id <GEOTransitDeparture> departure;
@property(readonly, nonatomic) NSArray *labelItems;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSTimeZone *timeZone;
@end

