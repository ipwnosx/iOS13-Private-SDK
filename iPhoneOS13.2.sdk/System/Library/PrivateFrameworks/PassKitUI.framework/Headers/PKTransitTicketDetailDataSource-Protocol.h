//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;

@protocol PKTransitTicketDetailDataSource <NSObject>
- (NSString *)transitTicketDetailValueForRow:(NSUInteger)arg1 leg:(NSUInteger)arg2;
- (NSString *)transitTicketDetailTitleForRow:(NSUInteger)arg1 leg:(NSUInteger)arg2;
- (long long)transitTicketDetailNumberOfRowsForLeg:(NSUInteger)arg1;
- (NSString *)titleForLeg:(NSUInteger)arg1;
- (NSUInteger)numberOfLegs;
@end

