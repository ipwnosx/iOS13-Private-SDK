//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class CKRecordZoneSubscription, HMDBackingStoreCacheGroup;

@interface HMDBackingStoreCacheUpdateGroupSubscriptionOperation : HMDBackingStoreOperation
{
    HMDBackingStoreCacheGroup *_record;
    CKRecordZoneSubscription *_subscription;
}

@property(retain, nonatomic) CKRecordZoneSubscription *subscription; // @synthesize subscription=_subscription;
@property(retain, nonatomic) HMDBackingStoreCacheGroup *record; // @synthesize record=_record;
// - (void).cxx_destruct;
- (id)mainReturningError;
- (id)initWithGroup:(id)arg1 subscription:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;

@end

