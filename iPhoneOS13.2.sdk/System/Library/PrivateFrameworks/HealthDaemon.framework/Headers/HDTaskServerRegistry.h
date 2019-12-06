//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDaemon, NSMapTable, NSMutableDictionary, NSMutableSet;

@interface HDTaskServerRegistry : NSObject
{
    NSMutableDictionary *_taskServerClassesByTaskIdentifier;
    NSMapTable *_taskServersByUUID;
    NSMutableSet *_loadedPluginURLs;
//    struct os_unfair_lock_s _lock;
    HDDaemon *_daemon;
}

@property(readonly, nonatomic) __weak HDDaemon *daemon; // @synthesize daemon=_daemon;
// - (void).cxx_destruct;
- (id)createTaskServerEndpointForIdentifier:(id)arg1 taskUUID:(id)arg2 configuration:(id)arg3 client:(id)arg4 connectionQueue:(id)arg5 delegate:(id)arg6 error:(id )arg7;
- (void)didCreateTaskServer:(id)arg1;
- (id)taskServerForTaskUUID:(id)arg1;
- (BOOL)_lock_registerTaskServerClass:(Class)arg1 error:(id )arg2;
- (BOOL)_lock_loadTaskServersFromPluginAtURL:(id)arg1 error:(id )arg2;
- (BOOL)loadTaskServersFromPluginAtURL:(id)arg1 error:(id )arg2;
- (BOOL)registerTaskServerClasses:(id)arg1 error:(id )arg2;
- (BOOL)registerTaskServerClass:(Class)arg1 error:(id )arg2;
- (BOOL)registerTaskServerClassesWithProvider:(id)arg1 error:(id )arg2;
- (id)initWithDaemon:(id)arg1;

@end

