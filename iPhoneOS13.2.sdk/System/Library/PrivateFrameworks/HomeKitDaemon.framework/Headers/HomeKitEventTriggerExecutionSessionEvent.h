//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class AWDHomeKitEventTriggerExecutionSession;

@interface HomeKitEventTriggerExecutionSessionEvent : HMDLogEvent <HMDAWDLogEvent>
{
    AWDHomeKitEventTriggerExecutionSession *_metric;
}

+ (id)uuid;
+ (void)initialize;
@property(readonly, nonatomic) AWDHomeKitEventTriggerExecutionSession *metric; // @synthesize metric=_metric;
// - (void).cxx_destruct;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;
- (id)initWithSessionID:(id)arg1;

@end

