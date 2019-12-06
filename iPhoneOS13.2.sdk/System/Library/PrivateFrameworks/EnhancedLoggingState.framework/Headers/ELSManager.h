//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ELSSnapshot, NSUserDefaults;

@interface ELSManager : NSObject
{
    ELSSnapshot *_snapshot;
    NSUserDefaults *_defaults;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) ELSSnapshot *snapshot; // @synthesize snapshot=_snapshot;
// - (void).cxx_destruct;
- (void)getBugSessionActivityWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)object:(id)arg1 isEqualToObject:(id)arg2;
- (BOOL)commitFollowUpOptions:(id)arg1;
- (BOOL)commitUploadCompletedPercentage:(id)arg1;
- (BOOL)commitMetadataTransaction:(id)arg1;
- (BOOL)commitIdentifiersToRetryTransaction:(id)arg1;
- (BOOL)commitRetriesRemainingTransaction:(id)arg1;
- (BOOL)commitQueueTransaction:(id)arg1;
- (BOOL)commitDatesTransaction:(id)arg1;
- (BOOL)commitConsentTransaction:(id)arg1;
- (BOOL)commitStatusTransaction:(id)arg1;
- (void)commitBatchTransaction:(id)arg1;
- (void)flushWithCompletion:(CDUnknownBlockType)arg1;
- (void)flush;
- (void)finishWithCompletion:(CDUnknownBlockType)arg1;
- (void)finish;
- (void)transactionWithBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transactionWithBlock:(CDUnknownBlockType)arg1;
- (void)beginUpdates;
- (void)dealloc;
- (id)initSingleton;

@end

