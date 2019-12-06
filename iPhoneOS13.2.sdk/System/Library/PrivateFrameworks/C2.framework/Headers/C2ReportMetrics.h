//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <C2/C2RequestDelegate-Protocol.h>

@class C2MetricOptions, C2RequestOptions, NSMutableURLRequest, NSString, NSURLSessionTask;

@interface C2ReportMetrics : NSObject <C2RequestDelegate>
{
    BOOL _ignoreRequestThrottle;
    NSString *_requestThrottleIdentifier;
    NSUInteger _requestThrottleLimit;
    NSMutableURLRequest *_metricRequest;
    C2RequestOptions *_metricsTransportRequestOptions;
    NSURLSessionTask *_metricTask;
    C2MetricOptions *_metricOptions;
    id /* CDUnknownBlockType */ _testBehavior_tooManyTasksRunning;
    id /* CDUnknownBlockType */ _testBehavior_didCompleteWithError;
}

+ (void)_reportWithOptions:(id)arg1 networkEvent:(id)arg2 genericEvent:(id)arg3 triggers:(int)arg4;
+ (void)reportMetricWithOptions:(id)arg1 genericMetricType:(long long)arg2 eventName:(id)arg3 startTime:(id)arg4 endTime:(id)arg5 attributes:(id)arg6;
+ (void)reportNetworkEvent:(id)arg1 triggers:(int)arg2 originalSessionTask:(id)arg3;
+ (id)gzipEncode:(id)arg1;
+ (id)requestForMetricRequestOptions:(id)arg1 networkEvent:(id)arg2 genericEvent:(id)arg3 triggers:(int)arg4;
@property(copy, nonatomic) id /* CDUnknownBlockType */ testBehavior_didCompleteWithError; // @synthesize testBehavior_didCompleteWithError=_testBehavior_didCompleteWithError;
@property(copy, nonatomic) id /* CDUnknownBlockType */ testBehavior_tooManyTasksRunning; // @synthesize testBehavior_tooManyTasksRunning=_testBehavior_tooManyTasksRunning;
@property(retain, nonatomic) C2MetricOptions *metricOptions; // @synthesize metricOptions=_metricOptions;
@property(retain, nonatomic) NSURLSessionTask *metricTask; // @synthesize metricTask=_metricTask;
@property(retain, nonatomic) C2RequestOptions *metricsTransportRequestOptions; // @synthesize metricsTransportRequestOptions=_metricsTransportRequestOptions;
@property(retain, nonatomic) NSMutableURLRequest *metricRequest; // @synthesize metricRequest=_metricRequest;
@property(nonatomic) NSUInteger requestThrottleLimit; // @synthesize requestThrottleLimit=_requestThrottleLimit;
@property(retain, nonatomic) NSString *requestThrottleIdentifier; // @synthesize requestThrottleIdentifier=_requestThrottleIdentifier;
@property(nonatomic) BOOL ignoreRequestThrottle; // @synthesize ignoreRequestThrottle=_ignoreRequestThrottle;
// - (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(BOOL)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;
- (void)send;
- (id)initWithMetricRequest:(id)arg1 metricRequestOptions:(id)arg2 ignoreRequestThrottle:(BOOL)arg3 requestThrottleIdentifier:(id)arg4 requestThrottleLimit:(NSUInteger)arg5;

@end

