//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VSApplicationControllerRequestFactory : NSObject
{
}

+ (id)_logoutSAMLRequestStringWithError:(id )arg1;
+ (id)_attributeQuerySAMLRequestStringWithAttributeNames:(id)arg1 channelID:(id)arg2 authenticationToken:(id)arg3 error:(id )arg4;
+ (id)_authNRequestSAMLStringWithAuthenticationToken:(id)arg1 forced:(BOOL)arg2 error:(id )arg3;
- (id)STBOptOutApplicationControllerRequest;
- (id)logoutApplicationControllerRequestWithAuthenticationToken:(id)arg1;
- (id)accountMetadataApplicationControllerRequestWithAccountMetadataRequest:(id)arg1 authenticationToken:(id)arg2;
- (id)authenticationApplicationControllerRequestWithAuthenticationToken:(id)arg1 forcedAuthentication:(BOOL)arg2;
- (id)silentAuthenticationApplicationControllerRequest;
- (id)silentAuthenticationApplicationControllerRequestWithAuthenticationToken:(id)arg1 forcedAuthentication:(BOOL)arg2;

@end

