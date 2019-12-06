//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class FCCKPDateStatistics, FCCKPIdentifier, FCCKPRecordIdentifier, FCCKPRecordType, NSMutableArray, NSString;

@interface FCCKPRecord : PBCodable <NSCopying>
{
    NSMutableArray *_conflictLoserEtags;
    FCCKPIdentifier *_createdBy;
    NSString *_etag;
    NSMutableArray *_fields;
    FCCKPIdentifier *_modifiedBy;
    NSString *_modifiedByDevice;
    FCCKPRecordIdentifier *_recordIdentifier;
    FCCKPDateStatistics *_timeStatistics;
    FCCKPRecordType *_type;
}

@property(retain, nonatomic) NSString *modifiedByDevice; // @synthesize modifiedByDevice=_modifiedByDevice;
@property(retain, nonatomic) NSMutableArray *conflictLoserEtags; // @synthesize conflictLoserEtags=_conflictLoserEtags;
@property(retain, nonatomic) FCCKPIdentifier *modifiedBy; // @synthesize modifiedBy=_modifiedBy;
@property(retain, nonatomic) NSMutableArray *fields; // @synthesize fields=_fields;
@property(retain, nonatomic) FCCKPDateStatistics *timeStatistics; // @synthesize timeStatistics=_timeStatistics;
@property(retain, nonatomic) FCCKPIdentifier *createdBy; // @synthesize createdBy=_createdBy;
@property(retain, nonatomic) FCCKPRecordType *type; // @synthesize type=_type;
@property(retain, nonatomic) FCCKPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasModifiedByDevice;
- (id)conflictLoserEtagsAtIndex:(NSUInteger)arg1;
- (NSUInteger)conflictLoserEtagsCount;
- (void)addConflictLoserEtags:(id)arg1;
- (void)clearConflictLoserEtags;
@property(readonly, nonatomic) BOOL hasModifiedBy;
- (id)fieldsAtIndex:(NSUInteger)arg1;
- (NSUInteger)fieldsCount;
- (void)addFields:(id)arg1;
- (void)clearFields;
@property(readonly, nonatomic) BOOL hasTimeStatistics;
@property(readonly, nonatomic) BOOL hasCreatedBy;
@property(readonly, nonatomic) BOOL hasType;
@property(readonly, nonatomic) BOOL hasRecordIdentifier;
@property(readonly, nonatomic) BOOL hasEtag;
- (void)dealloc;

@end

