//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXLayoutGenerator.h>

#import <PhotosUICore/PXGDiagnosticsProvider-Protocol.h>

@class NSString, PXExploreParsingState;

@interface PXExploreLayoutGenerator : PXLayoutGenerator <PXGDiagnosticsProvider>
{
    long long _count;
    long long _capacity;
   struct {
        long long _field1;
        NSUInteger _field2;
        double _field3;
        double _field4;
    } _inputItemInfos;
//    struct _PXLayoutGeometry _outputGeometries;
    BOOL _isPrepared;
    CGPoint _origin;
    long long _row;
    long long _localNumberOfColumns;
    long long _localNumberOfRows;
    CGSize _cellSize;
    CGSize _intercellSpacing;
    CGSize _contentSize;
//    struct _PXCornerSpriteIndexes _cornerSpriteIndexes;
    CGSize _headerItemSize;
    CGSize _minHeroItemsSize;
    PXExploreParsingState *_localState;
    CGSize _minimumItemSize;
    CGSize _buildingBlockSize;
}

@property(readonly, nonatomic) PXExploreParsingState *localState; // @synthesize localState=_localState;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *diagnosticDescription;
//  (struct _PXCornerSpriteIndexes)cornerSpriteIndexes;
- (NSUInteger)attributesForNextItemAtIndex:(long long)arg1;
- (void)getLowestAspectRatio:(double )arg1 highestAspectRatio:(double )arg2 forNextItems:(long long)arg3;
- (double)score:(long long)arg1 forNextItemAtIndex:(long long)arg2;
- (BOOL)isAcceptableLargeHeroNextItemAtIndex:(long long)arg1;
- (BOOL)prepareNextItems:(long long)arg1 withLargeHeroIndex:(long long)arg2;
- (long long)indexWithinNextItems:(long long)arg1 having:(long long)arg2 keyIndex:(long long)arg3;
- (void)reorderNextItems:(long long)arg1 usingMapping:(CDUnknownBlockType)arg2;
- (void)moveNextItemAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)sortNextItems:(long long)arg1 withItemAtIndex:(long long)arg2 having:(long long)arg3;
- (long long)numberOf:(NSUInteger)arg1 withinNextItems:(long long)arg2;
- (BOOL)nextItems:(long long)arg1 isAny:(NSUInteger)arg2;
- (BOOL)nextItems:(long long)arg1 areAll:(NSUInteger)arg2;
- (BOOL)nextInputItems:(NSUInteger)arg1;
- (void)setBuildingBlockColumnSpan:(long long)arg1 rowSpan:(long long)arg2 withNumberOfColumns:(long long)arg3;
- (long long)preferredRowTypeAfterRowWithType:(long long)arg1;
- (void)endRowWithType:(long long)arg1;
- (void)addLocalItemWithType:(long long)arg1 atColumn:(long long)arg2 row:(long long)arg3 columnSpan:(long long)arg4 rowSpan:(long long)arg5;
- (CGSize)_cellSizeForNumberOfColumns:(long long)arg1;
- (void)beginRowWithNumberOfColumns:(long long)arg1;
@property(readonly, nonatomic) long long numberOfRemainingItems;
- (void)_prepareIfNeeded;
- (CGRect)presentedRectForItemAtIndex:(long long)arg1;
//  (void)getGeometries:(struct _PXLayoutGeometry )arg1 inRange:(NSRange *)arg2 withKind:(long long)arg3;
@property(readonly, nonatomic) CGSize buildingBlockSize; // @synthesize buildingBlockSize=_buildingBlockSize;
@property(readonly, nonatomic) CGSize minimumItemSize; // @synthesize minimumItemSize=_minimumItemSize;
@property(readonly, nonatomic) CGSize minHeroItemsSize;
@property(readonly, nonatomic) CGSize headerItemSize;
- (CGSize)size;
- (CGSize)estimatedSize;
- (void)invalidate;
- (void)dealloc;
- (id)initWithMetrics:(id)arg1;
- (double)_buildingBlockAspectRatioForNumberOfColumns:(long long)arg1 options:(NSUInteger)arg2;
- (BOOL)_parseSixColumnLayoutWithOptions:(NSUInteger)arg1;
- (BOOL)_parseFourColumnLayoutWithOptions:(NSUInteger)arg1;
- (BOOL)_parseThreeColumnLayoutWithOptions:(NSUInteger)arg1;
- (BOOL)parseMacLayout;
- (BOOL)parsePadLandscapeLayout;
- (BOOL)parsePadPortraitLayout;
- (BOOL)parsePhoneLandscapeLayout;
- (BOOL)parsePhonePortraitLayout;
- (CGSize)_estimatedSizeForColumns:(long long)arg1 headerRows:(long long)arg2 averageItemsPerBlock:(double)arg3 averageRowsPerBlock:(double)arg4 withOptions:(NSUInteger)arg5;
- (CGSize)_estimatedSizeForSixColumnLayoutWithOptions:(NSUInteger)arg1;
- (CGSize)_estimatedSizeForFourColumnLayoutWithOptions:(NSUInteger)arg1;
- (CGSize)_estimatedSizeForThreeColumnLayoutWithOptions:(NSUInteger)arg1;
- (CGSize)estimatedSizeForPadLandscape;
- (CGSize)estimatedSizeForPadPortrait;
- (CGSize)estimatedSizeForPhoneLandscape;
- (CGSize)estimatedSizeForPhonePortrait;
- (void)_parseSixColumnShortRowWithNumberOfItems:(long long)arg1;
- (void)_addThreeItemsToSixColumnRowWithHeroItemType:(long long)arg1 options:(NSUInteger)arg2 rowType:(long long )arg3;
- (void)_parseSixColumnHeroRowWithNumberOfItems:(long long)arg1 heroItemType:(long long)arg2 subsequentShortRowItems:(long long)arg3 options:(NSUInteger)arg4;
- (BOOL)parseSixColumnRowWithType:(long long)arg1 numberOfItems:(long long)arg2 subsequentShortRowItems:(long long)arg3 options:(NSUInteger)arg4;
- (BOOL)parseSixColumnRowWithType:(long long)arg1 numberOfItems:(long long)arg2 options:(NSUInteger)arg3;
- (long long)numberOfItemsInSixColumnHeroRowForNumberOfRemainingItems:(long long)arg1 rowOptions:(NSUInteger )arg2;
- (long long)numberOfItemsInSixColumnShortRowForNumberOfRemainingItems:(long long)arg1;
- (BOOL)_isShortRowNextFollowedByLargeHero;
- (BOOL)parseFourColumnGroupWithShortRowFollowedByLargeHero;
- (BOOL)parseThreeColumnGroupWithShortRowFollowedByLargeHero;
- (BOOL)parseThreeColumnGroupWithFiveItems;
- (BOOL)parseThreeColumnGroupWithThreeItemsFollowedByOneItemAllowingLargeHeroAtEnd:(BOOL)arg1;
- (void)_parseFourColumnHeroRowWithType:(long long)arg1 heroItemType:(long long)arg2 numberOfItems:(long long)arg3;
- (long long)numberOfItemsInFourColumnMediumHeroRowForNumberOfRemainingItems:(long long)arg1;
- (void)_parseFourColumnShortRowWithNumberOfItems:(long long)arg1;
- (BOOL)parseFourColumnRowWithType:(long long)arg1 numberOfItems:(long long)arg2;
- (BOOL)parseThreeColumnMediumHeroRowWithPano;
- (BOOL)parseThreeColumnShortRowWithPano;
- (void)_addTwoItemsForThreeColumnRowPreferringTallVariant:(BOOL)arg1;
- (void)_parseThreeColumnMediumHeroRowWithNumberOfItems:(long long)arg1;
- (void)_parseThreeColumnShortRowWithNumberOfItems:(long long)arg1;
- (void)_parseThreeColumnHeaderRowWithNumberOfItems:(long long)arg1;
- (BOOL)parseThreeColumnRowWithType:(long long)arg1 numberOfItems:(long long)arg2;

@end

