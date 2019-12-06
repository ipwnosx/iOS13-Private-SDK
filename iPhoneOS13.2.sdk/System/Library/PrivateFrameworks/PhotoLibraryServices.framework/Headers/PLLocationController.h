//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, NSDictionary, NSMutableArray, NSString, PLPhotoLibrary;

@interface PLLocationController : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    NSMutableArray *_locationPendingAssets;
    NSDictionary *_exifDictionary;
    NSString *_locationStr;
    BOOL _isEnabled;
    BOOL _isUpdating;
    BOOL _isHeadingEnabled;
    PLPhotoLibrary *_photoLibrary;
}

+ (id)sharedInstance;
+ (void)setUsesEffectiveBundleIdentifier:(BOOL)arg1;
+ (BOOL)usesEffectiveBundleIdentifier;
// - (void).cxx_destruct;
- (void)_assetContainerChanged:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)_updatePendingAssets;
- (void)addLocationToMediaWithAssetURLWhenAvailable:(id)arg1 deviceOrientation:(int)arg2 cameraWasRearFacing:(BOOL)arg3;
- (BOOL)_addLocationToAsset:(id)arg1;
- (id)photoLibrary;
- (id)locationString;
- (id)locationDictionaryForImageWithDeviceOrientation:(int)arg1 rearFacingCamera:(BOOL)arg2;
- (id)location;
- (void)_stopUpdating;
- (void)_startUpdating;
- (void)setHeadingEnabled:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)_applicationStateChanged:(id)arg1;
- (void)_updateLocationRunState;
- (void)dealloc;
- (id)init;

@end

