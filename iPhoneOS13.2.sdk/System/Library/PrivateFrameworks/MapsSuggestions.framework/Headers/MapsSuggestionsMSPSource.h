//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

#import <MapsSuggestions/MapsSuggestionsSource-Protocol.h>

@class MSPFavoritesContainer, MSPHistoryContainer, MapsSuggestionsCanKicker, NSObject;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsMSPSource : MapsSuggestionsBaseSource <MapsSuggestionsSource>
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _notificationsRegistered;
    MapsSuggestionsCanKicker *_canKickerHistoryNotification;
    MapsSuggestionsCanKicker *_canKickerFavoriteNotification;
    MSPHistoryContainer *_historyContainer;
    MSPFavoritesContainer *_favoritesContainer;
    NSMutableArray *_recentsEntriesToAdd;
    NSMutableArray *_favoritesEntriesToAdd;
    int _notificationTokenForRecentHistory;
    int _notificationTokenForFavorites;
    BOOL _favoritesEnabled;
}

+ (NSUInteger)disposition;
+ (BOOL)isEnabled;
// - (void).cxx_destruct;
//  (id)_extractTitleAndSubtitleFromMapItem:(struct GEOMapItemStorage )arg1;
- (BOOL)_addFieldsToSuggestionsEntry:(id)arg1;
- (NSArray *)_mergeRecentsAndFavoritesList;
- (void)_unregisterNotification;
- (void)_registerNotification;
- (id)_createEntryFromFavoritePlace:(id)arg1;
- (id)_createEntryFromRecentHistoryPlaceDisplay:(id)arg1;
- (id)_createEntryFromRecentHistoryRoute:(id)arg1;
- (void)_updateFavoritesEntries;
- (void)_updateRecentHistoryEntries;
- (BOOL)_removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (BOOL)canProduceEntriesOfType:(long long)arg1;
- (double)updateSuggestionEntries;
- (void)dealloc;
- (void)stop;
- (void)start;
- (id)initWithDelegate:(id)arg1;

@end

