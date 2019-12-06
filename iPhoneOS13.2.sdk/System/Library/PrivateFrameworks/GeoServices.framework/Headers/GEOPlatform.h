//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOPlatform : NSObject
{
}

+ (id)sharedPlatform;
+ (BOOL)isRunningInGeod;
+ (void)setIsRunningInGeod:(BOOL)arg1;
- (double)deviceScreenScale;
- (long long)deviceScreenHeightInPixels;
- (long long)deviceScreenWidthInPixels;
- (id)clientCapabilities;
- (BOOL)isCellDataPossible;
- (BOOL)supportsForceTouch;
- (BOOL)supportsNavigation;
- (BOOL)supportsRealisticTiles;
- (BOOL)mapsFeatureFreedomEnabled;
- (BOOL)_deviceSupportsNavigation;
- (id)deviceCountrySKUForServiceRequests;
- (id)deviceCountrySKU;
- (id)hardwareModel;
- (id)hardwareIdentifier;
- (id)osAndBuildVersion;
- (id)buildVersion;
- (id)osVersion;
- (id)productName;
- (BOOL)isInternalInstall;
- (id)init;

@end

