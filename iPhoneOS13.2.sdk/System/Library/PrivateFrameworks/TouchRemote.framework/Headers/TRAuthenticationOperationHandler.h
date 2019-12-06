//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchRemote/TROperationHandler-Protocol.h>

@class TRCompanionAuthOperationHandler, TRProxyAuthOperationHandler;

@interface TRAuthenticationOperationHandler : NSObject <TROperationHandler>
{
    TRCompanionAuthOperationHandler *_companionAuthHandler;
    TRProxyAuthOperationHandler *_proxyAuthHandler;
}

@property(retain, nonatomic) TRProxyAuthOperationHandler *proxyAuthHandler; // @synthesize proxyAuthHandler=_proxyAuthHandler;
@property(retain, nonatomic) TRCompanionAuthOperationHandler *companionAuthHandler; // @synthesize companionAuthHandler=_companionAuthHandler;
// - (void).cxx_destruct;
- (void)registerMessageHandlersForSession:(id)arg1;
- (id)initWithCompanionAuthHandler:(CDUnknownBlockType)arg1 proxyAuthHandler:(CDUnknownBlockType)arg2;

@end

