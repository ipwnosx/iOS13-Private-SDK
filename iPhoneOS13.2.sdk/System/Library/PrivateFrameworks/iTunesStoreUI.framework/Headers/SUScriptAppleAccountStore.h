//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class ACAccountStore, NSString, SUScriptAppleAccount;

@interface SUScriptAppleAccountStore : SUScriptObject
{
    ACAccountStore *_accountStore;
    NSString *_effectiveBundleID;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (id)_accountStore;
- (void)_accountStoreChangeNotification:(id)arg1;
@property(readonly) long long renewResultRenewed;
@property(readonly) long long renewResultRejected;
@property(readonly) long long renewResultFailed;
@property(readonly) NSString *accountTypeIdentifierTwitter;
@property(readonly) NSString *accountTypeIdentifierSinaWeibo;
@property(readonly) NSString *accountTypeIdentifierFacebook;
@property(readonly) NSString *accessPurposeWrite;
@property(readonly) NSString *accessPurposeReadWrite;
@property(readonly) NSString *accessPurposeRead;
@property(readonly) NSString *effectiveBundleID;
@property(readonly) SUScriptAppleAccount *primaryAppleAccount;
@property(readonly) SUScriptAppleAccount *activeStoreAccount;
- (id)_className;
- (void)requestAccessWithInfo:(id)arg1 completionHandler:(id)arg2;
- (void)renewCredentialsForAccount:(id)arg1 completionHandler:(id)arg2;
- (id)makeClientAccessInfoWithAccountType:(id)arg1;
- (id)accountTypeWithIdentifier:(id)arg1;
- (id)accountsWithAccountType:(id)arg1;
- (void)dealloc;
- (id)init;

@end

