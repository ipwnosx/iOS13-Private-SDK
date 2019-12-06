//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFetchOperation.h>

@class FCInterestToken, FCRecordSource, NSArray, NSDictionary;

@interface FCRecordsFetchOperation : FCFetchOperation
{
    FCRecordSource *_recordSource;
    NSArray *_recordIdentifiers;
    NSArray *_ignoreCacheForRecordIDs;
    NSDictionary *_holdTokens;
    FCInterestToken *_fetchToken;
    FCInterestToken *_refreshToken;
}

// - (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)initWithRecordSource:(id)arg1 recordIdentifiers:(id)arg2 ignoreCacheForRecordIDs:(id)arg3;
- (id)initWithRecordSource:(id)arg1 recordIdentifiers:(id)arg2;

@end

