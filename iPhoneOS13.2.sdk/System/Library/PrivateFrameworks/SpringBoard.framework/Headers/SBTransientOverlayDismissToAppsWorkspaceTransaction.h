//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBMainWorkspaceTransaction.h>

@interface SBTransientOverlayDismissToAppsWorkspaceTransaction : SBMainWorkspaceTransaction
{
}

+ (BOOL)isValidForTransitionRequest:(id)arg1;
- (void)_sendActivationResultWithSuccess:(BOOL)arg1;
- (void)_didComplete;
- (void)_begin;

@end

