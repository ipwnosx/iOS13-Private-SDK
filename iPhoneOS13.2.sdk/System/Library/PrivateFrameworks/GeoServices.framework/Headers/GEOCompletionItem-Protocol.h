//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GEODirectionIntent, GEOMapItemIdentifier, GEOResolvedItem, GEORetainedSearchMetadata, GEOSearchCategory, GEOServerResultScoreMetadata, NSArray, NSData, NSString;
@protocol GEOMapItem;

@protocol GEOCompletionItem <NSObject>
@property(readonly, nonatomic) NSString *queryAcceleratorCompletionString;
@property(readonly, nonatomic) BOOL hasQueryAcceleratorAffordanceEnabled;
@property(readonly, nonatomic) float disambiguationRadiusMeters;
@property(readonly, nonatomic) BOOL hasDisambiguationRadiusMeters;
@property(readonly, nonatomic) int placeType;
@property(readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) NSData *metadata;
@property(readonly, nonatomic) NSData *entryMetadata;
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
@property(readonly, nonatomic) NSArray *displayLines;
- (void)sendFeedback;
// - (BOOL)getCoordinate:(CDStruct_c3b9c2ee )arg1;
- (NSString *)calloutTitle;
- (NSString *)queryLine;
- (NSArray *)highlightsForLine:(NSUInteger)arg1;
@end

