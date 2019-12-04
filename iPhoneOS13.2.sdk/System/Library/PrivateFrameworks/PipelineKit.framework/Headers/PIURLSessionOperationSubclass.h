//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PipelineKit/PIOperationSubclass.h>



@class NSString, NSURL, NSURLSession, NSURLSessionConfiguration, NSURLSessionTask;

@interface PIURLSessionOperationSubclass : PIOperationSubclass <NSURLSessionTaskDelegate>
{
    NSURL *_url;
    NSURLSessionConfiguration *_sessionConfiguration;
    NSURLSession *_session;
    NSURLSessionTask *_sessionTask;
}

+ (id)noCacheConfiguration;
+ (id)defaultConfiguration;
@property(retain, nonatomic) NSURLSessionTask *sessionTask; // @synthesize sessionTask=_sessionTask;
@property(readonly, retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)cleanup;
- (void)cancel;
- (void)execute;
- (id)initWithURL:(id)arg1 completionBlock:(id /* block */)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
