//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIViewServiceDeputyManagerDelegate-Protocol.h>
#import <UIKitCore/_UIViewServiceViewControllerOperatorDelegate-Protocol.h>

@class NSXPCConnection, _UIAsyncInvocation, _UIViewServiceDeputyManager;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIViewServiceSession : NSObject <NSXPCConnectionDelegate, _UIViewServiceDeputyManagerDelegate, _UIViewServiceViewControllerOperatorDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    _UIViewServiceDeputyManager *_deputyManager;
    _UIAsyncInvocation *_invalidationInvocation;
    id /* CDUnknownBlockType */ _terminationHandler;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}

+ (id)sessionWithConnection:(id)arg1;
@property(copy, nonatomic) id /* CDUnknownBlockType */ terminationHandler; // @synthesize terminationHandler=_terminationHandler;
- (void)viewControllerOperator:(id)arg1 didCreateServiceViewControllerOfClass:(Class)arg2;
- (void)unregisterDeputyClass:(Class)arg1;
- (void)registerDeputyClass:(Class)arg1 withConnectionHandler:(CDUnknownBlockType)arg2;
- (void)deputy:(id)arg1 didFailWithError:(id)arg2;
- (void)_invalidateUnconditionallyThen:(CDUnknownBlockType)arg1;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (void)deputyManager:(id)arg1 didUpdateExportedInterface:(id)arg2;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (NSUInteger)retainCount;
- (oneway void)release;
- (id)retain;
- (int)__automatic_invalidation_logic;

@end

