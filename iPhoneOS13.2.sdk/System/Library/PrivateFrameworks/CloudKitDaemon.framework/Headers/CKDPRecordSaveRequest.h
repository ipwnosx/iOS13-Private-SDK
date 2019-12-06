//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class CKDPRecord, CKDPRecordSaveRequestConflictLoserUpdate, CKDPRecordSaveRequestShareIdUpdate, CKDPRequestedFields, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPRecordSaveRequest : PBRequest <NSCopying>
{
    CKDPRecordSaveRequestConflictLoserUpdate *_conflictLoserUpdate;
    NSMutableArray *_conflictLosersToResolves;
    NSString *_etag;
    NSMutableArray *_fieldsToDeleteIfExistOnMerges;
    NSString *_parentChainProtectionInfoTag;
    CKDPRecord *_record;
    NSString *_recordProtectionInfoTag;
    CKDPRequestedFields *_requestedFields;
    int _saveSemantics;
    NSString *_shareEtag;
    CKDPRecordSaveRequestShareIdUpdate *_shareIDUpdate;
    NSString *_zoneProtectionInfoTag;
    BOOL _merge;
   struct {
        unsigned int saveSemantics:1;
        unsigned int merge:1;
    } _has;
}

+ (Class)conflictLosersToResolveType;
+ (Class)fieldsToDeleteIfExistOnMergeType;
+ (id)options;
@property(retain, nonatomic) CKDPRequestedFields *requestedFields; // @synthesize requestedFields=_requestedFields;
@property(retain, nonatomic) NSString *parentChainProtectionInfoTag; // @synthesize parentChainProtectionInfoTag=_parentChainProtectionInfoTag;
@property(retain, nonatomic) CKDPRecordSaveRequestShareIdUpdate *shareIDUpdate; // @synthesize shareIDUpdate=_shareIDUpdate;
@property(retain, nonatomic) NSString *shareEtag; // @synthesize shareEtag=_shareEtag;
@property(retain, nonatomic) NSMutableArray *conflictLosersToResolves; // @synthesize conflictLosersToResolves=_conflictLosersToResolves;
@property(retain, nonatomic) NSString *recordProtectionInfoTag; // @synthesize recordProtectionInfoTag=_recordProtectionInfoTag;
@property(retain, nonatomic) NSString *zoneProtectionInfoTag; // @synthesize zoneProtectionInfoTag=_zoneProtectionInfoTag;
@property(retain, nonatomic) CKDPRecordSaveRequestConflictLoserUpdate *conflictLoserUpdate; // @synthesize conflictLoserUpdate=_conflictLoserUpdate;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) NSMutableArray *fieldsToDeleteIfExistOnMerges; // @synthesize fieldsToDeleteIfExistOnMerges=_fieldsToDeleteIfExistOnMerges;
@property(nonatomic) BOOL merge; // @synthesize merge=_merge;
@property(retain, nonatomic) CKDPRecord *record; // @synthesize record=_record;
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
@property(readonly, nonatomic) BOOL hasRequestedFields;
@property(readonly, nonatomic) BOOL hasParentChainProtectionInfoTag;
@property(readonly, nonatomic) BOOL hasShareIDUpdate;
@property(readonly, nonatomic) BOOL hasShareEtag;
- (id)conflictLosersToResolveAtIndex:(NSUInteger)arg1;
- (NSUInteger)conflictLosersToResolvesCount;
- (void)addConflictLosersToResolve:(id)arg1;
- (void)clearConflictLosersToResolves;
@property(readonly, nonatomic) BOOL hasRecordProtectionInfoTag;
@property(readonly, nonatomic) BOOL hasZoneProtectionInfoTag;
- (int)StringAsSaveSemantics:(id)arg1;
- (id)saveSemanticsAsString:(int)arg1;
@property(nonatomic) BOOL hasSaveSemantics;
@property(nonatomic) int saveSemantics; // @synthesize saveSemantics=_saveSemantics;
@property(readonly, nonatomic) BOOL hasConflictLoserUpdate;
@property(readonly, nonatomic) BOOL hasEtag;
- (id)fieldsToDeleteIfExistOnMergeAtIndex:(NSUInteger)arg1;
- (NSUInteger)fieldsToDeleteIfExistOnMergesCount;
- (void)addFieldsToDeleteIfExistOnMerge:(id)arg1;
- (void)clearFieldsToDeleteIfExistOnMerges;
@property(nonatomic) BOOL hasMerge;
@property(readonly, nonatomic) BOOL hasRecord;

@end

