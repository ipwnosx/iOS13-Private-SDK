//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface IMOrderingMetricCollector : NSObject
{
    BOOL _needToSubmitMetric;
    NSObject<OS_dispatch_queue> *_orderingMetricQueue;
    NSUInteger _numberOfMessagesSeen;
    NSUInteger _numberOfMessagesPlacedOutOfOrder;
    NSUInteger _numberOfMessagesPlacedCorrectly;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL needToSubmitMetric; // @synthesize needToSubmitMetric=_needToSubmitMetric;
@property(nonatomic) NSUInteger numberOfMessagesPlacedCorrectly; // @synthesize numberOfMessagesPlacedCorrectly=_numberOfMessagesPlacedCorrectly;
@property(nonatomic) NSUInteger numberOfMessagesPlacedOutOfOrder; // @synthesize numberOfMessagesPlacedOutOfOrder=_numberOfMessagesPlacedOutOfOrder;
@property(nonatomic) NSUInteger numberOfMessagesSeen; // @synthesize numberOfMessagesSeen=_numberOfMessagesSeen;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *orderingMetricQueue; // @synthesize orderingMetricQueue=_orderingMetricQueue;
// - (void).cxx_destruct;
- (void)_persistMetric;
- (void)_submitMetric;
- (void)_submitMetricIfNeeded;
- (void)metricHistoryQueryOrder:(id)arg1;
- (void)_metricHistoryQueryOrder:(id)arg1;
- (BOOL)_metricIncomingMessage:(id)arg1 items:(id)arg2;
- (void)metricIncomingMessage:(id)arg1 items:(id)arg2;
- (void)dealloc;
- (id)init;

@end

