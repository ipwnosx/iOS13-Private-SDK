//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSNumber, SBSUnlockOptions;

@protocol SBSLockScreenServiceServerInterface
- (oneway void)setPreventSpuriousScreenUndim:(NSNumber *)arg1;
- (oneway void)setPreventPasscodeLock:(NSNumber *)arg1;
- (oneway void)requestPasscodeUnlockUIWithOptions:(SBSUnlockOptions *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (oneway void)launchEmergencyDialerWithCompletion:(void (^)(NSError *))arg1;
@end

