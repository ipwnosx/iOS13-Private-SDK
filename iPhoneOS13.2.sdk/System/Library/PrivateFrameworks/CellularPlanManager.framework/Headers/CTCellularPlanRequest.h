//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSData, NSDictionary, NSError, NSMutableData, NSMutableURLRequest, NSURLConnection, NSURLResponse;

@interface CTCellularPlanRequest : NSObject <NSURLConnectionDataDelegate>
{
    int nextConnectionTypeIndex;
    NSArray *_responseCookies;
    NSArray *_requestCookies;
    NSDictionary *_internetSettings;
    NSDictionary *_bootstrapSettings;
    NSMutableData *_receivedData;
    NSMutableURLRequest *_request;
    NSURLResponse *_response;
    NSError *_error;
//    struct dispatch_queue_s _queue;
    id /* CDUnknownBlockType */ _completionBlock;
    NSURLConnection *_connection;
}

+ (void)setBootstrapConnectionSettings:(id)arg1;
+ (void)setInternetConnectionSettings:(id)arg1;
+ (void)setRequestUrls:(id)arg1;
+ (void)initialize;
+ (BOOL)isRetriableErrorCode:(long long)arg1;
+ (id)connectionSettingsForServiceType:(long long)arg1;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionBlock; // @synthesize completionBlock=_completionBlock;
// property(nonatomic) struct dispatch_queue_s queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
- (void)dealloc;
- (void)cancel;
- (void)connectionDidFinishLoading:(id)arg1;
@property(nonatomic) NSData *serializedCookies;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
//  (void)startRequestWithReplyQueue:(struct dispatch_queue_s )arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startRequestWithNextConnectionTypeOrFail;
- (BOOL)_isRetryableError:(id)arg1;
- (id)_connectionSettingsForNextConnectionType;
- (BOOL)_canTryAnotherConnectionType;
- (void)_callback;
- (id)initJsonPostWithUrl:(id)arg1 jsonData:(id)arg2 internetSettings:(id)arg3 bootstrapSettings:(id)arg4;
- (id)initJsonPostWithUrl:(id)arg1 jsonData:(id)arg2;
- (id)initPostWithUrl:(id)arg1;
- (id)initGetWithUrl:(id)arg1;
- (id)initWithUrl:(id)arg1 httpMethod:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4;
- (id)_initWithUrl:(id)arg1 httpMethod:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4 internetSettings:(id)arg5 bootstrapSettings:(id)arg6;

@end

