//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSData, NSError, NSString;

@protocol MCProfileConnectionXPCProtocol 
- (void)doMCICDidRequestCurrentPasscodeWithCompletion:(void (^)(_Bool, NSString *, NSError *))arg1;
- (void)doMCICDidRequestShowUserWarnings:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)doMCICDidFinishPreflightWithError:(NSError *)arg1 completion:(void (^)(NSArray *, _Bool, unsigned long long, NSError *))arg2;
- (void)doMCICDidRequestMAIDSignIn:(NSString *)arg1 personaID:(NSString *)arg2 completion:(void (^)(_Bool, NSError *, _Bool))arg3;
- (void)doMCICDidRequestUserInput:(NSArray *)arg1 completion:(void (^)(NSArray *, _Bool, unsigned long long, NSError *))arg2;
- (void)doMCICDidFinishInstallationWithIdentifier:(NSString *)arg1 error:(NSError *)arg2 completion:(void (^)(NSError *))arg3;
- (void)doMCICDidBeginInstallingNextProfileData:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (void)doMCICDidUpdateStatus:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
@end
