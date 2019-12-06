//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UICollectionViewLayout.h>

@class NSArray, NSIndexPath, UILongPressGestureRecognizer, _UIActivityGroupActivityCell;

@interface _UIActivityGroupViewFlowLayout : UICollectionViewLayout
{
    UILongPressGestureRecognizer *_editingGestureRecognizer;
    NSIndexPath *_indexPathForDraggedItem;
    double _evaluatedHorizontalItemOffset;
    NSArray *_preparedLayoutAttributes;
    NSArray *_preparedUpdateItems;
    _UIActivityGroupActivityCell *_draggingView;
    CGSize _evaluatedItemSize;
    CGSize _evaluatedContentSize;
    UIOffset _draggingOffset;
    UIEdgeInsets _externalSafeInset;
    UIEdgeInsets _evaluatedInset;
}

@property(retain, nonatomic) _UIActivityGroupActivityCell *draggingView; // @synthesize draggingView=_draggingView;
@property(nonatomic) UIOffset draggingOffset; // @synthesize draggingOffset=_draggingOffset;
@property(copy, nonatomic) NSArray *preparedUpdateItems; // @synthesize preparedUpdateItems=_preparedUpdateItems;
@property(copy, nonatomic) NSArray *preparedLayoutAttributes; // @synthesize preparedLayoutAttributes=_preparedLayoutAttributes;
@property(nonatomic) double evaluatedHorizontalItemOffset; // @synthesize evaluatedHorizontalItemOffset=_evaluatedHorizontalItemOffset;
@property(nonatomic) CGSize evaluatedContentSize; // @synthesize evaluatedContentSize=_evaluatedContentSize;
@property(nonatomic) CGSize evaluatedItemSize; // @synthesize evaluatedItemSize=_evaluatedItemSize;
@property(nonatomic) UIEdgeInsets evaluatedInset; // @synthesize evaluatedInset=_evaluatedInset;
@property(nonatomic) UIEdgeInsets externalSafeInset; // @synthesize externalSafeInset=_externalSafeInset;
@property(copy, nonatomic) NSIndexPath *indexPathForDraggedItem; // @synthesize indexPathForDraggedItem=_indexPathForDraggedItem;
@property(retain, nonatomic) UILongPressGestureRecognizer *editingGestureRecognizer; // @synthesize editingGestureRecognizer=_editingGestureRecognizer;
// - (void).cxx_destruct;
- (BOOL)_shouldScrollToContentBeginningInRightToLeft;
- (void)cancelDraggingForGesture:(id)arg1;
- (BOOL)shouldCancelDraggingForGesture:(id)arg1;
- (void)updateDraggingViewForGesture:(id)arg1;
- (void)beginDraggingForGesture:(id)arg1;
- (id)draggingViewForItemAtIndexPath:(id)arg1;
- (BOOL)shouldReverseLayoutDirection;
- (void)invalidateGroupViewLayoutAnimated:(BOOL)arg1;
- (void)handleEditingGesture:(id)arg1;
- (id)adjustLayoutAttributesForDraggingIfNeeded:(id)arg1;
- (id)_layoutAttributesForItemAtIndexPath:(id)arg1 numberOfItemsInSection:(NSUInteger)arg2;
- (double)_evaluateHorizontalItemOffsetForItemSize:(CGSize)arg1 inset:(UIEdgeInsets)arg2 offscreenPeekInFactor:(float)arg3;
- (id)_indexPathsForItemsInSection:(long long)arg1;
- (UIEdgeInsets)_evaluateInsetForSectionAtIndex:(long long)arg1;
- (CGSize)_evaluatePreferredItemSizeForItemsAtIndexPaths:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (id)indexPathForItemRecognizedByGesture:(id)arg1;

@end

