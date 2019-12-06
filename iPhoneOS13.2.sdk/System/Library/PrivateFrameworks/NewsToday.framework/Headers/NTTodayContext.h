//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/FCNetworkReachabilityObserving-Protocol.h>
#import <NewsToday/NTTodayContext-Protocol.h>

@class FCAsyncSerialQueue, NTSourceAvailabilityManager;
@protocol FCContentContext, NTReadablePrivateDataStorage, NTTodayResultsSource, NTWritablePrivateDataStorage, OS_dispatch_queue;

@interface NTTodayContext : NSObject <FCNetworkReachabilityObserving, NTTodayContext>
{
    id /* CDUnknownBlockType */ _newResultsHandler;
    id <FCContentContext> _contentContext;
    id /* CDUnknownBlockType */ _sessionProvider;
    id <NTReadablePrivateDataStorage> _readablePrivateDataStorage;
    id <NTWritablePrivateDataStorage> _writablePrivateDataStorage;
    NTSourceAvailabilityManager *_sourceAvailabilityManager;
    id <NTTodayResultsSource> _todayResultsSource;
    NSObject<OS_dispatch_queue> *_accessQueue;
    FCAsyncSerialQueue *_fetchQueue;
}

@property(readonly, nonatomic) FCAsyncSerialQueue *fetchQueue; // @synthesize fetchQueue=_fetchQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(retain, nonatomic) id <NTTodayResultsSource> todayResultsSource; // @synthesize todayResultsSource=_todayResultsSource;
@property(retain, nonatomic) NTSourceAvailabilityManager *sourceAvailabilityManager; // @synthesize sourceAvailabilityManager=_sourceAvailabilityManager;
@property(retain, nonatomic) id <NTWritablePrivateDataStorage> writablePrivateDataStorage; // @synthesize writablePrivateDataStorage=_writablePrivateDataStorage;
@property(retain, nonatomic) id <NTReadablePrivateDataStorage> readablePrivateDataStorage; // @synthesize readablePrivateDataStorage=_readablePrivateDataStorage;
@property(copy, nonatomic) id /* CDUnknownBlockType */ sessionProvider; // @synthesize sessionProvider=_sessionProvider;
@property(retain, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(copy, nonatomic) id /* CDUnknownBlockType */ newResultsHandler; // @synthesize newResultsHandler=_newResultsHandler;
// - (void).cxx_destruct;
- (void)_setupTodayResultsSource;
- (void)userDidReadHeadlineWithAnalyticsElement:(id)arg1 atDate:(id)arg2;
- (void)userDidSeeHeadlinesWithAnalyticsElements:(id)arg1 atDate:(id)arg2;
- (void)fetchLatestResultsWithOperationInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)networkReachabilityDidChange:(id)arg1;
- (id)initWithContentHostDirectory:(id)arg1 processVariant:(NSUInteger)arg2 accessQueue:(id)arg3 fetchQueue:(id)arg4 sessionProvider:(CDUnknownBlockType)arg5;
- (id)initWithContentContext:(id)arg1 processVariant:(NSUInteger)arg2 accessQueue:(id)arg3 fetchQueue:(id)arg4 sessionProvider:(CDUnknownBlockType)arg5;
- (id)init;

@end

