//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMPublicUserInfo, EDAMUser, EDAMUserUrls, NSNumber, NSString;

@interface EDAMAuthenticationResult : FATObject
{
    NSNumber *_currentTime;
    NSString *_authenticationToken;
    NSNumber *_expiration;
    EDAMUser *_user;
    EDAMPublicUserInfo *_publicUserInfo;
    NSString *_noteStoreUrl;
    NSString *_webApiUrlPrefix;
    NSNumber *_secondFactorRequired;
    NSString *_secondFactorDeliveryHint;
    EDAMUserUrls *_urls;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) EDAMUserUrls *urls; // @synthesize urls=_urls;
@property(retain, nonatomic) NSString *secondFactorDeliveryHint; // @synthesize secondFactorDeliveryHint=_secondFactorDeliveryHint;
@property(retain, nonatomic) NSNumber *secondFactorRequired; // @synthesize secondFactorRequired=_secondFactorRequired;
@property(retain, nonatomic) NSString *webApiUrlPrefix; // @synthesize webApiUrlPrefix=_webApiUrlPrefix;
@property(retain, nonatomic) NSString *noteStoreUrl; // @synthesize noteStoreUrl=_noteStoreUrl;
@property(retain, nonatomic) EDAMPublicUserInfo *publicUserInfo; // @synthesize publicUserInfo=_publicUserInfo;
@property(retain, nonatomic) EDAMUser *user; // @synthesize user=_user;
@property(retain, nonatomic) NSNumber *expiration; // @synthesize expiration=_expiration;
@property(retain, nonatomic) NSString *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(retain, nonatomic) NSNumber *currentTime; // @synthesize currentTime=_currentTime;
// - (void).cxx_destruct;

@end

