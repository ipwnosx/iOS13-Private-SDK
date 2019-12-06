//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteConfiguration/RCOperation.h>

@class NSDictionary, NSObject, NSURL, RCConfigurationSettings;
@protocol OS_dispatch_queue;

@interface RCEndpointOperation : RCOperation
{
    RCConfigurationSettings *_configurationSettings;
    NSDictionary *_changeTagsByRequestKey;
    NSURL *_endpointURL;
    id /* CDUnknownBlockType */ _configurationCompletionHandler;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSDictionary *_configurationResourcesByRequestKey;
}

@property(retain, nonatomic) NSDictionary *configurationResourcesByRequestKey; // @synthesize configurationResourcesByRequestKey=_configurationResourcesByRequestKey;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(copy, nonatomic) id /* CDUnknownBlockType */ configurationCompletionHandler; // @synthesize configurationCompletionHandler=_configurationCompletionHandler;
@property(retain, nonatomic) NSURL *endpointURL; // @synthesize endpointURL=_endpointURL;
@property(retain, nonatomic) NSDictionary *changeTagsByRequestKey; // @synthesize changeTagsByRequestKey=_changeTagsByRequestKey;
@property(retain, nonatomic) RCConfigurationSettings *configurationSettings; // @synthesize configurationSettings=_configurationSettings;
// - (void).cxx_destruct;
- (void)resetForRetry;
- (BOOL)canRetryWithError:(id)arg1 retryAfter:(id )arg2;
- (NSUInteger)maxRetries;
- (id)_configurationErrorForErrorDicts:(id)arg1;
- (void)_parseEndpointResponse:(id)arg1 configurationSettings:(id)arg2 maxAge:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)requestDataForSettings:(id)arg1;
- (void)_fetchConfigurationWithSettings:(id)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;

@end

