//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MTTimer, NSArray;
@protocol MTSource;

@protocol MTTimerObserver <NSObject>
- (void)nextTimerDidChange:(MTTimer *)arg1;
- (void)source:(id <MTSource>)arg1 didDismissTimer:(MTTimer *)arg2;
- (void)source:(id <MTSource>)arg1 didFireTimer:(MTTimer *)arg2;
- (void)source:(id <MTSource>)arg1 didRemoveTimers:(NSArray *)arg2;
- (void)source:(id <MTSource>)arg1 didUpdateTimers:(NSArray *)arg2;
- (void)source:(id <MTSource>)arg1 didAddTimers:(NSArray *)arg2;
@end

