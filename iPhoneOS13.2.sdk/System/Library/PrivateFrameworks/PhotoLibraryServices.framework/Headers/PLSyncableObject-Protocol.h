//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CPLRecordChange, PLMomentShare;

@protocol PLSyncableObject <NSObject>
@property(nonatomic) short cloudLocalState;
@property(readonly, retain, nonatomic) id localID;
- (PLMomentShare *)momentShare;
- (CPLRecordChange *)cplFullRecord;
@end

