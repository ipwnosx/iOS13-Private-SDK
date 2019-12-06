//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HelpKit/TPSURLSessionDelegate-Protocol.h>
#import <HelpKit/TPSURLSessionManagerDelegate-Protocol.h>

@class NSIndexSet;

@interface TPSURLSessionHandler : NSObject <TPSURLSessionManagerDelegate, TPSURLSessionDelegate>
{
    BOOL _shouldIgnoreInMemoryCaching;
    NSIndexSet *_excludeCachingDataTypes;
}

+ (id)sharedInstance;
+ (void)setRootViewController:(id)arg1;
@property(retain, nonatomic) NSIndexSet *excludeCachingDataTypes; // @synthesize excludeCachingDataTypes=_excludeCachingDataTypes;
@property(nonatomic) BOOL shouldIgnoreInMemoryCaching; // @synthesize shouldIgnoreInMemoryCaching=_shouldIgnoreInMemoryCaching;
// - (void).cxx_destruct;
- (void)sessionTask:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSessionManagerDidReceiveChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sessionTask:(id)arg1 didCompleteWithError:(id)arg2;
- (BOOL)respectCachingForRequest:(id)arg1;
- (void)sessionTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sessionTask:(id)arg1 didFinishDownloadingToURL:(id)arg2;
- (id)processJSONFormattedDataForCDSError:(id)arg1;
- (BOOL)shouldCacheToDiskForSessionTask:(id)arg1;
- (void)sessionTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSessionManagerRequestCompleted:(id)arg1 sessionTask:(id)arg2;
- (void)URLSessionManagerRequestResumed:(id)arg1 sessionTask:(id)arg2;
- (BOOL)URLSessionManagerShouldCoalesceRequest:(id)arg1;
- (id)URLSessionManagerSessionConfiguration:(id)arg1;
- (id)URLSessionManagerSessionOperationQueue:(id)arg1;
- (id)cacheControllerForDataType:(long long)arg1;
- (id)init;

@end

