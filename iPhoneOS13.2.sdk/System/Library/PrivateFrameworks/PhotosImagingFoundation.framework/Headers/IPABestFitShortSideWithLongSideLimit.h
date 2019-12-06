//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosImagingFoundation/IPAImageSizePolicy.h>

@interface IPABestFitShortSideWithLongSideLimit : IPAImageSizePolicy
{
    long long _nominalShortSide;
    long long _minLongSide;
    long long _maxLongSide;
}

- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (double)transformScaleForSize:(CGSize)arg1;
- (CGSize)transformSize:(CGSize)arg1;
- (BOOL)isBestFitPolicy;
- (id)initWithNominalShortSide:(long long)arg1 minLongSide:(long long)arg2 maxLongSide:(long long)arg3;

@end

