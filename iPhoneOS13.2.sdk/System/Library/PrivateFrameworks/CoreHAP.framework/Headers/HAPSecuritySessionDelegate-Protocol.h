//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HAPPairingIdentity, HAPSecuritySession, NSData, NSError, NSString;

@protocol HAPSecuritySessionDelegate <NSObject>
- (void)securitySession:(HAPSecuritySession *)arg1 didReceiveSetupExchangeData:(NSData *)arg2;
- (HAPPairingIdentity *)securitySession:(HAPSecuritySession *)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(NSString *)arg2 error:(id )arg3;
- (HAPPairingIdentity *)securitySession:(HAPSecuritySession *)arg1 didReceiveLocalPairingIdentityRequestWithError:(id )arg2;

@optional
- (void)securitySession:(HAPSecuritySession *)arg1 didCloseWithError:(NSError *)arg2;
- (void)securitySessionDidOpen:(HAPSecuritySession *)arg1;
- (void)securitySessionIsOpening:(HAPSecuritySession *)arg1;
@end

