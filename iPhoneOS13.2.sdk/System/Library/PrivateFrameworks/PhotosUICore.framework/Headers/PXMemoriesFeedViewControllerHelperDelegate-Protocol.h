//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSIndexSet, PXMemoriesFeedLayoutMetrics, PXMemoriesFeedViewControllerHelper;

@protocol PXMemoriesFeedViewControllerHelperDelegate <NSObject>

@optional
- (void)memoriesFeedViewControllerHelper:(PXMemoriesFeedViewControllerHelper *)arg1 configureMetrics:(PXMemoriesFeedLayoutMetrics *)arg2;
- (NSIndexSet *)memoriesFeedViewControllerHelperReloadedTileKindsOnObjectChanged:(PXMemoriesFeedViewControllerHelper *)arg1;
- (BOOL)memoriesFeedViewControllerHelperFeedIsVisible:(PXMemoriesFeedViewControllerHelper *)arg1;
@end

