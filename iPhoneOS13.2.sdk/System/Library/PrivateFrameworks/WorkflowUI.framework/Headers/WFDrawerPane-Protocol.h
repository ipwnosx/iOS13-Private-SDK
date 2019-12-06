//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UISearchBar, UIView, UIViewController, WFDrawerPaneContainer;
@protocol WFDrawerPaneHeaderView;

@protocol WFDrawerPane <NSObject>
@property(retain, nonatomic) UISearchBar *searchBar;
@property(retain, nonatomic) UIView *titleView;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) __weak UIView<WFDrawerPaneHeaderView> *activeHeaderView;
@property(nonatomic) double topCornerRadius;
@property(nonatomic) double bottomContentInset;
@property(readonly, nonatomic) CGRect grabberAreaBounds;
@property(nonatomic) __weak WFDrawerPaneContainer *container;
@property(retain, nonatomic) UIViewController *viewController;
- (id)initWithViewController:(UIViewController *)arg1;

@optional
- (void)didTransitionToVisibility:(NSUInteger)arg1;
- (void)transitionContentForHeight:(double)arg1;
- (void)willTransitionToVisibility:(NSUInteger)arg1;
@end

