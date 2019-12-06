//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSError, NSMutableData, NSString, NSURL, NSURLSession;
@protocol OS_dispatch_semaphore;

@interface MCHTTPTransaction : NSObject <NSURLSessionDataDelegate>
{
    NSURL *_requestURL;
    NSString *_method;
    double _timeout;
    NSString *_userAgent;
    NSString *_contentType;
    NSData *_data;
//     struct __SecIdentity _identity;
    NSString *_CMSSignatureHeaderName;
    NSURL *_currentURL;
    NSURL *_permanentlyRedirectedURL;
    BOOL _rememberData;
    NSMutableData *_responseData;
    long long _statusCode;
    NSError *_error;
    NSURLSession *_session;
    NSObject<OS_dispatch_semaphore> *_doneSema;
}

+ (id)transactionWithURL:(id)arg1 method:(id)arg2;
@property(readonly, nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, retain, nonatomic) NSURL *permanentlyRedirectedURL; // @synthesize permanentlyRedirectedURL=_permanentlyRedirectedURL;
@property(readonly, retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *CMSSignatureHeaderName; // @synthesize CMSSignatureHeaderName=_CMSSignatureHeaderName;
@property(readonly, retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSString *method; // @synthesize method=_method;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_requestURL;
// - (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
// - (BOOL)_shouldAllowTrust:(struct __SecTrust )arg1 forHost:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)performCompletionBlock:(CDUnknownBlockType)arg1;
- (void)performSynchronously;
- (void)_beginTransaction;
- (void)dealloc;
- (id)initWithURL:(id)arg1 method:(id)arg2;
// - (void)setIdentity:(struct __SecIdentity )arg1;
// - (struct __SecIdentity )copyIdentity;

@end

