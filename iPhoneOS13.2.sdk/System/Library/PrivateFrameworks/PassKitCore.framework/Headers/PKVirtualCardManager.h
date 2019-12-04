//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PKAccountService, PKInAppPaymentService;

@interface PKVirtualCardManager : NSObject
{
    PKInAppPaymentService *_inAppPaymentService;
    PKAccountService *_accountService;
}

- (void)queryKeychainForVirtualCard:(id /* block */)arg1;
- (void)dismissDetailsForVirtualCard:(id)arg1 completion:(id /* block */)arg2;
- (void)promptDetailsForVirtualCard:(id)arg1 completion:(id /* block */)arg2;
- (id)urlToPassDetailsForVirtualCard:(id)arg1;
- (void)credentialsForVirtualCard:(id)arg1 authorization:(id)arg2 options:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)activeVirtualCardsWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)init;

@end
