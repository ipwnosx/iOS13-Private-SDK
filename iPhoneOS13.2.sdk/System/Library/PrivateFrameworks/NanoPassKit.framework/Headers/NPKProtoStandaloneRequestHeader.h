//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString;

@interface NPKProtoStandaloneRequestHeader : PBCodable <NSCopying>
{
    NSMutableArray *_cachedHeroImages;
    int _protocolVersion;
    NSString *_sessionIdentifier;
    NSString *_stepIdentifier;
}

+ (Class)cachedHeroImagesType;
@property(retain, nonatomic) NSMutableArray *cachedHeroImages; // @synthesize cachedHeroImages=_cachedHeroImages;
@property(retain, nonatomic) NSString *stepIdentifier; // @synthesize stepIdentifier=_stepIdentifier;
@property(retain, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(nonatomic) int protocolVersion; // @synthesize protocolVersion=_protocolVersion;
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
- (id)cachedHeroImagesAtIndex:(NSUInteger)arg1;
- (NSUInteger)cachedHeroImagesCount;
- (void)addCachedHeroImages:(id)arg1;
- (void)clearCachedHeroImages;
@property(readonly, nonatomic) BOOL hasStepIdentifier;
@property(readonly, nonatomic) BOOL hasSessionIdentifier;
- (int)StringAsProtocolVersion:(id)arg1;
- (id)protocolVersionAsString:(int)arg1;

@end

