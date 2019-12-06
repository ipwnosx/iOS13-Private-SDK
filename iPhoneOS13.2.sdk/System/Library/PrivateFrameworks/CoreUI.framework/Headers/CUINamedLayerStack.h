//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUINamedLookup.h>

@class CUIThemeRendition, NSArray;

@interface CUINamedLayerStack : CUINamedLookup
{
    NSArray *_layers;
    CUIThemeRendition *_flattenedImageRendition;
    CUIThemeRendition *_radiosityImageRendition;
}

+ (void)radiosityImageWithImage:(CGImageRef)arg1 displayScale:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (CGImageRef)createRadiosityImageWithImage:(CGImageRef)arg1 displayScale:(long long)arg2;
// + (struct vImage_Buffer)_doRadiosityBlurOnPixelBuffer:(void )arg1 bytesPerRow:(NSUInteger)arg2 bitsPerPixel:(NSUInteger)arg3 width:(NSUInteger)arg4 height:(NSUInteger)arg5 scaleFactor:(NSUInteger)arg6 usesGaussianBlur:(BOOL )arg7 adjustedSize:(CGSize )arg8;
@property(retain, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void)dealloc;
@property(readonly, nonatomic) CGImageRef radiosityImage;
@property(readonly, nonatomic) CGImageRef flattenedImage;
- (id)layerImageAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) CGSize size;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(NSUInteger)arg3 resolvingWithBlock:(CDUnknownBlockType)arg4;

@end

