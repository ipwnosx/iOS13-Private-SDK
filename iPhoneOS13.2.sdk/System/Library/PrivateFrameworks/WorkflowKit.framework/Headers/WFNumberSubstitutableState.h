//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@class NSNumber;

@interface WFNumberSubstitutableState : WFVariableSubstitutableParameterState
{
}

+ (id)serializedRepresentationFromNumber:(id)arg1;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
+ (Class)processingValueClass;
@property(readonly, nonatomic) NSNumber *number;
- (id)initWithNumber:(id)arg1;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(CDUnknownBlockType)arg3 valueHandler:(CDUnknownBlockType)arg4;

@end

