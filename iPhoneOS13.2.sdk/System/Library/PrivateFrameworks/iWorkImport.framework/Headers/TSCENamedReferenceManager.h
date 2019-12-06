//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSCEReferenceTrackerDelegate-Protocol.h>

@class NSObject, NSString, TSCECalculationEngine, TSCENamedReferenceTrie, TSCEReferenceTracker;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSCENamedReferenceManager : TSPObject <TSCEReferenceTrackerDelegate>
{
    TSCENamedReferenceTrie *_names;
//    struct unordered_map<TSU::UUIDData<TSP::UUIDData>, TSUPointerKeyDictionary *, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, TSUPointerKeyDictionary *>>> _stringsByTrackedReferenceByTable;
    NSObject<OS_dispatch_queue> *_nrmQueue;
    TSCEReferenceTracker *_referenceTracker;
    TSCEReferenceTracker *_weakReferenceTracker;
    TSCECalculationEngine *_calcEngine;
    BOOL _markIndirectsDirtyInWritePhase;
}

@property __weak TSCECalculationEngine *calcEngine; // @synthesize calcEngine=_calcEngine;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)referenceTrackerDidUpdateReferences:(id)arg1;
- (void)trackedReferenceWasDeleted:(id)arg1 fromOwnerUID:(const UUIDData_5fbc143e )arg2;
//  (id)cellRangeWasInserted:(const struct TSCERangeRef )arg1;
- (BOOL)shouldRewriteOnTableIDReassignment;
- (BOOL)shouldRewriteOnTranspose;
- (BOOL)shouldRewriteOnCellMerge;
- (BOOL)shouldRewriteOnTectonicShift;
- (BOOL)shouldRewriteOnRangeMove;
- (BOOL)shouldRewriteOnSort;
- (void)referencedCellWasModified:(id)arg1;
- (BOOL)trackedReferencesExistForTable:(const UUIDData_5fbc143e )arg1;
- (void)updateTrackedHeaders:(const UUIDData_5fbc143e )arg1;
- (id)trackedReferencesExactlyMatchingString:(id)arg1 scopedToTable:(const UUIDData_5fbc143e )arg2;
- (id)trackedReferencesMatchingPrefix:(id)arg1;
- (id)trackedReferencesMatchingPrefix:(id)arg1 scopedToTable:(const UUIDData_5fbc143e )arg2;
- (BOOL)referenceNameIsUnique:(id)arg1 forReference:(const RefTypeHolder_8c6da553 )arg2 contextTable:(const UUIDData_5fbc143e )arg3;
- (id)stringForTrackedReference:(id)arg1 inTable:(const UUIDData_5fbc143e )arg2;
- (id)referenceForTrackedReference:(id)arg1 sticky:(BOOL)arg2;
//  (struct TSCERangeRef)rangeForTrackedReference:(id)arg1 gettingTrackedCell:(struct TSCECellRef )arg2;
- (id)referenceTracker;
- (void)endTrackingNamesInTable:(const UUIDData_5fbc143e )arg1;
//  (void)beginTrackingNameInCell:(struct TSUCellCoord)arg1 ofResolver:(struct TSCETableResolver )arg2 addingTrackedReferencesTo:(id)arg3;
//  (void)beginTrackingNamesInRange:(struct TSCERangeCoordinate)arg1 ofResolver:(struct TSCETableResolver )arg2 addingTrackedReferencesTo:(id)arg3;
//  (id)beginTrackingNamesInTable:(const UUIDData_5fbc143e )arg1 limitedToRange:(struct TSCERangeCoordinate)arg2;
- (void)endOfEvaluationWritePhase;
- (void)headerCellContentWasModified:(id)arg1;
- (UUIDData_5fbc143e)formulaOwnerUID;
- (void)setCalculationEngine:(id)arg1;
- (void)willClose;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2;
- (id)initWithContext:(id)arg1;
- (void)commonInit;

@end

