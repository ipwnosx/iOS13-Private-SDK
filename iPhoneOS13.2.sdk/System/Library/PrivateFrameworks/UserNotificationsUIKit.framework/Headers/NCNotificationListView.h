//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSMutableDictionary, NSMutableSet, UILabel, UIView;
@protocol NCNotificationListViewDataSource;

@interface NCNotificationListView : UIScrollView
{
    BOOL _grouped;
    BOOL _subviewPerformingGroupingAnimation;
    BOOL _performingContentRevealAnimation;
    BOOL _revealed;
    BOOL _leadingRevealView;
    BOOL _activeRevealTransitioning;
    BOOL _performingGroupingAnimation;
    BOOL _performingRevealAnimation;
    BOOL _performingHeaderReloadAnimation;
    BOOL _performingVisibleRectAdjustment;
    BOOL _performedFirstLayout;
    BOOL _cachedSizeValid;
    id <NCNotificationListViewDataSource> _dataSource;
    double _groupedTranslation;
    double _revealPercentage;
    NSUInteger _revealIndexOffset;
    NSMutableDictionary *_visibleViews;
    NSMutableSet *_insertedViewIndices;
    NSMutableSet *_reloadedViewIndices;
    NSUInteger _removedViewIndex;
    NSMutableSet *_viewsPerformingAnimation;
    UILabel *_titleLabel;
    UIView *_headerView;
    UIView *_footerView;
    CGSize _cachedSize;
    CGRect _visibleRect;
}

@property(nonatomic) CGSize cachedSize; // @synthesize cachedSize=_cachedSize;
@property(nonatomic, getter=isCachedSizeValid) BOOL cachedSizeValid; // @synthesize cachedSizeValid=_cachedSizeValid;
@property(nonatomic, getter=hasPerformedFirstLayout) BOOL performedFirstLayout; // @synthesize performedFirstLayout=_performedFirstLayout;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSMutableSet *viewsPerformingAnimation; // @synthesize viewsPerformingAnimation=_viewsPerformingAnimation;
@property(nonatomic, getter=isPerformingVisibleRectAdjustment) BOOL performingVisibleRectAdjustment; // @synthesize performingVisibleRectAdjustment=_performingVisibleRectAdjustment;
@property(nonatomic, getter=isPerformingHeaderReloadAnimation) BOOL performingHeaderReloadAnimation; // @synthesize performingHeaderReloadAnimation=_performingHeaderReloadAnimation;
@property(nonatomic, getter=isPerformingRevealAnimation) BOOL performingRevealAnimation; // @synthesize performingRevealAnimation=_performingRevealAnimation;
@property(nonatomic, getter=isPerformingGroupingAnimation) BOOL performingGroupingAnimation; // @synthesize performingGroupingAnimation=_performingGroupingAnimation;
@property(nonatomic) NSUInteger removedViewIndex; // @synthesize removedViewIndex=_removedViewIndex;
@property(retain, nonatomic) NSMutableSet *reloadedViewIndices; // @synthesize reloadedViewIndices=_reloadedViewIndices;
@property(retain, nonatomic) NSMutableSet *insertedViewIndices; // @synthesize insertedViewIndices=_insertedViewIndices;
@property(retain, nonatomic) NSMutableDictionary *visibleViews; // @synthesize visibleViews=_visibleViews;
@property(nonatomic) NSUInteger revealIndexOffset; // @synthesize revealIndexOffset=_revealIndexOffset;
@property(nonatomic) double revealPercentage; // @synthesize revealPercentage=_revealPercentage;
@property(nonatomic, getter=isActiveRevealTransitioning) BOOL activeRevealTransitioning; // @synthesize activeRevealTransitioning=_activeRevealTransitioning;
@property(nonatomic, getter=isLeadingRevealView) BOOL leadingRevealView; // @synthesize leadingRevealView=_leadingRevealView;
@property(nonatomic, getter=isRevealed) BOOL revealed; // @synthesize revealed=_revealed;
@property(nonatomic, getter=isPerformingContentRevealAnimation) BOOL performingContentRevealAnimation; // @synthesize performingContentRevealAnimation=_performingContentRevealAnimation;
@property(nonatomic, getter=isSubviewPerformingGroupingAnimation) BOOL subviewPerformingGroupingAnimation; // @synthesize subviewPerformingGroupingAnimation=_subviewPerformingGroupingAnimation;
@property(nonatomic) double groupedTranslation; // @synthesize groupedTranslation=_groupedTranslation;
@property(nonatomic, getter=isGrouped) BOOL grouped; // @synthesize grouped=_grouped;
@property(nonatomic) CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property(nonatomic) __weak id <NCNotificationListViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
@property(readonly, nonatomic, getter=isNotificationListViewCurrentlyVisible) BOOL notificationListViewCurrentlyVisible;
- (CGAffineTransform)_scaleTransformForGroupingAnimationForViewAtIndex:(NSUInteger)arg1 leadingViewHeight:(double)arg2;
- (void)_recycleViewIfNecessary:(id)arg1 withDataSource:(id)arg2;
- (void)_recycleViewIfNecessary:(id)arg1;
- (id)_listViewForView:(id)arg1;
- (double)_footerViewHeight;
- (double)_headerViewHeight;
- (id)_footerViewFromDataSource;
- (id)_headerViewFromDataSource;
- (BOOL)_isGrouping;
- (BOOL)_shouldPerformClipping;
- (void)_resetClipping;
- (void)_setupClipping;
- (void)_configureClippingIfNecessary;
- (double)_revealAnimationDelayForObjectAtIndex:(NSUInteger)arg1;
- (double)_verticalVelocityForSuperview;
- (double)_adjustedFrictionForRevealAnimation;
- (double)_adjustedTensionForRevealAnimation;
- (void)_performViewAnimationBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2 withTension:(double)arg3 friction:(double)arg4;
- (void)_performAnimationForView:(id)arg1 atIndex:(NSUInteger)arg2 animationBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_performViewAnimationBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_performRemovalAnimationForView:(id)arg1;
- (void)_performInsertionAnimationForView:(id)arg1;
- (BOOL)_isTopSubviewHeightLessThanVisibleRect;
- (void)_updateVisibleViewsForUpdatedVisibleRect:(CGRect)arg1;
- (void)_removeAllStoredVisibleViews;
- (void)_removeStoredVisibleViewAtIndex:(NSUInteger)arg1;
- (void)_updateStoredVisibleViewsForViewRemovedAtIndex:(NSUInteger)arg1;
- (void)_updateStoredVisibleViewsForViewInsertedAtIndex:(NSUInteger)arg1;
- (void)_setVisibleView:(id)arg1 atIndex:(NSUInteger)arg2;
- (BOOL)_isVisibleView:(id)arg1;
- (id)_visibleViewAtIndex:(NSUInteger)arg1;
- (BOOL)isVisibleForViewAtIndex:(NSUInteger)arg1;
- (double)layoutOffsetForViewAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger count;
- (void)recycleVisibleViews;
- (void)reloadHeaderView;
- (void)invalidateData;
- (void)reloadViewAtIndex:(NSUInteger)arg1;
- (void)removeViewAtIndex:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)insertViewAtIndex:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)_layoutHiddenViewsForGroupingLayoutIfNecessaryWithLeadingViewHeight:(double)arg1;
- (void)_configureStackDimmingForGroupedView:(id)arg1 transform:(CGAffineTransform)arg2;
- (void)revealNotificationContentBelowGroupedViewIfNecessary:(id)arg1;
- (void)_setContentHiddenForGroupedView:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)_layoutGroupedViewForGroupingLayout:(id)arg1 atIndex:(NSUInteger)arg2 isExistingView:(BOOL)arg3 leadingViewHeight:(double)arg4;
- (void)_layoutLeadingViewForGroupingLayoutIfNecessary:(id)arg1 hasShadow:(BOOL)arg2;
- (CGRect)_frameForViewAtIndex:(NSUInteger)arg1;
- (void)_layoutFooterViewForGroupingIfNecessary;
- (void)_layoutHeaderViewForGroupingIfNecessary;
- (void)_layoutForGrouping;
- (double)_positionOffsetForRevealHintingForItemAtIndex:(NSUInteger)arg1;
- (double)_layoutViewIfNecessaryAtIndex:(NSUInteger)arg1 layoutOffset:(double)arg2;
- (void)_layoutFooterViewIfNecessaryAtLayoutOffset:(double)arg1;
- (void)_layoutHeaderViewIfNecessaryAtLayoutOffset:(double)arg1;
- (void)_layoutForList;
- (double)_positionOffsetForRevealHintingForHeaderView;
- (void)_adjustContentSizeIfNecessaryForUpdatedHeight:(double)arg1;
- (BOOL)_isViewWithinVisibleRectForHeight:(double)arg1 layoutOffset:(double)arg2;
- (void)didMoveToSuperview;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

