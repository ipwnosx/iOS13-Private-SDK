//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOTileSet : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_baseURL;
    NSMutableArray *_countryRegionWhitelists;
    NSMutableArray *_deviceSKUWhitelists;
    NSString *_localizationURL;
    NSString *_multiTileURL;
    NSMutableArray *_supportedLanguages;
    NSMutableArray *_validVersions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    unsigned int _alternativeMultipathTCPPort;
    int _checksumType;
    unsigned int _dataSet;
    int _requestStyle;
    int _scale;
    int _size;
    int _style;
    int _updateBehavior;
    BOOL _multiTileURLUsesStatusCodes;
    BOOL _supportsMultipathTCP;
    BOOL _useAuthProxy;
    struct {
        unsigned int has_alternativeMultipathTCPPort:1;
        unsigned int has_checksumType:1;
        unsigned int has_dataSet:1;
        unsigned int has_requestStyle:1;
        unsigned int has_updateBehavior:1;
        unsigned int has_multiTileURLUsesStatusCodes:1;
        unsigned int has_supportsMultipathTCP:1;
        unsigned int has_useAuthProxy:1;
        unsigned int read_unknownFields:1;
        unsigned int read_baseURL:1;
        unsigned int read_countryRegionWhitelists:1;
        unsigned int read_deviceSKUWhitelists:1;
        unsigned int read_localizationURL:1;
        unsigned int read_multiTileURL:1;
        unsigned int read_supportedLanguages:1;
        unsigned int read_validVersions:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_baseURL:1;
        unsigned int wrote_countryRegionWhitelists:1;
        unsigned int wrote_deviceSKUWhitelists:1;
        unsigned int wrote_localizationURL:1;
        unsigned int wrote_multiTileURL:1;
        unsigned int wrote_supportedLanguages:1;
        unsigned int wrote_validVersions:1;
        unsigned int wrote_alternativeMultipathTCPPort:1;
        unsigned int wrote_checksumType:1;
        unsigned int wrote_dataSet:1;
        unsigned int wrote_requestStyle:1;
        unsigned int wrote_scale:1;
        unsigned int wrote_size:1;
        unsigned int wrote_style:1;
        unsigned int wrote_updateBehavior:1;
        unsigned int wrote_multiTileURLUsesStatusCodes:1;
        unsigned int wrote_supportsMultipathTCP:1;
        unsigned int wrote_useAuthProxy:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)deviceSKUWhitelistType;
+ (Class)countryRegionWhitelistType;
+ (Class)supportedLanguageType;
+ (Class)validVersionType;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)deviceSKUWhitelistAtIndex:(NSUInteger)arg1;
- (NSUInteger)deviceSKUWhitelistsCount;
- (void)_addNoFlagsDeviceSKUWhitelist:(id)arg1;
- (void)addDeviceSKUWhitelist:(id)arg1;
- (void)clearDeviceSKUWhitelists;
@property(retain, nonatomic) NSMutableArray *deviceSKUWhitelists;
- (void)_readDeviceSKUWhitelists;
@property(nonatomic) BOOL hasAlternativeMultipathTCPPort;
@property(nonatomic) unsigned int alternativeMultipathTCPPort;
@property(nonatomic) BOOL hasSupportsMultipathTCP;
@property(nonatomic) BOOL supportsMultipathTCP;
@property(nonatomic) BOOL hasUseAuthProxy;
@property(nonatomic) BOOL useAuthProxy;
- (int)StringAsRequestStyle:(id)arg1;
- (id)requestStyleAsString:(int)arg1;
@property(nonatomic) BOOL hasRequestStyle;
@property(nonatomic) int requestStyle;
@property(nonatomic) BOOL hasDataSet;
@property(nonatomic) unsigned int dataSet;
- (int)StringAsChecksumType:(id)arg1;
- (id)checksumTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasChecksumType;
@property(nonatomic) int checksumType;
- (id)countryRegionWhitelistAtIndex:(NSUInteger)arg1;
- (NSUInteger)countryRegionWhitelistsCount;
- (void)_addNoFlagsCountryRegionWhitelist:(id)arg1;
- (void)addCountryRegionWhitelist:(id)arg1;
- (void)clearCountryRegionWhitelists;
@property(retain, nonatomic) NSMutableArray *countryRegionWhitelists;
- (void)_readCountryRegionWhitelists;
- (int)StringAsUpdateBehavior:(id)arg1;
- (id)updateBehaviorAsString:(int)arg1;
@property(nonatomic) BOOL hasUpdateBehavior;
@property(nonatomic) int updateBehavior;
@property(nonatomic) BOOL hasMultiTileURLUsesStatusCodes;
@property(nonatomic) BOOL multiTileURLUsesStatusCodes;
- (id)supportedLanguageAtIndex:(NSUInteger)arg1;
- (NSUInteger)supportedLanguagesCount;
- (void)_addNoFlagsSupportedLanguage:(id)arg1;
- (void)addSupportedLanguage:(id)arg1;
- (void)clearSupportedLanguages;
@property(retain, nonatomic) NSMutableArray *supportedLanguages;
- (void)_readSupportedLanguages;
@property(retain, nonatomic) NSString *localizationURL;
@property(readonly, nonatomic) BOOL hasLocalizationURL;
- (void)_readLocalizationURL;
- (int)StringAsSize:(id)arg1;
- (id)sizeAsString:(int)arg1;
@property(nonatomic) int size;
- (int)StringAsScale:(id)arg1;
- (id)scaleAsString:(int)arg1;
@property(nonatomic) int scale;
- (id)validVersionAtIndex:(NSUInteger)arg1;
- (NSUInteger)validVersionsCount;
- (void)_addNoFlagsValidVersion:(id)arg1;
- (void)addValidVersion:(id)arg1;
- (void)clearValidVersions;
@property(retain, nonatomic) NSMutableArray *validVersions;
- (void)_readValidVersions;
- (int)StringAsStyle:(id)arg1;
- (id)styleAsString:(int)arg1;
@property(nonatomic) int style;
@property(retain, nonatomic) NSString *multiTileURL;
@property(readonly, nonatomic) BOOL hasMultiTileURL;
- (void)_readMultiTileURL;
@property(retain, nonatomic) NSString *baseURL;
@property(readonly, nonatomic) BOOL hasBaseURL;
- (void)_readBaseURL;
- (id)initWithData:(id)arg1;
- (id)init;

@end

