//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, NSURLSession;

@interface WFMicrosoftTranslateSessionManager : NSObject
{
    NSURLSession *_session;
    NSString *_apiKey;
    NSURL *_baseURL;
}

@property(readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSString *apiKey; // @synthesize apiKey=_apiKey;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
// - (void).cxx_destruct;
- (void)sendRequestWithURL:(id)arg1 queryParameters:(id)arg2 requestBody:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getAccessTokenWithCompletion:(CDUnknownBlockType)arg1;
- (void)translateStrings:(id)arg1 fromLanguage:(id)arg2 intoLanguage:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)detectLanguagesOfStrings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAvailableLanguages:(CDUnknownBlockType)arg1;
- (id)initWithSession:(id)arg1;
- (id)initWithSessionConfiguration:(id)arg1;
- (id)init;

@end

