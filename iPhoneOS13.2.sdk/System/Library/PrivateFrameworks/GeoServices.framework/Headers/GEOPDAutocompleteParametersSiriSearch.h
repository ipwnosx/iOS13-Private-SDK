//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOPDViewportInfo, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteParametersSiriSearch : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_prefix;
    NSString *_query;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _maxResults;
    BOOL _completed;
    BOOL _highlightDiff;
    struct {
        unsigned int has_maxResults:1;
        unsigned int has_completed:1;
        unsigned int has_highlightDiff:1;
        unsigned int read_unknownFields:1;
        unsigned int read_prefix:1;
        unsigned int read_query:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_prefix:1;
        unsigned int wrote_query:1;
        unsigned int wrote_viewportInfo:1;
        unsigned int wrote_maxResults:1;
        unsigned int wrote_completed:1;
        unsigned int wrote_highlightDiff:1;
    } _flags;
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
@property(nonatomic) BOOL hasCompleted;
@property(nonatomic) BOOL completed;
@property(retain, nonatomic) NSString *prefix;
@property(readonly, nonatomic) BOOL hasPrefix;
- (void)_readPrefix;
@property(nonatomic) BOOL hasHighlightDiff;
@property(nonatomic) BOOL highlightDiff;
@property(nonatomic) BOOL hasMaxResults;
@property(nonatomic) int maxResults;
@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property(readonly, nonatomic) BOOL hasViewportInfo;
- (void)_readViewportInfo;
@property(retain, nonatomic) NSString *query;
@property(readonly, nonatomic) BOOL hasQuery;
- (void)_readQuery;
- (id)initWithData:(id)arg1;
- (id)init;

@end

