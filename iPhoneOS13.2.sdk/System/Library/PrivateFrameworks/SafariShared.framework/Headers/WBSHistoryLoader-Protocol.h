//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSURL;

@protocol WBSHistoryLoader <NSObject>
- (void)waitForLoadingToComplete;
- (void)startLoading;
- (id)initWithURL:(NSURL *)arg1 itemCountLimit:(NSUInteger)arg2 historyAgeLimit:(double)arg3 historyItemClass:(Class)arg4;
@end

