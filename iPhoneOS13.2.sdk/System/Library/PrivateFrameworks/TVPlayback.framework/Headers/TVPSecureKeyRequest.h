//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVPlayback/TVPResourceLoadingRequest.h>

@class NSData, NSDate, NSDictionary, NSNumber, NSString, TVPPlaybackReportingEventCollection;

@interface TVPSecureKeyRequest : TVPResourceLoadingRequest
{
    BOOL _retrievesOfflineKeys;
    NSUInteger _requestID;
    NSData *_certificateData;
    NSData *_contentIdentifierData;
    NSData *_keyRequestData;
    NSDate *_startDate;
    NSNumber *_rentalID;
    NSDictionary *_requestOptions;
    NSUInteger _retryCount;
    NSString *_reportingID;
    TVPPlaybackReportingEventCollection *_eventCollection;
    NSNumber *_requestCompletionTime;
    NSDate *_requestEndDate;
    NSDate *_requestStartDate;
}

@property(copy, nonatomic) NSDate *requestStartDate; // @synthesize requestStartDate=_requestStartDate;
@property(copy, nonatomic) NSDate *requestEndDate; // @synthesize requestEndDate=_requestEndDate;
@property(retain, nonatomic) NSNumber *requestCompletionTime; // @synthesize requestCompletionTime=_requestCompletionTime;
@property(retain, nonatomic) TVPPlaybackReportingEventCollection *eventCollection; // @synthesize eventCollection=_eventCollection;
@property(readonly, nonatomic) NSString *reportingID; // @synthesize reportingID=_reportingID;
@property(nonatomic) NSUInteger retryCount; // @synthesize retryCount=_retryCount;
@property(copy, nonatomic) NSDictionary *requestOptions; // @synthesize requestOptions=_requestOptions;
@property(nonatomic) BOOL retrievesOfflineKeys; // @synthesize retrievesOfflineKeys=_retrievesOfflineKeys;
@property(copy, nonatomic) NSNumber *rentalID; // @synthesize rentalID=_rentalID;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSData *keyRequestData; // @synthesize keyRequestData=_keyRequestData;
@property(copy, nonatomic) NSData *contentIdentifierData; // @synthesize contentIdentifierData=_contentIdentifierData;
@property(copy, nonatomic) NSData *certificateData; // @synthesize certificateData=_certificateData;
@property(readonly, nonatomic) NSUInteger requestID; // @synthesize requestID=_requestID;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL offlineKeyUsageAllowed;
@property(readonly, nonatomic) BOOL isRenewal;
- (void)finishLoadingWithResponseData:(id)arg1 renewalDate:(id)arg2 keyType:(long long)arg3;
- (id)offlineKeyDataForResponseData:(id)arg1 error:(id )arg2;
- (void)loadKeyRequestDataAsynchronouslyWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)loadKeyRequestDataWithError:(id )arg1;
- (id)initWithAssetResourceLoadingRequest:(id)arg1;

@end

