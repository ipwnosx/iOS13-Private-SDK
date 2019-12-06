//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData;

@interface NPKProtoBitmap : PBCodable <NSCopying>
{
    NSUInteger _bitsPerComponent;
    NSUInteger _bitsPerPixel;
    NSUInteger _bytesPerRow;
    NSUInteger _height;
    NSUInteger _width;
    NSData *_bitmapData;
    unsigned int _bitmapInfo;
}

@property(retain, nonatomic) NSData *bitmapData; // @synthesize bitmapData=_bitmapData;
@property(nonatomic) unsigned int bitmapInfo; // @synthesize bitmapInfo=_bitmapInfo;
@property(nonatomic) NSUInteger bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;
@property(nonatomic) NSUInteger bitsPerPixel; // @synthesize bitsPerPixel=_bitsPerPixel;
@property(nonatomic) NSUInteger bitsPerComponent; // @synthesize bitsPerComponent=_bitsPerComponent;
@property(nonatomic) NSUInteger height; // @synthesize height=_height;
@property(nonatomic) NSUInteger width; // @synthesize width=_width;
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

@end

