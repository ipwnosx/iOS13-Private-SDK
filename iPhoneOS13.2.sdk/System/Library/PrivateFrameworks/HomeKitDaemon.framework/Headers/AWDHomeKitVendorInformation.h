//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface AWDHomeKitVendorInformation : PBCodable <NSCopying>
{
    NSString *_firmwareVersion;
    NSString *_manufacturer;
    NSString *_model;
    NSString *_name;
    NSString *_productData;
}

@property(retain, nonatomic) NSString *productData; // @synthesize productData=_productData;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
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
@property(readonly, nonatomic) BOOL hasProductData;
@property(readonly, nonatomic) BOOL hasName;
@property(readonly, nonatomic) BOOL hasFirmwareVersion;
@property(readonly, nonatomic) BOOL hasModel;
@property(readonly, nonatomic) BOOL hasManufacturer;

@end

