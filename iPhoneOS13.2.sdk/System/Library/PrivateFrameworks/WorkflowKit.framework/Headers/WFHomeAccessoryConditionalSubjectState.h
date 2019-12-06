//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFConditionalSubjectParameterState.h>

@class HMCharacteristic, HMHome, HMService, NSDictionary, NSFormatter, WFHMCharacteristicSubstitutableState, WFHMServiceParameterState;

@interface WFHomeAccessoryConditionalSubjectState : WFConditionalSubjectParameterState
{
    BOOL _negatesValue;
    HMHome *_home;
    HMService *_service;
    HMCharacteristic *_characteristic;
    NSDictionary *_serializedWFHMServiceParameter;
    NSDictionary *_serializedWFHMCharacteristicSubstitutableState;
    WFHMServiceParameterState *_serviceParameterState;
    WFHMCharacteristicSubstitutableState *_characteristicSubstitutableState;
    NSFormatter *_characteristicValueFormatter;
}

+ (id)subjectType;
@property(retain, nonatomic) NSFormatter *characteristicValueFormatter; // @synthesize characteristicValueFormatter=_characteristicValueFormatter;
@property(retain, nonatomic) WFHMCharacteristicSubstitutableState *characteristicSubstitutableState; // @synthesize characteristicSubstitutableState=_characteristicSubstitutableState;
@property(retain, nonatomic) WFHMServiceParameterState *serviceParameterState; // @synthesize serviceParameterState=_serviceParameterState;
@property(retain, nonatomic) NSDictionary *serializedWFHMCharacteristicSubstitutableState; // @synthesize serializedWFHMCharacteristicSubstitutableState=_serializedWFHMCharacteristicSubstitutableState;
@property(retain, nonatomic) NSDictionary *serializedWFHMServiceParameter; // @synthesize serializedWFHMServiceParameter=_serializedWFHMServiceParameter;
@property(readonly, nonatomic) BOOL negatesValue; // @synthesize negatesValue=_negatesValue;
// - (void).cxx_destruct;
- (id)localizedLabelForEnumerationPossibleState:(id)arg1;
- (void)getEnumerationPossibleStatesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)isEnumeration;
- (id)unit;
- (id)stepValue;
- (id)maximumValue;
- (id)minimumValue;
- (id)maximumLength;
- (long long)contentType;
- (void)getContentWithVariableSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
@property(readonly, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property(readonly, nonatomic) HMService *service; // @synthesize service=_service;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)serializedRepresentation;
- (id)initWithService:(id)arg1 characteristic:(id)arg2 homeIdentifier:(id)arg3 negatesValue:(BOOL)arg4;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithSerializedWFHMServiceParameter:(id)arg1 serializedWFHMCharacteristicSubstitutableState:(id)arg2 negatesValue:(BOOL)arg3;

@end

