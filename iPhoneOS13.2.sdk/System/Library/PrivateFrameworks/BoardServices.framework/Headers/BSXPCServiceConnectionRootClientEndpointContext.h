//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BoardServices/BSXPCServiceConnectionRootContext.h>

@class NSObject;
@protocol OS_xpc_object;

@interface BSXPCServiceConnectionRootClientEndpointContext : BSXPCServiceConnectionRootContext
{
    NSObject<OS_xpc_object> *_endpoint;
    BOOL _nonLaunching;
}

+ (id)uniqueClientContextWithEndpoint:(id)arg1 nonLaunching:(BOOL)arg2 description:(id)arg3;
@property(readonly, nonatomic, getter=isNonLaunching) BOOL nonLaunching; // @synthesize nonLaunching=_nonLaunching;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *endpoint; // @synthesize endpoint=_endpoint;
// - (void).cxx_destruct;
- (BOOL)isClient;
- (id)_initWithEndpoint:(id)arg1 nonLaunching:(BOOL)arg2 eDesc:(id)arg3;

@end

