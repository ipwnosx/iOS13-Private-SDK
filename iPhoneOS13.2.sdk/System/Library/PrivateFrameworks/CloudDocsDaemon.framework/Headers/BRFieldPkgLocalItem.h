//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class BRFieldPkgItem, NSData;

@interface BRFieldPkgLocalItem : PBCodable <NSCopying>
{
    long long _fileID;
    long long _size;
    unsigned int _generationID;
    BRFieldPkgItem *_item;
    NSData *_xattrs;
   struct {
        unsigned int size:1;
        unsigned int generationID:1;
    } _has;
}

@property(retain, nonatomic) NSData *xattrs; // @synthesize xattrs=_xattrs;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(nonatomic) unsigned int generationID; // @synthesize generationID=_generationID;
@property(nonatomic) long long fileID; // @synthesize fileID=_fileID;
@property(retain, nonatomic) BRFieldPkgItem *item; // @synthesize item=_item;
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
@property(readonly, nonatomic) BOOL hasXattrs;
@property(nonatomic) BOOL hasSize;
@property(nonatomic) BOOL hasGenerationID;

@end

