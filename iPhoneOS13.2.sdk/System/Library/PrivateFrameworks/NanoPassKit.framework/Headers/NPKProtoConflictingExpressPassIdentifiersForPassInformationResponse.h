//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface NPKProtoConflictingExpressPassIdentifiersForPassInformationResponse : PBCodable <NSCopying>
{
    NSMutableArray *_conflictingExpressPassIdentifiers;
    NSMutableArray *_conflictingReferenceExpressPassIdentifiers;
    BOOL _pending;
//     CDStruct_eab6c78c _has;
}

+ (Class)conflictingReferenceExpressPassIdentifiersType;
+ (Class)conflictingExpressPassIdentifiersType;
@property(retain, nonatomic) NSMutableArray *conflictingReferenceExpressPassIdentifiers; // @synthesize conflictingReferenceExpressPassIdentifiers=_conflictingReferenceExpressPassIdentifiers;
@property(retain, nonatomic) NSMutableArray *conflictingExpressPassIdentifiers; // @synthesize conflictingExpressPassIdentifiers=_conflictingExpressPassIdentifiers;
@property(nonatomic) BOOL pending; // @synthesize pending=_pending;
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
- (id)conflictingReferenceExpressPassIdentifiersAtIndex:(NSUInteger)arg1;
- (NSUInteger)conflictingReferenceExpressPassIdentifiersCount;
- (void)addConflictingReferenceExpressPassIdentifiers:(id)arg1;
- (void)clearConflictingReferenceExpressPassIdentifiers;
- (id)conflictingExpressPassIdentifiersAtIndex:(NSUInteger)arg1;
- (NSUInteger)conflictingExpressPassIdentifiersCount;
- (void)addConflictingExpressPassIdentifiers:(id)arg1;
- (void)clearConflictingExpressPassIdentifiers;
@property(nonatomic) BOOL hasPending;

@end

