//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TeaUI/TSBackgroundFetchScheduler-Protocol.h>

@class MISSING_TYPE;

@interface TSBackgroundTasksBackgroundFetchScheduler : NSObject <TSBackgroundFetchScheduler>
{
    MISSING_TYPE *application;
    MISSING_TYPE *taskIdentifier;
    MISSING_TYPE *minimumBackgroundFetchInterval;
}

// - (void).cxx_destruct;
- (id)init;
- (void)prepareForUseWithApplicationDelegate:(id)arg1;
- (void)setMinimumBackgroundFetchInterval:(double)arg1;
- (id)initWithApplication:(id)arg1 taskIdentifier:(id)arg2;

@end

