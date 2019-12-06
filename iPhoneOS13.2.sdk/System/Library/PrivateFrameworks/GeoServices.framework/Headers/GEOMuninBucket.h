//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString, PBUnknownFields;

@interface GEOMuninBucket : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_bucketURL;
    unsigned int _bucketID;
    unsigned int _lodLevel;
    struct {
        unsigned int has_bucketID:1;
        unsigned int has_lodLevel:1;
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
@property(nonatomic) BOOL hasLodLevel;
@property(nonatomic) unsigned int lodLevel;
@property(retain, nonatomic) NSString *bucketURL;
@property(readonly, nonatomic) BOOL hasBucketURL;
@property(nonatomic) BOOL hasBucketID;
@property(nonatomic) unsigned int bucketID;

@end

