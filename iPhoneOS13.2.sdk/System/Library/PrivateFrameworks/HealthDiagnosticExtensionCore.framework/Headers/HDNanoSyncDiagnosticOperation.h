//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDiagnosticExtensionCore/HDDiagnosticOperation.h>

@interface HDNanoSyncDiagnosticOperation : HDDiagnosticOperation
{
}

- (void)_reportMostRecentMessageErrorsWithDeviceIdentifier:(id)arg1 database:(id)arg2;
- (void)_reportMostRecentMessageDateWithDeviceIdentifier:(id)arg1 description:(id)arg2 field:(id)arg3 predicateSQL:(id)arg4 database:(id)arg5;
- (long long)_countOfMessagesForDeviceIdentifier:(id)arg1 description:(id)arg2 predicateSQL:(id)arg3 date:(id)arg4 database:(id)arg5;
- (void)_reportIDSSummaryForDeviceIdentifier:(id)arg1 database:(id)arg2;
- (id)_reportDetailsForDevice:(id)arg1 database:(id)arg2;
- (void)_reportQuickSwitchSummaryWithDevicesByPairingID:(id)arg1;
- (void)_reportSummaryWithDevices:(id)arg1;
- (id)_sortedPairedDevices;
- (void)_collectNanoSyncMessageDatabase;
- (void)run;
- (id)reportFilename;
- (id)nanoSyncDatabaseURL;

@end

