//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/BSUIScrollViewDelegate-Protocol.h>

@class SBIconScrollView;

@protocol SBIconScrollViewDelegate <BSUIScrollViewDelegate>
- (BOOL)iconScrollView:(SBIconScrollView *)arg1 shouldSetAutoscrollContentOffset:(CGPoint)arg2;
- (BOOL)iconScrollView:(SBIconScrollView *)arg1 shouldSetContentOffset:(CGPoint )arg2 animated:(BOOL)arg3;
- (void)iconScrollViewDidCancelTouchTracking:(SBIconScrollView *)arg1;
- (void)iconScrollViewWillCancelTouchTracking:(SBIconScrollView *)arg1;
@end

