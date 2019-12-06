//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCTransfer-Protocol.h>

@class BRCClientZone, BRCItemID, BRCProgress, CKRecord, CKRecordID, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface BRCDownload : NSObject <BRCTransfer>
{
    long long _throttleID;
    NSUInteger _totalSize;
    NSString *_etag;
    BRCItemID *_itemID;
    NSString *_stageID;
    BRCProgress *_progress;
    CKRecord *_record;
    BOOL _progressPublished;
    CKRecordID *_recordID;
    NSUInteger _doneSize;
    BRCClientZone *_clientZone;
}

@property(readonly, nonatomic) BRCClientZone *clientZone; // @synthesize clientZone=_clientZone;
@property(readonly, nonatomic) NSString *stageID; // @synthesize stageID=_stageID;
@property(readonly, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(nonatomic) BOOL progressPublished; // @synthesize progressPublished=_progressPublished;
@property(readonly, nonatomic) BRCProgress *progress; // @synthesize progress=_progress;
@property(nonatomic) NSUInteger doneSize; // @synthesize doneSize=_doneSize;
@property(readonly, nonatomic) NSUInteger totalSize; // @synthesize totalSize=_totalSize;
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
@property(readonly, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(readonly, nonatomic) BRCItemID *itemID; // @synthesize itemID=_itemID;
// - (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 stageID:(id)arg2;
@property(retain, nonatomic) CKRecord *secondaryRecord;
@property(readonly, nonatomic) CKRecordID *secondaryRecordID;
@property(readonly, nonatomic) NSNumber *transferID;
@property(readonly, nonatomic) int kind;

@end

