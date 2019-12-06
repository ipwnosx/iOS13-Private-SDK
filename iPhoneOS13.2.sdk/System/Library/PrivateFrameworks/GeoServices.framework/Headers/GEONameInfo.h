//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString, PBDataReader, PBUnknownFields;

@interface GEONameInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_locale;
    NSString *_name;
    NSString *_phoneticName;
    NSString *_shield;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _phoneticType;
    int _shieldType;
    int _signType;
    struct {
        unsigned int has_phoneticType:1;
        unsigned int has_shieldType:1;
        unsigned int has_signType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_locale:1;
        unsigned int read_name:1;
        unsigned int read_phoneticName:1;
        unsigned int read_shield:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_locale:1;
        unsigned int wrote_name:1;
        unsigned int wrote_phoneticName:1;
        unsigned int wrote_shield:1;
        unsigned int wrote_phoneticType:1;
        unsigned int wrote_shieldType:1;
        unsigned int wrote_signType:1;
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
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSString *locale;
@property(readonly, nonatomic) BOOL hasLocale;
- (void)_readLocale;
- (int)StringAsSignType:(id)arg1;
- (id)signTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasSignType;
@property(nonatomic) int signType;
- (int)StringAsPhoneticType:(id)arg1;
- (id)phoneticTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPhoneticType;
@property(nonatomic) int phoneticType;
@property(nonatomic) BOOL hasShieldType;
@property(nonatomic) int shieldType;
@property(retain, nonatomic) NSString *shield;
@property(readonly, nonatomic) BOOL hasShield;
- (void)_readShield;
@property(retain, nonatomic) NSString *phoneticName;
@property(readonly, nonatomic) BOOL hasPhoneticName;
- (void)_readPhoneticName;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL hasName;
- (void)_readName;
- (id)initWithData:(id)arg1;
- (id)init;

@end

