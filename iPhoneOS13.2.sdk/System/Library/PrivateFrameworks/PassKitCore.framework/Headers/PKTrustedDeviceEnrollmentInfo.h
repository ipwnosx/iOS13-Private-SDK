//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface PKTrustedDeviceEnrollmentInfo : NSObject <NSSecureCoding>
{
    BOOL _supportsAccessExpressMode;
    NSString *_deviceName;
    NSString *_deviceSerialNumber;
    NSString *_deviceUDID;
    NSString *_productType;
    NSString *_secureElementIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL supportsAccessExpressMode; // @synthesize supportsAccessExpressMode=_supportsAccessExpressMode;
@property(retain, nonatomic) NSString *secureElementIdentifier; // @synthesize secureElementIdentifier=_secureElementIdentifier;
@property(retain, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(retain, nonatomic) NSString *deviceUDID; // @synthesize deviceUDID=_deviceUDID;
@property(retain, nonatomic) NSString *deviceSerialNumber; // @synthesize deviceSerialNumber=_deviceSerialNumber;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

