//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MCUserMDMClient : NSObject
{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcConnectionSyncQueue;
}

+ (id)sharedClient;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionSyncQueue; // @synthesize xpcConnectionSyncQueue=_xpcConnectionSyncQueue;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
// - (void).cxx_destruct;
- (void)getAssertionDescriptionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)processUserRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)processUserRequest:(id)arg1 outError:(id )arg2;
- (id)pushToken;
- (void)simulatePush;
- (void)scheduleTokenUpdate;
- (void)_queue_createAndStartMDMXPCConnection;
- (void)_destroyXPCConnectionAndInvalidate:(BOOL)arg1;
- (BOOL)supportsPerUserMDM;
- (void)dealloc;
- (id)init;

@end

