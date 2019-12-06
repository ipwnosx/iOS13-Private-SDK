//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstallCoordination/IXAppInstallObserverProtocol-Protocol.h>

@class NSXPCListener;
@protocol IXAppInstallObserverDelegate, OS_dispatch_queue;

@interface IXAppInstallObserver : NSObject <NSXPCListenerDelegate, IXAppInstallObserverProtocol>
{
    id <IXAppInstallObserverDelegate> _delegate;
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) __weak id <IXAppInstallObserverDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (oneway void)_client_coordinatorWithSeed:(id)arg1 didCancelWithReason:(id)arg2 client:(NSUInteger)arg3;
- (oneway void)_client_coordinatorDidCompleteSuccessfullyWithSeed:(id)arg1;
- (oneway void)_client_coordinatorDidInstallPlaceholderWithSeed:(id)arg1;
- (oneway void)_client_coordinatorShouldBeginRestoringUserDataWithSeed:(id)arg1;
- (oneway void)_client_coordinatorWithSeed:(id)arg1 configuredPromiseDidBeginFulfillment:(NSUInteger)arg2;
- (oneway void)_client_coordinatorShouldPauseWithSeed:(id)arg1;
- (oneway void)_client_coordinatorShouldResumeWithSeed:(id)arg1;
- (oneway void)_client_shouldPrioritizeAppWithBundleID:(id)arg1;
- (oneway void)_client_coordinatorShouldPrioritizeWithSeed:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (id)initTransientForClients:(id)arg1 delegate:(id)arg2;
- (id)initWithMachServiceName:(id)arg1 forClients:(id)arg2 delegate:(id)arg3;
- (id)_oncePerBootUniqueIdentifierForServiceName:(id)arg1;
- (void)_internalInit;

@end

