//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class FCCKPRecordIdentifier;

@interface FCCKPRecordReference : PBCodable <NSCopying>
{
    FCCKPRecordIdentifier *_recordIdentifier;
    int _type;
//     CDStruct_f953fb60 _has;
}

@property(retain, nonatomic) FCCKPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasRecordIdentifier;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)dealloc;

@end

