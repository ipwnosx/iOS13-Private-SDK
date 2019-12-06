//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface PPPBContactNameRecordCache : PBCodable <NSCopying>
{
    long long _createdAt;
    NSMutableArray *_records;
    struct {
        unsigned int createdAt:1;
    } _has;
}

+ (Class)recordsType;
@property(nonatomic) long long createdAt; // @synthesize createdAt=_createdAt;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasCreatedAt;
- (id)recordsAtIndex:(NSUInteger)arg1;
- (NSUInteger)recordsCount;
- (void)addRecords:(id)arg1;
- (void)clearRecords;

@end

