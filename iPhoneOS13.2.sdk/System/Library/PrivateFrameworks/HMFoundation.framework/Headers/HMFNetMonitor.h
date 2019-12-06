//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFLogging-Protocol.h>

@class HMFNetAddress;
@protocol HMFLocking, HMFNetMonitorDelegate;

@interface HMFNetMonitor : HMFObject <HMFLogging>
{
    id <HMFLocking> _lock;
    BOOL _reachable;
    id <HMFNetMonitorDelegate> _delegate;
    HMFNetAddress *_netAddress;
}

+ (id)logCategory;
@property(readonly, copy, nonatomic) HMFNetAddress *netAddress; // @synthesize netAddress=_netAddress;
@property __weak id <HMFNetMonitorDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
@property(readonly) NSUInteger reachabilityPath;
@property(getter=isReachable) BOOL reachable;
- (id)initWithNetService:(id)arg1;
- (id)initWithNetAddress:(id)arg1;
- (id)init;

@end

