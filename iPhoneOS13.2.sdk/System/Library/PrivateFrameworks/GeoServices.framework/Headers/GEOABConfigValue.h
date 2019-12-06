//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOABConfigValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _doubleValue;
    long long _intValue;
    NSString *_stringValue;
    BOOL _boolValue;
    struct {
        unsigned int has_doubleValue:1;
        unsigned int has_intValue:1;
        unsigned int has_boolValue:1;
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
@property(nonatomic) BOOL hasBoolValue;
@property(nonatomic) BOOL boolValue;
@property(retain, nonatomic) NSString *stringValue;
@property(readonly, nonatomic) BOOL hasStringValue;
@property(nonatomic) BOOL hasDoubleValue;
@property(nonatomic) double doubleValue;
@property(nonatomic) BOOL hasIntValue;
@property(nonatomic) long long intValue;

@end

