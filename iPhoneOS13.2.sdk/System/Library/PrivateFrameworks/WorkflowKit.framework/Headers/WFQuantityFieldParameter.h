//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFNumberFieldParameter.h>

@class NSArray;

@interface WFQuantityFieldParameter : WFNumberFieldParameter
{
    NSArray *_possibleUnits;
}

+ (BOOL)defaultAllowsNegativeNumbers;
+ (BOOL)defaultAllowsDecimalNumbers;
@property(copy, nonatomic) NSArray *possibleUnits; // @synthesize possibleUnits=_possibleUnits;
// - (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(NSUInteger)arg3;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end

