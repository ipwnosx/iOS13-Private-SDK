//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsLocationUpdater-Protocol.h>
#import <MapsSuggestions/MapsSuggestionsLocationVisitUpdaterDelegate-Protocol.h>

@class CLLocation, CLVisit, MapsSuggestionsObservers, NSString;
@protocol MapsSuggestionsLocationUpdater;

@interface MapsSuggestionsVisitTrackingLocationUpdater : NSObject <MapsSuggestionsLocationUpdater, MapsSuggestionsLocationVisitUpdaterDelegate>
{
    struct unique_ptr<MSg::Queue, std::__1::default_delete<MSg::Queue>> _queue;
    id <MapsSuggestionsLocationUpdater> _wrappedLocationUpdater;
    CLLocation *_latestLocation;
    CLVisit *_currentVisit;
    MapsSuggestionsObservers *_locationObservers;
    MapsSuggestionsObservers *_visitObservers;
    double _distanceBuffer;
}

+ (BOOL)_isDefinitelyOutsideOfVisit:(id)arg1 location:(id)arg2 allowingBuffer:(double)arg3;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)visitLeft:(id)arg1;
- (void)visitEntered:(id)arg1;
- (void)updateLocation:(id)arg1;
- (void)stopLocationUpdatesForDelegate:(id)arg1;
- (id)startLocationUpdatesForDelegate:(id)arg1;
- (id)restartLocationUpdatesForDelegate:(id)arg1;
@property(readonly, nonatomic) NSString *uniqueName;
- (void)dealloc;
- (id)initDecoratingLocationUpdater:(id)arg1;

@end
