//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFMessagePolicy.h>

@interface HMDConfigurationMessagePolicy : HMFMessagePolicy
{
    NSUInteger _operationTypes;
}

+ (id)policyWithOperationTypes:(NSUInteger)arg1;
@property(readonly) NSUInteger operationTypes; // @synthesize operationTypes=_operationTypes;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithOperationTypes:(NSUInteger)arg1;
- (id)init;

@end

