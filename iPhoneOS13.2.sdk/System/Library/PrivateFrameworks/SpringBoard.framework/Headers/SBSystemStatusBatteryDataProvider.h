//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSInvalidatable-Protocol.h>

@class STBatteryStatusDomainPublisher;

@interface SBSystemStatusBatteryDataProvider : NSObject <BSInvalidatable>
{
    BOOL _shouldExposeNotChargingState;
    STBatteryStatusDomainPublisher *_batteryDataPublisher;
}

@property(nonatomic) BOOL shouldExposeNotChargingState; // @synthesize shouldExposeNotChargingState=_shouldExposeNotChargingState;
@property(readonly, nonatomic) STBatteryStatusDomainPublisher *batteryDataPublisher; // @synthesize batteryDataPublisher=_batteryDataPublisher;
// - (void).cxx_destruct;
- (BOOL)_isInNotChargingState;
- (void)_updateShouldExposeNotChargingState;
- (void)_noteNotChargingStatusChanged;
- (id)_internalBatteryDevice;
- (void)_updateData;
- (void)_registerForNotifications;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end

