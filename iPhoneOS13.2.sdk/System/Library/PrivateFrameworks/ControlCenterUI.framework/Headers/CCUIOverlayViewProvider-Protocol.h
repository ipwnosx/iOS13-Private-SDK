//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CCUIHeaderPocketView, CCUIModuleCollectionView, CCUIStatusLabelViewController, MTMaterialView, UIScrollView, UIStatusBar, UIView;

@protocol CCUIOverlayViewProvider <NSObject>
@property(readonly, nonatomic) UIStatusBar *overlayLeadingStatusBar;
@property(readonly, nonatomic) CCUIHeaderPocketView *overlayHeaderView;
@property(readonly, nonatomic) CCUIStatusLabelViewController *overlayStatusLabelViewController;
@property(readonly, nonatomic) CCUIModuleCollectionView *overlayModuleCollectionView;
@property(readonly, nonatomic) UIView *overlayContainerView;
@property(readonly, nonatomic) UIScrollView *overlayScrollView;
@property(readonly, nonatomic) MTMaterialView *overlayBackgroundView;
- (void)setOverlayStatusBarHidden:(BOOL)arg1;
@end

