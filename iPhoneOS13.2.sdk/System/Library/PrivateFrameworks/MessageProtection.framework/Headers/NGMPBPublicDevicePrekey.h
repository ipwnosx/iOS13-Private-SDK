//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData;

__attribute__((visibility("hidden")))
@interface NGMPBPublicDevicePrekey : PBCodable <NSCopying>
{
    double _timestamp;
    NSData *_prekey;
    NSData *_prekeySignature;
}

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSData *prekeySignature; // @synthesize prekeySignature=_prekeySignature;
@property(retain, nonatomic) NSData *prekey; // @synthesize prekey=_prekey;
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

