//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SystemStatus/BSDescriptionProviding-Protocol.h>
#import <SystemStatus/STStatusDomainServerHandle-Protocol.h>
#import <SystemStatus/STStatusDomainXPCClient-Protocol.h>

@class BSMutableIntegerMap, NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface STStatusDomainXPCServerHandle : NSObject <STStatusDomainXPCClient, BSDescriptionProviding, STStatusDomainServerHandle>
{
    BSMutableIntegerMap *_dataByDomain;
    NSMutableDictionary *_clientsByDomain;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSXPCConnection *_serverXPCConnection;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSXPCConnection *serverXPCConnection; // @synthesize serverXPCConnection=_serverXPCConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSMutableDictionary *clientsByDomain; // @synthesize clientsByDomain=_clientsByDomain;
@property(retain, nonatomic) BSMutableIntegerMap *dataByDomain; // @synthesize dataByDomain=_dataByDomain;
// - (void).cxx_destruct;
- (void)_tearDownXPCConnection;
- (void)_reregisterForDomains;
- (void)_internalQueue_setupXPCConnectionIfNecessary;
- (id)_internalQueue_dataForDomain:(NSUInteger)arg1;
- (void)_observeDataDiff:(id)arg1 forDomain:(NSUInteger)arg2;
- (void)_observeData:(id)arg1 forDomain:(NSUInteger)arg2;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)observeWifiDataDiff:(id)arg1;
- (void)observeWifiData:(id)arg1;
- (void)observeVoiceControlDataDiff:(id)arg1;
- (void)observeVoiceControlData:(id)arg1;
- (void)observeTelephonyDataDiff:(id)arg1;
- (void)observeTelephonyData:(id)arg1;
- (void)observeBatteryDataDiff:(id)arg1;
- (void)observeBatteryData:(id)arg1;
- (void)removeClient:(id)arg1 forDomain:(NSUInteger)arg2;
- (void)registerClient:(id)arg1 forDomain:(NSUInteger)arg2;
- (id)dataForDomain:(NSUInteger)arg1;
- (id)init;

@end

