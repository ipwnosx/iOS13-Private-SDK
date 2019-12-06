//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData;

__attribute__((visibility("hidden")))
@interface CKDPPackageManifestSection : PBCodable <NSCopying>
{
    long long _size;
    NSData *_signature;
    BOOL _lastSection;
   struct {
        unsigned int size:1;
        unsigned int lastSection:1;
    } _has;
}

@property(nonatomic) BOOL lastSection; // @synthesize lastSection=_lastSection;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
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
@property(nonatomic) BOOL hasLastSection;
@property(nonatomic) BOOL hasSize;
@property(readonly, nonatomic) BOOL hasSignature;

@end

