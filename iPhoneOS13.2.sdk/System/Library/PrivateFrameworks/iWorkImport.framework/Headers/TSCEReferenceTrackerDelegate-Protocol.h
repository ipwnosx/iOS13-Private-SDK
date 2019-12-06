//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, TSCEReferenceTracker, TSCETrackedReference;

@protocol TSCEReferenceTrackerDelegate <NSObject>
- (void)trackedReferenceWasDeleted:(TSCETrackedReference *)arg1 fromOwnerUID:(const UUIDData_5fbc143e )arg2;
// - (NSArray *)cellRangeWasInserted:(const struct TSCERangeRef )arg1;
- (BOOL)shouldRewriteOnTableIDReassignment;
- (BOOL)shouldRewriteOnTranspose;
- (BOOL)shouldRewriteOnCellMerge;
- (BOOL)shouldRewriteOnTectonicShift;
- (BOOL)shouldRewriteOnRangeMove;
- (BOOL)shouldRewriteOnSort;
- (void)referencedCellWasModified:(TSCETrackedReference *)arg1;

@optional
- (void)endOfEvaluationWritePhase;
- (void)referenceTrackerDidUpdateReferences:(TSCEReferenceTracker *)arg1;
- (void)updateTrackedHeaders:(const UUIDData_5fbc143e )arg1;
@end

