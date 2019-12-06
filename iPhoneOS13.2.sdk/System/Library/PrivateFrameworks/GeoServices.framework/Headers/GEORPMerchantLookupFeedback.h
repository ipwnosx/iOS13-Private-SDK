//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEORPMerchantLookupContext, GEORPMerchantLookupCorrections, PBDataReader, PBUnknownFields;

@interface GEORPMerchantLookupFeedback : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPMerchantLookupContext *_context;
    GEORPMerchantLookupCorrections *_corrections;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
//     CDStruct_5bb8e4f8 _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEORPMerchantLookupCorrections *corrections;
@property(readonly, nonatomic) BOOL hasCorrections;
- (void)_readCorrections;
@property(retain, nonatomic) GEORPMerchantLookupContext *context;
@property(readonly, nonatomic) BOOL hasContext;
- (void)_readContext;
- (id)initWithData:(id)arg1;
- (id)init;

@end

