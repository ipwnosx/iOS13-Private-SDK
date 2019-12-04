//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEORPCarPlayAuxiliaryControl, GEORPWatchAuxiliaryControl, PBDataReader;

@interface GEORPAuxiliaryControl : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    GEORPCarPlayAuxiliaryControl *_car;
    GEORPWatchAuxiliaryControl *_watch;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_car:1;
        unsigned int read_watch:1;
        unsigned int wrote_car:1;
        unsigned int wrote_watch:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
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
@property(retain, nonatomic) GEORPCarPlayAuxiliaryControl *car;
@property(readonly, nonatomic) _Bool hasCar;
- (void)_readCar;
@property(retain, nonatomic) GEORPWatchAuxiliaryControl *watch;
@property(readonly, nonatomic) _Bool hasWatch;
- (void)_readWatch;
- (id)initWithData:(id)arg1;
- (id)init;

@end
