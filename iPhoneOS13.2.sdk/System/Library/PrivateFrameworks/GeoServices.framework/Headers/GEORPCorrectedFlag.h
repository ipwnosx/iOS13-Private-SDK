//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface GEORPCorrectedFlag : PBCodable <NSCopying>
{
    int _flag;
    BOOL _correctedValue;
    BOOL _originalValue;
    struct {
        unsigned int has_flag:1;
        unsigned int has_correctedValue:1;
        unsigned int has_originalValue:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(nonatomic) BOOL hasCorrectedValue;
@property(nonatomic) BOOL correctedValue;
@property(nonatomic) BOOL hasOriginalValue;
@property(nonatomic) BOOL originalValue;
- (int)StringAsFlag:(id)arg1;
- (id)flagAsString:(int)arg1;
@property(nonatomic) BOOL hasFlag;
@property(nonatomic) int flag;

@end

