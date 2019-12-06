//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSService, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NPKTargetDeviceAssertionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    IDSService *_transportationService;
    NSMutableDictionary *_outstandingAssertionStatusUpdaters;
    NSMutableDictionary *_assertTypesUUIDsMap;
}

@property(retain, nonatomic) NSMutableDictionary *assertTypesUUIDsMap; // @synthesize assertTypesUUIDsMap=_assertTypesUUIDsMap;
@property(retain, nonatomic) NSMutableDictionary *outstandingAssertionStatusUpdaters; // @synthesize outstandingAssertionStatusUpdaters=_outstandingAssertionStatusUpdaters;
@property(readonly, nonatomic) IDSService *transportationService; // @synthesize transportationService=_transportationService;
// - (void).cxx_destruct;
- (id)_removeOutstandingAssertionStatusUpdaterWithUUID:(id)arg1;
- (void)_addOutstandingAssertionStatusUpdater:(id)arg1 withAssertType:(int)arg2;
- (id)_outstandingAssertionStatusUpdaterWithRequest:(id)arg1 assertionType:(NSUInteger)arg2 assertionUUID:(id)arg3;
- (id)_IDSSendOptions;
- (id)_sendAssertionRequest:(id)arg1;
- (id)assertionsUUIDsOfType:(NSUInteger)arg1;
- (void)invalidateAssertionWithUUID:(id)arg1;
- (id)acquireAssertionOfType:(NSUInteger)arg1;
- (id)initWithTransportationService:(id)arg1;

@end

