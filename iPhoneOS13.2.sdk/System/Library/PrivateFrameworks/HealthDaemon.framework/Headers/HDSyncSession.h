//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDAssertion, HDSyncPredicate, NSCalendar, NSDate, NSString, NSUUID;
@protocol HDSyncSessionDelegate, HDSyncStore;

@interface HDSyncSession : NSObject
{
    id <HDSyncSessionDelegate> _delegate;
    id <HDSyncStore> _syncStore;
    NSUUID *_sessionUUID;
    NSDate *_startDate;
    NSCalendar *_calendar;
    NSString *_reason;
    HDAssertion *_databaseAccessibilityAssertion;
    double _databaseAccessibilityTimeout;
}

@property(nonatomic) double databaseAccessibilityTimeout; // @synthesize databaseAccessibilityTimeout=_databaseAccessibilityTimeout;
@property(retain, nonatomic) HDAssertion *databaseAccessibilityAssertion; // @synthesize databaseAccessibilityAssertion=_databaseAccessibilityAssertion;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, copy, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, copy, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(readonly, nonatomic) id <HDSyncStore> syncStore; // @synthesize syncStore=_syncStore;
@property(readonly, nonatomic) __weak id <HDSyncSessionDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)description;
- (long long)maxEncodedBytesPerMessageForSyncEntityClass:(Class)arg1;
- (id)newChangeWithSyncEntityClass:(Class)arg1;
- (id)excludedSyncStores;
- (void)syncDidFinishWithSuccess:(BOOL)arg1 error:(id)arg2;
- (BOOL)transactionDidEndWithError:(id )arg1;
- (void)sendChanges:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)syncDidBeginWithProfile:(id)arg1 error:(id )arg2;
- (void)syncWillBegin;
@property(readonly, copy, nonatomic) HDSyncPredicate *syncPredicate;
- (id)init;
- (id)initWithSyncStore:(id)arg1 reason:(id)arg2 delegate:(id)arg3;

@end

