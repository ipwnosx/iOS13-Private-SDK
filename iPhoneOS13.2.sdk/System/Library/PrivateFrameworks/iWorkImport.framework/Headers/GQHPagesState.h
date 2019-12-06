//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/GQHState.h>

#import <iWorkImport/GQWrapPointGenerator-Protocol.h>

@class GQDSStyle, GQDWPContainerHint, GQHStyle, GQWrapPointSet;

__attribute__((visibility("hidden")))
@interface GQHPagesState : GQHState <GQWrapPointGenerator>
{
//    struct __CFDictionary mFloatingDrawables;
    int mMode;
//    struct __CFDictionary mHeaders;
//    struct __CFDictionary mFooters;
//    struct __CFArray mSectionStyles;
//    struct __CFDictionary mPageWrapPointsMap;
    int mCurrentPageIndex;
    int mStartPageAt;
    int mStartPageAtValueChangedAtPageIndex;
    GQHStyle *mCurrentLayoutStyle;
    GQHStyle *mCurrentParagraphStyle;
    GQDSStyle *mCurrentBaseParagraphStyle;
//    struct __CFString mCurrentCachedParagraphClass;
    GQHStyle *mCurrentSpanStyle;
    GQDSStyle *mCurrentBaseSpanStyle;
//    struct __CFString mCurrentCachedSpanClass;
    GQWrapPointSet *mCurrentWrapPointSet;
    CGRect mLastFrame;
    BOOL mMappingFloatingDrawables;
    BOOL mStartedPage;
    BOOL mStartedSection;
    BOOL mDidInsertPageHeader;
    BOOL mDidFindContainerHint;
    GQDWPContainerHint *mLastInsertedContainerHint;
//    struct __CFArray mAttachmentPositions;
    long long mAttachmentIdCounter;
    long long mFirstAttachmentId;
    BOOL mSplitNextAttachment;
    GQDSStyle *mCurrentSectionStyle;
    BOOL mHasLayoutDrawables;
    int mCurrentHintPageIndex;
    int mCurrentHintColumnIndex;
    BOOL mIsMappingHeadersFooters;
    int mHeaderFooterPageNumber;
//    struct __CFDictionary mDrawablePagesOrderToCssZOrderClassMap;
    CGSize mPageSize;
//    struct __CFArray mTocHrefStack;
    BOOL mCurrentFrameHasSandbagFloats;
    int mProgressiveIndex;
}

- (BOOL)allowInlineWrap;
- (BOOL)needAbsolutelyPositionedTables;
- (void)endSection;
- (void)popTocHref;
//  (void)pushTocHref:(struct __CFString )arg1;
- (unsigned int)tocDepth;
- (void)setPageSize:(CGSize)arg1;
- (CGSize)pageSize;
//  (struct __CFDictionary )pagesOrderToCssZOrderClassMapDictionary;
//  (struct __CFString )cssZOrderClassForDrawablePagesOrder:(int)arg1;
//  (struct __CFString )cssZOrderClassForDrawable:(id)arg1;
//  (void)addStyle:(struct __CFString )arg1 className:(struct __CFString )arg2 srcStyle:(id)arg3;
- (void)setOutlineStyleType:(int)arg1;
- (void)setOutlineLevel:(int)arg1;
- (BOOL)useOutline;
- (int)pageNumberForHeaderOrFooter;
- (BOOL)isMappingHeadersFooters;
- (void)setIsMappingHeadersFooters:(BOOL)arg1;
- (BOOL)hasLayoutDrawables;
- (void)setHasLayoutDrawables:(BOOL)arg1;
- (void)inContent;
- (void)clearWrapPoints;
- (vector_dadce35e )createListOfWrapPointsAlongY:(float)arg1 minX:(float)arg2 maxX:(float)arg3 zIndex:(int)arg4;
- (const set_3d57cb01 )wrapPoints;
- (void)addWrapPoint:(id)arg1;
- (void)endWrapPointSet;
- (void)beginWrapPointSet;
//  (void)resolveHeaderName:(const struct __CFString )arg1 footerName:(const struct __CFString )arg2;
- (void)handleContainerHint:(id)arg1;
- (void)insertAttachmentPlaceholder;
- (long long)firstAttachmentId;
- (long long)nextAttachmentId;
- (long long)currentAttachmentId;
- (double)moveToNextAttachmentPosition;
- (double)currentAttachmentPosition;
- (void)addAttachmentPosition:(double)arg1;
- (void)finishedWithSplitAttachment;
- (BOOL)splitNextAttachment;
- (void)mapFloatingDrawablesForPageAtIndex:(NSUInteger)arg1;
- (void)setDidFindContainerHint:(BOOL)arg1;
- (void)setDidInsertPageHeader:(BOOL)arg1;
//  (void)setCurrentSpanStyle:(id)arg1 baseStyle:(id)arg2 cachedClass:(struct __CFString )arg3;
//  (void)setCurrentParagraphStyle:(id)arg1 baseStyle:(id)arg2 cachedClass:(struct __CFString )arg3;
- (void)setCurrentLayoutStyle:(id)arg1;
- (void)setCurrentPageIndex:(int)arg1;
- (int)currentPageIndex;
- (void)overrideSectionStyle:(id)arg1;
// - (CDStruct_627e0f85)rangeForSectionStyleAtPageIndex:(int)arg1;
- (id)sectionStyleForPageIndex:(int)arg1;
- (void)addSectionStyle:(id)arg1 pageIndex:(int)arg2 numPages:(int)arg3;
//  (void)setFooters:(struct __CFArray )arg1;
//  (id)footerForName:(struct __CFString )arg1;
//  (void)setHeaders:(struct __CFArray )arg1;
//  (id)headerForName:(struct __CFString )arg1;
- (void)setMode:(int)arg1;
- (int)mode;
//  (struct __CFArray )pageDrawables:(int)arg1;
- (void)clearFloatingDrawables;
- (id)drawableAtIndex:(int)arg1;
- (void)addFloatingDrawable:(id)arg1;
- (int)floatingDrawablesCount;
- (void)dealloc;
- (id)initWithState:(id)arg1 documentSize:(CGSize)arg2;
- (id)sectionStyleRunForRunBeforePageIndex:(int)arg1;
- (void)openStateLayoutElementsAndStyles;
- (void)closeStateLayoutElementsAndStyles;
- (void)startLayout;
- (void)startSection;
- (id)wrapPointSetForPage:(int)arg1;

@end

