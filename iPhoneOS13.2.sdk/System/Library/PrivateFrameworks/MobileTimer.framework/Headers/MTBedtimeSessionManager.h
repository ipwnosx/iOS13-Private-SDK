//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTBedtimeSessionTrackerDelegate-Protocol.h>

@class HKHealthStore, MTAlarmStorage, NSString;
@protocol MTBedtimeSessionTracker, MTBedtimeSessionTrackerDelegate, NAScheduler;

@interface MTBedtimeSessionManager : NSObject <MTBedtimeSessionTrackerDelegate>
{
    id <NAScheduler> _serializer;
    MTAlarmStorage *_alarmStorage;
    HKHealthStore *_healthStore;
    NSString *_archivedSessionDataPath;
    NSString *_archivedSessionDataFile;
    id <MTBedtimeSessionTracker> _bedtimeSessionTracker;
    id <MTBedtimeSessionTrackerDelegate> _bedtimeSessionTrackerDelegate;
}

+ (id)sleepSampleWithInterval:(id)arg1 sampleType:(long long)arg2 metadata:(id)arg3;
+ (id)platformSpecificSourceBundleIdentifier;
@property(nonatomic) __weak id <MTBedtimeSessionTrackerDelegate> bedtimeSessionTrackerDelegate; // @synthesize bedtimeSessionTrackerDelegate=_bedtimeSessionTrackerDelegate;
@property(retain, nonatomic) id <MTBedtimeSessionTracker> bedtimeSessionTracker; // @synthesize bedtimeSessionTracker=_bedtimeSessionTracker;
@property(copy, nonatomic) NSString *archivedSessionDataFile; // @synthesize archivedSessionDataFile=_archivedSessionDataFile;
@property(copy, nonatomic) NSString *archivedSessionDataPath; // @synthesize archivedSessionDataPath=_archivedSessionDataPath;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(retain, nonatomic) MTAlarmStorage *alarmStorage; // @synthesize alarmStorage=_alarmStorage;
@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
// - (void).cxx_destruct;
- (id)_writeSessions:(id)arg1;
- (id)_writeSessionData;
- (void)_removeSessionDataFile;
- (id)_unprocessedSessions;
- (BOOL)_hasUnprocessedSessions;
- (void)deviceFirstUnlocked;
- (void)waitForUnlock;
- (void)saveSessionData;
- (id)writeSession:(id)arg1;
- (void)archiveSession:(id)arg1;
- (void)bedtimeSessionTracker:(id)arg1 sessionDidComplete:(id)arg2;
- (id)initWithAlarmStorage:(id)arg1 sleepCoordinator:(id)arg2 bedtimeSessionTracker:(id)arg3;

@end

