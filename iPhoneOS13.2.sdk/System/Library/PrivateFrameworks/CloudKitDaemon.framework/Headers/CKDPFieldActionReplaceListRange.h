//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class CKDPListRange, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPFieldActionReplaceListRange : PBCodable <NSCopying>
{
    CKDPListRange *_range;
    NSMutableArray *_values;
}

+ (Class)valueType;
@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
@property(retain, nonatomic) CKDPListRange *range; // @synthesize range=_range;
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
- (id)valueAtIndex:(NSUInteger)arg1;
- (NSUInteger)valuesCount;
- (void)addValue:(id)arg1;
- (void)clearValues;
@property(readonly, nonatomic) BOOL hasRange;

@end

