//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ASDServiceBroker;

@interface ASDDiagnosticService : NSObject
{
    ASDServiceBroker *_serviceBroker;
}

+ (id)interface;
+ (id)defaultService;
// - (void).cxx_destruct;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)sendDetailsCommand:(long long)arg1 withError:(id )arg2;
- (BOOL)sendCommand:(long long)arg1 withError:(id )arg2;
- (BOOL)pingWithError:(id )arg1;
- (id)activeClientsWithError:(id )arg1;
- (id)initWithServiceBroker:(id)arg1;

@end

