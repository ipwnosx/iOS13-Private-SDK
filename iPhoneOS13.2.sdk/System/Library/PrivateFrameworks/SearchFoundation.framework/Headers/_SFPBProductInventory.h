//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/_SFPBProductInventory-Protocol.h>

@class NSData, NSString, _SFPBDate;

@interface _SFPBProductInventory : PBCodable <_SFPBProductInventory, NSSecureCoding>
{
    int _type;
    int _availabilityStatus;
    float _distance;
    int _distanceUnit;
    NSString *_storeId;
    _SFPBDate *_timestamp;
    NSString *_storeName;
    NSString *_storeAddress;
}

@property(copy, nonatomic) NSString *storeAddress; // @synthesize storeAddress=_storeAddress;
@property(copy, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(retain, nonatomic) _SFPBDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) int distanceUnit; // @synthesize distanceUnit=_distanceUnit;
@property(nonatomic) float distance; // @synthesize distance=_distance;
@property(nonatomic) int availabilityStatus; // @synthesize availabilityStatus=_availabilityStatus;
@property(copy, nonatomic) NSString *storeId; // @synthesize storeId=_storeId;
@property(nonatomic) int type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;

@end

