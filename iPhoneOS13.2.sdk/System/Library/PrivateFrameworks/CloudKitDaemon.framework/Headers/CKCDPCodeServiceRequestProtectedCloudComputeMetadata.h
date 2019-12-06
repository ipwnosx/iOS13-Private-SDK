//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKCDPCodeServiceRequestProtectedCloudComputeMetadata : PBCodable <NSCopying>
{
    NSMutableArray *_cryptoSessions;
}

+ (Class)cryptoSessionsType;
@property(retain, nonatomic) NSMutableArray *cryptoSessions; // @synthesize cryptoSessions=_cryptoSessions;
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
- (id)cryptoSessionsAtIndex:(NSUInteger)arg1;
- (NSUInteger)cryptoSessionsCount;
- (void)addCryptoSessions:(id)arg1;
- (void)clearCryptoSessions;

@end

