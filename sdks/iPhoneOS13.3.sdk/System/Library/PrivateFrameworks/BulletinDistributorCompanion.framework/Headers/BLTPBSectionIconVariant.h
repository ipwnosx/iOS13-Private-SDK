//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData;

@interface BLTPBSectionIconVariant : PBCodable <NSCopying>
{
    unsigned int _format;
    NSData *_imageData;
    BOOL _precomposed;
    struct {
        unsigned int precomposed:1;
    } _has;
}

@property(nonatomic) BOOL precomposed; // @synthesize precomposed=_precomposed;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(nonatomic) unsigned int format; // @synthesize format=_format;
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
@property(nonatomic) BOOL hasPrecomposed;
@property(readonly, nonatomic) BOOL hasImageData;

@end
