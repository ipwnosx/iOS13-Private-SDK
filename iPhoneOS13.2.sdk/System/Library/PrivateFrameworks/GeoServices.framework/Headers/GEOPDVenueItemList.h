//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVenueItemList : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_items;
    NSString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_items:1;
        unsigned int read_title:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_items:1;
        unsigned int wrote_title:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)itemType;
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
- (id)itemAtIndex:(NSUInteger)arg1;
- (NSUInteger)itemsCount;
- (void)_addNoFlagsItem:(id)arg1;
- (void)addItem:(id)arg1;
- (void)clearItems;
@property(retain, nonatomic) NSMutableArray *items;
- (void)_readItems;
@property(retain, nonatomic) NSString *title;
@property(readonly, nonatomic) BOOL hasTitle;
- (void)_readTitle;
- (id)initWithData:(id)arg1;
- (id)init;

@end

