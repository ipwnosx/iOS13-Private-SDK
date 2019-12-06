//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface NTPBIssueData : PBCodable <NSCopying>
{
    NSString *_issueId;
    int _issueType;
    BOOL _isBundlePaid;
//     CDStruct_e072d072 _has;
}

@property(nonatomic) BOOL isBundlePaid; // @synthesize isBundlePaid=_isBundlePaid;
@property(retain, nonatomic) NSString *issueId; // @synthesize issueId=_issueId;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsIssueType:(id)arg1;
- (id)issueTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasIssueType;
@property(nonatomic) int issueType; // @synthesize issueType=_issueType;
@property(nonatomic) BOOL hasIsBundlePaid;
@property(readonly, nonatomic) BOOL hasIssueId;

@end

