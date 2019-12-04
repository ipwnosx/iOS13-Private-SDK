//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMCharacteristic.h>

#import <Home/HFStateDumpBuildable-Protocol.h>

@class NSString;

@interface HMCharacteristic (HFDebugging) <HFStateDumpBuildable>
+ (id)hf_descriptionForProperties:(id)arg1;
+ (_Bool)hf_shouldCaptureCharacteristicTypeInActionSets:(id)arg1;
+ (id /* block */)hf_characteristicSortComparator;
+ (long long)hf_sortPriorityForCharacteristicType:(id)arg1;
+ (id)hf_currentStateCharacteristicTypeForTargetStateCharacteristicType:(id)arg1;
+ (id)hf_targetStateCharacteristicTypeForCurrentStateCharacteristicType:(id)arg1;
+ (id)hf_associatedCharacteristicTypeForCharacteristicType:(id)arg1;
+ (id)hf_descriptionForCharacteristicType:(id)arg1;
+ (id)_hf_alarmCharacteristicTypeToAbnormalValueMap;
+ (id)hf_abnormalValueForAlarmCharacteristicType:(id)arg1;
+ (id)hf_alarmCharacteristicTypes;
+ (id)hf_valueRangeCharacteristicTypes;
+ (id)hf_powerStateCharacteristicTypes;
+ (id)hf_suggestionVendorForCharacteristicType:(id)arg1;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_triggerValues;
- (id)hf_maximumTriggerValue;
- (id)hf_minimumTriggerValue;
- (id)hf_thresholdValueForRange:(id)arg1;
- (id)hf_valueAfterTriggerValue:(id)arg1;
- (id)hf_valueBeforeTriggerValue:(id)arg1;
- (id)hf_programmableSwitchTriggerValueToEventTriggersMap;
- (id)hf_designatedEventTriggerForProgrammableSwitchWithTriggerValue:(id)arg1;
- (id)hf_eventTriggersForTriggerValue:(id)arg1;
- (id)hf_eventTriggers;
- (id)hf_home;
- (id)hf_programmableSwitchValidValueSet;
- (_Bool)hf_shouldCaptureInActionSets;
- (long long)hf_sortPriority;
- (id)hf_associatedCharacteristicType;
- (id)hf_defaultValue;
- (_Bool)hf_isReadable;
- (_Bool)hf_isWritable;
- (id)hf_characteristicTypeDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@end
