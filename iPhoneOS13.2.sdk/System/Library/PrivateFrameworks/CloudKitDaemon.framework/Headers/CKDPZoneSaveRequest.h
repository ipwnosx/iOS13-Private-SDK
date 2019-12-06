//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class CKDPZone, NSString;

__attribute__((visibility("hidden")))
@interface CKDPZoneSaveRequest : PBRequest <NSCopying>
{
    CKDPZone *_recordZone;
    NSString *_zoneProtectionInfoTag;
}

+ (id)options;
@property(retain, nonatomic) NSString *zoneProtectionInfoTag; // @synthesize zoneProtectionInfoTag=_zoneProtectionInfoTag;
@property(retain, nonatomic) CKDPZone *recordZone; // @synthesize recordZone=_recordZone;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasZoneProtectionInfoTag;
@property(readonly, nonatomic) BOOL hasRecordZone;

@end

