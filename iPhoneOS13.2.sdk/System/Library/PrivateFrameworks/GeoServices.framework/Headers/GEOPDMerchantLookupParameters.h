//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOLocation, GEOPDAdamAppIdentifier, GEOPDMerchantInformation, GEOPDWarsawMerchantIdentifier, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMerchantLookupParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAdamAppIdentifier *_appIdentifier;
    NSString *_industryCategory;
    long long _industryCode;
    NSString *_merchantCode;
    GEOPDMerchantInformation *_merchantInformation;
    NSString *_paymentNetwork;
    NSString *_rawMerchantCode;
    NSString *_terminalId;
    NSString *_transactionCurrencyCode;
    NSString *_transactionId;
    double _transactionLocationAge;
    GEOLocation *_transactionLocation;
    double _transactionTimestamp;
    GEOPDWarsawMerchantIdentifier *_warsawMerchantIdentifier;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _transactionStatus;
    int _transactionType;
    BOOL _enableBrandMuidFallback;
    BOOL _fuzzyMatched;
    struct {
        unsigned int has_industryCode:1;
        unsigned int has_transactionLocationAge:1;
        unsigned int has_transactionTimestamp:1;
        unsigned int has_transactionStatus:1;
        unsigned int has_transactionType:1;
        unsigned int has_enableBrandMuidFallback:1;
        unsigned int has_fuzzyMatched:1;
        unsigned int read_unknownFields:1;
        unsigned int read_appIdentifier:1;
        unsigned int read_industryCategory:1;
        unsigned int read_merchantCode:1;
        unsigned int read_merchantInformation:1;
        unsigned int read_paymentNetwork:1;
        unsigned int read_rawMerchantCode:1;
        unsigned int read_terminalId:1;
        unsigned int read_transactionCurrencyCode:1;
        unsigned int read_transactionId:1;
        unsigned int read_transactionLocation:1;
        unsigned int read_warsawMerchantIdentifier:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_appIdentifier:1;
        unsigned int wrote_industryCategory:1;
        unsigned int wrote_industryCode:1;
        unsigned int wrote_merchantCode:1;
        unsigned int wrote_merchantInformation:1;
        unsigned int wrote_paymentNetwork:1;
        unsigned int wrote_rawMerchantCode:1;
        unsigned int wrote_terminalId:1;
        unsigned int wrote_transactionCurrencyCode:1;
        unsigned int wrote_transactionId:1;
        unsigned int wrote_transactionLocationAge:1;
        unsigned int wrote_transactionLocation:1;
        unsigned int wrote_transactionTimestamp:1;
        unsigned int wrote_warsawMerchantIdentifier:1;
        unsigned int wrote_transactionStatus:1;
        unsigned int wrote_transactionType:1;
        unsigned int wrote_enableBrandMuidFallback:1;
        unsigned int wrote_fuzzyMatched:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasFuzzyMatched;
@property(nonatomic) BOOL fuzzyMatched;
@property(retain, nonatomic) NSString *transactionId;
@property(readonly, nonatomic) BOOL hasTransactionId;
- (void)_readTransactionId;
- (int)StringAsTransactionStatus:(id)arg1;
- (id)transactionStatusAsString:(int)arg1;
@property(nonatomic) BOOL hasTransactionStatus;
@property(nonatomic) int transactionStatus;
@property(retain, nonatomic) GEOPDMerchantInformation *merchantInformation;
@property(readonly, nonatomic) BOOL hasMerchantInformation;
- (void)_readMerchantInformation;
@property(retain, nonatomic) GEOPDAdamAppIdentifier *appIdentifier;
@property(readonly, nonatomic) BOOL hasAppIdentifier;
- (void)_readAppIdentifier;
@property(retain, nonatomic) GEOPDWarsawMerchantIdentifier *warsawMerchantIdentifier;
@property(readonly, nonatomic) BOOL hasWarsawMerchantIdentifier;
- (void)_readWarsawMerchantIdentifier;
- (int)StringAsTransactionType:(id)arg1;
- (id)transactionTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasTransactionType;
@property(nonatomic) int transactionType;
@property(retain, nonatomic) NSString *transactionCurrencyCode;
@property(readonly, nonatomic) BOOL hasTransactionCurrencyCode;
- (void)_readTransactionCurrencyCode;
@property(retain, nonatomic) NSString *terminalId;
@property(readonly, nonatomic) BOOL hasTerminalId;
- (void)_readTerminalId;
@property(nonatomic) BOOL hasEnableBrandMuidFallback;
@property(nonatomic) BOOL enableBrandMuidFallback;
@property(nonatomic) BOOL hasIndustryCode;
@property(nonatomic) long long industryCode;
@property(retain, nonatomic) NSString *industryCategory;
@property(readonly, nonatomic) BOOL hasIndustryCategory;
- (void)_readIndustryCategory;
@property(retain, nonatomic) NSString *rawMerchantCode;
@property(readonly, nonatomic) BOOL hasRawMerchantCode;
- (void)_readRawMerchantCode;
@property(nonatomic) BOOL hasTransactionLocationAge;
@property(nonatomic) double transactionLocationAge;
@property(retain, nonatomic) GEOLocation *transactionLocation;
@property(readonly, nonatomic) BOOL hasTransactionLocation;
- (void)_readTransactionLocation;
@property(nonatomic) BOOL hasTransactionTimestamp;
@property(nonatomic) double transactionTimestamp;
@property(retain, nonatomic) NSString *merchantCode;
@property(readonly, nonatomic) BOOL hasMerchantCode;
- (void)_readMerchantCode;
@property(retain, nonatomic) NSString *paymentNetwork;
@property(readonly, nonatomic) BOOL hasPaymentNetwork;
- (void)_readPaymentNetwork;
- (id)initWithData:(id)arg1;
- (id)init;

@end

