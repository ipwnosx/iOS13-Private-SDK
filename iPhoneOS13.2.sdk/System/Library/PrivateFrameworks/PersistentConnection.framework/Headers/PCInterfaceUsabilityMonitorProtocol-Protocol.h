//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersistentConnection/PCInterfaceMonitorProtocol-Protocol.h>

@protocol PCInterfaceUsabilityMonitorDelegate;

@protocol PCInterfaceUsabilityMonitorProtocol <PCInterfaceMonitorProtocol>
@property(nonatomic) id <PCInterfaceUsabilityMonitorDelegate> delegate;
@property(readonly, nonatomic) BOOL isRadioHot;
- (void)setTrackUsability:(BOOL)arg1;
- (void)setThresholdOffTransitionCount:(NSUInteger)arg1;
- (void)setTrackedTimeInterval:(double)arg1;
@end

