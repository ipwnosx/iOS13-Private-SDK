//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface CPLRampingResponse : PBCodable <NSCopying>
{
    NSMutableArray *_responses;
}

+ (Class)responseType;
@property(retain, nonatomic) NSMutableArray *responses; // @synthesize responses=_responses;
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
- (id)responseAtIndex:(NSUInteger)arg1;
- (NSUInteger)responsesCount;
- (void)addResponse:(id)arg1;
- (void)clearResponses;

@end

