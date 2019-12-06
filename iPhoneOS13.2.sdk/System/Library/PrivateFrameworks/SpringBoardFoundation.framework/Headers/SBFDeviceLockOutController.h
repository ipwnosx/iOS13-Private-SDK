//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>
#import <SpringBoardFoundation/SBFLockOutStatusProvider-Protocol.h>
#import <SpringBoardFoundation/SBFPrivateAuthenticationObserver-Protocol.h>
#import <SpringBoardFoundation/SBFThermalConditionObserver-Protocol.h>

@class NSString, SBFUserAuthenticationController;
@protocol SBFThermalBlockProvider;

@interface SBFDeviceLockOutController : NSObject <BSDescriptionProviding, SBFThermalConditionObserver, SBFPrivateAuthenticationObserver, SBFLockOutStatusProvider>
{
    id <SBFThermalBlockProvider> _thermalProvider;
    BOOL _lockedOutCached;
    NSUInteger _lastBlockedStatus;
    SBFUserAuthenticationController *_authenticationController;
}

@property(nonatomic, getter=_isLockedOutCached, setter=_setLockedOutCached:) BOOL lockedOutCached; // @synthesize lockedOutCached=_lockedOutCached;
@property(retain, nonatomic, getter=_thermalProvider, setter=_setThermalProvider:) id <SBFThermalBlockProvider> thermalProvider; // @synthesize thermalProvider=_thermalProvider;
@property(retain, nonatomic, getter=_authenticationController, setter=_setAuthenticationController:) SBFUserAuthenticationController *authenticationController; // @synthesize authenticationController=_authenticationController;
// - (void).cxx_destruct;
- (void)_noteLockedOutReasonsMayHaveChanged;
- (void)_noteLockedOutStateMayHaveChanged:(BOOL)arg1;
- (void)temporaryBlockStatusChanged;
- (void)thermalBlockStatusChanged:(id)arg1;
- (BOOL)isLockedOut;
- (double)timeIntervalUntilUnblockedSinceReferenceDate;
- (BOOL)isThermallyBlocked;
- (BOOL)isTemporarilyBlocked;
- (BOOL)isPermanentlyBlocked;
- (BOOL)isBlocked;
- (NSUInteger)deviceBlockStatus;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithThermalController:(id)arg1 authenticationController:(id)arg2;

@end

