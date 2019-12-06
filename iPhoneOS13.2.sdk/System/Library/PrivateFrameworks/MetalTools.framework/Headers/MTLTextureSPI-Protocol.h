//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLResourceSPI-Protocol.h>
#import <MetalTools/MTLTexture-Protocol.h>

@protocol MTLTexture;

@protocol MTLTextureSPI <MTLTexture, MTLResourceSPI>
@property(readonly) BOOL isDrawable;
@property(readonly) NSUInteger numFaces;
@property(readonly) unsigned int swizzleKey;
@property(readonly) long long compressionFeedback;
@property(readonly) BOOL isCompressed;
@property(readonly) NSUInteger rotation;
@property(readonly) NSUInteger iosurfacePlane;
// @property(readonly) struct __IOSurface iosurface;

@optional
@property(readonly) NSUInteger sparseSurfaceDefaultValue;
@property(nonatomic) NSUInteger resourceIndex;
@property(readonly) NSUInteger uniqueIdentifier;
- (void)generateMipmapLevel:(NSUInteger)arg1 slice:(NSUInteger)arg2;
- (BOOL)canGenerateMipmapLevels;
- (id <MTLTexture>)newCompressedTextureViewWithPixelFormat:(NSUInteger)arg1 textureType:(NSUInteger)arg2 level:(NSUInteger)arg3 slice:(NSUInteger)arg4;
// - (void)replaceRegion:(CDStruct_1e3be3a8)arg1 mipmapLevel:(NSUInteger)arg2 slice:(NSUInteger)arg3 withBytes:(const void *)arg4 bytesPerRow:(NSUInteger)arg5 bytesPerImage:(NSUInteger)arg6 options:(NSUInteger)arg7;
// - (void)getBytes:(void )arg1 bytesPerRow:(NSUInteger)arg2 bytesPerImage:(NSUInteger)arg3 fromRegion:(CDStruct_1e3be3a8)arg4 mipmapLevel:(NSUInteger)arg5 slice:(NSUInteger)arg6 options:(NSUInteger)arg7;
@end

