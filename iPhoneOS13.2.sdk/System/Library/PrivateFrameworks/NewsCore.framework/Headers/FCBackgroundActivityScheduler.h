//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCBackgroundActivityScheduler-Protocol.h>

@interface FCBackgroundActivityScheduler : NSObject <FCBackgroundActivityScheduler>
{
}

- (void)requestBackgroundAppRefreshStartingAfter:(id)arg1 before:(id)arg2;
- (void)cancelRepeatingTaskWithIdentifier:(id)arg1;
- (void)scheduleBackgroundTaskRepeatingAtInterval:(double)arg1 identifier:(id)arg2 task:(CDUnknownBlockType)arg3;

@end

