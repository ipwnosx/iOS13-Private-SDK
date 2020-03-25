//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSXPCConnection;

@interface ASDStoreKitServiceBroker : NSObject
{
    NSLock *_serviceConnectionLock;
    NSXPCConnection *_serviceConnection;
}

+ (id)_storeKitServiceInterface;
+ (id)_storeKitClientInterface;
+ (id)defaultBroker;
// - (void).cxx_destruct;
- (void)_serviceConnectionInvalidated;
- (id)_serviceConnection;
- (id)storeKitSynchronousService;
- (id)storeKitSynchronousServiceWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (id)storeKitService;
- (id)storeKitServiceWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (id)init;

@end
