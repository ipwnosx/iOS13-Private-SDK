//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServices/AMSMetricsFlushStrategy-Protocol.h>

@class AMSPromise, AMSURLSession, NSString;
@protocol AMSBagProtocol, AMSMetricsDataSource;

__attribute__((visibility("hidden")))
@interface AMSMetricsFigaroFlushTask : AMSTask <AMSMetricsFlushStrategy>
{
    BOOL _cancelled;
    int _requestCount;
    AMSURLSession *_URLSession;
    id <AMSBagProtocol> _bag;
    id <AMSMetricsDataSource> _dataSource;
    long long _maxRequestCount;
    long long _maxBatchSize;
    NSString *_topic;
    AMSPromise *_currentCancellablePromise;
}

@property(nonatomic) int requestCount; // @synthesize requestCount=_requestCount;
@property(retain, nonatomic) AMSPromise *currentCancellablePromise; // @synthesize currentCancellablePromise=_currentCancellablePromise;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) long long maxBatchSize; // @synthesize maxBatchSize=_maxBatchSize;
@property(nonatomic) long long maxRequestCount; // @synthesize maxRequestCount=_maxRequestCount;
@property(retain, nonatomic) id <AMSMetricsDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(readonly, nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;
// - (void).cxx_destruct;
- (BOOL)_shouldClearEventsDespiteError:(id)arg1 result:(id)arg2;
- (id)_postBatch:(id)arg1 error:(id )arg2;
- (id)_nextBatchWithConfig:(id)arg1 error:(id )arg2;
- (id)_mescalSignatureWithBodyData:(id)arg1 error:(id )arg2;
- (id)performFlush;
- (void)cancel;
@property(readonly, nonatomic) AMSURLSession *URLSession; // @synthesize URLSession=_URLSession;
- (id)initWithDataSource:(id)arg1 bag:(id)arg2;

@end

