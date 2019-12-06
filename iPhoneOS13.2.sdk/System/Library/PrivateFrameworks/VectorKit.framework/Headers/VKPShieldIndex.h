//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VKPShieldIndex : PBCodable <NSCopying>
{
    NSMutableArray *_entries;
    NSMutableArray *_textEntries;
    NSMutableArray *_variantEntries;
}

@property(retain, nonatomic) NSMutableArray *variantEntries; // @synthesize variantEntries=_variantEntries;
@property(retain, nonatomic) NSMutableArray *textEntries; // @synthesize textEntries=_textEntries;
@property(retain, nonatomic) NSMutableArray *entries; // @synthesize entries=_entries;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)variantEntriesAtIndex:(NSUInteger)arg1;
- (NSUInteger)variantEntriesCount;
- (void)addVariantEntries:(id)arg1;
- (void)clearVariantEntries;
- (id)textEntriesAtIndex:(NSUInteger)arg1;
- (NSUInteger)textEntriesCount;
- (void)addTextEntries:(id)arg1;
- (void)clearTextEntries;
- (id)entriesAtIndex:(NSUInteger)arg1;
- (NSUInteger)entriesCount;
- (void)addEntries:(id)arg1;
- (void)clearEntries;
- (void)dealloc;

@end

