//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SKUIScrollingSegmentedController, SKUIScrollingTabBarController, SKUIStackedBar, _UIBackdropView;

@interface UIViewController (SKUIExtensions)
- (id)_SKUIView;
- (void)unregisterForPreviewing:(id)arg1;
- (id)registerForPreviewingFromSourceView:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(nonatomic) double SKUIStackedBarSplit;
@property(readonly, nonatomic) SKUIStackedBar *SKUIStackedBar;
- (void)setNeedsNestedPagingScrollViewUpdate;
@property(readonly, nonatomic) SKUIScrollingTabBarController *scrollingTabBarController;
- (void)setNeedsScrollingSegmentContentScrollViewUpdate;
@property(readonly, nonatomic) SKUIScrollingSegmentedController *scrollingSegmentedController;
@property(readonly, nonatomic) _UIBackdropView *SKUIPinnedHeaderView;
- (void)setNeedsNavigationBarAppearanceUpdate;
@end

