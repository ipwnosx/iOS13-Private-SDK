//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PLDeviceConfiguration, PLImageFormat;

@interface PLFormatChooser : NSObject
{
    PLDeviceConfiguration *_deviceConfiguration;
    PLImageFormat *_posterThumbnailFormat;
    NSArray *_supportedDerivativeFormats;
    PLImageFormat *_fullScreenFormatForCurrentDevice;
    PLImageFormat *_indexSheetUnbakedFormat;
    PLImageFormat *_largestUncroppedNonJPEGThumbnailFormat;
    PLImageFormat *_masterThumbnailFormat;
    PLImageFormat *_portraitScrubberThumbnailFormat;
    PLImageFormat *_landscapeScrubberThumbnailFormat;
}

+ (CGSize)_desiredImageSizeForRequestedViewSizeInPixels:(CGSize)arg1 isAspectFill:(BOOL)arg2 srcAspectRatio:(double)arg3;
+ (id)_suppportedFullSizeFormatIDs;
+ (id)defaultFormatChooser;
@property(readonly, nonatomic) PLImageFormat *landscapeScrubberThumbnailFormat; // @synthesize landscapeScrubberThumbnailFormat=_landscapeScrubberThumbnailFormat;
@property(readonly, nonatomic) PLImageFormat *portraitScrubberThumbnailFormat; // @synthesize portraitScrubberThumbnailFormat=_portraitScrubberThumbnailFormat;
@property(readonly, nonatomic) PLImageFormat *masterThumbnailFormat; // @synthesize masterThumbnailFormat=_masterThumbnailFormat;
@property(readonly, nonatomic) PLImageFormat *largestUncroppedNonJPEGThumbnailFormat; // @synthesize largestUncroppedNonJPEGThumbnailFormat=_largestUncroppedNonJPEGThumbnailFormat;
@property(readonly, nonatomic) PLImageFormat *indexSheetUnbakedFormat; // @synthesize indexSheetUnbakedFormat=_indexSheetUnbakedFormat;
@property(readonly, nonatomic) PLImageFormat *fullScreenFormatForCurrentDevice; // @synthesize fullScreenFormatForCurrentDevice=_fullScreenFormatForCurrentDevice;
@property(readonly, nonatomic) NSArray *supportedDerivativeFormats; // @synthesize supportedDerivativeFormats=_supportedDerivativeFormats;
// - (void).cxx_destruct;
- (CGSize)posterThumbnailSize;
- (void)chooseFormatsForSize:(CGSize)arg1 specificVersionType:(long long)arg2 contentMode:(long long)arg3 demoteFactor:(double)arg4 srcAspectRatio:(double)arg5 degradedFormatPolicy:(long long)arg6 hasAdjustmentsHandler:(CDUnknownBlockType)arg7 desiredImagePixelSize:(CGSize )arg8 bestFormat:(id )arg9 degradedFormat:(id )arg10;
- (id)_fastestDegradedFormatFallingBackFromFormat:(id)arg1;
- (id)_standardDegradedFormatFallingBackFromFormat:(id)arg1;
- (id)_nextLargestAcceptableFormatForFormat:(id)arg1;
- (id)_bestFormatWithSize:(CGSize)arg1 specificVersionType:(long long)arg2 contentMode:(long long)arg3 demoteFactor:(double)arg4 srcAspectRatio:(double)arg5 hasAdjustmentsHandler:(CDUnknownBlockType)arg6 desiredImagePixelSize:(CGSize )arg7;
- (id)derivativeFormatThatFitsSize:(CGSize)arg1 contentMode:(long long)arg2 demoteFactor:(double)arg3 srcAspectRatio:(double)arg4 desiredImagePixelSize:(CGSize )arg5;
- (id)initWithDeviceConfiguration:(id)arg1;

@end

