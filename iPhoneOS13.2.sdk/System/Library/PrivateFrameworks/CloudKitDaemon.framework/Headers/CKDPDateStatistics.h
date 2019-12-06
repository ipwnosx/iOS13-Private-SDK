//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class CKDPDate;

@interface CKDPDateStatistics : PBCodable <NSCopying>
{
    CKDPDate *_creation;
    CKDPDate *_modification;
}

@property(retain, nonatomic) CKDPDate *modification; // @synthesize modification=_modification;
@property(retain, nonatomic) CKDPDate *creation; // @synthesize creation=_creation;
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
@property(readonly, nonatomic) BOOL hasModification;
@property(readonly, nonatomic) BOOL hasCreation;

@end

