//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface TSUImage : NSObject
{
    CGImageRef mCachedSliceableImage;
//     struct __CFDictionary mImageSlices;
    long long mImageSliceCacheLock;
    id mCachedSystemImage;
    long long mCachedImageLock;
}

+ (id)imageWithSize:(CGSize)arg1 drawnUsingBlock:(CDUnknownBlockType)arg2;
+ (id)imageWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)imageWithCGImage:(CGImageRef)arg1;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)allocWithZone:(_NSZone )arg1;
+ (id)imageWithUIImage:(id)arg1;
+ (id)noisePatternWithWidth:(NSUInteger)arg1 height:(NSUInteger)arg2 factor:(double)arg3;
- (void)drawInRect:(CGRect)arg1;
- (void)drawInRect:(CGRect)arg1 context:(CGContextRef )arg2 stretchingCenterWidthBy:(double)arg3;
- (CGImageRef)CGImageForContentsScale:(double)arg1;
- (id)stretchedImageOfSize:(CGSize)arg1 leftCapWidth:(double)arg2 rightCapWidth:(double)arg3 topCapHeight:(double)arg4 bottomCapHeight:(double)arg5;
- (id)PNGRepresentation;
- (id)JPEGRepresentationWithCompressionQuality:(double)arg1;
- (id)TIFFRepresentation;
- (id)imagePartsWithLeftCapWidth:(double)arg1 rightCapWidth:(double)arg2 topCapHeight:(double)arg3 bottomCapHeight:(double)arg4;
- (BOOL)isEmpty;
@property(readonly, nonatomic) long long imageOrientation;
@property(readonly, nonatomic) CGImageRef CGImage;
- (CGImageRef)CGImageForSize:(CGSize)arg1;
- (void)dealloc;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) CGSize size;
- (id)initWithImageSourceRef:(CGImageSource )arg1;
- (id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (id)initWithCGImage:(CGImageRef)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
@property(readonly, nonatomic) UIImage *UIImage;
- (id)initWithUIImage:(id)arg1;

@end

