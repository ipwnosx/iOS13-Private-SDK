//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFAnalyticsBackendEventHandling-Protocol.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SBFAnalyticsBackend : NSObject <SBFAnalyticsBackendEventHandling>
{
    NSMutableArray *_asyncEventHandlers;
    NSMutableArray *_syncEventHandlers;
    NSMutableDictionary *_stateQueryHandlers;
    NSObject<OS_dispatch_queue> *_queryHandlerQueue;
    NSObject<OS_dispatch_queue> *_asyncHandlerQueue;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)stateForQueryName:(NSUInteger)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerForQueryName:(NSUInteger)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)handleEvent:(NSUInteger)arg1 withContext:(id)arg2;
- (void)registerSynchronousEventHandler:(id)arg1;
- (void)registerEventHandler:(id)arg1;
- (id)init;

@end

