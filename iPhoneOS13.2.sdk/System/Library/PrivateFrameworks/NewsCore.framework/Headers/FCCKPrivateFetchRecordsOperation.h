//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray, NSDictionary;

@interface FCCKPrivateFetchRecordsOperation : FCCKPrivateDatabaseOperation
{
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    id /* CDUnknownBlockType */ _fetchRecordsCompletionBlock;
    NSDictionary *_resultRecordsByRecordID;
}

@property(retain, nonatomic) NSDictionary *resultRecordsByRecordID; // @synthesize resultRecordsByRecordID=_resultRecordsByRecordID;
@property(copy, nonatomic) id /* CDUnknownBlockType */ fetchRecordsCompletionBlock; // @synthesize fetchRecordsCompletionBlock=_fetchRecordsCompletionBlock;
@property(copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(copy, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
// - (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;

@end

