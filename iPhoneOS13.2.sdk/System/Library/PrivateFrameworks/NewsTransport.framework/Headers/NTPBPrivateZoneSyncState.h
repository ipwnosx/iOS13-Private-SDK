//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSString, NTPBDate;

@interface NTPBPrivateZoneSyncState : PBCodable <NSCopying>
{
    NSData *_changeToken;
    NTPBDate *_lastCleanDate;
    NTPBDate *_lastDirtyDate;
    NSString *_zoneName;
}

@property(retain, nonatomic) NTPBDate *lastDirtyDate; // @synthesize lastDirtyDate=_lastDirtyDate;
@property(retain, nonatomic) NTPBDate *lastCleanDate; // @synthesize lastCleanDate=_lastCleanDate;
@property(retain, nonatomic) NSData *changeToken; // @synthesize changeToken=_changeToken;
@property(retain, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasLastDirtyDate;
@property(readonly, nonatomic) BOOL hasLastCleanDate;
@property(readonly, nonatomic) BOOL hasChangeToken;
@property(readonly, nonatomic) BOOL hasZoneName;
- (void)dealloc;

@end

