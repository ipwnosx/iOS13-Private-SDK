//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXSearchFeedbackListenerTarget-Protocol.h>

@interface ATXSearchFeedbackListenerTargetXPC : NSObject <ATXSearchFeedbackListenerTarget>
{
}

- (void)logAppFeedback:(id)arg1 consumerSubType:(unsigned char)arg2 engagementType:(NSUInteger)arg3 bundleIdentifier:(id)arg4 bundleIdsShown:(id)arg5;
- (void)sendActionResponse:(id)arg1;

@end

