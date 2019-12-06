//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WFForecastDataParser-Protocol.h>

@class NSCalendar;

@interface WFWeatherDataServiceParserV1 : NSObject <WFForecastDataParser>
{
    NSCalendar *_calendar;
}

@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
// - (void).cxx_destruct;
- (id)parseForecastDataFromDict:(id)arg1 types:(NSUInteger)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id )arg6 rules:(id)arg7;
- (id)parseForecastData:(id)arg1 types:(NSUInteger)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id )arg6 rules:(id)arg7;
- (id)parseForecastData:(id)arg1 types:(NSUInteger)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id )arg6;
- (id)init;
- (id)dailyAlmanacDictFromData:(id)arg1 types:(NSUInteger)arg2;
- (id)parseAlmanacFromData:(id)arg1;
- (id)pollenDictFromData:(id)arg1 types:(NSUInteger)arg2;
- (id)parsePollenFromData:(id)arg1;
- (id)hourlyForecastDictFromData:(id)arg1 types:(NSUInteger)arg2;
- (id)parseHourlyForecastFromData:(id)arg1;
- (id)hourlyHistoryDictFromData:(id)arg1 types:(NSUInteger)arg2;
- (id)parseHourlyHistoryFromData:(id)arg1;
- (id)currentObservationsDictFromData:(id)arg1 types:(NSUInteger)arg2;
- (id)parseCurrentObservationsFromData:(id)arg1;
- (id)parseMetaDataFromData:(id)arg1;
- (void)parseWeatherComponentsFromData:(id)arg1 intoConditions:(id)arg2;
- (id)parseWeatherComponentsFromData:(id)arg1;
- (id)airQualityDictFromData:(id)arg1 types:(NSUInteger)arg2;
- (id)parsePollutants:(id)arg1;
- (id)parseAirQualityFromData:(id)arg1 locale:(id)arg2;
- (id)dailyHistoryDictFromData:(id)arg1 types:(NSUInteger)arg2;
- (id)parseDailyHistoryFromData:(id)arg1;
- (id)dailyForecastDictFromData:(id)arg1 types:(NSUInteger)arg2;
- (id)parseDailyForecastFromData:(id)arg1;
- (id)nowLinksDictFromData:(id)arg1 types:(NSUInteger)arg2;
- (void)parseNowLinksFromData:(id)arg1 intoConditions:(id)arg2;

@end

