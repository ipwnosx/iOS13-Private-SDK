//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString, SYMessageHeader;

@interface SYBatchSyncStart : PBCodable <NSCopying>
{
    unsigned int _estimatedChangeCount;
    SYMessageHeader *_header;
    NSString *_syncID;
   struct {
        unsigned int estimatedChangeCount:1;
    } _has;
}

@property(nonatomic) unsigned int estimatedChangeCount; // @synthesize estimatedChangeCount=_estimatedChangeCount;
@property(retain, nonatomic) NSString *syncID; // @synthesize syncID=_syncID;
@property(retain, nonatomic) SYMessageHeader *header; // @synthesize header=_header;
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
@property(nonatomic) BOOL hasEstimatedChangeCount;

@end

