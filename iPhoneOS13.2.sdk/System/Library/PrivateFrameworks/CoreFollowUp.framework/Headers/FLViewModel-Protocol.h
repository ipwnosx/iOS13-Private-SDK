//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class FLFollowUpItem, NSArray;

@protocol FLViewModel <NSObject>
- (void)setItemChangeHandler:(void (^)(void))arg1;
- (NSArray *)allPendingItems;

@optional
- (void)refreshItemsForItem:(FLFollowUpItem *)arg1 withCompletionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)refreshItems:(NSArray *)arg1 withCompletionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (NSArray *)groups;
@end

