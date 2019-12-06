//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSURL, NSURLSession;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUReachabilityMonitor : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate>
{
    int _downloadStatus;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSURLSession *_urlSession;
    id /* CDUnknownBlockType */ _completionHandler;
    NSURL *_destinationURL;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _timeout;
}

@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
// - (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)invalidate;
- (void)_complete:(id)arg1;
- (void)_startDownload;
- (void)_activate;
- (void)activate;
- (id)init;

@end

