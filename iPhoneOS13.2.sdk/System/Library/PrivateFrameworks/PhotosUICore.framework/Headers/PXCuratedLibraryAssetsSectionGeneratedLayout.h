//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGGeneratedLayout.h>

@class PXCuratedLibrarySectionGeometryDescriptor;
@protocol PXDisplayAsset;

@interface PXCuratedLibraryAssetsSectionGeneratedLayout : PXGGeneratedLayout
{
    id <PXDisplayAsset> _presentedKeyAsset;
    CGRect _presentedKeyAssetRect;
}

@property(nonatomic) CGRect presentedKeyAssetRect; // @synthesize presentedKeyAssetRect=_presentedKeyAssetRect;
@property(retain, nonatomic) id <PXDisplayAsset> presentedKeyAsset; // @synthesize presentedKeyAsset=_presentedKeyAsset;
// - (void).cxx_destruct;
- (void)enumerateHeroSpritesInRect:(CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) CGRect sectionRect;
- (void)getSpriteZPosition:(float )arg1 clippingRect:(CGRect )arg2 forSpriteKind:(long long)arg3;
@property(readonly, nonatomic) PXCuratedLibrarySectionGeometryDescriptor *presentedGeometryDescriptor;
- (void)spritesDidUpdate;
- (id)init;

@end

