//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOServiceVersion : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_versionDomains;
    unsigned int _minimumVersion;
    struct {
        unsigned int has_minimumVersion:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)versionDomainType;
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
@property(nonatomic) BOOL hasMinimumVersion;
@property(nonatomic) unsigned int minimumVersion;
- (id)versionDomainAtIndex:(NSUInteger)arg1;
- (NSUInteger)versionDomainsCount;
- (void)addVersionDomain:(id)arg1;
- (void)clearVersionDomains;
@property(retain, nonatomic) NSMutableArray *versionDomains;

@end

