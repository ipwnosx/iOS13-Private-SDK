//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/EFLoggable-Protocol.h>

@class CertUITrustManager, EMCertificateTrustInformation, NSString;

@interface MFCertificateTrustInformationKeychainManager : NSObject <EFLoggable>
{
    NSString *_addressForSaving;
    EMCertificateTrustInformation *_trustInformation;
    CertUITrustManager *_keychainManager;
}

+ (id)log;
@property(readonly, nonatomic) CertUITrustManager *keychainManager; // @synthesize keychainManager=_keychainManager;
@property(readonly, nonatomic) EMCertificateTrustInformation *trustInformation; // @synthesize trustInformation=_trustInformation;
@property(readonly, copy, nonatomic) NSString *addressForSaving; // @synthesize addressForSaving=_addressForSaving;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSUInteger keychainStatus;
- (void)removeCertificateFromKeychain;
- (void)saveCertificateToKeychain;
- (void)removeTrustException;
- (void)addTrustException;
@property(readonly, nonatomic) BOOL hasTrustException;
@property(readonly, nonatomic) int action;
@property(readonly, nonatomic) BOOL canSaveCertificateToKeychain;
- (id)initWithTrustInformation:(id)arg1;

@end

