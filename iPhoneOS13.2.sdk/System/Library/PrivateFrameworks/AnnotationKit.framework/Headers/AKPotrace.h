//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AKPotrace : NSObject
{
    CGPathRef _cachedPath;
//     struct potrace_bitmap_s _potraceBitmap;
//     struct potrace_param_s _potraceParameters;
}

// + (CGPathRef)newCGPathFromPotracePath:(struct potrace_path_s )arg1;
- (void)_generatePath;
- (void)_clearPathIfNecessary;
@property double opttolerance;
@property int opticurve;
@property double alphamax;
@property int turnpolicy;
@property int turdsize;
- (CGPathRef)CGPath;
- (void)dealloc;
- (id)initWithCGImage:(CGImageRef)arg1 flipped:(BOOL)arg2 whiteIsInside:(BOOL)arg3;

@end

