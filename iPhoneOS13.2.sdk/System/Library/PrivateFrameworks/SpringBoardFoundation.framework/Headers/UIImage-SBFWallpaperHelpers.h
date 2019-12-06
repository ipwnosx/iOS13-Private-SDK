//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface UIImage (SBFWallpaperHelpers)
+ (id)sbf_thumbnailImageForImage:(id)arg1;
+ (id)sbf_imageWithIOSurface:(id)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)sbf_imageFromBGRAContextWithSize:(CGSize)arg1 scale:(double)arg2 colorSpace:(CGColorSpaceRef)arg3 withAlpha:(BOOL)arg4 pool:(id)arg5 drawing:(CDUnknownBlockType)arg6 encapsulation:(CDUnknownBlockType)arg7;
+ (id)sbf_imageFromContextWithSize:(CGSize)arg1 scale:(double)arg2 type:(long long)arg3 pool:(id)arg4 drawing:(CDUnknownBlockType)arg5 encapsulation:(CDUnknownBlockType)arg6;
+ (id)sbf_imageFromContextWithSize:(CGSize)arg1 scale:(double)arg2 type:(long long)arg3 pool:(id)arg4 drawing:(CDUnknownBlockType)arg5;
+ (NSUInteger)sbf_bytesNeededForSize:(CGSize)arg1 scale:(double)arg2 withContextType:(long long)arg3;
- (id)sbf_imageMaskedByColor:(id)arg1;
- (id)sbf_resizeImageToSize:(CGSize)arg1;
- (id)sbf_resizeImageToSize:(CGSize)arg1 preservingAspectRatio:(BOOL)arg2;
- (id)sbf_scaleImage:(double)arg1 canUseIOSurface:(BOOL)arg2;
- (id)sbf_scaleImage:(double)arg1;
- (id)sbf_cropImageWithRect:(CGRect)arg1 outputSize:(CGSize)arg2 preservingAspectRatio:(BOOL)arg3 canUseIOSurface:(BOOL)arg4;
- (id)sbf_cropImageWithRect:(CGRect)arg1 outputSize:(CGSize)arg2 canUseIOSurface:(BOOL)arg3;
- (id)sbf_cropImageWithRect:(CGRect)arg1 outputSize:(CGSize)arg2 preservingAspectRatio:(BOOL)arg3;
- (id)sbf_cropImageWithRect:(CGRect)arg1 outputSize:(CGSize)arg2;
- (long long)sbf_EXIFOrientation;
- (id)sbf_ATXSafeCGImageBackedImage;
- (id)sbf_imageByConvertingToColorSpace:(CGColorSpaceRef)arg1 type:(long long)arg2;
- (id)sbf_imageUsingContextType:(long long)arg1;
- (id)sbf_imageByManipulatingInDeviceColorSpaceWithBlock:(CDUnknownBlockType)arg1;
- (CGColorSpaceRef)sbf_colorSpace;
- (id)sbf_memoryMappedImageWithPool:(id)arg1;
- (id)sbf_downscaledImageByDrawingIntoContextOfType:(long long)arg1 downscaleFactor:(double)arg2;
- (id)sbf_imageByDrawingIntoContextOfType:(long long)arg1;
- (id)sbf_CGImageBackedImageWithMaximumBitsPerComponent:(NSUInteger)arg1 skipCIF10FitsInSRGBCheck:(BOOL)arg2;
- (id)sbf_CGImageBackedImageWithMaximumBitsPerComponent:(NSUInteger)arg1;
- (id)sbf_CGImageBackedImage;
- (id)sbf_imageByTilingCenterPixel;
- (id)sbf_resizedImageForCurrentMagnifyMode;
@end

