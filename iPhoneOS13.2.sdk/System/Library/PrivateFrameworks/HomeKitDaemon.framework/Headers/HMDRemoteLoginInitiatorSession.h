//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDLogEvent, NSString;
@protocol HomeKitEventRemoteLoginMetricProtocol;

@interface HMDRemoteLoginInitiatorSession : HMFObject
{
    NSString *_sessionID;
    HMDLogEvent<HomeKitEventRemoteLoginMetricProtocol> *_metric;
}

@property(retain, nonatomic) HMDLogEvent<HomeKitEventRemoteLoginMetricProtocol> *metric; // @synthesize metric=_metric;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
// - (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1;

@end

