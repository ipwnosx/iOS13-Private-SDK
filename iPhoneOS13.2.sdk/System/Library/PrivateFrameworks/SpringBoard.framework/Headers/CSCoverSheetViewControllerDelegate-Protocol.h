//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CSCoverSheetViewController, NSString, SBLockScreenUnlockRequest;

@protocol CSCoverSheetViewControllerDelegate <NSObject>
- (void)coverSheetViewController:(CSCoverSheetViewController *)arg1 unlockWithRequest:(SBLockScreenUnlockRequest *)arg2 completion:(void (^)(BOOL))arg3;
- (void)coverSheetViewController:(CSCoverSheetViewController *)arg1 requestsTouchIDDisabled:(BOOL)arg2 forReason:(NSString *)arg3;
- (void)coverSheetViewControllerIrisPlayingDidFinish:(CSCoverSheetViewController *)arg1;
@end

