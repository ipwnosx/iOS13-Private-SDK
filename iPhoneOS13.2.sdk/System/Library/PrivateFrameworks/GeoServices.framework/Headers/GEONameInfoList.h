//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, PBUnknownFields;

@interface GEONameInfoList : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_nameInfos;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)nameInfoType;
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
- (id)nameInfoAtIndex:(NSUInteger)arg1;
- (NSUInteger)nameInfosCount;
- (void)addNameInfo:(id)arg1;
- (void)clearNameInfos;
@property(retain, nonatomic) NSMutableArray *nameInfos;

@end

