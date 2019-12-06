//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface NTPBHeadlineAnalyticsElement : PBCodable <NSCopying>
{
    long long _articleVersion;
    NSString *_articleID;
    NSString *_channelID;
    NSString *_preseenCountTrackingIdentifier;
    BOOL _needsSeenStateTracking;
   struct {
        unsigned int articleVersion:1;
        unsigned int needsSeenStateTracking:1;
    } _has;
}

@property(retain, nonatomic) NSString *preseenCountTrackingIdentifier; // @synthesize preseenCountTrackingIdentifier=_preseenCountTrackingIdentifier;
@property(retain, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(nonatomic) BOOL needsSeenStateTracking; // @synthesize needsSeenStateTracking=_needsSeenStateTracking;
@property(nonatomic) long long articleVersion; // @synthesize articleVersion=_articleVersion;
@property(retain, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPreseenCountTrackingIdentifier;
@property(readonly, nonatomic) BOOL hasChannelID;
@property(nonatomic) BOOL hasNeedsSeenStateTracking;
@property(nonatomic) BOOL hasArticleVersion;
@property(readonly, nonatomic) BOOL hasArticleID;

@end

