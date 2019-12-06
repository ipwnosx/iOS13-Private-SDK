//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDAnalyticSubmissionEvent-Protocol.h>

@class NSDate, NSString;

@interface HDCloudSyncRestoreEvent : NSObject <HDAnalyticSubmissionEvent>
{
    long long _restorePhase;
    NSDate *_startDate;
    NSDate *_endDate;
    double _duration;
    long long _dbSize;
    long long _hfdSize;
    long long _journalCount;
}

+ (id)restoreEventForPhase:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 duration:(double)arg4 dbSize:(long long)arg5 hfdSize:(long long)arg6 journalCount:(long long)arg7;
@property(readonly, nonatomic) long long journalCount; // @synthesize journalCount=_journalCount;
@property(readonly, nonatomic) long long hfdSize; // @synthesize hfdSize=_hfdSize;
@property(readonly, nonatomic) long long dbSize; // @synthesize dbSize=_dbSize;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) long long restorePhase; // @synthesize restorePhase=_restorePhase;
@property(readonly, copy) NSString *description;
- (id)codableRepresentationForAWDSubmission;
- (unsigned int)AWDMetricID;
- (id)initWithRestorePhase:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 duration:(double)arg4 dbSize:(long long)arg5 hfdSize:(long long)arg6 journalCount:(long long)arg7;

@end

