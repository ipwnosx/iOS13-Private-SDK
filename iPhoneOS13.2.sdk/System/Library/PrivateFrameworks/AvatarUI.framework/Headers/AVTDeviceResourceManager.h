//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTDeviceResourceConsumerDelegate-Protocol.h>

@class NSMutableArray;
@protocol AVTUILogger, OS_dispatch_queue;

@interface AVTDeviceResourceManager : NSObject <AVTDeviceResourceConsumerDelegate>
{
    NSMutableArray *_consumers;
    id <AVTUILogger> _logger;
    NSObject<OS_dispatch_queue> *_stateLock;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateLock; // @synthesize stateLock=_stateLock;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSMutableArray *consumers; // @synthesize consumers=_consumers;
// - (void).cxx_destruct;
- (void)consumer:(id)arg1 willConsumeRenderingResourceForEstimatedDuration:(double)arg2;
- (void)unregisterConsumer:(id)arg1;
- (void)registerConsumer:(id)arg1;
- (void)performWorkWithConsumers:(CDUnknownBlockType)arg1;
- (id)initWithLogger:(id)arg1 lockProvider:(CDUnknownBlockType)arg2;

@end

