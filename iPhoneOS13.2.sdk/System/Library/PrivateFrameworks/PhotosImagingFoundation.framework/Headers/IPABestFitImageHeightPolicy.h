//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosImagingFoundation/IPAImageSizePolicy.h>

@interface IPABestFitImageHeightPolicy : IPAImageSizePolicy
{
    double _fitHeight;
}

- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (double)transformScaleForSize:(CGSize)arg1;
- (CGSize)transformSize:(CGSize)arg1;
- (BOOL)isBestFitPolicy;
- (id)initWithHeight:(double)arg1;

@end

