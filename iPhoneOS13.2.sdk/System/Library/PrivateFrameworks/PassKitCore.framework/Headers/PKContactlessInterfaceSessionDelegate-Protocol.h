//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, PKContactlessInterfaceSession, PKContactlessInterfaceTransactionContext, PKFieldProperties, PKPaymentApplication, PKPaymentPass;

@protocol PKContactlessInterfaceSessionDelegate <NSObject>

@optional
- (void)contactlessInterfaceSessionDidFailDeferredAuthorization:(PKContactlessInterfaceSession *)arg1;
- (void)contactlessInterfaceSessionDidSelectValueAddedService:(PKContactlessInterfaceSession *)arg1;
- (void)contactlessInterfaceSessionDidSelectPayment:(PKContactlessInterfaceSession *)arg1;
- (void)contactlessInterfaceSessionDidExitField:(PKContactlessInterfaceSession *)arg1;
- (void)contactlessInterfaceSession:(PKContactlessInterfaceSession *)arg1 didReceiveExpressState:(NSUInteger)arg2;
- (void)contactlessInterfaceSessionDidEnterField:(PKContactlessInterfaceSession *)arg1 withProperties:(PKFieldProperties *)arg2;
- (void)contactlessInterfaceSession:(PKContactlessInterfaceSession *)arg1 didTransitionFromState:(NSUInteger)arg2 toState:(NSUInteger)arg3;
- (void)contactlessInterfaceSession:(PKContactlessInterfaceSession *)arg1 didEndPersistentCardEmulationWithContext:(PKContactlessInterfaceTransactionContext *)arg2;
- (void)contactlessInterfaceSession:(PKContactlessInterfaceSession *)arg1 didFinishTransactionWithContext:(PKContactlessInterfaceTransactionContext *)arg2;
- (void)contactlessInterfaceSessionDidReceiveActivityTimeout:(PKContactlessInterfaceSession *)arg1;
- (void)contactlessInterfaceSessionDidStartTransaction:(PKContactlessInterfaceSession *)arg1;
- (void)contactlessInterfaceSessionDidTerminate:(PKContactlessInterfaceSession *)arg1;
- (void)contactlessInterfaceSessionDidFail:(PKContactlessInterfaceSession *)arg1 forPaymentApplication:(PKPaymentApplication *)arg2 paymentPass:(PKPaymentPass *)arg3 valueAddedServicePasses:(NSArray *)arg4;
- (void)contactlessInterfaceSessionDidTimeout:(PKContactlessInterfaceSession *)arg1 forPaymentApplication:(PKPaymentApplication *)arg2 paymentPass:(PKPaymentPass *)arg3 valueAddedServicePasses:(NSArray *)arg4;
- (void)contactlessInterfaceSessionDidFailTransaction:(PKContactlessInterfaceSession *)arg1 forPaymentApplication:(PKPaymentApplication *)arg2 paymentPass:(PKPaymentPass *)arg3;
- (void)contactlessInterfaceSessionHasPendingServerRequest:(PKContactlessInterfaceSession *)arg1;
@end

