//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSMutableArray, NSNumber, NSString;

@interface ASFReceipt : NSObject
{
    BOOL _verbose;
    NSMutableArray *_mutableIAPs;
    NSString *_path;
    NSString *_bundleID;
    NSString *_bundleVersion;
    NSString *_cancellationReason;
    NSDate *_creationDate;
    NSString *_developerID;
    NSString *_downloadID;
    NSString *_frAppVersion;
    NSNumber *_frToolVersion;
    NSDate *_expirationDate;
    NSString *_hwtype;
    NSString *_installerVersionID;
    NSNumber *_itemID;
    NSArray *_iaps;
    NSString *_opaqueDSIDString;
    NSString *_organizationDisplayName;
    NSString *_parentalControls;
    NSDate *_purchaseDate;
    NSString *_receiptType;
    NSDate *_renewalDate;
}

+ (id)receiptWithContentsOfFile:(id)arg1;
+ (id)receiptPathForBundleAtPath:(id)arg1;
+ (id)receiptFromBundleAtURL:(id)arg1;
+ (id)receiptFromBundleAtPath:(id)arg1;
@property(readonly) NSString *path; // @synthesize path=_path;
@property(readonly) NSDate *renewalDate; // @synthesize renewalDate=_renewalDate;
@property(readonly) NSString *receiptType; // @synthesize receiptType=_receiptType;
@property(readonly) NSDate *purchaseDate; // @synthesize purchaseDate=_purchaseDate;
@property(readonly) NSString *parentalControls; // @synthesize parentalControls=_parentalControls;
@property(readonly) NSString *organizationDisplayName; // @synthesize organizationDisplayName=_organizationDisplayName;
@property(readonly) NSString *opaqueDSIDString; // @synthesize opaqueDSIDString=_opaqueDSIDString;
@property(readonly) NSArray *iaps; // @synthesize iaps=_iaps;
@property(readonly) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(readonly) NSString *installerVersionID; // @synthesize installerVersionID=_installerVersionID;
@property(readonly) NSString *hwtype; // @synthesize hwtype=_hwtype;
@property(readonly) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly) NSNumber *frToolVersion; // @synthesize frToolVersion=_frToolVersion;
@property(readonly) NSString *frAppVersion; // @synthesize frAppVersion=_frAppVersion;
@property(readonly) NSString *downloadID; // @synthesize downloadID=_downloadID;
@property(readonly) NSString *developerID; // @synthesize developerID=_developerID;
@property(readonly) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly) NSString *cancellationReason; // @synthesize cancellationReason=_cancellationReason;
@property(readonly) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
// - (void).cxx_destruct;
//  (long long)_verifySignatureForSignedData:(struct SecCmsSignedDataStr )arg1 onDate:(id)arg2;
//  (BOOL)_setPoliciesForTrust:(struct __SecTrust )arg1;
- (void)_parseTokens:(id)arg1;
- (id)_parseIAPTokens:(id)arg1;
//  (id)_parseIAPsFromDataRef:(struct __CFData )arg1;
//  (BOOL)_parseReceiptFromMessage:(struct SecCmsMessageStr )arg1;
- (void)_logError:(id)arg1;
- (void)_log:(id)arg1;
- (void)_log:(id)arg1 arg:(id)arg2;
//  (struct SecCmsSignedDataStr )_extractSignedDataFromMessage:(struct SecCmsMessageStr )arg1;
//  (BOOL)_decodeReceiptData:(id)arg1 toDecodedMessage:(inout struct SecCmsMessageStr )arg2;
- (BOOL)_decodeIAPReceiptData:(id)arg1;
//  (struct __CFArray )_copyCertificatesFromSignedData:(struct SecCmsSignedDataStr )arg1;
//  (BOOL)_checkIfCertificate:(struct __SecCertificate )arg1 containsOID:(struct __CFString )arg2;
//  (BOOL)_checkArray:(struct __CFArray )arg1 containsCertificateWithOID:(struct __CFString )arg2;
//  (BOOL)_anchorTrust:(struct __SecTrust )arg1 toRootCertificateIn:(struct __CFArray )arg2;
@property(readonly) NSString *receiptDataString;
@property(readonly) NSData *receiptData;
@property(readonly) BOOL isVPPLicensed;
@property(readonly) BOOL isRevoked;
@property(readonly) BOOL isDSIDless;
- (id)initWithContentsOfFile:(id)arg1;

@end

