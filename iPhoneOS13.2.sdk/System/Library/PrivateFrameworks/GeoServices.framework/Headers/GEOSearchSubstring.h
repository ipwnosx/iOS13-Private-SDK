//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, PBUnknownFields;

@interface GEOSearchSubstring : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_spanDatas;
    int _beginIndex;
    int _endIndex;
    int _stringType;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)spanDataType;
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
- (id)spanDataAtIndex:(NSUInteger)arg1;
- (NSUInteger)spanDatasCount;
- (void)addSpanData:(id)arg1;
- (void)clearSpanDatas;
@property(retain, nonatomic) NSMutableArray *spanDatas;
@property(nonatomic) int endIndex;
@property(nonatomic) int beginIndex;
- (int)StringAsStringType:(id)arg1;
- (id)stringTypeAsString:(int)arg1;
@property(nonatomic) int stringType;

@end

