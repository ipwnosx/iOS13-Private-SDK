//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDate, NSDictionary, NSString;

@protocol DNDSSysdiagnoseDataProvider <NSObject>
@property(readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;
- (NSDictionary *)sysdiagnoseDataForDate:(NSDate *)arg1;
@end

