//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/WFParameterState-Protocol.h>

@interface WFSSHKeyParameterState : NSObject <WFParameterState>
{
}

+ (Class)processingValueClass;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(CDUnknownBlockType)arg3 valueHandler:(CDUnknownBlockType)arg4;
- (id)containedVariables;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;

@end

