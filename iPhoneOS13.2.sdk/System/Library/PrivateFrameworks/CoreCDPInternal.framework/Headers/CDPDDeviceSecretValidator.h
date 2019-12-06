//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPRemoteDeviceSecretValidatorProtocol-Protocol.h>

@class CDPContext, CDPDevice, NSMutableDictionary, NSMutableSet;
@protocol CDPDDeviceSecretValidatorDelegate;

@interface CDPDDeviceSecretValidator : NSObject <CDPRemoteDeviceSecretValidatorProtocol>
{
    BOOL _isAttemptingRecovery;
    NSUInteger _failedAttempts;
    NSMutableDictionary *_failedSecrets;
    NSMutableSet *_failedRecoveryKeys;
    NSMutableSet *_failedSingleICSCs;
    NSMutableDictionary *_recoveryErrors;
    BOOL _depletedRemainingAttempts;
    CDPContext *_context;
    CDPDevice *_currentDevice;
    BOOL _isUsingMultipleICSC;
    NSUInteger supportedEscapeOfferMask;
    id /* CDUnknownBlockType */ _validSecretHandler;
    id <CDPDDeviceSecretValidatorDelegate> _delegate;
}

@property(nonatomic) __weak id <CDPDDeviceSecretValidatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) id /* CDUnknownBlockType */ validSecretHandler; // @synthesize validSecretHandler=_validSecretHandler;
@property(nonatomic) BOOL isUsingMultipleICSC; // @synthesize isUsingMultipleICSC=_isUsingMultipleICSC;
@property(nonatomic) NSUInteger supportedEscapeOfferMask; // @synthesize supportedEscapeOfferMask;
// - (void).cxx_destruct;
- (NSUInteger)failedAttempts;
- (BOOL)isAttemptingRecovery;
- (BOOL)_isInvalidICSCError:(id)arg1;
- (void)approveFromAnotherDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)supportedEscapeOfferMaskCompletion:(CDUnknownBlockType)arg1;
- (void)cancelApproveFromAnotherDevice;
- (void)resetAccountCDPState;
- (void)_performSingleiCSCRecoveryWithSecret:(id)arg1 type:(NSUInteger)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleMultiCSCRecoveryResults:(id)arg1 clique:(id)arg2 type:(NSUInteger)arg3 secret:(id)arg4 device:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (BOOL)_isFailedSecret:(id)arg1 forDevice:(id)arg2;
- (id)_failedSingleICSCs;
- (id)_failedSecretsForDevice:(id)arg1;
- (id)_handleMultiCSCRecoveryFailureForDevice:(id)arg1 recoveryError:(id)arg2 secret:(id)arg3;
- (void)_handleDelegateValidationError:(id)arg1;
- (void)cancelValidationWithError:(id)arg1;
- (void)_handleRecoveryFailureForFinalDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)validateSecret:(id)arg1 devices:(id)arg2 type:(NSUInteger)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)validateRecoveryKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_attemptToRecoverWithRecoveryKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_attemptToRecoverDevice:(id)arg1 withSecret:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;
- (id)init;

@end

