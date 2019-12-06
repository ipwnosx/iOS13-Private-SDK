//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteConfiguration/RCOperation.h>

@class NSData, NSDictionary, NSError, NSHTTPURLResponse, NSNumber, NSObject, NSString, NSURL, NSURLSessionTask;
@protocol OS_dispatch_queue;

@interface RCURLFetchOperation : RCOperation
{
    NSURL *_URL;
    NSData *_HTTPBody;
    NSString *_HTTPMethod;
    NSString *_loggingKey;
    NSDictionary *_additionalRequestHTTPHeaders;
    id /* CDUnknownBlockType */ _configurationCompletionHandler;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSURLSessionTask *_requestTask;
    NSString *_urlString;
    NSData *_responseData;
    NSString *_requestUUID;
    double _taskStartTime;
    NSDictionary *_timingData;
    NSString *_responseMIMEType;
    NSHTTPURLResponse *_httpResponse;
    NSUInteger _responseSize;
    NSError *_error;
    NSNumber *_maxAge;
}

+ (id)sharedURLSession;
@property(retain, nonatomic) NSNumber *maxAge; // @synthesize maxAge=_maxAge;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) NSUInteger responseSize; // @synthesize responseSize=_responseSize;
@property(retain, nonatomic) NSHTTPURLResponse *httpResponse; // @synthesize httpResponse=_httpResponse;
@property(retain, nonatomic) NSString *responseMIMEType; // @synthesize responseMIMEType=_responseMIMEType;
@property(retain, nonatomic) NSDictionary *timingData; // @synthesize timingData=_timingData;
@property(nonatomic) double taskStartTime; // @synthesize taskStartTime=_taskStartTime;
@property(retain, nonatomic) NSString *requestUUID; // @synthesize requestUUID=_requestUUID;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(retain) NSURLSessionTask *requestTask; // @synthesize requestTask=_requestTask;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(copy, nonatomic) id /* CDUnknownBlockType */ configurationCompletionHandler; // @synthesize configurationCompletionHandler=_configurationCompletionHandler;
@property(copy, nonatomic) NSDictionary *additionalRequestHTTPHeaders; // @synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders;
@property(copy, nonatomic) NSString *loggingKey; // @synthesize loggingKey=_loggingKey;
@property(retain, nonatomic) NSString *HTTPMethod; // @synthesize HTTPMethod=_HTTPMethod;
@property(retain, nonatomic) NSData *HTTPBody; // @synthesize HTTPBody=_HTTPBody;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
// - (void).cxx_destruct;
- (void)resetForRetry;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;
- (void)setRelativePriority:(long long)arg1;

@end

