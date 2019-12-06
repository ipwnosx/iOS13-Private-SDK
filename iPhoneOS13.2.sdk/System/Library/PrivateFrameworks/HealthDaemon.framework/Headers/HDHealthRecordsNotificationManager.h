//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDConceptIndexManagerObserver-Protocol.h>

@class HDProfile;

@interface HDHealthRecordsNotificationManager : NSObject <HDConceptIndexManagerObserver>
{
    HDProfile *_profile;
}

+ (void)badgeForNewHealthRecordsForProfile:(id)arg1;
+ (void)notifyForNewHealthRecordsForProfile:(id)arg1;
+ (void)_notifyUserIfNecessaryForProfile:(id)arg1;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
// - (void).cxx_destruct;
- (void)conceptIndexManagerDidChangeExecutionState:(NSUInteger)arg1;
- (void)conceptIndexManagerDidBecomeQuiescent:(id)arg1 samplesProcessedCount:(long long)arg2;
- (BOOL)stopWithError:(id )arg1;
- (BOOL)startWithError:(id )arg1;
- (id)initWithProfile:(id)arg1;
- (id)init;

@end

