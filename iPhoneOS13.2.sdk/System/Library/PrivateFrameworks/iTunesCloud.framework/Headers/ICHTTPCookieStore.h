//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ICHTTPCookieStore : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedCookieStore;
// - (void).cxx_destruct;
- (void)_saveCookies:(id)arg1 userIdentifier:(id)arg2;
- (id)_cookieDictionaryForURL:(id)arg1 userIdentifier:(id)arg2;
- (id)_accountForUserIdentifier:(id)arg1;
- (void)removeAllCookies;
- (void)removeCookiesWithProperties:(id)arg1;
- (void)saveGlobalAccountCookies:(id)arg1 forURL:(id)arg2;
- (void)saveCookies:(id)arg1 forURL:(id)arg2 userIdentifier:(id)arg3;
- (void)saveCookies:(id)arg1 forURL:(id)arg2;
- (id)getCookiesHeadersForURL:(id)arg1 userIdentifier:(id)arg2;
- (id)getGlobalAccountCookiesForURL:(id)arg1;
- (id)getCookie:(id)arg1 userIdentifier:(id)arg2;
- (id)getCookiesForUserIdentifier:(id)arg1;
- (id)getCookiesForURL:(id)arg1 userIdentifier:(id)arg2;
- (id)getCookiesForURL:(id)arg1;
- (void)dealloc;
- (id)init;

@end

