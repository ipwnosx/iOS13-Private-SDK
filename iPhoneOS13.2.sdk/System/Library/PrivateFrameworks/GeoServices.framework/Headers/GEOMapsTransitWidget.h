//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSMutableArray;

@interface GEOMapsTransitWidget : PBCodable <NSCopying>
{
    NSMutableArray *_transitIncidentItems;
    int _tappedItemIndex;
    int _transitMessageType;
    _Bool _everExpanded;
    _Bool _initiallyExpanded;
    struct {
        unsigned int has_tappedItemIndex:1;
        unsigned int has_transitMessageType:1;
        unsigned int has_everExpanded:1;
        unsigned int has_initiallyExpanded:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)transitIncidentItemType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTappedItemIndex;
@property(nonatomic) int tappedItemIndex;
@property(nonatomic) _Bool hasEverExpanded;
@property(nonatomic) _Bool everExpanded;
@property(nonatomic) _Bool hasInitiallyExpanded;
@property(nonatomic) _Bool initiallyExpanded;
- (id)transitIncidentItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)transitIncidentItemsCount;
- (void)addTransitIncidentItem:(id)arg1;
- (void)clearTransitIncidentItems;
@property(retain, nonatomic) NSMutableArray *transitIncidentItems;
- (int)StringAsTransitMessageType:(id)arg1;
- (id)transitMessageTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasTransitMessageType;
@property(nonatomic) int transitMessageType;

@end
