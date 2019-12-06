//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOTimeToLeaveMapLaunch, NSString, PBDataReader;

@interface GEOLogMsgEventMapLaunch : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_launchUri;
    NSString *_sourceAppId;
    GEOTimeToLeaveMapLaunch *_timeToLeave;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_launchUri:1;
        unsigned int read_sourceAppId:1;
        unsigned int read_timeToLeave:1;
        unsigned int wrote_launchUri:1;
        unsigned int wrote_sourceAppId:1;
        unsigned int wrote_timeToLeave:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
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
@property(retain, nonatomic) GEOTimeToLeaveMapLaunch *timeToLeave;
@property(readonly, nonatomic) BOOL hasTimeToLeave;
- (void)_readTimeToLeave;
@property(retain, nonatomic) NSString *launchUri;
@property(readonly, nonatomic) BOOL hasLaunchUri;
- (void)_readLaunchUri;
@property(retain, nonatomic) NSString *sourceAppId;
@property(readonly, nonatomic) BOOL hasSourceAppId;
- (void)_readSourceAppId;
- (id)initWithData:(id)arg1;
- (id)init;

@end

