//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDFetchRecordsOperation, CKDModifyRecordsOperation, CKRecord, CKRecordID, NSArray;

__attribute__((visibility("hidden")))
@interface CKDUpdateMissingAssetStatusOperation : CKDDatabaseOperation
{
    BOOL _recovered;
    BOOL _isPackage;
    CKRecordID *_repairRecordID;
    NSArray *_assetSizes;
    NSArray *_assetPutReceipts;
    CKDFetchRecordsOperation *_fetchOperation;
    CKDModifyRecordsOperation *_modifyOperation;
    CKRecord *_record;
}

@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
@property(retain, nonatomic) CKDModifyRecordsOperation *modifyOperation; // @synthesize modifyOperation=_modifyOperation;
@property(retain, nonatomic) CKDFetchRecordsOperation *fetchOperation; // @synthesize fetchOperation=_fetchOperation;
@property(retain, nonatomic) NSArray *assetPutReceipts; // @synthesize assetPutReceipts=_assetPutReceipts;
@property(retain, nonatomic) NSArray *assetSizes; // @synthesize assetSizes=_assetSizes;
@property(nonatomic) BOOL isPackage; // @synthesize isPackage=_isPackage;
@property(nonatomic) BOOL recovered; // @synthesize recovered=_recovered;
@property(retain, nonatomic) CKRecordID *repairRecordID; // @synthesize repairRecordID=_repairRecordID;
// - (void).cxx_destruct;
- (void)main;
- (void)_updateMissingAssetStatus;
- (id)nameForState:(NSUInteger)arg1;
- (BOOL)makeStateTransition;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

