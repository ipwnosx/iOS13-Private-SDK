//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFStringSubstitutableState.h>

@class NSDecimalNumber, NSNumber;

@interface WFNumberStringSubstitutableState : WFStringSubstitutableState
{
    NSNumber *_legacyNumber;
}

+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
+ (Class)processingValueClass;
@property(retain, nonatomic) NSNumber *legacyNumber; // @synthesize legacyNumber=_legacyNumber;
// - (void).cxx_destruct;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(CDUnknownBlockType)arg3 valueHandler:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) NSDecimalNumber *decimalNumber;
- (id)serializedRepresentation;
- (id)initWithValue:(id)arg1;

@end

