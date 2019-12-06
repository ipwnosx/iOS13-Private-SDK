//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/FPCollectionDataSourceDelegate-Protocol.h>
#import <FileProvider/FPReachabilityObserver-Protocol.h>

@class FPAppRegistry, FPPacer, NSArray, NSMutableDictionary, NSMutableSet, NSPredicate, NSString, _FPItemList;
@protocol FPCollectionDataSource, FPItemCollectionIndexPathBasedDelegate, FPItemCollectionItemIDBasedDelegate, FPItemCollectionMinimalDelegate, OS_dispatch_queue;

@interface FPItemCollection : NSObject <FPReachabilityObserver, FPCollectionDataSourceDelegate>
{
    NSArray *_sortDescriptors;
    id <FPCollectionDataSource> _dataSource;
    _FPItemList *_currentItems;
    NSObject<OS_dispatch_queue> *_workingQueue;
    NSObject<OS_dispatch_queue> *_itemAccessQueue;
    NSMutableDictionary *_updatedItemsByIdentifiers;
    NSMutableSet *_deletedItemsIdentifiers;
    NSMutableSet *_formerItemsIdentifiers;
    BOOL _shouldResort;
    BOOL _regathering;
    BOOL _shouldRetryOnceAfterCrash;
    NSPredicate *_itemFilteringPredicate;
    FPAppRegistry *_appRegistry;
    id <FPItemCollectionItemIDBasedDelegate> _itemIDBasedDelegate;
    id <FPItemCollectionIndexPathBasedDelegate> _indexPathBasedDelegate;
    BOOL _gathering;
    BOOL _immutable;
    BOOL _hasMoreUpdates;
    BOOL _showHiddenFiles;
    BOOL _observing;
    id <FPItemCollectionMinimalDelegate> _delegate;
    NSPredicate *_additionalItemFilteringPredicate;
    NSObject<OS_dispatch_queue> *_updateQueue;
    FPPacer *_updatePacer;
}

+ (void)removeActiveCollection:(id)arg1;
+ (void)addActiveCollection:(id)arg1;
+ (void)resumeVendorEnumeration;
+ (void)suspendVendorEnumeration;
+ (BOOL)isEnumerationSuspended;
+ (void)replacePlaceholders:(id)arg1 withActualItems:(id)arg2 deletedIDs:(id)arg3;
+ (void)consumeUpdates:(id)arg1 deletes:(id)arg2;
+ (id)activeCollections;
+ (id)_bouncedItem:(id)arg1 withinItems:(id)arg2;
+ (void)initialize;
@property(readonly, nonatomic) FPPacer *updatePacer; // @synthesize updatePacer=_updatePacer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(nonatomic) BOOL observing; // @synthesize observing=_observing;
@property(retain, nonatomic) NSPredicate *additionalItemFilteringPredicate; // @synthesize additionalItemFilteringPredicate=_additionalItemFilteringPredicate;
@property(readonly, nonatomic) id <FPCollectionDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workingQueue; // @synthesize workingQueue=_workingQueue;
@property(readonly, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(nonatomic) BOOL showHiddenFiles; // @synthesize showHiddenFiles=_showHiddenFiles;
@property(readonly, nonatomic) BOOL hasMoreUpdates; // @synthesize hasMoreUpdates=_hasMoreUpdates;
@property(readonly, nonatomic, getter=isImmutable) BOOL immutable; // @synthesize immutable=_immutable;
@property(nonatomic) __weak id <FPItemCollectionMinimalDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isGathering) BOOL gathering; // @synthesize gathering=_gathering;
// - (void).cxx_destruct;
- (void)_setObserving:(BOOL)arg1;
- (void)_replaceContentsWithVendorItems:(id)arg1;
@property(retain, nonatomic) NSPredicate *itemFilteringPredicate;
- (BOOL)isHiddenItem:(id)arg1;
- (void)updateRootItem:(id)arg1;
- (BOOL)isRootItem:(id)arg1;
- (BOOL)isCollectionValidForItem:(id)arg1;
- (id)scopedSearchQuery;
- (id)createDataSourceWithSortDescriptors:(id)arg1;
- (void)sendItemIDBasedDiffs:(id)arg1;
- (id)computeItemIDBasedDiffs;
- (void)sendIndexPathBasedDiffs:(id)arg1;
- (id)computeIndexPathsBasedDiffsWithOldItems:(id)arg1 futureItems:(id)arg2;
- (void)_flushPendingUpdates;
- (id)_reorderWithPlaceholdersLast:(id)arg1;
- (id)indexPathsFromIndexSet:(id)arg1;
- (id)indexPathFromIndex:(long long)arg1;
- (void)_receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2 forceFlush:(BOOL)arg3 dropForReplacedPlaceholders:(BOOL)arg4;
- (void)_receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2 dropForReplacedPlaceholders:(BOOL)arg3;
- (void)_receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2;
- (void)receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2;
- (void)receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2 hasMoreChanges:(BOOL)arg3;
- (void)_updateObservedItem:(id)arg1;
- (void)replacePlaceholders:(id)arg1 withActualItems:(id)arg2 deletedIDs:(id)arg3;
- (void)_didEncounterError:(id)arg1 forObservationID:(NSUInteger)arg2;
- (BOOL)isRegatheringAfterSignal;
- (BOOL)__isUsingDataSource:(id)arg1;
- (BOOL)_isUsingDataSource:(id)arg1;
- (id)_itemsMutableCopy;
@property(readonly, nonatomic) NSArray *items;
- (id)_t_items;
- (id)itemAtIndexPath:(id)arg1;
- (NSUInteger)_indexOfItem:(id)arg1;
- (NSUInteger)_indexOfItemID:(id)arg1;
- (long long)_numberOfItems;
- (long long)numberOfItems;
- (void)reorderItemsWithSortDescriptors:(id)arg1;
- (void)_restartObservation;
- (void)dealloc;
- (void)resumeUpdates;
- (void)suspendUpdates;
- (void)stopObserving;
- (BOOL)dataSourceShouldAlwaysReplaceContents:(id)arg1;
- (void)dataSource:(id)arg1 wasInvalidatedWithError:(id)arg2;
- (void)dataSource:(id)arg1 receivedUpdatedItems:(id)arg2 deletedItems:(id)arg3 hasMoreChanges:(BOOL)arg4;
- (void)dataSource:(id)arg1 replaceContentsWithItems:(id)arg2 hasMoreChanges:(BOOL)arg3;
- (void)startObserving;
- (void)reachabilityMonitor:(id)arg1 didChangeReachabilityStatusTo:(BOOL)arg2;
- (id)init;
- (id)initWithPacing:(BOOL)arg1;
@property(readonly) NSString *domainIdentifier;
@property(readonly) NSString *providerIdentifier;
- (void)startObservingWithEnumerationProperties:(id)arg1;

@end

