//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MCProfile, MCProfileConnection, NSArray, NSError, NSString;

@protocol MCInteractionDelegate <NSObject>
- (void)profileConnection:(MCProfileConnection *)arg1 didShowUserWarnings:(NSArray *)arg2;
- (void)profileConnectionDidRequestCurrentPasscode:(MCProfileConnection *)arg1;
- (void)profileConnection:(MCProfileConnection *)arg1 didFinishPreflightWithError:(NSError *)arg2;
- (void)profileConnection:(MCProfileConnection *)arg1 didFinishInstallationWithIdentifier:(NSString *)arg2 error:(NSError *)arg3;
- (void)profileConnection:(MCProfileConnection *)arg1 didRequestMAIDSignIn:(NSString *)arg2 personaID:(NSString *)arg3;
- (void)profileConnection:(MCProfileConnection *)arg1 didRequestUserInput:(NSArray *)arg2;

@optional
- (void)profileConnection:(MCProfileConnection *)arg1 didBeginInstallingNextProfile:(MCProfile *)arg2;
- (void)profileConnection:(MCProfileConnection *)arg1 didUpdateStatus:(NSString *)arg2;
@end

