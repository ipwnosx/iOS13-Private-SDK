//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class _MRNowPlayingPlayerPathProtobuf, _MRTransactionPacketsProtobuf;

@interface _MRTransactionMessageProtobuf : PBCodable <NSCopying>
{
    NSUInteger _name;
    _MRTransactionPacketsProtobuf *_packets;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
   struct {
        unsigned int name:1;
    } _has;
}

@property(retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
@property(retain, nonatomic) _MRTransactionPacketsProtobuf *packets; // @synthesize packets=_packets;
@property(nonatomic) NSUInteger name; // @synthesize name=_name;
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
@property(readonly, nonatomic) BOOL hasPlayerPath;
@property(readonly, nonatomic) BOOL hasPackets;
@property(nonatomic) BOOL hasName;

@end

