//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIScrollView, WFDrawerController;

@protocol WFDrawerControllerDelegate <NSObject>

@optional
- (void)drawerController:(WFDrawerController *)arg1 didTransitionToVisibility:(NSUInteger)arg2;
- (void)drawerController:(WFDrawerController *)arg1 willTransitionToVisibility:(NSUInteger)arg2;
- (UIScrollView *)dismissingScrollViewForDrawerController:(WFDrawerController *)arg1;
@end

