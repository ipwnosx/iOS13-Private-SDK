//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHPersistentChartMediator.h>

#import <iWorkImport/TSCECalculationEngineRegistration-Protocol.h>
#import <iWorkImport/TSKDocumentObject-Protocol.h>

__attribute__((visibility("hidden")))
@interface TNPersistentChartMediator : TSCHPersistentChartMediator <TSKDocumentObject, TSCECalculationEngineRegistration>
{
}

- (id)objectToArchiveInDependencyTracker;
- (BOOL)registerLast;
- (id)nsFormulaOwnerUID;
- (UUIDData_5fbc143e)formulaOwnerUID;
- (id)formulaOwner;
- (void)unregisterFromCalcEngine:(id)arg1;
- (void)registerWithCalcEngineForDocumentLoad:(id)arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willModify;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;

@end

