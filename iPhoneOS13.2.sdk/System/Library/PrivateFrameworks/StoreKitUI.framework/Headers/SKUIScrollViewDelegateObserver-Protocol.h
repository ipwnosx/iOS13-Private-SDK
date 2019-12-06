//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIScrollView;

@protocol SKUIScrollViewDelegateObserver <NSObject>

@optional
- (void)observedScrollViewWillEndDragging:(UIScrollView *)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint)arg3;
- (void)observedScrollViewWillBeginDragging:(UIScrollView *)arg1;
- (void)observedScrollViewWillBeginDecelerating:(UIScrollView *)arg1;
- (void)observedScrollViewDidScroll:(UIScrollView *)arg1;
- (void)observedScrollViewDidEndDecelerating:(UIScrollView *)arg1;
@end

