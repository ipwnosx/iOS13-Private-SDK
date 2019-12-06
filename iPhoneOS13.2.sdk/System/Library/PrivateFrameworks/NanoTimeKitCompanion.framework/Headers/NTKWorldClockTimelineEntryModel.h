//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class WorldClockCity;

@interface NTKWorldClockTimelineEntryModel : NTKTimelineEntryModel
{
    BOOL _showIdealizedTime;
    WorldClockCity *_city;
}

+ (id)_analogImageProvider;
@property(nonatomic) BOOL showIdealizedTime; // @synthesize showIdealizedTime=_showIdealizedTime;
@property(retain, nonatomic) WorldClockCity *city; // @synthesize city=_city;
// - (void).cxx_destruct;
- (double)_timeZoneOffset;
- (id)_timeZone;
- (id)_timeAndDifferenceOffsetTextProvider;
- (id)_timeCityNameTimeZoneOffsetTextProvider;
- (id)_timeAndCityNameOffsetTextProvider;
- (id)_timeAndAbbreviationTextProvider;
- (id)_timeAndDayOffsetTextProvider;
- (id)_cityNameTextProvider;
- (id)_abbreviationTextProvider;
- (id)_differenceTextProviderWithSize:(long long)arg1 andCaps:(BOOL)arg2;
- (id)_differenceTextProvider;
- (id)_dayOffsetTextProvider;
- (id)_timeTextProvider;
- (id)_newSignatureBezelTemplate;
- (id)_newSignatureCircularTemplate;
- (id)_signatureCorner;
- (id)_newLargeUtilityTemplate;
- (id)_newExtraLargeTemplate;
- (id)_newCircularMediumTemplate;
- (id)_newCircularSmallTemplate;
- (id)_newLargeModularTemplate;
- (id)_newSmallModularTemplate;
- (id)_newSmallFlatUtilityTemplate;
- (id)templateForComplicationFamily:(long long)arg1;
- (id)init;

@end

