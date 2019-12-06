//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSExtension, NSExtensionContext, NSMutableArray, NSMutableSet, NSXPCConnection, QLGracePeriodTimer;
@protocol OS_dispatch_queue;

@interface QLExtension : NSObject
{
    BOOL _isRequestingExtension;
    NSExtension *_extension;
    long long _extensionScore;
    NSUInteger _externalResourcesPermission;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_completionHandlersQueue;
    NSExtensionContext *_context;
    id _requestIdentifier;
    NSXPCConnection *_connection;
    NSMutableSet *_observers;
    QLGracePeriodTimer *_gracePeriodTimer;
    NSMutableArray *_extensionRequestHandlers;
}

@property(nonatomic) BOOL isRequestingExtension; // @synthesize isRequestingExtension=_isRequestingExtension;
@property(retain, nonatomic) NSMutableArray *extensionRequestHandlers; // @synthesize extensionRequestHandlers=_extensionRequestHandlers;
@property(retain, nonatomic) QLGracePeriodTimer *gracePeriodTimer; // @synthesize gracePeriodTimer=_gracePeriodTimer;
@property(retain, nonatomic) NSMutableSet *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) id requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSExtensionContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionHandlersQueue; // @synthesize completionHandlersQueue=_completionHandlersQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property NSUInteger externalResourcesPermission; // @synthesize externalResourcesPermission=_externalResourcesPermission;
@property long long extensionScore; // @synthesize extensionScore=_extensionScore;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
// - (void).cxx_destruct;
- (void)invalidateAndCancelExtensionRequest;
- (void)extensionContextWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)unregisterClient:(id)arg1;
- (void)registerClient:(id)arg1;
- (void)_invalidate;
- (void)_invalidateAndCancelExtensionRequest;
- (void)_callExtensionRequestHandlers;
- (void)_setupConnectionIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithExtension:(id)arg1;

@end

