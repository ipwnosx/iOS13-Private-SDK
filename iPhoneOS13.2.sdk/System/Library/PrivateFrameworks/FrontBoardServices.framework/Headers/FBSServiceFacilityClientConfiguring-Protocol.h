//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class BSServiceConnectionEndpoint, BSServiceInterface, BSServiceQuality, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol FBSServiceFacilityClientConfiguring
- (void)setCalloutQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setInterfaceTarget:(id)arg1;
- (void)setInterface:(BSServiceInterface *)arg1;
- (void)setServiceQuality:(BSServiceQuality *)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setEndpoint:(BSServiceConnectionEndpoint *)arg1;
@end

