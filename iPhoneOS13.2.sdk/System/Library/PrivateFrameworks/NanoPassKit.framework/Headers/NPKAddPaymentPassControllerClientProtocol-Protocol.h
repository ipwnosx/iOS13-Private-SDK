//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSData, NSError, PKPaymentPass;

@protocol NPKAddPaymentPassControllerClientProtocol <NSObject>
- (void)didFinishWithPass:(PKPaymentPass *)arg1 error:(NSError *)arg2;
- (void)generateRequestWithCertificateChain:(NSArray *)arg1 nonce:(NSData *)arg2 nonceSignature:(NSData *)arg3 completionHandler:(void (^)(PKAddPaymentPassRequest *))arg4;
@end

