//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HAPAccessory;

@protocol HAPAccessoryDelegate <NSObject>

@optional
- (void)accessoryDidBecomeUnreachable:(HAPAccessory *)arg1;
- (void)accessoryDidBecomeReachable:(HAPAccessory *)arg1;
@end

