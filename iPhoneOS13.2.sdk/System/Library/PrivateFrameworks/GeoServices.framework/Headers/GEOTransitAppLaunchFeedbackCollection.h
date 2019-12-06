//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOLatLng, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTransitAppLaunchFeedbackCollection : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_bundleIdentifier;
    GEOLatLng *_destination;
    GEOLatLng *_source;
    double _timestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
//     CDStruct_ea2c3af7 _flags;
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
@property(nonatomic) BOOL hasTimestamp;
@property(nonatomic) double timestamp;
@property(retain, nonatomic) GEOLatLng *destination;
@property(readonly, nonatomic) BOOL hasDestination;
- (void)_readDestination;
@property(retain, nonatomic) GEOLatLng *source;
@property(readonly, nonatomic) BOOL hasSource;
- (void)_readSource;
@property(retain, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) BOOL hasBundleIdentifier;
- (void)_readBundleIdentifier;
- (id)initWithData:(id)arg1;
- (id)init;

@end

