//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WeatherFoundation/WFTask.h>

@class MKLocalSearchCompletion, NSString, WFLocation;

@interface WFGeocodeRequest : WFTask
{
    id /* CDUnknownBlockType */ _resultHandler;
    NSString *_searchString;
    MKLocalSearchCompletion *_autocompleteSearchResult;
    WFLocation *_geocodedResult;
//    struct CLLocationCoordinate2D _coordinate;
}

@property(retain) WFLocation *geocodedResult; // @synthesize geocodedResult=_geocodedResult;
@property(retain) MKLocalSearchCompletion *autocompleteSearchResult; // @synthesize autocompleteSearchResult=_autocompleteSearchResult;
@property(retain) NSString *searchString; // @synthesize searchString=_searchString;
// property struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(readonly) id /* CDUnknownBlockType */ resultHandler; // @synthesize resultHandler=_resultHandler;
// - (void).cxx_destruct;
- (void)cleanup;
- (void)handleCancellation;
- (void)handleResponse:(id)arg1;
@property(readonly) NSString *searchTerm;
- (void)startWithService:(id)arg1;
- (id)description;
- (id)initWithSearchCompletion:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)initWithSearchString:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
//  (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 resultHandler:(CDUnknownBlockType)arg2;

@end

