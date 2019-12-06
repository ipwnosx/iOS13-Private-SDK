//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKKnowledgeDeleting-Protocol.h>
#import <CoreDuet/_DKKnowledgeQuerying-Protocol.h>
#import <CoreDuet/_DKKnowledgeSaving-Protocol.h>

@class _DKPrivacyPolicyEnforcer, _DKQueryDispatcher, _DKRateLimitPolicyEnforcer;
@protocol OS_dispatch_queue, _DKKnowledgeQuerying><_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeEventStreamDeleting;

@interface _DKKnowledgeStore : NSObject <_DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying>
{
    NSObject<_DKKnowledgeQuerying><_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeEventStreamDeleting> *_knowledgeStoreHandle;
    _DKQueryDispatcher *_queryDispatcher;
    _DKRateLimitPolicyEnforcer *_rateLimitEnforcer;
    _DKPrivacyPolicyEnforcer *_privacyEnforcer;
    NSObject<OS_dispatch_queue> *_defaultQueue;
}

+ (id)knowledgeStoreWithDirectReadWriteAccess;
+ (id)_knowledgeStoreWithStoreDirectory:(id)arg1 readOnly:(BOOL)arg2;
+ (id)knowledgeStoreWithDirectReadOnlyAccessWithXPCStore:(id)arg1 storeDirectory:(id)arg2;
+ (id)userKnowledgeStoreWithDirectReadWriteAccess;
+ (id)userKnowledgeStoreWithDirectReadOnlyAccess;
+ (id)knowledgeStoreWithDirectReadOnlyAccess;
+ (id)userKnowledgeStore;
+ (id)knowledgeStore;
@property(retain) NSObject<OS_dispatch_queue> *defaultQueue; // @synthesize defaultQueue=_defaultQueue;
@property(readonly) _DKPrivacyPolicyEnforcer *privacyEnforcer; // @synthesize privacyEnforcer=_privacyEnforcer;
@property(readonly) _DKRateLimitPolicyEnforcer *rateLimitEnforcer; // @synthesize rateLimitEnforcer=_rateLimitEnforcer;
@property(retain, nonatomic) _DKQueryDispatcher *queryDispatcher; // @synthesize queryDispatcher=_queryDispatcher;
@property(retain, nonatomic) NSObject<_DKKnowledgeQuerying><_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeEventStreamDeleting> *knowledgeStoreHandle; // @synthesize knowledgeStoreHandle=_knowledgeStoreHandle;
// - (void).cxx_destruct;
- (id)deviceUUID;
- (id)sourceDeviceIdentityWithError:(id )arg1;
- (id)sourceDeviceIdentityFromObject:(id)arg1 error:(id )arg2;
- (BOOL)deleteRemoteState:(id )arg1;
- (void)synchronizeWithUrgency:(NSUInteger)arg1 client:(id)arg2 responseQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)synchronizeWithUrgency:(NSUInteger)arg1 client:(id)arg2 error:(id )arg3;
- (BOOL)synchronizeWithError:(id )arg1;
- (id)knowledgeSynchronizingHandleWithError:(id )arg1;
- (void)deleteAllEventsMatchingPredicate:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (NSUInteger)deleteAllEventsMatchingPredicate:(id)arg1 error:(id )arg2;
- (void)deleteAllEventsInEventStream:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (NSUInteger)deleteAllEventsInEventStream:(id)arg1 error:(id )arg2;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)executeQuery:(id)arg1 error:(id )arg2;
- (void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (BOOL)deleteObjects:(id)arg1 error:(id )arg2;
- (void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (BOOL)saveObjects:(id)arg1 error:(id )arg2;
- (id)_sanitizeObjectsBeforeSaving:(id)arg1;
- (id)init;
- (id)initWithKnowledgeStoreHandle:(id)arg1 readOnly:(BOOL)arg2;

@end

