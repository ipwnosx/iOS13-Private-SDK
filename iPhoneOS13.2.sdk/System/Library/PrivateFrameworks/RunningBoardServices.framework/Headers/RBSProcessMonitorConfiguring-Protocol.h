//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, RBSProcessStateDescriptor;

@protocol RBSProcessMonitorConfiguring
- (void)setUpdateHandler:(void (^)(RBSProcessMonitor *, RBSProcessHandle *, RBSProcessStateUpdate *))arg1;
- (void)setServiceClass:(unsigned int)arg1;
- (void)setStateDescriptor:(RBSProcessStateDescriptor *)arg1;
- (void)setPredicates:(NSArray *)arg1;
@end

