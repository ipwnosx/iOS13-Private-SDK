//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXPhotoPickerSettings : PXSettings
{
    BOOL _useLibraryPresentation;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) BOOL useLibraryPresentation; // @synthesize useLibraryPresentation=_useLibraryPresentation;
- (void)setDefaultValues;
- (id)parentSettings;

@end

