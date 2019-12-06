//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMBLocalSQLQueryTable, HMBModel, NSArray, NSData, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMBLocalZoneProcessTuple : HMFObject
{
    HMBModel *_previous;
    HMBModel *_update;
    NSUInteger _recordRow;
    NSUInteger _itemRow;
    NSData *_externalID;
    NSData *_externalData;
    NSUUID *_modelSchema;
    NSString *_modelType;
    HMBLocalSQLQueryTable *_queryTable;
    NSArray *_encodedQueryableColumns;
}

@property(readonly, nonatomic) NSArray *encodedQueryableColumns; // @synthesize encodedQueryableColumns=_encodedQueryableColumns;
@property(readonly, nonatomic) HMBLocalSQLQueryTable *queryTable; // @synthesize queryTable=_queryTable;
@property(readonly, nonatomic) NSString *modelType; // @synthesize modelType=_modelType;
@property(readonly, nonatomic) NSUUID *modelSchema; // @synthesize modelSchema=_modelSchema;
@property(readonly, nonatomic) NSData *externalData; // @synthesize externalData=_externalData;
@property(readonly, nonatomic) NSData *externalID; // @synthesize externalID=_externalID;
@property(nonatomic) NSUInteger itemRow; // @synthesize itemRow=_itemRow;
@property(nonatomic) NSUInteger recordRow; // @synthesize recordRow=_recordRow;
@property(readonly, nonatomic) HMBModel *update; // @synthesize update=_update;
@property(readonly, nonatomic) HMBModel *previous; // @synthesize previous=_previous;
// - (void).cxx_destruct;
- (id)initWithPrevious:(id)arg1 update:(id)arg2 recordRow:(NSUInteger)arg3 itemRow:(NSUInteger)arg4 modelSchema:(id)arg5 modelType:(id)arg6 externalID:(id)arg7 externalData:(id)arg8 queryTable:(id)arg9;

@end

