//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, TPSDEventsProvider, TPSEventProviderResult;

@protocol TPSEventsProviderDelegate <NSObject>
- (void)dataProvider:(TPSDEventsProvider *)arg1 didReceiveCallbackWithResult:(TPSEventProviderResult *)arg2;
- (void)dataProvider:(TPSDEventsProvider *)arg1 didFinishQueryWithResults:(NSArray *)arg2;
@end

