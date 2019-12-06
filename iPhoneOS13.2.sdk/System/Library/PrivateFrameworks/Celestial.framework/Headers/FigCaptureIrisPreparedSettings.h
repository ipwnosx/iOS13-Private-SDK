//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Celestial/FigXPCCoding-Protocol.h>

@class NSArray, NSString;

@interface FigCaptureIrisPreparedSettings : NSObject <FigXPCCoding, NSCopying>
{
    long long _settingsID;
    unsigned int _processedOutputFormat;
    unsigned int _rawOutputFormat;
    unsigned int _outputWidth;
    unsigned int _outputHeight;
    unsigned int _bracketedImageCount;
    int _qualityPrioritization;
    int _HDRMode;
    int _digitalFlashMode;
    NSArray *_bravoConstituentImageDeliveryDeviceTypes;
}

@property(copy, nonatomic) NSArray *bravoConstituentImageDeliveryDeviceTypes; // @synthesize bravoConstituentImageDeliveryDeviceTypes=_bravoConstituentImageDeliveryDeviceTypes;
@property(nonatomic) int digitalFlashMode; // @synthesize digitalFlashMode=_digitalFlashMode;
@property(nonatomic) int HDRMode; // @synthesize HDRMode=_HDRMode;
@property(nonatomic) int qualityPrioritization; // @synthesize qualityPrioritization=_qualityPrioritization;
@property(nonatomic) unsigned int bracketedImageCount; // @synthesize bracketedImageCount=_bracketedImageCount;
@property(nonatomic) unsigned int rawOutputFormat; // @synthesize rawOutputFormat=_rawOutputFormat;
@property(nonatomic) unsigned int outputHeight; // @synthesize outputHeight=_outputHeight;
@property(nonatomic) unsigned int outputWidth; // @synthesize outputWidth=_outputWidth;
@property(nonatomic) unsigned int processedOutputFormat; // @synthesize processedOutputFormat=_processedOutputFormat;
@property(nonatomic) long long settingsID; // @synthesize settingsID=_settingsID;
- (id)figCaptureStillImageSettingsRepresentation;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)dealloc;
- (id)init;

@end

