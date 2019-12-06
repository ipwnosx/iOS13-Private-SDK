//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString;

@interface BLTPBSectionBulletinList : PBCodable <NSCopying>
{
    NSMutableArray *_bulletinIdentifiers;
    NSString *_sectionID;
}

+ (Class)bulletinIdentifierType;
@property(retain, nonatomic) NSMutableArray *bulletinIdentifiers; // @synthesize bulletinIdentifiers=_bulletinIdentifiers;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
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
- (id)bulletinIdentifierAtIndex:(NSUInteger)arg1;
- (NSUInteger)bulletinIdentifiersCount;
- (void)addBulletinIdentifier:(id)arg1;
- (void)clearBulletinIdentifiers;

@end

