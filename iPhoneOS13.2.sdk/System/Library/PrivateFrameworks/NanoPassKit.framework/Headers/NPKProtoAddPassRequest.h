//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class NPKProtoCatalog, NPKProtoHash, NPKProtoPass;

@interface NPKProtoAddPassRequest : PBRequest <NSCopying>
{
    NPKProtoCatalog *_catalog;
    unsigned int _lastKnownResyncID;
    NPKProtoHash *_libraryHash;
    NPKProtoPass *_pass;
    unsigned int _resyncID;
    unsigned int _syncID;
//     CDStruct_02c44088 _has;
}

@property(nonatomic) unsigned int syncID; // @synthesize syncID=_syncID;
@property(nonatomic) unsigned int lastKnownResyncID; // @synthesize lastKnownResyncID=_lastKnownResyncID;
@property(retain, nonatomic) NPKProtoCatalog *catalog; // @synthesize catalog=_catalog;
@property(nonatomic) unsigned int resyncID; // @synthesize resyncID=_resyncID;
@property(retain, nonatomic) NPKProtoHash *libraryHash; // @synthesize libraryHash=_libraryHash;
@property(retain, nonatomic) NPKProtoPass *pass; // @synthesize pass=_pass;
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
@property(nonatomic) BOOL hasSyncID;
@property(nonatomic) BOOL hasLastKnownResyncID;
@property(readonly, nonatomic) BOOL hasCatalog;
@property(nonatomic) BOOL hasResyncID;
@property(readonly, nonatomic) BOOL hasLibraryHash;

@end

