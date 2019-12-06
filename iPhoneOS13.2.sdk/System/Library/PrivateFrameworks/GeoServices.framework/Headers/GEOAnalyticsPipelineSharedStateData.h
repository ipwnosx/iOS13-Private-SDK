//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOAnalyticsPipelineStateData.h>

@class geo_isolater;

@interface GEOAnalyticsPipelineSharedStateData : GEOAnalyticsPipelineStateData
{
    geo_isolater *_placeIso;
}

+ (id)sharedData;
// - (void).cxx_destruct;
- (BOOL)hasMapRestoreData;
- (void)clearSuggestionsData;
- (BOOL)hasSuggestionsData;
- (BOOL)hasMapsServerData;
- (BOOL)hasPlaceCard_PlaceActionDetails_TransitPlaceCard_TransitDepartureSequence;
- (BOOL)hasPlaceCard_PlaceActionDetails_TransitPlaceCard;
- (BOOL)hasPlaceCard_PlaceActionDetails;
- (BOOL)hasPlaceCardStateData;
- (void)populateWithChildPlace:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;
- (void)populateWithPlace:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;
- (void)_populateWithGEOTransitDepartureSequenceUsage:(id)arg1;
- (void)_populateWithGEOTransitPlaceCard:(id)arg1;
- (void)populateWithPlaceActionDetails:(id)arg1;
- (void)clearPlaceCardStateData;
- (void)performPlaceCardStateUpdate:(CDUnknownBlockType)arg1;
- (id)init;

@end

