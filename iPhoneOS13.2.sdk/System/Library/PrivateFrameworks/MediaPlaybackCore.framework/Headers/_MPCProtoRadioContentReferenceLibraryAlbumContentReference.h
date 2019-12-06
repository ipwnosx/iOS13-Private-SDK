//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface _MPCProtoRadioContentReferenceLibraryAlbumContentReference : PBCodable <NSCopying>
{
    long long _representativeItemCloudID;
    long long _storeAdamID;
    NSString *_albumName;
//     CDStruct_c223d907 _has;
}

@property(nonatomic) long long storeAdamID; // @synthesize storeAdamID=_storeAdamID;
@property(nonatomic) long long representativeItemCloudID; // @synthesize representativeItemCloudID=_representativeItemCloudID;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasStoreAdamID;
@property(nonatomic) BOOL hasRepresentativeItemCloudID;
@property(readonly, nonatomic) BOOL hasAlbumName;

@end

