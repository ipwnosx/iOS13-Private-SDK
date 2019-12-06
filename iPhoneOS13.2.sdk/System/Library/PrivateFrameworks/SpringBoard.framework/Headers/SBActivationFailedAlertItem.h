//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@interface SBActivationFailedAlertItem : SBAlertItem
{
    BOOL _showRetryButton;
    BOOL _showSupportNumber;
    long long _slot;
}

- (BOOL)suppressForKeynote;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)performUnlockAction;
- (id)initWithFailureCount:(int)arg1 slot:(long long)arg2;

@end

