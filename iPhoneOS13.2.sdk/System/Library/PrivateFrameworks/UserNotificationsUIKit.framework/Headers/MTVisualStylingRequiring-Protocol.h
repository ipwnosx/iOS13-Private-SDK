//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/MTVisualStylingProviding-Protocol.h>

@class MTVisualStylingProvider, NSArray;

@protocol MTVisualStylingRequiring <MTVisualStylingProviding>
@property(readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
- (void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 forCategory:(long long)arg2;
@end

