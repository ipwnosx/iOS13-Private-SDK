//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDMediaInfo.h>

#import <TSReading/TSDContainerInfo-Protocol.h>
#import <TSReading/TSDMixing-Protocol.h>
#import <TSReading/TSDReducableInfo-Protocol.h>
#import <TSReading/TSKTransformableObject-Protocol.h>
#import <TSReading/TSSPresetSource-Protocol.h>
#import <TSReading/TSSThemedObject-Protocol.h>

@class NSObject, TSDBezierPath, TSDImageAdjustments, TSDInfoGeometry, TSDMaskInfo, TSDMediaStyle, TSPData;
@protocol TSDContainerInfo;

@interface TSDImageInfo : TSDMediaInfo <TSDContainerInfo, TSDMixing, TSSPresetSource, TSSThemedObject, TSKTransformableObject, TSDReducableInfo>
{
    TSPData *mImageData;
    TSPData *mThumbnailImageData;
    TSPData *mOriginalImageData;
    BOOL mInterpretsUntaggedImageDataAsGeneric;
    TSDImageAdjustments *mImageAdjustments;
    TSPData *mAdjustedImageData;
    TSPData *mThumbnailAdjustedImageData;
    TSPData *mEnhancedImageData;
    TSDMediaStyle *mStyle;
    TSDMaskInfo *mMaskInfo;
    TSDBezierPath *mInstantAlphaPath;
    TSDBezierPath *mTracedPath;
    CGSize mNaturalSize;
}

+ (id)presetKinds;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 reservedCount:(NSUInteger)arg4;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)bootstrapPropertyMapForPresetIndex:(NSUInteger)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (void)adjustIncomingImageGeometry:(id)arg1 maskGeometry:(id)arg2 forImageData:(id)arg3 maskedWithInstantAlphaPath:(id)arg4 withNaturalSize:(CGSize)arg5 forTargetImageGeometry:(id)arg6 withTargetMaskGeometry:(id)arg7;
@property(retain, nonatomic) TSPData *thumbnailAdjustedImageData; // @synthesize thumbnailAdjustedImageData=mThumbnailAdjustedImageData;
@property(retain, nonatomic) TSPData *adjustedImageData; // @synthesize adjustedImageData=mAdjustedImageData;
@property(copy, nonatomic) TSDImageAdjustments *imageAdjustments; // @synthesize imageAdjustments=mImageAdjustments;
@property(retain, nonatomic) TSDBezierPath *instantAlphaPath; // @synthesize instantAlphaPath=mInstantAlphaPath;
@property(retain, nonatomic) TSDMaskInfo *maskInfo; // @synthesize maskInfo=mMaskInfo;
- (id)style;
@property(retain, nonatomic) TSPData *originalImageData; // @synthesize originalImageData=mOriginalImageData;
@property(retain, nonatomic) TSPData *thumbnailImageData; // @synthesize thumbnailImageData=mThumbnailImageData;
@property(retain, nonatomic) TSPData *imageData; // @synthesize imageData=mImageData;
- (void)acceptVisitor:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
@property(nonatomic) CGSize naturalSize;
@property(readonly, nonatomic) TSDBezierPath *tracedPath;
- (void)updateGeometryToReplaceMediaInfo:(id)arg1;
- (CGPoint)centerForReplacingWithNewMedia;
- (BOOL)isOpaque;
- (BOOL)isValid;
- (BOOL)isPDF;
- (id)updatedMaskInfoGeometryForImageDraggedBy:(CGPoint)arg1;
- (id)defaultMaskInfo;
- (id)defaultMaskInfoWithContext:(id)arg1;
- (BOOL)maskCanBeReset;
- (BOOL)isMasked;
- (id)objectForProperty:(int)arg1;
- (CGSize)rawDataSize;
- (CGSize)defaultOriginalSize;
- (CGSize)originalSize;
- (void)setStyle:(id)arg1;
- (id)i_thumbnailForImageData:(id)arg1;
@property(nonatomic) BOOL interpretsUntaggedImageDataAsGeneric;
- (id)mediaFileType;
- (id)mediaDisplayName;
- (CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
- (id)imageDatasForReducingFileSizeWithAssociatedHints;
- (CGAffineTransform)computeFullTransform;
- (id)geometryWithMask;
- (id)childInfos;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
@property(readonly, nonatomic) TSDMediaStyle *imageStyle;
- (id)presetKind;
- (Class)repClass;
- (Class)layoutClass;
- (Class)styleClass;
- (void)setExteriorTextWrap:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (id)copyWithContext:(id)arg1 style:(id)arg2;
- (void)dealloc;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 imageData:(id)arg4 originalImageData:(id)arg5;
@property(retain, nonatomic) TSPData *enhancedImageData;

@end

