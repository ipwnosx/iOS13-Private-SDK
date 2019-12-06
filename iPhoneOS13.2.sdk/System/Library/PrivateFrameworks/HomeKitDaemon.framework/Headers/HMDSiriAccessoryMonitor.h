//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol HMDSiriAccessoryMonitorDelegate;

@interface HMDSiriAccessoryMonitor : NSObject
{
    id <HMDSiriAccessoryMonitorDelegate> _delegate;
    NSMapTable *_accessories;
}

@property(retain, nonatomic) NSMapTable *accessories; // @synthesize accessories=_accessories;
@property(readonly, nonatomic) __weak id <HMDSiriAccessoryMonitorDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)accessory:(id)arg1 setSupportsDragonSiri:(BOOL)arg2;
- (void)setTargetableAccessory:(id)arg1 withControllers:(id)arg2;
- (void)_removeAccessory:(id)arg1;
- (void)_addAccessory:(id)arg1 withTarget:(id)arg2;
- (id)_accessoriesTargetingAccessory:(id)arg1;
- (BOOL)hasAnyActiveTargetingAccessories;
- (id)_getInfoForAccessory:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

