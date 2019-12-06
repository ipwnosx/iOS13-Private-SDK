//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PDAssertionCoordinatorDelegate-Protocol.h>

@class BKSApplicationStateMonitor, NSHashTable, NSMutableDictionary, NSXPCListener;
@protocol OS_dispatch_queue;

@interface PDAssertionManager : NSObject <NSXPCListenerDelegate, PDAssertionCoordinatorDelegate>
{
    NSHashTable *_observers;
    NSXPCListener *_coordinatorListener;
    NSMutableDictionary *_coordinators;
    NSObject<OS_dispatch_queue> *_managerSerialQueue;
    BKSApplicationStateMonitor *_applicationStateMonitor;
}

// - (void).cxx_destruct;
- (id)_processNameWithPID:(int)arg1;
- (id)_coordinatorsBundleIdentifier;
- (void)_applicationStateChanged:(id)arg1;
- (void)_removeAllAssertionCoordinators;
- (void)_removeAssertionCoordinator:(id)arg1;
- (void)_addAssertionCoordinator:(id)arg1 forProcessIdentifier:(id)arg2;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)assertionsOfType:(NSUInteger)arg1;
- (void)assertionCoordinator:(id)arg1 didInvalidateAssertion:(id)arg2;
- (void)assertionCoordinator:(id)arg1 didAcquireAssertion:(id)arg2;
- (BOOL)assertionCoordinator:(id)arg1 canAcquireAssertion:(id)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)invalidateAssertionOfType:(NSUInteger)arg1 withIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)acquireAssertionOfType:(NSUInteger)arg1 withIdentifier:(id)arg2 reason:(id)arg3 handler:(CDUnknownBlockType)arg4;

@end

