//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _CDUserContext, _DKKnowledgeQuerying;

@interface USUsageQuerying : NSObject
{
    id <_CDUserContext> _context;
    id <_DKKnowledgeQuerying> _eventStorage;
}

+ (void)synchronizeUsageWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)getLocalDeviceIdentifierAndReturnError:(id )arg1;
@property(readonly) id <_DKKnowledgeQuerying> eventStorage; // @synthesize eventStorage=_eventStorage;
@property(readonly) id <_CDUserContext> context; // @synthesize context=_context;
// - (void).cxx_destruct;
- (void)_enumerateEvents:(id)arg1 intervalEndDate:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)_updateNotificationsWithEvent:(id)arg1 deviceIdentifier:(id)arg2 notificationsByDevice:(id)arg3 timeZoneByDevice:(id)arg4 lastEventDateByDevice:(id)arg5;
- (id)_computeNotificationsWithEvents:(id)arg1 timeZoneByDevice:(id)arg2 lastEventDateByDevice:(id)arg3 partition:(id)arg4;
- (void)_enumerateCurrentWebUsageIntervalsDuringInterval:(id)arg1 referenceDate:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)_updateWebUsageWithInterval:(id)arg1 webDomain:(id)arg2 bundleIdentifier:(id)arg3 deviceIdentifier:(id)arg4 event:(id)arg5 applicationIntervalsByDevice:(id)arg6 webUsageIntervalsByDevice:(id)arg7 categoryUsageIntervalsByDevice:(id)arg8 aggregatedApplicationUsageIntervalsByDevice:(id)arg9 aggregatedWebUsageIntervalsByDevice:(id)arg10 categoryByWebDomain:(id)arg11 timeZoneByDevice:(id)arg12 lastEventDateByDevice:(id)arg13;
- (id)_computeWebUsageWithEvents:(id)arg1 applicationUsageIntervalsByDevice:(id)arg2 timeZoneByDevice:(id)arg3 lastEventDateByDevice:(id)arg4 categoryUsageIntervalsByDevice:(id)arg5 aggregatedApplicationUsageIntervalsByDevice:(id)arg6 aggregatedWebUsageIntervalsByDevice:(id)arg7 categoryByWebDomain:(id)arg8 partition:(id)arg9 referenceDate:(id)arg10;
- (id)_getWebDomainsFromUsageEvents:(id)arg1 interval:(id)arg2 referenceDate:(id)arg3;
- (void)_enumerateCurrentApplicationUsageIntervalsDuringInterval:(id)arg1 referenceDate:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)_updateApplicationUsageWithInterval:(id)arg1 unboundInterval:(id)arg2 bundleIdentifier:(id)arg3 deviceIdentifier:(id)arg4 event:(id)arg5 applicationUsageIntervalsByDevice:(id)arg6 unboundApplicationUsageIntervalsByDevice:(id)arg7 categoryUsageIntervalsByDevice:(id)arg8 aggregatedApplicationUsageIntervalsByDevice:(id)arg9 categoryByBundleIdentifier:(id)arg10 timeZoneByDevice:(id)arg11 lastEventDateByDevice:(id)arg12;
- (id)_computeApplicationUsageWithEvents:(id)arg1 unboundApplicationUsageIntervalsByDevice:(id )arg2 timeZoneByDevice:(id)arg3 lastEventDateByDevice:(id)arg4 categoryUsageIntervalsByDevice:(id)arg5 aggregatedApplicationUsageIntervalsByDevice:(id)arg6 categoryByBundleIdentifier:(id)arg7 partition:(id)arg8 referenceDate:(id)arg9;
- (id)_getApplicationsFromUsageEvents:(id)arg1 interval:(id)arg2 referenceDate:(id)arg3;
- (id)_currentScreenTimeIntervalDuringInterval:(id)arg1 usageStartDate:(id )arg2 referenceDate:(id)arg3;
- (void)_updateScreenTimeWithInterval:(id)arg1 rawInterval:(id)arg2 deviceIdentifier:(id)arg3 partition:(id)arg4 event:(id)arg5 nonIntersectingScreenTimeIntervalsByDevice:(id)arg6 intersectingScreenTimeIntervalsByDevice:(id)arg7 longestSessionByDevice:(id)arg8 timeZoneByDevice:(id)arg9 lastEventDateByDevice:(id)arg10;
- (id)_computeScreenTime:(BOOL)arg1 withEvents:(id)arg2 intersectingScreenTimeIntervalsByDevice:(id )arg3 longestSessionByDevice:(id )arg4 timeZoneByDevice:(id)arg5 lastEventDateByDevice:(id)arg6 partition:(id)arg7 referenceDate:(id)arg8;
- (id)_generateUncategorizedLocalWebUsageWithWebUsageIntervals:(id)arg1 uncategorizedDomains:(id)arg2;
- (void)_computeUncategorizedLocalWebUsageWithApplicationUsageEvents:(id)arg1 webUsageEvents:(id)arg2 uncategorizedDomains:(id)arg3 interval:(id)arg4 referenceDate:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)queryForUncategorizedLocalWebUsageDuringInterval:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (double)_generateUsageTimeWithApplicationUsageIntervals:(id)arg1 webUsageIntervalsByDevice:(id)arg2 categoryUsageIntervalsByDevice:(id)arg3 aggregatedApplicationUsageIntervalsByDevice:(id)arg4 aggregatedWebUsageIntervalsByDevice:(id)arg5 categoryByBundleIdentifier:(id)arg6 categoryByWebDomain:(id)arg7 applications:(id)arg8 webDomains:(id)arg9 categories:(id)arg10;
- (double)_computeUsageForApplications:(id)arg1 webDomains:(id)arg2 categories:(id)arg3 applicationUsageEvents:(id)arg4 webUsageEvents:(id)arg5 categoryByBundleIdentifier:(id)arg6 categoryByWebDomain:(id)arg7 interval:(id)arg8 referenceDate:(id)arg9;
- (id)queryForApplications:(id)arg1 webDomains:(id)arg2 categories:(id)arg3 interval:(id)arg4 focalOnly:(BOOL)arg5 error:(id )arg6;
- (id)_newReportWithNonIntersectingScreenTimeIntervals:(id)arg1 pickupsByBundleIdentifier:(id)arg2 pickupsWithoutApplicationUsage:(NSUInteger)arg3 firstPickup:(id)arg4 longestSession:(id)arg5 applicationUsageIntervals:(id)arg6 webUsageIntervals:(id)arg7 categoryUsageIntervals:(id)arg8 aggregatedApplicationUsageIntervals:(id)arg9 aggregatedWebUsageIntervals:(id)arg10 categoryByBundleIdentifier:(id)arg11 categoryByWebDomain:(id)arg12 notifications:(id)arg13 interval:(id)arg14 timeZone:(id)arg15 lastEventDate:(id)arg16;
- (id)_generatePickupsByBundleIdentifierWithPickupIntervals:(id)arg1 applicationUsageIntervals:(id)arg2 pickupsWithoutApplicationUsage:(NSUInteger )arg3 firstPickup:(id )arg4;
- (void)_updateLocalReports:(id)arg1 remoteReports:(id)arg2 aggregateReports:(id)arg3 nonIntersectingScreenTimeIntervals:(id)arg4 intersectingScreenTimeIntervals:(id)arg5 longestSessionByDevice:(id)arg6 applicationUsageIntervals:(id)arg7 unboundApplicationUsageIntervals:(id)arg8 webUsageIntervalsByDevice:(id)arg9 categoryUsageIntervalsByDevice:(id)arg10 aggregatedApplicationUsageIntervalsByDevice:(id)arg11 aggregatedWebUsageIntervalsByDevice:(id)arg12 categoryByBundleIdentifier:(id)arg13 categoryByWebDomain:(id)arg14 notificationsByDevice:(id)arg15 interval:(id)arg16 timeZoneByDevice:(id)arg17 lastEventDateByDevice:(id)arg18;
- (void)_computeUsageWithDisplayBacklitEvents:(id)arg1 applicationUsageEvents:(id)arg2 webUsageEvents:(id)arg3 notificationEvents:(id)arg4 categoryByBundleIdentifier:(id)arg5 categoryByWebDomain:(id)arg6 interval:(id)arg7 partitionInterval:(double)arg8 referenceDate:(id)arg9 completionHandler:(CDUnknownBlockType)arg10;
- (void)queryUsageDuringInterval:(id)arg1 partitionInterval:(double)arg2 focalOnly:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)queryUsageDuringInterval:(id)arg1 partitionInterval:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithContext:(id)arg1 eventStorage:(id)arg2;

@end

