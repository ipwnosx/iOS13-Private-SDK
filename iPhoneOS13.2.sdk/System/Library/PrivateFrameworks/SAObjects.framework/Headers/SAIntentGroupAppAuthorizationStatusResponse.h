//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSDictionary;

@interface SAIntentGroupAppAuthorizationStatusResponse : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)appAuthorizationStatusResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)appAuthorizationStatusResponse;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSDictionary *appAuthorizationStatusMap;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

