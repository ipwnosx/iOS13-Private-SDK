//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@protocol SBBiometricUnlockBehaviorDelegate;

@protocol SBBiometricUnlockBehavior <BSDescriptionProviding>
@property(nonatomic) __weak id <SBBiometricUnlockBehaviorDelegate> biometricUnlockBehaviorDelegate;
- (void)handleBiometricEvent:(NSUInteger)arg1;
@end

