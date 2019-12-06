//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString, PocketAPILogin;

@interface PocketAPI : NSObject
{
    NSString *consumerKey;
    NSString *URLScheme;
    NSOperationQueue *operationQueue;
    PocketAPILogin *currentLogin;
    NSString *userAgent;
}

+ (id)pkt_hashForConsumerKey:(id)arg1 accessToken:(id)arg2;
+ (id)pocketAppURLScheme;
+ (id)sharedAPI;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue;
@property(retain, nonatomic) NSString *consumerKey; // @synthesize consumerKey;
- (id)pkt_deviceOSVersion;
- (id)pkt_deviceName;
- (id)pkt_userAgent;
- (id)pkt_actionDictionaryWithName:(id)arg1 parameters:(id)arg2;
- (void)pkt_migrateAccountToAccessTokenWithUsername:(id)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)pkt_migrateAccountToAccessTokenWithUsername:(id)arg1 password:(id)arg2 delegate:(id)arg3;
- (void)pkt_saveCurrentLoginToDefaults;
- (id)pkt_loadCurrentLoginFromDefaults;
- (void)logout;
- (void)pkt_loggedInWithUsername:(id)arg1 token:(id)arg2;
- (id)pkt_getToken;
@property(readonly, copy, nonatomic) NSString *username;
- (id)methodOperationWithAPIMethod:(id)arg1 forHTTPMethod:(int)arg2 arguments:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)saveOperationWithURL:(id)arg1 title:(id)arg2 tweetID:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)saveOperationWithURL:(id)arg1 title:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)saveOperationWithURL:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)callAPIMethod:(id)arg1 withHTTPMethod:(int)arg2 arguments:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)saveURL:(id)arg1 withTitle:(id)arg2 tweetID:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)saveURL:(id)arg1 withTitle:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)saveURL:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)loginWithHandler:(CDUnknownBlockType)arg1;
- (id)methodOperationWithAPIMethod:(id)arg1 forHTTPMethod:(int)arg2 arguments:(id)arg3 delegate:(id)arg4;
- (id)saveOperationWithURL:(id)arg1 delegate:(id)arg2;
- (id)saveOperationWithURL:(id)arg1 title:(id)arg2 delegate:(id)arg3;
- (id)saveOperationWithURL:(id)arg1 title:(id)arg2 tweetID:(id)arg3 delegate:(id)arg4;
- (void)callAPIMethod:(id)arg1 withHTTPMethod:(int)arg2 arguments:(id)arg3 delegate:(id)arg4;
- (void)saveURL:(id)arg1 withTitle:(id)arg2 tweetID:(id)arg3 delegate:(id)arg4;
- (void)saveURL:(id)arg1 withTitle:(id)arg2 delegate:(id)arg3;
- (void)saveURL:(id)arg1 delegate:(id)arg2;
- (void)loginWithDelegate:(id)arg1;
@property(readonly, nonatomic, getter=isLoggedIn) BOOL loggedIn;
- (NSUInteger)appID;
- (BOOL)handleOpenURL:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSString *URLScheme; // @synthesize URLScheme;
- (id)init;
- (id)pkt_getKeychainValueForKey:(id)arg1 serviceName:(id)arg2;
- (void)pkt_setKeychainValue:(id)arg1 forKey:(id)arg2 serviceName:(id)arg3;
- (id)pkt_getKeychainValueForKey:(id)arg1;
- (void)pkt_setKeychainValue:(id)arg1 forKey:(id)arg2;

@end

