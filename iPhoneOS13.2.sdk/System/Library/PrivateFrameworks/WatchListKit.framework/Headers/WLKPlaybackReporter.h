//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface WLKPlaybackReporter : NSObject
{
    NSXPCConnection *_xpcConnection;
//    struct os_unfair_lock_s _xpcLock;
}

// - (void).cxx_destruct;
- (void)_invalidationHandler;
- (id)_connection;
- (void)endPlaybackSession:(id)arg1;
- (void)reportPlayback:(id)arg1 sessionID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reportPlayback:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)init;

@end

