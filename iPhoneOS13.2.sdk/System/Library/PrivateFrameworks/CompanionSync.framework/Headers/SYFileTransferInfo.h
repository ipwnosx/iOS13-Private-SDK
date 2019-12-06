//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString, SYMessageHeader;

@interface SYFileTransferInfo : PBCodable <NSCopying>
{
    NSUInteger _decompressedFileSize;
    NSString *_endAnchor;
    SYMessageHeader *_header;
    NSString *_startAnchor;
}

@property(nonatomic) NSUInteger decompressedFileSize; // @synthesize decompressedFileSize=_decompressedFileSize;
@property(retain, nonatomic) NSString *endAnchor; // @synthesize endAnchor=_endAnchor;
@property(retain, nonatomic) NSString *startAnchor; // @synthesize startAnchor=_startAnchor;
@property(retain, nonatomic) SYMessageHeader *header; // @synthesize header=_header;
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
@property(readonly, nonatomic) BOOL hasEndAnchor;
@property(readonly, nonatomic) BOOL hasStartAnchor;

@end

