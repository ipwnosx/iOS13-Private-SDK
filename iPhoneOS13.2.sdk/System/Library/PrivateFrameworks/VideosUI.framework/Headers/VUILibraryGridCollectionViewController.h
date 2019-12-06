//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUILibraryFetchControllerViewController.h>

#import <VideosUI/VUILocalContentProtocol-Protocol.h>
#import <VideosUI/VUIMediaEntitiesFetchControllerDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, UIBarButtonItem, UICollectionView, VUICollectionHeaderView, VUILibraryLockupViewCell, VUIMediaEntityFetchRequest;
@protocol VUILibraryGridCollectionViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryGridCollectionViewController : VUILibraryFetchControllerViewController <VUIMediaEntitiesFetchControllerDelegate, UICollectionViewDelegate, UICollectionViewDataSource, VUILocalContentProtocol>
{
    BOOL _requiresRelayout;
    BOOL _displaySortFilter;
    CGSize _cellSize;
    NSMutableDictionary *_cellMetrics;
    VUICollectionHeaderView *_sizingHeaderView;
    BOOL _hideLockupTitles;
    BOOL _forceBackButton;
    id <VUILibraryGridCollectionViewControllerDelegate> _delegate;
    long long _gridFilter;
    long long _gridStyle;
    long long _gridType;
    UIBarButtonItem *_libraryBarButton;
    NSString *_pageType;
    VUIMediaEntityFetchRequest *_fetchRequest;
    UICollectionView *_collectionView;
    NSArray *_totalResults;
    NSArray *_genreGroupedResults;
    VUILibraryLockupViewCell *_sizingCell;
    double _cellWidth;
    UIBarButtonItem *_currentNavBarButtonItem;
}

@property(retain, nonatomic) UIBarButtonItem *currentNavBarButtonItem; // @synthesize currentNavBarButtonItem=_currentNavBarButtonItem;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(retain, nonatomic) VUILibraryLockupViewCell *sizingCell; // @synthesize sizingCell=_sizingCell;
@property(retain, nonatomic) NSArray *genreGroupedResults; // @synthesize genreGroupedResults=_genreGroupedResults;
@property(retain, nonatomic) NSArray *totalResults; // @synthesize totalResults=_totalResults;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) VUIMediaEntityFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(retain, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(nonatomic) BOOL forceBackButton; // @synthesize forceBackButton=_forceBackButton;
@property(retain, nonatomic) UIBarButtonItem *libraryBarButton; // @synthesize libraryBarButton=_libraryBarButton;
@property(nonatomic) BOOL hideLockupTitles; // @synthesize hideLockupTitles=_hideLockupTitles;
@property(nonatomic) long long gridType; // @synthesize gridType=_gridType;
@property(nonatomic) long long gridStyle; // @synthesize gridStyle=_gridStyle;
@property(nonatomic) long long gridFilter; // @synthesize gridFilter=_gridFilter;
@property(nonatomic) __weak id <VUILibraryGridCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_updateLayout;
- (void)_updateNavigationBarPadding;
- (double)_computeBottomMargin;
- (id)_getFilterTitleForEnum:(long long)arg1;
- (void)_toggleSortFilter;
- (void)_configureSizingCellForItemAtIndexPath:(id)arg1;
- (void)_updateCurrentViewIfNeeded;
- (void)_updateWithMediaEntities:(id)arg1 mediaEntitiesChangeSet:(id)arg2 grouping:(id)arg3 groupingChangeSet:(id)arg4;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)setTitle:(id)arg1 withLargeTitleDisplayEnabled:(BOOL)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)updateWithLatestMediaEntities:(id)arg1 andChangeSet:(id)arg2;
- (void)updateWithLatestMediaEntities:(id)arg1;
- (id)initWithMediaLibrary:(id)arg1 fetchRequest:(id)arg2 displaySortFilter:(BOOL)arg3;
- (id)initWithMediaLibrary:(id)arg1 mediaEntities:(id)arg2 displaySortFilter:(BOOL)arg3;

@end

