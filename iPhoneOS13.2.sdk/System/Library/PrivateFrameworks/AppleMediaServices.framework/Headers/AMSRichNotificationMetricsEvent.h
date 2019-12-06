//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSMetricsEvent.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSRichNotificationMetricsEvent : AMSMetricsEvent
{
}

+ (id)_centerForBundleId:(id)arg1;
+ (id)eventFromNotificationCenterSettings:(id)arg1 centerBundleId:(id)arg2;
+ (id)eventFromMetricsDictionary:(id)arg1 centerBundleId:(id)arg2;
@property(nonatomic) BOOL postedSuccessfully;
@property(retain, nonatomic) NSString *errorDescription;
- (id)initWithTopic:(id)arg1 settings:(id)arg2 centerBundleId:(id)arg3;

@end

