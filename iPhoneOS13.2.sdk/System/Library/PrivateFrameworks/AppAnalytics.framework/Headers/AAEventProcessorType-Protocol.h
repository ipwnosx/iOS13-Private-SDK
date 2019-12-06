//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class AAGroup, AAProcessEvent, AASession, NSDate;

@protocol AAEventProcessorType
- (void)processEvent:(AAProcessEvent *)arg1;

@optional
- (void)didEndSession:(AASession *)arg1 endDate:(NSDate *)arg2;
- (void)didUpdateSession:(AASession *)arg1;
- (void)didStartSession:(AASession *)arg1;
- (void)didLeaveGroup:(AAGroup *)arg1;
- (void)didEnterGroup:(AAGroup *)arg1;
@end

