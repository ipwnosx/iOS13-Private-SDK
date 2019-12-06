//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCFSSchedulerBase.h>

#import <CloudDocsDaemon/BRCModule-Protocol.h>
#import <CloudDocsDaemon/BRCSuspendable-Protocol.h>

@class BRCCountedSet, NSMutableSet;

__attribute__((visibility("hidden")))
@interface BRCApplyScheduler : BRCFSSchedulerBase <BRCModule, BRCSuspendable>
{
    BRCCountedSet *_coordinatedWriters;
    NSMutableSet *_clientZonesWatchingFaults;
    BOOL _applyCountReachedMax;
}

// - (void).cxx_destruct;
- (void)_close;
- (void)didSyncDownZone:(id)arg1 requestID:(NSUInteger)arg2 upToRank:(long long)arg3 caughtUpWithServer:(BOOL)arg4;
- (void)deleteExpiredJobs;
- (void)endWriteCoordinationInAppLibrary:(id)arg1 rowID:(long long)arg2;
- (BOOL)startWriteCoordinationInAppLibrary:(id)arg1;
- (NSUInteger)_writeCoordinationCount;
- (void)stopMonitoringFaultingForZone:(id)arg1;
- (void)monitorFaultingForZone:(id)arg1;
- (void)_handleWatchingFaults;
- (void)_scheduleApplyJobWithID:(id)arg1 zone:(id)arg2 applyKind:(unsigned int)arg3;
- (void)schedule;
- (BOOL)canScheduleMoreJobs;
- (void)repopulateJobsForZone:(id)arg1;
- (void)rescheduleMissingTargetAliasesWithTarget:(id)arg1;
- (void)_fixupCZMAliasTargetWithAlias:(id)arg1 target:(id)arg2;
- (void)didMarkSyncIdleForServerRank:(long long)arg1 zone:(id)arg2;
- (void)_rescheduleRank:(long long)arg1 inState:(int)arg2 forZone:(id)arg3;
- (void)didCompleteCrossZoneMigrationForAppLibrary:(id)arg1;
- (void)didReparentOrKillItemID:(id)arg1 parentItemID:(id)arg2 zone:(id)arg3;
- (void)didCreateMissingParentID:(id)arg1 zone:(id)arg2;
- (void)createApplyJobFromServerItem:(id)arg1 localItem:(id)arg2 state:(int)arg3 kind:(unsigned int)arg4;
- (void)resetBackoffForServerItem:(id)arg1;
- (void)setState:(int)arg1 andApplyKind:(unsigned int)arg2 forRank:(long long)arg3 zoneRowID:(id)arg4;
- (void)setState:(int)arg1 andApplyKind:(unsigned int)arg2 forServerItem:(id)arg3 localItem:(id)arg4;
- (void)_setState:(int)arg1 andApplyKind:(unsigned int)arg2 forJobID:(id)arg3;
- (void)setState:(int)arg1 forRank:(long long)arg2 zoneRowID:(id)arg3;
- (void)setState:(int)arg1 forServerItem:(id)arg2 localItem:(id)arg3;
- (void)describeInBuffer:(id)arg1 aggregateOfJobsMatching:(id)arg2 context:(id)arg3;
- (id)descriptionForRejectedItem:(id)arg1 context:(id)arg2;
- (id)descriptionForServerItem:(id)arg1 context:(id)arg2;
- (id)initWithAccountSession:(id)arg1;

@end

