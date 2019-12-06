//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface CUBluetoothDevice : NSObject
{
    BOOL _magicPaired;
    BOOL _supportsAACPService;
    BOOL _present;
    unsigned int _connectedServices;
    int _colorCode;
    unsigned int _deviceFlags;
    int _primaryPlacement;
    int _secondaryPlacement;
    unsigned int _productIdentifier;
//     CDStruct_83abfce7 _address;
    NSString *_addressString;
    NSUUID *_identifier;
    NSString *_manufacturer;
    NSString *_modelNumber;
    NSString *_name;
}

@property(nonatomic) BOOL present; // @synthesize present=_present;
@property(nonatomic) BOOL supportsAACPService; // @synthesize supportsAACPService=_supportsAACPService;
@property(nonatomic) unsigned int productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(nonatomic) int secondaryPlacement; // @synthesize secondaryPlacement=_secondaryPlacement;
@property(nonatomic) int primaryPlacement; // @synthesize primaryPlacement=_primaryPlacement;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *modelNumber; // @synthesize modelNumber=_modelNumber;
@property(copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(nonatomic) BOOL magicPaired; // @synthesize magicPaired=_magicPaired;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned int deviceFlags; // @synthesize deviceFlags=_deviceFlags;
@property(nonatomic) int colorCode; // @synthesize colorCode=_colorCode;
@property(nonatomic) unsigned int connectedServices; // @synthesize connectedServices=_connectedServices;
@property(copy, nonatomic) NSString *addressString; // @synthesize addressString=_addressString;
// @property(nonatomic) CDStruct_83abfce7 address; // @synthesize address=_address;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)init;

@end

