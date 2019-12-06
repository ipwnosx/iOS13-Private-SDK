//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class NSData, NSError, NSInputStream, NSOutputStream, NSRecursiveLock, NSSet, NSString, NSURLConnection, NSURLRequest, NSURLResponse;

@interface ENAFURLConnectionOperation : NSOperation <NSURLConnectionDelegate, NSURLConnectionDataDelegate, NSCoding, NSCopying>
{
    BOOL _cancelled;
    short _state;
    NSURLConnection *_connection;
    NSSet *_runLoopModes;
    NSURLRequest *_request;
    NSURLResponse *_response;
    NSError *_error;
    NSData *_responseData;
    NSString *_responseString;
    long long _totalBytesRead;
    NSOutputStream *_outputStream;
    id /* CDUnknownBlockType */ _uploadProgress;
    id /* CDUnknownBlockType */ _downloadProgress;
    id /* CDUnknownBlockType */ _authenticationAgainstProtectionSpace;
    id /* CDUnknownBlockType */ _authenticationChallenge;
    id /* CDUnknownBlockType */ _cacheResponse;
    id /* CDUnknownBlockType */ _redirectResponse;
    NSRecursiveLock *_lock;
}

+ (id)networkRequestThread;
+ (void)networkRequestThreadEntryPoint:(id)arg1;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ redirectResponse; // @synthesize redirectResponse=_redirectResponse;
@property(copy, nonatomic) id /* CDUnknownBlockType */ cacheResponse; // @synthesize cacheResponse=_cacheResponse;
@property(copy, nonatomic) id /* CDUnknownBlockType */ authenticationChallenge; // @synthesize authenticationChallenge=_authenticationChallenge;
@property(copy, nonatomic) id /* CDUnknownBlockType */ authenticationAgainstProtectionSpace; // @synthesize authenticationAgainstProtectionSpace=_authenticationAgainstProtectionSpace;
@property(copy, nonatomic) id /* CDUnknownBlockType */ downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(copy, nonatomic) id /* CDUnknownBlockType */ uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(nonatomic) long long totalBytesRead; // @synthesize totalBytesRead=_totalBytesRead;
@property(copy, nonatomic) NSString *responseString; // @synthesize responseString=_responseString;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSSet *runLoopModes; // @synthesize runLoopModes=_runLoopModes;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) short state; // @synthesize state=_state;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)cancelConnection;
- (void)cancel;
- (void)finish;
- (void)operationDidStart;
- (void)start;
- (BOOL)isConcurrent;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isReady;
- (void)resume;
- (BOOL)isPaused;
- (void)pause;
- (void)setRedirectResponseBlock:(CDUnknownBlockType)arg1;
- (void)setCacheResponseBlock:(CDUnknownBlockType)arg1;
- (void)setAuthenticationChallengeBlock:(CDUnknownBlockType)arg1;
- (void)setAuthenticationAgainstProtectionSpaceBlock:(CDUnknownBlockType)arg1;
- (void)setDownloadProgressBlock:(CDUnknownBlockType)arg1;
- (void)setUploadProgressBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSInputStream *inputStream; // @dynamic inputStream;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;

@end

