//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HFItem, HFItemUpdateRequest, NAFuture, NSSet;

@protocol HFItemUpdating <NSObject>
- (NSSet *)childItemsForItem:(HFItem *)arg1;
- (NAFuture *)performItemUpdateRequest:(HFItemUpdateRequest *)arg1;
@end

