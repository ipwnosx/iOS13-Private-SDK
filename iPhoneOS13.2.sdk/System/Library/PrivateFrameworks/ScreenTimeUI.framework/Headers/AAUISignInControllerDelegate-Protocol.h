//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AAUISignInController, NSError;

@protocol AAUISignInControllerDelegate <UINavigationControllerDelegate>

@optional
- (void)signInControllerDidCancel:(AAUISignInController *)arg1;
- (void)signInController:(AAUISignInController *)arg1 didCompleteWithSuccess:(BOOL)arg2 error:(NSError *)arg3;
@end

