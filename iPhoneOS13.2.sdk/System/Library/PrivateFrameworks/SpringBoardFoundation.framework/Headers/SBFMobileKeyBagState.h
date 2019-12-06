//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>

@class NSDictionary, NSString;

@interface SBFMobileKeyBagState : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    NSDictionary *_state;
}

// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)publicDescription;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEffectivelyLocked;
@property(readonly, nonatomic) long long escrowCount;
@property(readonly, nonatomic) BOOL recoveryEnabled;
@property(readonly, nonatomic) BOOL recoveryPossible;
@property(readonly, nonatomic) BOOL recoveryRequired;
@property(readonly, nonatomic) BOOL shouldWipe;
@property(readonly, nonatomic) BOOL permanentlyBlocked;
@property(readonly, nonatomic) NSUInteger failedAttemptCount;
@property(readonly, nonatomic) double backOffTime;
@property(readonly, nonatomic) long long lockState;
- (id)init;
- (id)initWithMKBLockStateInfo:(id)arg1;

@end

