//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString, NSURLSessionConfiguration;
@protocol NSURLSessionTaskDelegate;

@interface WebCoreNSURLSession : NSObject
{
//     struct RefPtr<WebCore::PlatformMediaResourceLoader, WTF::DumbPtrTraits<WebCore::PlatformMediaResourceLoader>> _loader;
//     struct RetainPtr<id<NSURLSessionDelegate>> _delegate;
//     struct RetainPtr<NSOperationQueue> _queue;
//     struct RetainPtr<NSString> _sessionDescription;
//     struct HashSet<WTF::RetainPtr<const void *>, WTF::PtrHash<WTF::RetainPtr<const void *>>, WTF::HashTraits<WTF::RetainPtr<const void *>>> _dataTasks;
//     struct HashSet<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin>>, WTF::PtrHash<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin>>>, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin>>>> _origins;
//     struct Lock _dataTasksLock;
    BOOL _invalidated;
    NSUInteger _nextTaskIdentifier;
//     struct OSObjectPtr<NSObject<OS_dispatch_queue>*> _internalQueue;
    int _corsResults;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (BOOL)isKindOfClass:(Class)arg1;
- (id)streamTaskWithNetService:(id)arg1;
- (id)streamTaskWithHostName:(id)arg1 port:(long long)arg2;
- (id)downloadTaskWithResumeData:(id)arg1;
- (id)downloadTaskWithURL:(id)arg1;
- (id)downloadTaskWithRequest:(id)arg1;
- (id)uploadTaskWithStreamedRequest:(id)arg1;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2;
- (id)dataTaskWithURL:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1;
- (void)getAllTasksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getTasksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invalidateAndCancel;
- (void)finishTasksAndInvalidate;
// - (BOOL)wouldTaintOrigin:(const struct SecurityOrigin )arg1;
@property(readonly) BOOL didPassCORSAccessChecks; // @dynamic didPassCORSAccessChecks;
// @property(readonly) struct PlatformMediaResourceLoader loader; // @dynamic loader;
@property(copy) NSString *sessionDescription;
@property(readonly, copy) NSURLSessionConfiguration *configuration; // @dynamic configuration;
@property(readonly, retain) NSOperationQueue *delegateQueue; // @dynamic delegateQueue;
@property(retain) id <NSURLSessionTaskDelegate> delegate; // @dynamic delegate;
- (void)task:(id)arg1 didReceiveResponseFromOrigin:(Ref_4cc64869 )arg2;
- (void)task:(id)arg1 didReceiveCORSAccessCheckResult:(BOOL)arg2;
- (void)addDelegateOperation:(Function_15535652 )arg1;
- (void)taskCompleted:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
// - (id)initWithResourceLoader:(struct PlatformMediaResourceLoader )arg1 delegate:(id)arg2 delegateQueue:(id)arg3;

@end

