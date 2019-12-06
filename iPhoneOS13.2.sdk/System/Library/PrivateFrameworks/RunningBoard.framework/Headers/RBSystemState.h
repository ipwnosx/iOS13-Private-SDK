//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/BSDescriptionProviding-Protocol.h>

@class NSMutableSet, NSSet, NSString;

@interface RBSystemState : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>
{
    NSMutableSet *_tags;
    BOOL _preventLaunch;
    BOOL _preventIdleSleep;
    NSMutableSet *_preventIdleSleepIdentifiers;
    BOOL _throttleBestEffortNetworking;
}

@property(readonly, copy, nonatomic) NSSet *tags; // @synthesize tags=_tags;
@property(readonly, nonatomic) NSSet *preventIdleSleepIdentifiers; // @synthesize preventIdleSleepIdentifiers=_preventIdleSleepIdentifiers;
@property(readonly, nonatomic) BOOL throttleBestEffortNetworking; // @synthesize throttleBestEffortNetworking=_throttleBestEffortNetworking;
@property(readonly, nonatomic) BOOL preventIdleSleep; // @synthesize preventIdleSleep=_preventIdleSleep;
@property(readonly, nonatomic) BOOL preventLaunch; // @synthesize preventLaunch=_preventLaunch;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)_init;

@end

