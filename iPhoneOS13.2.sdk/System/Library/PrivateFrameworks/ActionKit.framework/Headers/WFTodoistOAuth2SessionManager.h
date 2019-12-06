//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/WFOAuth2SessionManager.h>

#import <ActionKit/WFOAuth2ProviderSessionManager-Protocol.h>
#import <ActionKit/WFOAuth2RevocableSessionManager-Protocol.h>

@interface WFTodoistOAuth2SessionManager : WFOAuth2SessionManager <WFOAuth2ProviderSessionManager, WFOAuth2RevocableSessionManager>
{
}

+ (id)combinedScopeFromScopes:(id)arg1;
- (void)revokeCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithSessionConfiguration:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3;
- (id)initWithClientID:(id)arg1 clientSecret:(id)arg2;

@end

