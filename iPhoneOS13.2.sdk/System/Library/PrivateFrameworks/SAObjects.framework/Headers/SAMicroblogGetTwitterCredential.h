//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAMicroblogGetSocialCredential.h>

@class NSString;

@interface SAMicroblogGetTwitterCredential : SAMicroblogGetSocialCredential
{
}

+ (id)getTwitterCredentialWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getTwitterCredential;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *consumerSecret;
@property(copy, nonatomic) NSString *consumerKey;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

