//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BCSRemoteFetch : NSObject
{
}

+ (id)createSessionForClientBundleID:(id)arg1;
+ (id)cloudServerRequestHelper;
+ (id)_completionPool;
+ (id)_requestDispatchQueue;
- (id)dequeueCompletionBlocksForRequest:(id)arg1;
- (id)_dequeueCompletionBlocksForRequestHash:(id)arg1 inCompletionPool:(id)arg2;
- (void)enqueueCompletionBlock:(CDUnknownBlockType)arg1 forRequest:(id)arg2 isDuplicateRequest:(BOOL )arg3;
- (void)_enqueueCompletionBlock:(CDUnknownBlockType)arg1 forRequestHash:(id)arg2 inCompletionPool:(id)arg3 isDuplicateRequest:(BOOL )arg4;
- (id)_hashForRequest:(id)arg1;

@end

