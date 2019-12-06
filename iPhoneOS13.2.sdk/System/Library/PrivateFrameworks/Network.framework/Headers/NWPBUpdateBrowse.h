//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString;

@interface NWPBUpdateBrowse : PBCodable <NSCopying>
{
    NSString *_clientUUID;
    NSMutableArray *_discoveredEndpoints;
}

+ (Class)discoveredEndpointsType;
@property(retain, nonatomic) NSMutableArray *discoveredEndpoints; // @synthesize discoveredEndpoints=_discoveredEndpoints;
@property(retain, nonatomic) NSString *clientUUID; // @synthesize clientUUID=_clientUUID;
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
- (id)discoveredEndpointsAtIndex:(NSUInteger)arg1;
- (NSUInteger)discoveredEndpointsCount;
- (void)addDiscoveredEndpoints:(id)arg1;
- (void)clearDiscoveredEndpoints;
@property(readonly, nonatomic) BOOL hasClientUUID;

@end

