//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HKSource, NSString;

@protocol HDStatisticsSourceOrderProvider <NSObject>
- (HKSource *)sourceForSourceID:(long long)arg1;
- (NSString *)bundleIdentifierForSourceID:(long long)arg1;
- (void)orderSourceIDs:(vector_d87a6415 )arg1;
@end

