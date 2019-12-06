//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NRMutableStateParentDelegate-Protocol.h>

@class NRMutableDeviceCollection, NRReadWriteConcurrentQueue, NRSecureDevicePropertyStore, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NRRegistry : NSObject <NRMutableStateParentDelegate>
{
    NSMutableDictionary *_registryDiffObservers;
    NSMutableDictionary *_registrySecurePropertyObservers;
//     struct os_unfair_lock_s _collectionLock;
    NRReadWriteConcurrentQueue *_readerWriterDispatch;
    BOOL _queueRunning;
    BOOL _supportsWatch;
    NRMutableDeviceCollection *_collection;
    NRSecureDevicePropertyStore *_secureProperties;
    NSObject<OS_dispatch_queue> *_managementQueue;
    NRMutableDeviceCollection *_queueCollection;
}

+ (int)registerNotifyTokenWithName:(id)arg1 withQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (NSUInteger)readNotifyToken:(int)arg1;
+ (void)fixSecurePropertiesWithCollection:(id)arg1 secureProperties:(id)arg2 insecurePropertyNames:(id)arg3;
+ (id)getReferencedSecureProperties:(id)arg1 fromDiff:(id)arg2;
+ (id)getReferencedSecurePropertyIDsFromDiff:(id)arg1;
+ (id)_nextToken;
+ (BOOL)_supportsWatch;
@property(retain, nonatomic) NRMutableDeviceCollection *queueCollection; // @synthesize queueCollection=_queueCollection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *managementQueue; // @synthesize managementQueue=_managementQueue;
// - (void).cxx_destruct;
- (void)_notifyObserversSecurePropertiesAreAvailableWithCollection:(id)arg1 secureProperties:(id)arg2;
- (void)child:(id)arg1 didApplyDiff:(id)arg2;
- (void)invalidate;
- (void)removeSecurePropertiesObserver:(id)arg1;
- (id)addSecurePropertiesObserverWithReadBlock:(CDUnknownBlockType)arg1;
- (void)_notifyDiffObserversWithDiff:(id)arg1 deviceCollection:(id)arg2 secureProperties:(id)arg3;
- (void)removeDiffObserver:(id)arg1;
- (id)addDiffObserverWithWriteBlock:(CDUnknownBlockType)arg1;
- (void)grabRegistryWithWriteBlockAsync:(CDUnknownBlockType)arg1;
- (void)grabRegistryWithReadBlockAsync:(CDUnknownBlockType)arg1;
- (void)grabRegistryWithReadBlock:(CDUnknownBlockType)arg1;
- (void)enqueueForWriteAsync:(CDUnknownBlockType)arg1 bypassSuspend:(BOOL)arg2;
- (void)enqueueForReadAsync:(CDUnknownBlockType)arg1 bypassSuspend:(BOOL)arg2;
- (void)enqueueForRead:(CDUnknownBlockType)arg1 bypassSuspend:(BOOL)arg2;
- (void)enqueueForWriteAsync:(CDUnknownBlockType)arg1;
- (void)enqueueForReadAsync:(CDUnknownBlockType)arg1;
- (void)enqueueForRead:(CDUnknownBlockType)arg1;
- (BOOL)enqueueForReadUnlessSuspended:(CDUnknownBlockType)arg1;
- (BOOL)supportsWatch;
@property(retain, nonatomic) NRSecureDevicePropertyStore *secureProperties; // @synthesize secureProperties=_secureProperties;
- (void)_startQueue;
@property(retain, nonatomic) NRMutableDeviceCollection *collection; // @synthesize collection=_collection;
- (void)performUnderCollectionLock:(CDUnknownBlockType)arg1;
- (id)initWithParameters:(id)arg1;
- (id)init;
- (void)syncGrabRegistryWithWriteBlock:(CDUnknownBlockType)arg1;
- (void)syncGrabRegistryWithReadBlock:(CDUnknownBlockType)arg1;

@end

