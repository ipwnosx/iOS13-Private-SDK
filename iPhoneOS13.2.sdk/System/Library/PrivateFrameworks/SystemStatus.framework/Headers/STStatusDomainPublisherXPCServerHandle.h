//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SystemStatus/BSDescriptionProviding-Protocol.h>
#import <SystemStatus/STStatusDomainPublisherServerHandle-Protocol.h>

@class BSMutableIntegerMap, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface STStatusDomainPublisherXPCServerHandle : NSObject <BSDescriptionProviding, STStatusDomainPublisherServerHandle>
{
    BSMutableIntegerMap *_dataByDomain;
    BSMutableIntegerMap *_hasSentDataByDomain;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSXPCConnection *_serverXPCConnection;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSXPCConnection *serverXPCConnection; // @synthesize serverXPCConnection=_serverXPCConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) BSMutableIntegerMap *hasSentDataByDomain; // @synthesize hasSentDataByDomain=_hasSentDataByDomain;
@property(retain, nonatomic) BSMutableIntegerMap *dataByDomain; // @synthesize dataByDomain=_dataByDomain;
// - (void).cxx_destruct;
- (void)_tearDownXPCConnection;
- (void)_resendData;
- (void)_internalQueue_setupXPCConnectionIfNecessary;
- (id)_newEmptyDataForDomain:(NSUInteger)arg1;
- (id)_internalQueue_dataForDomainCreatingIfNecessary:(NSUInteger)arg1;
- (void)_internalQueue_publishData:(id)arg1 forDomain:(NSUInteger)arg2 dataSendBlock:(CDUnknownBlockType)arg3 diffSendBlock:(CDUnknownBlockType)arg4;
- (void)_internalQueue_publishData:(id)arg1 forDomain:(NSUInteger)arg2;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)publishData:(id)arg1 forDomain:(NSUInteger)arg2;
- (id)publishedDataForDomain:(NSUInteger)arg1;
- (id)init;

@end

