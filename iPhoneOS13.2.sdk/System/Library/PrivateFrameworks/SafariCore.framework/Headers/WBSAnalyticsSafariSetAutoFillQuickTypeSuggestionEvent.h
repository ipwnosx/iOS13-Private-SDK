//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface WBSAnalyticsSafariSetAutoFillQuickTypeSuggestionEvent : PBCodable <NSCopying>
{
    NSUInteger _timestamp;
    int _category;
    int _formProperty;
//     CDStruct_18b2ecd0 _has;
}

@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsFormProperty:(id)arg1;
- (id)formPropertyAsString:(int)arg1;
@property(nonatomic) BOOL hasFormProperty;
@property(nonatomic) int formProperty; // @synthesize formProperty=_formProperty;
- (int)StringAsCategory:(id)arg1;
- (id)categoryAsString:(int)arg1;
@property(nonatomic) BOOL hasCategory;
@property(nonatomic) int category; // @synthesize category=_category;
@property(nonatomic) BOOL hasTimestamp;

@end

