//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString, PBDataReader;

@interface GEOAttributionApp : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_appBundleIdentifier;
    NSMutableArray *_handledSchemes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _restaurantReservationExtensionSupport;
    BOOL _supportsRestaurantQueueing;
    BOOL _supportsRestaurantReservations;
    struct {
        unsigned int has_restaurantReservationExtensionSupport:1;
        unsigned int has_supportsRestaurantQueueing:1;
        unsigned int has_supportsRestaurantReservations:1;
        unsigned int read_appBundleIdentifier:1;
        unsigned int read_handledSchemes:1;
        unsigned int wrote_appBundleIdentifier:1;
        unsigned int wrote_handledSchemes:1;
        unsigned int wrote_restaurantReservationExtensionSupport:1;
        unsigned int wrote_supportsRestaurantQueueing:1;
        unsigned int wrote_supportsRestaurantReservations:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)handledSchemesType;
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
- (int)StringAsRestaurantReservationExtensionSupport:(id)arg1;
- (id)restaurantReservationExtensionSupportAsString:(int)arg1;
@property(nonatomic) BOOL hasRestaurantReservationExtensionSupport;
@property(nonatomic) int restaurantReservationExtensionSupport;
@property(nonatomic) BOOL hasSupportsRestaurantQueueing;
@property(nonatomic) BOOL supportsRestaurantQueueing;
@property(nonatomic) BOOL hasSupportsRestaurantReservations;
@property(nonatomic) BOOL supportsRestaurantReservations;
- (id)handledSchemesAtIndex:(NSUInteger)arg1;
- (NSUInteger)handledSchemesCount;
- (void)_addNoFlagsHandledSchemes:(id)arg1;
- (void)addHandledSchemes:(id)arg1;
- (void)clearHandledSchemes;
@property(retain, nonatomic) NSMutableArray *handledSchemes;
- (void)_readHandledSchemes;
@property(retain, nonatomic) NSString *appBundleIdentifier;
- (void)_readAppBundleIdentifier;
- (id)initWithData:(id)arg1;
- (id)init;

@end

