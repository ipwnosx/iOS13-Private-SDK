//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, RTCReporting, RTCSecureHierarchyToken;

@interface PKAnalyticsReporter : NSObject
{
    NSData *_archivedSessionToken;
    RTCReporting *_session;
    RTCSecureHierarchyToken *_sessionToken;
//    struct os_unfair_lock_s _lockArchive;
}

+ (id)archivedSessionTokenForSubject:(id)arg1;
+ (void)sendSingularEvent:(id)arg1;
+ (void)subjects:(id)arg1 sendEvent:(id)arg2;
+ (void)subject:(id)arg1 sendEvent:(id)arg2;
+ (void)endSubjectReporting:(id)arg1;
+ (void)beginSubjectReporting:(id)arg1 withArchivedParent:(id)arg2;
+ (void)beginSubjectReporting:(id)arg1;
+ (id)reporterForSubject:(id)arg1;
+ (id)subjectDictionary;
+ (void)reportDashboardEventIfNecessary:(id)arg1 forPass:(id)arg2;
+ (id)subjectToReportDashboardAnalyticsForAccount:(id)arg1;
+ (id)subjectToReportDashboardAnalyticsForPass:(id)arg1;
// - (void).cxx_destruct;
- (void)sendEvent:(id)arg1;
- (id)archivedSessionToken;
- (id)initWithSubject:(id)arg1;
- (id)initWithArchivedParent:(id)arg1 subject:(id)arg2;
- (id)initWithParentToken:(id)arg1 subject:(id)arg2;
- (id)initWithParent:(id)arg1 subject:(id)arg2;

@end

