//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray, NSDictionary;

@interface FCCKPrivateFetchRecordZonesOperation : FCCKPrivateDatabaseOperation
{
    NSArray *_recordZoneIDs;
    id /* CDUnknownBlockType */ _fetchRecordZonesCompletionBlock;
    NSDictionary *_resultRecordZonesByZoneID;
}

@property(retain, nonatomic) NSDictionary *resultRecordZonesByZoneID; // @synthesize resultRecordZonesByZoneID=_resultRecordZonesByZoneID;
@property(copy, nonatomic) id /* CDUnknownBlockType */ fetchRecordZonesCompletionBlock; // @synthesize fetchRecordZonesCompletionBlock=_fetchRecordZonesCompletionBlock;
@property(copy, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
// - (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;

@end

