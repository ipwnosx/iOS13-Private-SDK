//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSError, NSString;

@protocol SUAutoInstallOperationClientHandler <NSObject>
- (void)_noteAutoInstallOperationPasscodePolicyChanged:(NSUInteger)arg1;
- (void)_noteAutoInstallOperationIsReadyToInstall:(void (^)(BOOL, NSError *))arg1;
- (void)_noteAutoInstallOperationDidConsent;
- (void)_noteAutoInstallOperationDidExpireWithError:(NSError *)arg1;
- (void)_noteAutoInstallOperationWasCancelled;
- (NSString *)uniqueIdentifier;
@end

