//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXFeatureSpecManager.h>

@interface PXPhotosDetailsAssetsSpecManager : PXFeatureSpecManager
{
    NSUInteger _detailsOptions;
}

@property(readonly, nonatomic) NSUInteger detailsOptions; // @synthesize detailsOptions=_detailsOptions;
- (id)createSpec;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(NSUInteger)arg2 detailsOptions:(NSUInteger)arg3;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(NSUInteger)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 detailsOptions:(NSUInteger)arg2;
- (Class)specClass;

@end

