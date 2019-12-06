//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoImaging/PIAdjustmentController.h>

@class NSDictionary;

@interface PIDepthAdjustmentController : PIAdjustmentController
{
}

+ (id)apertureKey;
+ (id)depthInfoKey;
- (id)capturedAperture;
@property(nonatomic) double aperture;
@property(copy, nonatomic) NSDictionary *depthInfo;
- (BOOL)canRenderDepth;
- (id)initWithAdjustment:(id)arg1;

@end

