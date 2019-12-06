//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivitySharing/ASCloudKitCodable-Protocol.h>

@class NSDate, NSString, NSUUID;

@interface ASNotificationEvent : NSObject <ASCloudKitCodable>
{
    NSUUID *_friendUUID;
    long long _type;
    NSDate *_date;
    NSUUID *_triggerUUID;
    long long _triggerSnapshotIndex;
}

+ (id)deletedWorkoutEventWithUUID:(id)arg1;
//  (id)achievementCompletionEventWithAchievement:(struct _HKFitnessFriendAchievement )arg1;
//  (id)workoutCompletionEventWithWorkout:(struct _HKFitnessFriendWorkout )arg1;
+ (id)goalCompletionEventWithActivitySummary:(id)arg1;
+ (id)notificationEventWithRecord:(id)arg1 friendUUID:(id)arg2;
@property(nonatomic) long long triggerSnapshotIndex; // @synthesize triggerSnapshotIndex=_triggerSnapshotIndex;
@property(retain, nonatomic) NSUUID *triggerUUID; // @synthesize triggerUUID=_triggerUUID;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSUUID *friendUUID; // @synthesize friendUUID=_friendUUID;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)recordWithZoneID:(id)arg1;

@end

