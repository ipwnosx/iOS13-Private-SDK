//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSXPCConnection;

@interface ICSceneClassificationsHandler : NSObject
{
    NSXPCConnection *_xpcConnection;
    NSDictionary *_cachedRequestContextDictionary;
}

+ (id)sharedHandler;
@property(retain, nonatomic) NSDictionary *cachedRequestContextDictionary; // @synthesize cachedRequestContextDictionary=_cachedRequestContextDictionary;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
// - (void).cxx_destruct;
- (id)requestContextDictionaryWithOperationId:(BOOL)arg1;
- (id)requestContextDictionary;
- (id)searchResultNodesForSceneClassifications:(id)arg1 error:(id )arg2;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)cancelOperationsWithIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)configureXPCConnection;
- (void)setupXpcConnection;

@end

