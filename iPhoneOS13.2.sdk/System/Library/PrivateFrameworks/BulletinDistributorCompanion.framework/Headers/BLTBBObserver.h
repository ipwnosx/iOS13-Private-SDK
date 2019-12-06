//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BLTBBObserverDelegateDelegate-Protocol.h>

@class BBObserver, BLTBBObserverDelegate, NSLock, NSString;
@protocol OS_dispatch_queue;

@interface BLTBBObserver : NSObject <BLTBBObserverDelegateDelegate>
{
    BBObserver *_actualObserver;
    NSLock *_actualObserverLock;
    BLTBBObserverDelegate *_delegateSurrogate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSString *_name;
    NSUInteger _priority;
    BOOL _isGateway;
    NSUInteger _observerFeed;
    BOOL _hasFeed;
}

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)surrogateGatewayWithQueue:(id)arg1 calloutQueue:(id)arg2 name:(id)arg3 priority:(NSUInteger)arg4;
+ (id)surrogateWithQueue:(id)arg1 calloutQueue:(id)arg2;
// - (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (void)setObserverFeed:(NSUInteger)arg1;
- (void)noteServerConnectionStateChanged:(BOOL)arg1;
- (void)_reconnectObserver;
- (void)setDelegate:(id)arg1;
- (id)initWithQueue:(id)arg1 calloutQueue:(id)arg2 name:(id)arg3 priority:(NSUInteger)arg4 isGateway:(BOOL)arg5;

@end

