//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class MIPArtist, MIPSeries, NSString;

@interface MIPPodcast : PBCodable <NSCopying>
{
    MIPArtist *_artist;
    NSString *_externalGuid;
    NSString *_feedUrl;
    MIPSeries *_series;
}

@property(retain, nonatomic) NSString *feedUrl; // @synthesize feedUrl=_feedUrl;
@property(retain, nonatomic) NSString *externalGuid; // @synthesize externalGuid=_externalGuid;
@property(retain, nonatomic) MIPSeries *series; // @synthesize series=_series;
@property(retain, nonatomic) MIPArtist *artist; // @synthesize artist=_artist;
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
@property(readonly, nonatomic) BOOL hasFeedUrl;
@property(readonly, nonatomic) BOOL hasExternalGuid;
@property(readonly, nonatomic) BOOL hasSeries;
@property(readonly, nonatomic) BOOL hasArtist;

@end

