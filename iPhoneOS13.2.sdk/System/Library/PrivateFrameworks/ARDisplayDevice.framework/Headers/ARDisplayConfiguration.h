//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class MISSING_TYPE, NSArray, NSDate, NSNumber, NSString;

@interface ARDisplayConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_vendorName;
    NSString *_productName;
    NSString *_version;
    NSArray *_pointOfView;
    long long _deviceOrientation;
    long long _displayMode;
    long long _markerAnchor;
    NSNumber *_markerPosition;
    long long _verticalAlignmentAnchor;
    NSNumber *_verticalAlignmentPosition;
    NSString *_vendorID;
    NSString *_productID;
    NSDate *_date;
    long long _heldState;
    NSUInteger _colorFormat;
    NSUInteger _depthFormat;
    long long _configVersion;
    long long _cameraOrientation;
    double _drawableWidth;
    double _drawableHeight;
    NSNumber *_markerPoint;
    NSNumber *_verticalMarkerPoint;
    double _pixelWidth;
    double _pixelHeight;
    double _width;
    double _height;
    double _diagonal;
    MISSING_TYPE *_reflectedWhitePoint;
    MISSING_TYPE *_transmittedWhitePoint;
//     CDStruct_14d5dc5e _appPoint;
}

+ (void)setScreenProperties:(double)arg1 drawableWidth:(double)arg2 drawableHeight:(double)arg3;
+ (double)deviceHeight;
+ (double)deviceWidth;
+ (double)devicePPI;
+ (BOOL)supportsSecureCoding;
@property double diagonal; // @synthesize diagonal=_diagonal;
@property double height; // @synthesize height=_height;
@property double width; // @synthesize width=_width;
@property double pixelHeight; // @synthesize pixelHeight=_pixelHeight;
@property double pixelWidth; // @synthesize pixelWidth=_pixelWidth;
@property(retain) NSNumber *verticalMarkerPoint; // @synthesize verticalMarkerPoint=_verticalMarkerPoint;
@property(retain) NSNumber *markerPoint; // @synthesize markerPoint=_markerPoint;
// @property CDStruct_14d5dc5e appPoint; // @synthesize appPoint=_appPoint;
@property double drawableHeight; // @synthesize drawableHeight=_drawableHeight;
@property double drawableWidth; // @synthesize drawableWidth=_drawableWidth;
@property(nonatomic) long long cameraOrientation; // @synthesize cameraOrientation=_cameraOrientation;
@property(nonatomic) long long configVersion; // @synthesize configVersion=_configVersion;
@property(nonatomic) NSUInteger depthFormat; // @synthesize depthFormat=_depthFormat;
@property(nonatomic) NSUInteger colorFormat; // @synthesize colorFormat=_colorFormat;
@property(nonatomic) long long heldState; // @synthesize heldState=_heldState;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *productID; // @synthesize productID=_productID;
@property(retain, nonatomic) NSString *vendorID; // @synthesize vendorID=_vendorID;
@property(retain, nonatomic) NSNumber *verticalAlignmentPosition; // @synthesize verticalAlignmentPosition=_verticalAlignmentPosition;
@property(nonatomic) long long verticalAlignmentAnchor; // @synthesize verticalAlignmentAnchor=_verticalAlignmentAnchor;
@property(retain, nonatomic) NSNumber *markerPosition; // @synthesize markerPosition=_markerPosition;
@property(nonatomic) long long markerAnchor; // @synthesize markerAnchor=_markerAnchor;
@property(nonatomic) MISSING_TYPE *transmittedWhitePoint; // @synthesize transmittedWhitePoint=_transmittedWhitePoint;
@property(nonatomic) MISSING_TYPE *reflectedWhitePoint; // @synthesize reflectedWhitePoint=_reflectedWhitePoint;
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) long long deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(retain, nonatomic) NSArray *pointOfView; // @synthesize pointOfView=_pointOfView;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *deviceName;
- (id)deviceID;
@property(retain, nonatomic) NSArray *povConfig;
- (void)mapMarkerToDeviceCoordinates:(double)arg1 fullScreenWidth:(double)arg2 fullScreenHeight:(double)arg3 screenWidth:(double)arg4 screenHeight:(double)arg5;
- (void)mapToDeviceCoordinates:(double)arg1 fullScreenWidth:(double)arg2 fullScreenHeight:(double)arg3 screenWidth:(double)arg4 screenHeight:(double)arg5 cropX:(double)arg6 cropY:(double)arg7;
- (id)optimizedConfigurationWithOptions:(long long)arg1;
- (BOOL)transmittedWhitePointAvailvable;
- (BOOL)reflectedWhitePointAvailable;
- (BOOL)isWorn;
- (BOOL)isHandheld;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)povStringInternal;
- (id)povString;
- (id)depthFormatString;
- (id)colorFormatString;
- (id)heldStateString;
- (id)displayModeString;
- (id)cameraOrientationString;
- (id)deviceOrientationString;
- (id)markerAnchorString;
- (id)descriptionInternal;
- (id)description;
- (void)updateFormat:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)doInit;
- (void)updateResolution;
- (id)initInternal;
- (id)init;

@end

