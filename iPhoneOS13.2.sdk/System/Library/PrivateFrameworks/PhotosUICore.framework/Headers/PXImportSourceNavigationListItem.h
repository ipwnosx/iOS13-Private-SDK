//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXNavigationListItem.h>

@class PHImportSource, PHPhotoLibrary, UIImage;

@interface PXImportSourceNavigationListItem : PXNavigationListItem
{
    PHImportSource *_importSource;
    PHPhotoLibrary *_photoLibrary;
}

@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) PHImportSource *importSource; // @synthesize importSource=_importSource;
// - (void).cxx_destruct;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)representedObject;
- (BOOL)isRemovable;
- (id)imageName;
@property(readonly, nonatomic) UIImage *image;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 itemCount:(long long)arg3;
- (id)initWithImportSource:(id)arg1 photoLibrary:(id)arg2;

@end

