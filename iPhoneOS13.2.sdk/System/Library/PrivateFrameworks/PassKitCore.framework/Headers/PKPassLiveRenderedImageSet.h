//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassLiveRenderedImageSet : PKPassImageSet
{
    PKImage *_diffuseMaterialPropertyImage;
    PKImage *_ambientMaterialPropertyImage;
    PKImage *_specularMaterialPropertyImage;
    PKImage *_normalMaterialPropertyImage;
    PKImage *_reflectiveMaterialPropertyImage;
    PKImage *_emissionMaterialPropertyImage;
    PKImage *_transparentMaterialPropertyImage;
    PKImage *_multiplyMaterialPropertyImage;
    PKImage *_displacementMaterialPropertyImage;
    PKImage *_ambientOcclusionMaterialPropertyImage;
    PKImage *_selfIlluminationMaterialPropertyImage;
    PKImage *_metalnessMaterialPropertyImage;
    PKImage *_roughnessMaterialPropertyImage;
    PKImage *_overlayMaterialPropertyImage;
}

+ (BOOL)supportsSecureCoding;
+ (unsigned int)currentVersion;
+ (id)archiveName;
+ (BOOL)shouldCache;
+ (long long)imageSetType;
@property(retain, nonatomic) PKImage *overlayMaterialPropertyImage; // @synthesize overlayMaterialPropertyImage=_overlayMaterialPropertyImage;
@property(retain, nonatomic) PKImage *roughnessMaterialPropertyImage; // @synthesize roughnessMaterialPropertyImage=_roughnessMaterialPropertyImage;
@property(retain, nonatomic) PKImage *metalnessMaterialPropertyImage; // @synthesize metalnessMaterialPropertyImage=_metalnessMaterialPropertyImage;
@property(retain, nonatomic) PKImage *selfIlluminationMaterialPropertyImage; // @synthesize selfIlluminationMaterialPropertyImage=_selfIlluminationMaterialPropertyImage;
@property(retain, nonatomic) PKImage *ambientOcclusionMaterialPropertyImage; // @synthesize ambientOcclusionMaterialPropertyImage=_ambientOcclusionMaterialPropertyImage;
@property(retain, nonatomic) PKImage *displacementMaterialPropertyImage; // @synthesize displacementMaterialPropertyImage=_displacementMaterialPropertyImage;
@property(retain, nonatomic) PKImage *multiplyMaterialPropertyImage; // @synthesize multiplyMaterialPropertyImage=_multiplyMaterialPropertyImage;
@property(retain, nonatomic) PKImage *transparentMaterialPropertyImage; // @synthesize transparentMaterialPropertyImage=_transparentMaterialPropertyImage;
@property(retain, nonatomic) PKImage *emissionMaterialPropertyImage; // @synthesize emissionMaterialPropertyImage=_emissionMaterialPropertyImage;
@property(retain, nonatomic) PKImage *reflectiveMaterialPropertyImage; // @synthesize reflectiveMaterialPropertyImage=_reflectiveMaterialPropertyImage;
@property(retain, nonatomic) PKImage *normalMaterialPropertyImage; // @synthesize normalMaterialPropertyImage=_normalMaterialPropertyImage;
@property(retain, nonatomic) PKImage *specularMaterialPropertyImage; // @synthesize specularMaterialPropertyImage=_specularMaterialPropertyImage;
@property(retain, nonatomic) PKImage *ambientMaterialPropertyImage; // @synthesize ambientMaterialPropertyImage=_ambientMaterialPropertyImage;
@property(retain, nonatomic) PKImage *diffuseMaterialPropertyImage; // @synthesize diffuseMaterialPropertyImage=_diffuseMaterialPropertyImage;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)preheatImages;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;

@end

