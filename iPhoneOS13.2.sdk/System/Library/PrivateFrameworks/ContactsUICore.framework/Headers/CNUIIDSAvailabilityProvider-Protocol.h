//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CNObservable, NSArray;
@protocol CNSchedulerProvider;

@protocol CNUIIDSAvailabilityProvider <NSObject>
- (CNObservable *)validateHandlesForIMessage:(NSArray *)arg1 schedulerProvider:(id <CNSchedulerProvider>)arg2;
- (CNObservable *)validateHandlesForFaceTime:(NSArray *)arg1 schedulerProvider:(id <CNSchedulerProvider>)arg2;
@end

