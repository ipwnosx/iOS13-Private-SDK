//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSIndexPath, NSString, SKUIRedeemIdManager;

@protocol SKUIRedeemIdManagerDelegate <NSObject>
- (void)redeemIdManager:(SKUIRedeemIdManager *)arg1 didReturnText:(NSString *)arg2 forCellAtIndexPath:(NSIndexPath *)arg3;
- (void)redeemIdManager:(SKUIRedeemIdManager *)arg1 didChangeToText:(NSString *)arg2 forCellAtIndexPath:(NSIndexPath *)arg3;
- (void)redeemIdManager:(SKUIRedeemIdManager *)arg1 movedToRowAtIndexPath:(NSIndexPath *)arg2;
@end

