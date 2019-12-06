//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFInvalidating-Protocol.h>
#import <AssistantServices/AFNotifyObserverDelegate-Protocol.h>
#import <AssistantServices/AFSiriActivationService-Protocol.h>

@class NSXPCListener;
@protocol AFSiriActivationListenerDelegate, OS_dispatch_queue;

@interface AFSiriActivationListener : NSObject <NSXPCListenerDelegate, AFNotifyObserverDelegate, AFSiriActivationService, AFInvalidating>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_xpcListener;
    id <AFSiriActivationListenerDelegate> _delegate;
}

// - (void).cxx_destruct;
- (void)_deactivateForReason:(long long)arg1 options:(NSUInteger)arg2 analyticsContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_activateWithRequestInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_prewarmWithRequestInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_invalidate;
- (void)_stop;
- (void)_startWithDelegate:(id)arg1;
- (oneway void)handleIntent:(id)arg1 inBackgroundAppWithBundleId:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)handleContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)deactivateForReason:(long long)arg1 options:(NSUInteger)arg2 analyticsContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (oneway void)activateWithRequestInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)prewarmWithRequestInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(NSUInteger)arg2 to:(NSUInteger)arg3;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)invalidate;
- (void)stop;
- (void)startWithDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

