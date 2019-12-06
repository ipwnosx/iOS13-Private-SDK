//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface ENGCOAuth : NSObject
{
    NSDictionary *__parameters;
    NSString *__method;
    NSURL *__url;
    NSString *_signatureSecret;
    NSDictionary *_OAuthParameters;
}

+ (id)URLRequestForPath:(id)arg1 POSTParameters:(id)arg2 host:(id)arg3 consumerKey:(id)arg4 consumerSecret:(id)arg5 accessToken:(id)arg6 tokenSecret:(id)arg7;
+ (id)URLRequestForPath:(id)arg1 GETParameters:(id)arg2 scheme:(id)arg3 host:(id)arg4 consumerKey:(id)arg5 consumerSecret:(id)arg6 accessToken:(id)arg7 tokenSecret:(id)arg8;
+ (id)URLRequestForPath:(id)arg1 GETParameters:(id)arg2 host:(id)arg3 consumerKey:(id)arg4 consumerSecret:(id)arg5 accessToken:(id)arg6 tokenSecret:(id)arg7;
+ (id)queryStringFromParameters:(id)arg1;
+ (id)timeStamp;
+ (id)nonce;
+ (void)setHTTPShouldHandleCookies:(BOOL)arg1;
+ (void)setTimeStampOffset:(long long)arg1;
+ (void)setUserAgent:(id)arg1;
@property(retain, nonatomic) NSDictionary *OAuthParameters; // @synthesize OAuthParameters=_OAuthParameters;
@property(copy, nonatomic) NSString *signatureSecret; // @synthesize signatureSecret=_signatureSecret;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=__url;
@property(copy, nonatomic) NSString *HTTPMethod; // @synthesize HTTPMethod=__method;
@property(copy, nonatomic) NSDictionary *requestParameters; // @synthesize requestParameters=__parameters;
// - (void).cxx_destruct;
- (id)signatureBase;
- (id)signature;
- (id)authorizationHeader;
- (id)request;
- (id)initWithConsumerKey:(id)arg1 consumerSecret:(id)arg2 accessToken:(id)arg3 tokenSecret:(id)arg4;

@end

