//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/WFOAuth2Account.h>

@class NSString;

@interface WFSlackAccount : WFOAuth2Account
{
    NSString *_username;
    NSString *_teamName;
}

+ (BOOL)allowsMultipleAccounts;
+ (id)scopes;
+ (id)redirectURI;
+ (id)clientSecret;
+ (id)clientID;
+ (id)sessionManager;
+ (id)localizedServiceName;
+ (id)serviceID;
@property(copy, nonatomic) NSString *teamName; // @synthesize teamName=_teamName;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
// - (void).cxx_destruct;
- (void)refreshWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)localizedName;

@end

