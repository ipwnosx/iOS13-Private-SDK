//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXPhotosDataSourceSettings : PXSettings
{
    BOOL _slowBackgroundFetch;
    double _delayChanges;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) double delayChanges; // @synthesize delayChanges=_delayChanges;
@property(nonatomic) BOOL slowBackgroundFetch; // @synthesize slowBackgroundFetch=_slowBackgroundFetch;
- (void)setDefaultValues;
- (id)parentSettings;

@end

