//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CommunicationsFilterBlockListCache, NSMutableArray;
@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface CommunicationsFilterBlockList : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    int _retries;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_recentObjectsTested;
    CommunicationsFilterBlockListCache *_cache;
}

+ (id)sharedInstance;
- (BOOL)_connect;
- (BOOL)_disconnect;
- (void)_disconnected;
- (void)_sendXPCRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_sendSynchronousXPCRequest:(id)arg1;
- (BOOL)isItemInList:(id)arg1;
- (id)copyAllItems;
- (void)removeItemForAllServices:(id)arg1;
- (void)addItemForAllServices:(id)arg1;
- (void)dealloc;
- (id)init;

@end

