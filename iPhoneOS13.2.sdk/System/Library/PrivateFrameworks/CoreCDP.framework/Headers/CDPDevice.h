//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDP/CDPDeviceProtocol-Protocol.h>

@class NSData, NSDate, NSDictionary, NSNumber, NSString;

@interface CDPDevice : NSObject <NSCopying, NSSecureCoding, CDPDeviceProtocol>
{
    NSString *_localizedName;
    NSString *_model;
    NSString *_modelVersion;
    NSString *_modelClass;
    NSUInteger _platform;
    NSString *_recordID;
    NSString *_machineID;
    NSData *_simplePublicKey;
    NSDate *_recordDate;
    NSDictionary *_recordInfo;
    BOOL _hasRandomSecret;
    BOOL _hasNumericSecret;
    NSNumber *_numericSecretLength;
    BOOL _isUsingMultipleiCSC;
    NSUInteger _remainingAttempts;
    NSString *_deviceColor;
    NSString *_enclosureColor;
    NSString *_serialNumber;
    BOOL _isCurrentDevice;
    NSString *_localizedDescription;
    NSUInteger _recoveryStatus;
    NSNumber *_coolOffPeriod;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSData *simplePublicKey; // @synthesize simplePublicKey=_simplePublicKey;
@property(copy, nonatomic) NSDictionary *recordInfo; // @synthesize recordInfo=_recordInfo;
@property(retain, nonatomic) NSNumber *coolOffPeriod; // @synthesize coolOffPeriod=_coolOffPeriod;
@property(nonatomic) NSUInteger recoveryStatus; // @synthesize recoveryStatus=_recoveryStatus;
@property(copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(copy, nonatomic) NSString *enclosureColor; // @synthesize enclosureColor=_enclosureColor;
@property(copy, nonatomic) NSString *deviceColor; // @synthesize deviceColor=_deviceColor;
@property(nonatomic) BOOL isCurrentDevice; // @synthesize isCurrentDevice=_isCurrentDevice;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(nonatomic) NSUInteger remainingAttempts; // @synthesize remainingAttempts=_remainingAttempts;
@property(nonatomic) BOOL isUsingMultipleiCSC; // @synthesize isUsingMultipleiCSC=_isUsingMultipleiCSC;
@property(copy, nonatomic) NSNumber *numericSecretLength; // @synthesize numericSecretLength=_numericSecretLength;
@property(nonatomic) BOOL hasNumericSecret; // @synthesize hasNumericSecret=_hasNumericSecret;
@property(nonatomic) BOOL hasRandomSecret; // @synthesize hasRandomSecret=_hasRandomSecret;
@property(copy, nonatomic) NSDate *recordDate; // @synthesize recordDate=_recordDate;
@property(copy, nonatomic) NSString *machineID; // @synthesize machineID=_machineID;
@property(copy, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(nonatomic) NSUInteger platform; // @synthesize platform=_platform;
@property(copy, nonatomic) NSString *modelClass; // @synthesize modelClass=_modelClass;
@property(copy, nonatomic) NSString *modelVersion; // @synthesize modelVersion=_modelVersion;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSUInteger localSecretType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
// - (id)copyWithZone:(_NSZone )arg1;

@end

