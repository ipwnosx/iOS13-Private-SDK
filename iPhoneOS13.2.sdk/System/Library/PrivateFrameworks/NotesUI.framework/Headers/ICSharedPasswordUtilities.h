//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICSharedPasswordUtilities : NSObject
{
    id _displayedSheet;
}

+ (id)createNoteFromNote:(id)arg1 isPasswordProtected:(BOOL)arg2 removingOriginalNote:(BOOL)arg3;
+ (void)resetAllSharedPasswords;
+ (void)resetPasswordForAccount:(id)arg1;
+ (void)updateAllNotesWithOldPassword:(id)arg1 toAccountPassword:(id)arg2 fromAccount:(id)arg3;
+ (void)resetTimeoutTimer;
+ (id)nonDeletedLockedNotesFromNotes:(id)arg1;
+ (id)preferredHintAccount;
+ (id)passwordCapableAccounts;
+ (BOOL)hasMultiplePasswordCapableAccounts;
+ (BOOL)passwordCapableAccountExists;
+ (id)defaultAccountForPasswordProtectedNotes;
+ (BOOL)setPassword:(id)arg1 hint:(id)arg2 oldPassword:(id)arg3 forAccount:(id)arg4;
+ (BOOL)setPassword:(id)arg1 hint:(id)arg2 forAccount:(id)arg3;
+ (BOOL)isDefaultAccountForPasswordNotesiCloudAccount;
+ (BOOL)isDefaultAccountForPasswordNotesLocalAccount;
+ (BOOL)hasAnyAccountWithPassword;
+ (id)accountWithPassword:(id)arg1;
+ (BOOL)isPassword:(id)arg1 correctForAccount:(id)arg2;
+ (BOOL)isPassword:(id)arg1 correctForNote:(id)arg2;
+ (BOOL)authenticateWithPassword:(id)arg1 forNote:(id)arg2;
+ (BOOL)authenticateWithPassword:(id)arg1 forAccount:(id)arg2;
+ (BOOL)isAuthenticatedForDefaultAccount;
+ (BOOL)isAuthenticatedForNote:(id)arg1;
+ (BOOL)isAuthenticatedForAccount:(id)arg1;
+ (void)lockAllNotes;
+ (BOOL)unlockedNotesOrKeysExist;
+ (BOOL)isPasswordSetForAccount:(id)arg1;
+ (BOOL)hasSameCryptoKeyForNote:(id)arg1 andAccount:(id)arg2;
+ (BOOL)accountPasswordExists;
+ (void)showFirstTimePasswordProtectNoteAlertForDisplayWindow:(UIWindow )arg1;
+ (void)showFirstTimePasswordProtectNoteAlertIfNecessaryForDisplayWindow:(UIWindow )arg1;
+ (id)passwordChangeCountUserDefaultsKeyAsReset:(BOOL)arg1;
+ (void)clearRecentPasswordChangeCountAsReset:(BOOL)arg1;
+ (void)incrementRecentPasswordChangeCountAsReset:(BOOL)arg1;
+ (long long)recentPasswordChangeCountAsReset:(BOOL)arg1;
@property(retain, nonatomic) id displayedSheet; // @synthesize displayedSheet=_displayedSheet;
// - (void).cxx_destruct;
- (void)showPasswordEntrySheetWithIntent:(NSUInteger)arg1 note:(id)arg2 displayWindow:(UIWindow )arg3 failedAttemptHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)showPasswordSetUpSheetForAccount:(id)arg1 displayWindow:(UIWindow )arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateUsingAlternateMethodForDeletingNotes:(id)arg1 displayWindow:(UIWindow )arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticatePasswordForDeletingNotes:(id)arg1 displayWindow:(UIWindow )arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateForDeletingNotes:(id)arg1 displayWindow:(UIWindow )arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateIfNecessaryForDeletingNotes:(id)arg1 displayWindow:(UIWindow )arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_recursivelyAuthenticateForNotes:(id)arg1 intent:(NSUInteger)arg2 displayWindow:(UIWindow )arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)authenticateForNotes:(id)arg1 intent:(NSUInteger)arg2 displayWindow:(UIWindow )arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_authenticateForNote:(id)arg1 intent:(NSUInteger)arg2 displayWindow:(UIWindow )arg3 failedAttemptHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)authenticateForNote:(id)arg1 intent:(NSUInteger)arg2 displayWindow:(UIWindow )arg3 failedAttemptHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)cryptorCachedKeysDidEmpty:(id)arg1;
- (void)dealloc;
- (id)init;

@end

