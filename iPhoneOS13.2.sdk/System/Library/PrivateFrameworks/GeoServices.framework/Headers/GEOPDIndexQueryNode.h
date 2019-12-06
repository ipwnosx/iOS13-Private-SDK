//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDIndexQueryNode : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_field;
    NSMutableArray *_operands;
    NSString *_value;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _type;
//     CDStruct_24aeab2f _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)operandType;
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
- (id)operandAtIndex:(NSUInteger)arg1;
- (NSUInteger)operandsCount;
- (void)_addNoFlagsOperand:(id)arg1;
- (void)addOperand:(id)arg1;
- (void)clearOperands;
@property(retain, nonatomic) NSMutableArray *operands;
- (void)_readOperands;
@property(retain, nonatomic) NSString *value;
@property(readonly, nonatomic) BOOL hasValue;
- (void)_readValue;
@property(retain, nonatomic) NSString *field;
@property(readonly, nonatomic) BOOL hasField;
- (void)_readField;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) int type;
- (id)initWithData:(id)arg1;
- (id)init;

@end

