//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKCollectionDataSource.h>

@class NSArray, NSMutableDictionary, UISearchBar;

@interface GKDashboardMultiplayerPickerSearchDataSource : GKCollectionDataSource
{
    BOOL _searching;
    NSMutableDictionary *_playerStates;
    UISearchBar *_searchBar;
    NSArray *_allPlayers;
    NSArray *_searchPlayers;
    long long _maxSelectable;
}

@property(readonly, nonatomic) long long maxSelectable; // @synthesize maxSelectable=_maxSelectable;
@property(copy, nonatomic) NSArray *searchPlayers; // @synthesize searchPlayers=_searchPlayers;
@property(copy, nonatomic) NSArray *allPlayers; // @synthesize allPlayers=_allPlayers;
@property(nonatomic) __weak UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic, getter=isSearching) BOOL searching; // @synthesize searching=_searching;
@property(retain, nonatomic) NSMutableDictionary *playerStates; // @synthesize playerStates=_playerStates;
// - (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)itemCount;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)searchKeyForSection:(long long)arg1;
- (void)searchTextHasChanged;
@property(readonly, nonatomic) NSArray *selectedPlayers;
- (double)preferredCollectionHeight;
- (void)setupCollectionView:(id)arg1;
- (id)initWithSearchPlayers:(id)arg1 maxSelectable:(long long)arg2;

@end

