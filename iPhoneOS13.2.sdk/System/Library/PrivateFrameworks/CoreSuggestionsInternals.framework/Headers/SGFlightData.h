//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, SGOffsetDictionary, _PASNotificationToken;
@protocol SGSeekable;

@interface SGFlightData : NSObject
{
    id <SGSeekable> _flightsFh;
    SGOffsetDictionary *_flightDataOffsets;
    id <SGSeekable> _flightsUpdateFh;
    SGOffsetDictionary *_flightUpdateDataOffsets;
    id <SGSeekable> _airportsFh;
    SGOffsetDictionary *_airportDataOffsets;
    id <SGSeekable> _airportsUpdateFh;
    SGOffsetDictionary *_airportUpdateDataOffsets;
    _PASNotificationToken *_assetUpdateToken;
    NSDictionary *_carrierNames;
    NSDictionary *_carrierCodesByName;
    NSDictionary *_carrierUpdateNames;
    NSDictionary *_carrierUpdateCodesByName;
}

+ (id)airportNameNoiseKeywords;
+ (id)sharedInstance;
+ (id)sanitizeAirportName:(id)arg1;
// - (void).cxx_destruct;
- (id)airportCodeForAirportName:(id)arg1 flightCarrier:(id)arg2 flightNumber:(unsigned short)arg3 otherKnownFlightsToAirport:(id)arg4 outputInfos:(id)arg5;
- (id)airportCodeForAirportName:(id)arg1 flightCarrier:(id)arg2 flightNumber:(unsigned short)arg3 outputInfos:(id)arg4;
- (id)airportsServicedByCarrier:(id)arg1 flightNumber:(unsigned short)arg2;
- (id)airportsServicedByCarrier:(id)arg1 flightNumber:(unsigned short)arg2 withDataOffset:(id)arg3 andFileHandle:(id)arg4;
- (id)nameForCarrier:(id)arg1;
- (id)carrierIataCodeForCarrierName:(id)arg1;
- (id)carrierIataCodes;
- (id)latitudeAndLongitudeForAirport:(id)arg1;
- (id)latitudeAndLongitudeForAirport:(id)arg1 withDataOffset:(id)arg2 andFileHandle:(id)arg3;
- (id)timezoneOlsonCodeForAirport:(id)arg1;
- (id)timezoneOlsonCodeForAirport:(id)arg1 withDataOffset:(id)arg2 andFileHandle:(id)arg3;
- (id)bestLocalizedNameForAirport:(id)arg1;
- (id)namesForAirport:(id)arg1;
- (id)namesForAirport:(id)arg1 withDataOffset:(id)arg2 andFileHandle:(id)arg3;
- (id)airportIataCodes;
- (id)airportIataCodesForDataOffset:(id)arg1;
- (void)updateCarriers;
- (void)updateAirports;
- (void)updateFlights;
- (void)dealloc;
- (id)init;

@end

