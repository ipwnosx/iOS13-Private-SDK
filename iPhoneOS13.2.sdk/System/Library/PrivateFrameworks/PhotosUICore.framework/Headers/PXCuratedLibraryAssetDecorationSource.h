//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGAssetBadgeDecorationSource-Protocol.h>
#import <PhotosUICore/PXGCaptionDecorationSource-Protocol.h>
#import <PhotosUICore/PXGDebugDecorationSource-Protocol.h>
#import <PhotosUICore/PXGDisplayAssetRequestObserver-Protocol.h>
#import <PhotosUICore/PXGDragDecorationSource-Protocol.h>
#import <PhotosUICore/PXGSelectionDecorationSource-Protocol.h>

@class NSIndexSet, NSMutableSet, NSSet, PXAssetBadgeManager, PXAssetsDataSource, PXGLayout, PXSelectionSnapshot;

@interface PXCuratedLibraryAssetDecorationSource : NSObject <PXGAssetBadgeDecorationSource, PXGCaptionDecorationSource, PXGSelectionDecorationSource, PXGDragDecorationSource, PXGDebugDecorationSource, PXGDisplayAssetRequestObserver>
{
//     CDStruct_d97c9657 _updateFlags;
    NSIndexSet *_draggedItems;
    NSMutableSet *_assetUUIDsInCloud;
    PXAssetBadgeManager *_badgeManager;
    BOOL _forceBadgesOnAllAssets;
    BOOL _durationAlwaysHidden;
    BOOL _enableDebugDecoration;
    PXGLayout *_decoratedLayout;
    PXAssetsDataSource *_dataSource;
    long long _section;
    PXSelectionSnapshot *_selectionSnapshot;
    NSSet *_draggedAssetReferences;
    NSUInteger _forbiddenBadges;
    NSIndexSet *_itemsWithCoveredBottomTrailingCorner;
}

@property(nonatomic) BOOL enableDebugDecoration; // @synthesize enableDebugDecoration=_enableDebugDecoration;
@property(copy, nonatomic) NSIndexSet *itemsWithCoveredBottomTrailingCorner; // @synthesize itemsWithCoveredBottomTrailingCorner=_itemsWithCoveredBottomTrailingCorner;
@property(nonatomic) BOOL durationAlwaysHidden; // @synthesize durationAlwaysHidden=_durationAlwaysHidden;
@property(nonatomic) NSUInteger forbiddenBadges; // @synthesize forbiddenBadges=_forbiddenBadges;
@property(copy, nonatomic) NSSet *draggedAssetReferences; // @synthesize draggedAssetReferences=_draggedAssetReferences;
@property(retain, nonatomic) PXSelectionSnapshot *selectionSnapshot; // @synthesize selectionSnapshot=_selectionSnapshot;
@property(readonly, nonatomic) long long section; // @synthesize section=_section;
@property(readonly, nonatomic) PXAssetsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak PXGLayout *decoratedLayout; // @synthesize decoratedLayout=_decoratedLayout;
// - (void).cxx_destruct;
- (id)debugDecorationAtSpriteIndex:(unsigned int)arg1 asset:(id)arg2 inLayout:(id)arg3;
- (BOOL)wantsDebugDecorationInLayout:(id)arg1;
- (void)observeIsInCloud:(BOOL)arg1 forDisplayAsset:(id)arg2;
//  (struct PXAssetBadgeInfo)assetBadgeInfoForAsset:(id)arg1 atSpriteIndex:(unsigned int)arg2 inLayout:(id)arg3;
- (BOOL)wantsAssetBadgeDecorationsInLayout:(id)arg1;
- (id)draggingSpriteIndexesInLayout:(id)arg1;
- (BOOL)wantsCaptionDecorationsInLayout:(id)arg1;
- (id)selectedSpriteIndexesInLayout:(id)arg1;
- (long long)selectionDecorationStyleInLayout:(id)arg1;
- (void)_updateDragDecoration;
- (void)_invalidateDragDecoration;
- (void)update;
- (id)_spriteIndexesForItems:(id)arg1 inLayout:(id)arg2;
- (void)setDataSource:(id)arg1 section:(long long)arg2;
- (id)init;

@end

