//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMFMessage, NSMutableArray, NSString;

@interface HMDPendingResponse : HMFObject
{
    HMFMessage *_requestMessage;
    NSString *_originalRequestIdentifier;
    NSUInteger _pendingResponseCount;
    NSUInteger _totalRequestsCount;
    NSMutableArray *_allResponses;
    NSMutableArray *_latestResponses;
    id /* CDUnknownBlockType */ _responseHandler;
    double _creationTime;
}

+ (id)tupleForMessage:(id)arg1 originalRequestIdentifier:(id)arg2 requestCount:(NSUInteger)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
@property(nonatomic) double creationTime; // @synthesize creationTime=_creationTime;
@property(copy, nonatomic) id /* CDUnknownBlockType */ responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) NSMutableArray *latestResponses; // @synthesize latestResponses=_latestResponses;
@property(retain, nonatomic) NSMutableArray *allResponses; // @synthesize allResponses=_allResponses;
@property(nonatomic) NSUInteger totalRequestsCount; // @synthesize totalRequestsCount=_totalRequestsCount;
@property(nonatomic) NSUInteger pendingResponseCount; // @synthesize pendingResponseCount=_pendingResponseCount;
@property(retain, nonatomic) NSString *originalRequestIdentifier; // @synthesize originalRequestIdentifier=_originalRequestIdentifier;
@property(retain, nonatomic) HMFMessage *requestMessage; // @synthesize requestMessage=_requestMessage;
// - (void).cxx_destruct;
- (id)retrieveAndClearLatestResponses;
- (id)retrieveAndClearAllResponses;
- (void)addResponsesToPendingResponse:(id)arg1;
- (void)addToPendingResponses:(id)arg1;
- (id)description;

@end

