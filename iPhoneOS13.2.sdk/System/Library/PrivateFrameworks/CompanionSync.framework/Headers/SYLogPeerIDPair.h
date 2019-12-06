//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

__attribute__((visibility("hidden")))
@interface SYLogPeerIDPair : PBCodable <NSCopying>
{
    NSString *_generationID;
    NSString *_peerID;
}

@property(retain, nonatomic) NSString *generationID; // @synthesize generationID=_generationID;
@property(retain, nonatomic) NSString *peerID; // @synthesize peerID=_peerID;
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
@property(readonly, nonatomic) BOOL hasGenerationID;

@end

