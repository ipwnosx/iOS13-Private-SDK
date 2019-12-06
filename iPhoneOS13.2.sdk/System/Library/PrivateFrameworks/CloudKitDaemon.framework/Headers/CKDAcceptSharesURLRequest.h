//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDAcceptSharesURLRequest : CKDURLRequest
{
    id /* CDUnknownBlockType */ _shareAcceptedBlock;
    NSArray *_shareMetadatasToAccept;
    NSMutableDictionary *_shareMetadataByRequestID;
}

@property(retain, nonatomic) NSMutableDictionary *shareMetadataByRequestID; // @synthesize shareMetadataByRequestID=_shareMetadataByRequestID;
@property(retain, nonatomic) NSArray *shareMetadatasToAccept; // @synthesize shareMetadatasToAccept=_shareMetadatasToAccept;
@property(copy, nonatomic) id /* CDUnknownBlockType */ shareAcceptedBlock; // @synthesize shareAcceptedBlock=_shareAcceptedBlock;
// - (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithShareMetadatasToAccept:(id)arg1;

@end

