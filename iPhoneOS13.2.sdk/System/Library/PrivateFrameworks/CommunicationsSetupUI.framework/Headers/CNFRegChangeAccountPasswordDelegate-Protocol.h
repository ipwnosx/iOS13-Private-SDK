//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CNFRegChangeAccountPasswordController, NSString;

@protocol CNFRegChangeAccountPasswordDelegate <NSObject>
- (void)changePasswordControllerDidFinish:(CNFRegChangeAccountPasswordController *)arg1 withAppleID:(NSString *)arg2 authID:(NSString *)arg3 authToken:(NSString *)arg4;
- (void)changePasswordControllerDidCancel:(CNFRegChangeAccountPasswordController *)arg1;
@end

