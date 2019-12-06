//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOCompletionItemPrivate-Protocol.h>

@class GEODirectionIntent, GEOMapItemIdentifier, GEOMapServiceTraits, GEOPDAutocompleteEntry, GEOResolvedItem, GEORetainedSearchMetadata, GEOSearchCategory, GEOServerResultScoreMetadata, NSArray, NSData, NSString;
@protocol GEOMapItem;

__attribute__((visibility("hidden")))
@interface _GEOPlaceSearchCompletionItem : NSObject <GEOCompletionItemPrivate>
{
    GEOMapServiceTraits *_traits;
    int _entryListIndex;
    int _entryIndex;
    GEOPDAutocompleteEntry *_entry;
    NSArray *_displayLines;
    NSArray *_lineHighlights;
    id <GEOMapItem> _mapItem;
    GEOSearchCategory *_category;
}

@property(readonly, nonatomic) GEOPDAutocompleteEntry *entry; // @synthesize entry=_entry;
@property(readonly, nonatomic) NSArray *displayLines; // @synthesize displayLines=_displayLines;
// - (void).cxx_destruct;
@property(readonly, nonatomic) float disambiguationRadiusMeters;
@property(readonly, nonatomic) BOOL hasDisambiguationRadiusMeters;
@property(readonly, nonatomic) int placeType;
@property(readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic, getter=_placeDataAutocompleteEntry) GEOPDAutocompleteEntry *placeDataAutocompleteEntry;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSData *metadata;
@property(readonly, nonatomic) NSData *entryMetadata;
- (void)sendFeedback;
// - (BOOL)getCoordinate:(CDStruct_c3b9c2ee )arg1;
@property(readonly, nonatomic) NSString *queryAcceleratorCompletionString;
@property(readonly, nonatomic) BOOL hasQueryAcceleratorAffordanceEnabled;
@property(readonly, nonatomic) GEOServerResultScoreMetadata *serverResultScoreMetadata;
@property(readonly, nonatomic) long long autocompleteCellType;
@property(readonly, nonatomic) long long entryTapBehavior;
@property(readonly, nonatomic) long long sortPriority;
@property(readonly, nonatomic) BOOL hasSortPriority;
@property(readonly, nonatomic) GEORetainedSearchMetadata *retainedSearchMetadata;
@property(readonly, nonatomic) GEODirectionIntent *directionIntent;
@property(readonly, nonatomic) GEOResolvedItem *clientResolved;
@property(readonly, nonatomic) GEOSearchCategory *searchCategory;
@property(readonly, nonatomic) id <GEOMapItem> geoMapItem;
- (id)calloutTitle;
- (id)queryLine;
- (id)highlightsForLine:(NSUInteger)arg1;
- (id)initWithEntry:(id)arg1 traits:(id)arg2 entryListIndex:(int)arg3 entryIndex:(int)arg4 mapItems:(id)arg5;

@end

