//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoRegistry/NRRegistry.h>

@class NSMutableArray, NSMutableDictionary;
@protocol NRNSXPCConnectionProtocol;

@interface NRRegistryClient : NRRegistry
{
    NSMutableDictionary *_diffIndexObservers;
    BOOL _optimizeGetState;
    BOOL _outstandingRegistryQuery;
    int _devicesUpdateCounterNotifyToken_dispatch;
    int _devicesUpdateCounterNotifyToken_check;
    id <NRNSXPCConnectionProtocol> _connection;
    NSUInteger _tokenValue;
    NSUInteger _lastDevicesUpdateCounterNotifyTokenValue;
    NSUInteger _backoffDuration;
    NSMutableArray *_registryQueryCompletionBlockEntries;
}

+ (Class)proxyClass;
+ (Class)xpcConnectionClass;
+ (NSUInteger)updateCounterFromToken:(NSUInteger)arg1;
@property(retain, nonatomic) NSMutableArray *registryQueryCompletionBlockEntries; // @synthesize registryQueryCompletionBlockEntries=_registryQueryCompletionBlockEntries;
@property(nonatomic) NSUInteger backoffDuration; // @synthesize backoffDuration=_backoffDuration;
@property(nonatomic) BOOL outstandingRegistryQuery; // @synthesize outstandingRegistryQuery=_outstandingRegistryQuery;
@property(nonatomic) BOOL optimizeGetState; // @synthesize optimizeGetState=_optimizeGetState;
@property(nonatomic) int devicesUpdateCounterNotifyToken_check; // @synthesize devicesUpdateCounterNotifyToken_check=_devicesUpdateCounterNotifyToken_check;
@property(nonatomic) int devicesUpdateCounterNotifyToken_dispatch; // @synthesize devicesUpdateCounterNotifyToken_dispatch=_devicesUpdateCounterNotifyToken_dispatch;
@property(nonatomic) NSUInteger lastDevicesUpdateCounterNotifyTokenValue; // @synthesize lastDevicesUpdateCounterNotifyTokenValue=_lastDevicesUpdateCounterNotifyTokenValue;
@property(nonatomic) NSUInteger tokenValue; // @synthesize tokenValue=_tokenValue;
@property(retain, nonatomic) id <NRNSXPCConnectionProtocol> connection; // @synthesize connection=_connection;
// - (void).cxx_destruct;
- (void)invalidate;
- (void)setCollection:(id)arg1;
- (void)_fireAllQueryCompletionBlocks;
- (void)_fireQueryCompletionBlocksToUpdateCounter:(NSUInteger)arg1;
- (void)_addQueryCompletionBlockEntry:(id)arg1;
- (void)_queryDaemonWithStartingTokenValue:(NSUInteger)arg1 currentTokenValue:(NSUInteger)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)_wipeRegistryWith:(NSUInteger)arg1 block:(CDUnknownBlockType)arg2;
- (void)_queryDataAsyncForce:(BOOL)arg1 ifNeededWithBlock:(CDUnknownBlockType)arg2;
- (void)_queryDataAsyncIfNeededWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)_shouldWaitForData;
- (void)_notifyDiffIndexObserversWithDiff:(id)arg1 deviceCollection:(id)arg2 secureProperties:(id)arg3 index:(NSUInteger)arg4;
- (void)removeDiffIndexObserver:(id)arg1;
- (id)addDiffIndexObserverWithWriteBlock:(CDUnknownBlockType)arg1;
- (void)_grabRegistryWithWriteBlockAsync:(CDUnknownBlockType)arg1;
- (void)grabRegistryWithWriteBlockAsync:(CDUnknownBlockType)arg1;
- (void)grabRegistryWithReadBlockAsync:(CDUnknownBlockType)arg1;
- (void)_grabRegistryWithReadBlock:(CDUnknownBlockType)arg1;
- (void)grabRegistryWithReadBlock:(CDUnknownBlockType)arg1;
- (void)syncGrabRegistryWithReadBlock:(CDUnknownBlockType)arg1;
- (void)_connectToDaemon;
@property(readonly, retain, nonatomic) id <NRNSXPCConnectionProtocol> rawConnection;
- (BOOL)daemonIdle;
@property(readonly, nonatomic) NSUInteger devicesUpdateCounter;
- (id)initWithParameters:(id)arg1;
- (NSUInteger)_getDevicesUpdateCounterNotifyTokenValue;

@end

