//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXAssetsDataSourceManager.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSSet, PXImportAssetCollection, PXImportAssetsDataSource;
@protocol OS_dispatch_queue, PXImportAssetsDataSourceManagerDelegate;

@interface PXImportAssetsDataSourceManager : PXAssetsDataSourceManager
{
    BOOL _showAlreadyImportedItems;
    BOOL _showNotYetImportedItems;
    BOOL _alreadyImportedItemsSelectable;
    BOOL _needsFilterUpdate;
    id <PXImportAssetsDataSourceManagerDelegate> _delegate;
    PXImportAssetsDataSource *_unfilteredDataSource;
    NSSet *_visibleImportAssetIdentifiers;
    NSMutableDictionary *_allAssetCollectionsById;
    NSDictionary *_filteredAssetCollectionsById;
    NSMutableArray *_allAssetCollections;
    NSArray *_filteredAssetCollections;
    NSObject<OS_dispatch_queue> *_modelQueue;
    long long _maxAlreadyImportedItems;
    long long _forcedAlreadyImportedTruncationMode;
}

+ (void)sortAssetCollectionsInArray:(id)arg1;
+ (void)removeModels:(id)arg1 fromAssetCollections:(id)arg2 assetCollectionsById:(id)arg3;
+ (void)addModels:(id)arg1 toAssetCollections:(id)arg2 assetCollectionsById:(id)arg3;
+ (BOOL)assetCollectionsArray:(id)arg1 isEqualToAssetCollectionsArray:(id)arg2;
+ (void)copyFromAssetCollections:(id)arg1 toAssetCollections:(id )arg2 assetCollectionsById:(id )arg3;
@property(nonatomic) long long forcedAlreadyImportedTruncationMode; // @synthesize forcedAlreadyImportedTruncationMode=_forcedAlreadyImportedTruncationMode;
@property(nonatomic) long long maxAlreadyImportedItems; // @synthesize maxAlreadyImportedItems=_maxAlreadyImportedItems;
@property(nonatomic) BOOL needsFilterUpdate; // @synthesize needsFilterUpdate=_needsFilterUpdate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *modelQueue; // @synthesize modelQueue=_modelQueue;
@property(copy, nonatomic) NSArray *filteredAssetCollections; // @synthesize filteredAssetCollections=_filteredAssetCollections;
@property(retain, nonatomic) NSMutableArray *allAssetCollections; // @synthesize allAssetCollections=_allAssetCollections;
@property(copy, nonatomic) NSDictionary *filteredAssetCollectionsById; // @synthesize filteredAssetCollectionsById=_filteredAssetCollectionsById;
@property(retain, nonatomic) NSMutableDictionary *allAssetCollectionsById; // @synthesize allAssetCollectionsById=_allAssetCollectionsById;
@property(nonatomic) BOOL alreadyImportedItemsSelectable; // @synthesize alreadyImportedItemsSelectable=_alreadyImportedItemsSelectable;
@property(nonatomic) BOOL showNotYetImportedItems; // @synthesize showNotYetImportedItems=_showNotYetImportedItems;
@property(nonatomic) BOOL showAlreadyImportedItems; // @synthesize showAlreadyImportedItems=_showAlreadyImportedItems;
@property(copy, nonatomic) NSSet *visibleImportAssetIdentifiers; // @synthesize visibleImportAssetIdentifiers=_visibleImportAssetIdentifiers;
@property(retain, nonatomic) PXImportAssetsDataSource *unfilteredDataSource; // @synthesize unfilteredDataSource=_unfilteredDataSource;
@property(nonatomic) __weak id <PXImportAssetsDataSourceManagerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (long long)countOfAlreadyImportedAssetCollectionInCollectionsMap:(id)arg1;
- (long long)countOfUnfilteredAlreadyImportedAssetCollection;
@property(readonly, nonatomic) PXImportAssetCollection *unfilteredAlreadyImportedAssetCollection;
- (void)updateAlreadyImportedSelectability;
- (void)setNeedsFilterUpdate;
- (void)pruneEmptyAssetCollectionsInCollections:(id)arg1 collectionsById:(id)arg2;
- (void)rebuildAlreadyImportedAssetCollectionInCollections:(id)arg1 collectionsById:(id)arg2;
- (id)existingModelsFromModels:(id)arg1 inAssetCollections:(id)arg2 assetCollectionsById:(id)arg3;
- (id)filteredModelsFromModels:(id)arg1 inAssetCollections:(id)arg2 assetCollectionsById:(id)arg3;
- (void)modifyAssetCollectionsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateFilteredAssetsIfNeeded;
- (void)removeAssets:(id)arg1;
- (void)addAssets:(id)arg1;
- (id)createInitialDataSource;
- (void)unregisterChangeObserver:(id)arg1 context:(void )arg2;
- (void)registerChangeObserver:(id)arg1 context:(void )arg2;
- (id)initWithAssetsFromDataSourceManager:(id)arg1 delegate:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end

