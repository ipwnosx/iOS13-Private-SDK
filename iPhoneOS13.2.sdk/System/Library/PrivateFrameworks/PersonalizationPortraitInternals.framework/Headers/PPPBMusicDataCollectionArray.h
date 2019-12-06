//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString;

@interface PPPBMusicDataCollectionArray : PBCodable <NSCopying>
{
    NSString *_assetVersion;
    NSMutableArray *_experimentalGroups;
    NSMutableArray *_records;
    BOOL _hasMusicSubscription;
    struct {
        unsigned int hasMusicSubscription:1;
    } _has;
}

+ (Class)experimentalGroupsType;
+ (Class)recordsType;
@property(retain, nonatomic) NSString *assetVersion; // @synthesize assetVersion=_assetVersion;
@property(retain, nonatomic) NSMutableArray *experimentalGroups; // @synthesize experimentalGroups=_experimentalGroups;
@property(nonatomic) BOOL hasMusicSubscription; // @synthesize hasMusicSubscription=_hasMusicSubscription;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
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
@property(readonly, nonatomic) BOOL hasAssetVersion;
- (id)experimentalGroupsAtIndex:(NSUInteger)arg1;
- (NSUInteger)experimentalGroupsCount;
- (void)addExperimentalGroups:(id)arg1;
- (void)clearExperimentalGroups;
@property(nonatomic) BOOL hasHasMusicSubscription;
- (id)recordsAtIndex:(NSUInteger)arg1;
- (NSUInteger)recordsCount;
- (void)addRecords:(id)arg1;
- (void)clearRecords;

@end

