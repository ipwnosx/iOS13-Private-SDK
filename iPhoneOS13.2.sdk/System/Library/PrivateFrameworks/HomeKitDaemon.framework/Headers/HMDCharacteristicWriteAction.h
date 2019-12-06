//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDAction.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>

@class HMDCharacteristic, NSDictionary, NSString;

@interface HMDCharacteristicWriteAction : HMDAction <NSSecureCoding, HMDBackingStoreObjectProtocol>
{
    HMDCharacteristic *_characteristic;
    id _targetValue;
    NSDictionary *_actionInformation;
    NSString *_dumpState;
}

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2;
@property(readonly, nonatomic) NSString *dumpState; // @synthesize dumpState=_dumpState;
@property(readonly, nonatomic) NSDictionary *actionInformation; // @synthesize actionInformation=_actionInformation;
@property(copy, nonatomic) id targetValue; // @synthesize targetValue=_targetValue;
@property(readonly, nonatomic) __weak HMDCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
// - (void).cxx_destruct;
- (id)modelObjectWithChangeType:(NSUInteger)arg1;
- (void)_processWriteActionModelUpdated:(id)arg1 message:(id)arg2;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (NSUInteger)entitlementsForNotification;
- (BOOL)requiresDeviceUnlock;
- (BOOL)isActionForCharacteristic:(id)arg1;
- (BOOL)isSecureAction;
- (id)dictionaryRepresentation;
- (id)stateDump;
- (void)replaceCharacteristic:(id)arg1;
- (NSUInteger)type;
- (id)initWithUUID:(id)arg1 characteristic:(id)arg2 targetValue:(id)arg3 actionSet:(id)arg4;
- (id)init;

@end

