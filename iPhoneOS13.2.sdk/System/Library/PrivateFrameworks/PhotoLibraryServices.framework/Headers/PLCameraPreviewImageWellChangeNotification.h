//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLChangeNotification.h>

@class NSString, UIImage;

@interface PLCameraPreviewImageWellChangeNotification : PLChangeNotification
{
    UIImage *_image;
    NSString *_uuid;
}

+ (id)notification;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *assetUUID;
@property(readonly, nonatomic) UIImage *image;
- (id)description;
- (id)object;
- (id)userInfo;
- (id)name;
- (id)init;
- (id)_init;

@end

