//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCObject.h>

@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCQoSMonitorManager : VCObject
{
    NSMutableArray *_monitors;
    NSMutableDictionary *_sources;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    long long _reportingInterval;
    NSMutableArray *_moitors;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSMutableArray *moitors; // @synthesize moitors=_moitors;
- (BOOL)doesQoSSourceExistForStreamToken:(id)arg1;
- (void)deregisterBlocksForService;
- (void)registerBlocksForService;
- (void)updateQoSReport:(id)arg1 toClientsWithToken:(long long)arg2;
- (void)unregisterQoSReportingSourceForToken:(long long)arg1;
- (void)registerQoSReportingSourceForToken:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

