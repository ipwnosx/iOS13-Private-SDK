//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDFMFRequest, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface HMDFMFHandler : HMFObject <HMFLogging, HMFTimerDelegate>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDFMFRequest *_currentFMFRequest;
    NSMutableArray *_queries;
}

+ (id)logCategory;
+ (id)sharedHandler;
@property(retain, nonatomic) NSMutableArray *queries; // @synthesize queries=_queries;
@property(retain, nonatomic) HMDFMFRequest *currentFMFRequest; // @synthesize currentFMFRequest=_currentFMFRequest;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
// - (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (void)queryFMFStatusWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

