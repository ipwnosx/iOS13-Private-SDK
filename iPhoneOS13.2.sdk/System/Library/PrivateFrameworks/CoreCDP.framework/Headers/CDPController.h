//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CDPContext, CDPDaemonConnection, CDPStateUIProviderProxy;
@protocol CDPAuthProvider, CDPStateUIProvider;

@interface CDPController : NSObject
{
    CDPContext *_context;
    id <CDPStateUIProvider> _uiProvider;
    id <CDPAuthProvider> _authProvider;
    CDPDaemonConnection *_daemonConn;
    CDPStateUIProviderProxy *_uiProviderProxy;
}

@property(retain, nonatomic) CDPStateUIProviderProxy *uiProviderProxy; // @synthesize uiProviderProxy=_uiProviderProxy;
@property(retain, nonatomic) CDPDaemonConnection *daemonConn; // @synthesize daemonConn=_daemonConn;
@property(retain, nonatomic) id <CDPAuthProvider> authProvider; // @synthesize authProvider=_authProvider;
@property(retain, nonatomic) id <CDPStateUIProvider> uiProvider; // @synthesize uiProvider=_uiProvider;
@property(readonly, nonatomic) CDPContext *context; // @synthesize context=_context;
// - (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (id)initWithContext:(id)arg1;
- (id)init;
- (id)initWithXpcEndpoint:(id)arg1 context:(id)arg2;

@end

