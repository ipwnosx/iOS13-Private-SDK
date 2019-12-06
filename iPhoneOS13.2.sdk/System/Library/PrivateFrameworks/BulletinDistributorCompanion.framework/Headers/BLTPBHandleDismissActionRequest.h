//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class BLTPBActionInformation, NSString;

@interface BLTPBHandleDismissActionRequest : PBRequest <NSCopying>
{
    BLTPBActionInformation *_actionInfo;
    NSString *_publisherBulletinID;
    NSString *_recordID;
    NSString *_sectionID;
}

@property(retain, nonatomic) BLTPBActionInformation *actionInfo; // @synthesize actionInfo=_actionInfo;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(retain, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(retain, nonatomic) NSString *publisherBulletinID; // @synthesize publisherBulletinID=_publisherBulletinID;
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
@property(readonly, nonatomic) BOOL hasActionInfo;
@property(readonly, nonatomic) BOOL hasSectionID;
@property(readonly, nonatomic) BOOL hasRecordID;
@property(readonly, nonatomic) BOOL hasPublisherBulletinID;

@end

