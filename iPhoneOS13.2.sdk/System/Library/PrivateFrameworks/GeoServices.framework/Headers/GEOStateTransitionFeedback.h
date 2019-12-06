//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface GEOStateTransitionFeedback : PBCodable <NSCopying>
{
    int _newValue;
    int _oldValue;
    int _stateType;
    struct {
        unsigned int has_newValue:1;
        unsigned int has_oldValue:1;
        unsigned int has_stateType:1;
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
- (int)StringAsNewValue:(id)arg1;
- (id)newValueAsString:(int)arg1;
@property(nonatomic) BOOL hasNewValue;
@property(nonatomic) int newValue;
- (int)StringAsOldValue:(id)arg1;
- (id)oldValueAsString:(int)arg1;
@property(nonatomic) BOOL hasOldValue;
@property(nonatomic) int oldValue;
- (int)StringAsStateType:(id)arg1;
- (id)stateTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasStateType;
@property(nonatomic) int stateType;

@end

