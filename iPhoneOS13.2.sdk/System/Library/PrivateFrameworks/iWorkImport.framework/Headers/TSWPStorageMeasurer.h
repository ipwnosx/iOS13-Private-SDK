//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSWPColumnMetrics-Protocol.h>
#import <iWorkImport/TSWPLayoutOwner-Protocol.h>
#import <iWorkImport/TSWPLayoutTarget-Protocol.h>

@class NSMutableArray, TSPObject, TSWPPadding, TSWPStorage;
@protocol TSDHint, TSWPFootnoteHeightMeasurer, TSWPFootnoteMarkProvider, TSWPOffscreenColumn, TSWPTopicNumberHints;

__attribute__((visibility("hidden")))
@interface TSWPStorageMeasurer : NSObject <TSWPLayoutTarget, TSWPLayoutOwner, TSWPColumnMetrics>
{
    TSWPStorage *_storage;
    NSMutableArray *_columns;
    CGSize _minSize;
    CGSize _maxSize;
    unsigned int _flags;
    CGPoint _anchor;
}

@property(readonly, nonatomic) NSMutableArray *columns; // @synthesize columns=_columns;
@property(readonly, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
// - (void).cxx_destruct;
- (BOOL)containsStartOfRange:(NSRange *)arg1;
@property(readonly, nonatomic) BOOL columnsAreLeftToRight;
@property(readonly, nonatomic) BOOL shrinkTextToFit;
@property(readonly, nonatomic) BOOL alwaysStartsNewTarget;
- (double)positionForColumnIndex:(NSUInteger)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double )arg4 outGap:(double )arg5;
- (double)gapForColumnIndex:(NSUInteger)arg1 bodyWidth:(double)arg2;
- (double)widthForColumnIndex:(NSUInteger)arg1 bodyWidth:(double)arg2;
@property(readonly, nonatomic) NSUInteger columnCount;
@property(readonly, nonatomic) TSWPPadding *layoutMargins;
- (CGSize)adjustedInsetsForTarget:(id)arg1;
- (id)textWrapper;
- (void)didLayoutChangingDirtyRanges;
- (void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(NSUInteger)arg3;
- (void)layoutManagerNeedsLayout:(id)arg1;
- (BOOL)caresAboutStorageChanges;
- (id)interiorClippingPath;
@property(readonly, nonatomic) BOOL shouldWrapAroundExternalDrawables;
@property(readonly, nonatomic) BOOL layoutIsValid;
- (BOOL)isLayoutOffscreen;
@property(readonly, nonatomic) BOOL textIsVertical;
@property(readonly, nonatomic) NSUInteger pageCount;
@property(readonly, nonatomic) NSUInteger pageNumber;
@property(readonly, nonatomic) double maxAnchorInBlockDirection;
- (void)markHiddenInlineDrawableLayout:(id)arg1;
- (void)clearHiddenInlineDrawableLayoutMarks;
- (id)currentAnchoredDrawableLayouts;
- (void)addAttachmentLayout:(id)arg1;
- (id)currentInlineDrawableLayouts;
- (id)validatedLayoutForAnchoredDrawable:(id)arg1;
- (id)validatedLayoutForInlineDrawable:(id)arg1;
- (CGRect)targetRectForCanvasRect:(CGRect)arg1;
- (void)setNeedsDisplayInTargetRect:(CGRect)arg1;
@property(readonly, nonatomic) BOOL wantsLineFragments;
@property(readonly, nonatomic) int naturalDirection;
@property(readonly, nonatomic) int naturalAlignment;
@property(readonly, nonatomic) int verticalAlignment;
@property(readonly, nonatomic) NSUInteger autosizeFlags;
@property(readonly, nonatomic) CGPoint anchorPoint;
@property(readonly, nonatomic) CGPoint position;
@property(readonly, nonatomic) CGSize currentSize;
@property(readonly, nonatomic) CGSize maxSize;
@property(readonly, nonatomic) CGSize minSize;
- (BOOL)descendersCannotClip;
@property(readonly, nonatomic) BOOL isInstructional;
- (BOOL)isLastTarget;
@property(readonly, nonatomic) TSPObject<TSDHint> *nextTargetFirstChildHint;
@property(readonly, nonatomic) id <TSWPFootnoteMarkProvider> footnoteMarkProvider;
@property(readonly, nonatomic) id <TSWPFootnoteHeightMeasurer> footnoteHeightMeasurer;
@property(readonly, nonatomic) id <TSWPOffscreenColumn> nextTargetFirstColumn;
@property(readonly, nonatomic) NSObject<TSWPTopicNumberHints> *nextTargetTopicNumbers;
@property(readonly, nonatomic) NSObject<TSWPTopicNumberHints> *previousTargetTopicNumbers;
@property(readonly, nonatomic) id <TSWPOffscreenColumn> previousTargetLastColumn;
- (id)columnMetricsForCharIndex:(NSUInteger)arg1 outRange:(NSRange * )arg2;
- (double)textScaleForChild:(id)arg1;
- (CGSize)measuredSizeWithFlags:(unsigned int)arg1 minSize:(CGSize)arg2 maxSize:(CGSize)arg3;
- (CGSize)measuredSizeWithFlags:(unsigned int)arg1;
- (id)pLayoutWithMinSize:(CGSize)arg1 maxSize:(CGSize)arg2 anchor:(CGPoint)arg3 flags:(unsigned int)arg4;
- (id)initWithStorage:(id)arg1;

@end

