//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/BSDescriptionProviding-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface RBAssertionTransientState : NSObject <NSCopying, BSDescriptionProviding>
{
    NSMutableDictionary *_cpuUsageViolationPoliciesByRole;
    NSMutableSet *_tags;
}

@property(readonly, nonatomic) NSSet *tags; // @synthesize tags=_tags;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)unionState:(id)arg1;
- (void)addTag:(id)arg1;
- (void)setMaxCPUUsageViolationPolicy:(NSUInteger)arg1 forRole:(unsigned char)arg2;
- (NSUInteger)maxCPUUsageViolationPolicyForRole:(unsigned char)arg1;

@end

