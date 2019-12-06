//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray;

@interface CUIPSDGradientEvaluator : NSObject <NSCoding, NSCopying>
{
    NSArray *colorStops;
    NSArray *colorMidpointLocations;
    NSArray *opacityStops;
    NSArray *opacityMidpointLocations;
    double smoothingCoefficient;
//     struct _psdGradientColor fillColor;
    int blendMode;
    struct {
        unsigned int colorEdgePixel:2;
        unsigned int opacityEdgePixel:2;
        unsigned int isDithered:1;
        unsigned int reserved:3;
    } pgeFlags;
}

+ (void)initialize;
@property(nonatomic) int blendMode; // @synthesize blendMode;
- (void)customizeForDistance:(double)arg1;
- (void)setFillCoefficient:(double)arg1;
- (void)setSmoothingCoefficient:(double)arg1;
- (void)setOpacityStops:(id)arg1 midpoints:(id)arg2;
- (void)setColorStops:(id)arg1 midpoints:(id)arg2;
- (id)description;
- (BOOL)hasEdgePixel;
// - (struct _psdGradientColor)fillColor;
- (double)fillCoefficient;
- (BOOL)isDithered;
- (double)smoothingCoefficient;
- (id)opacityMidpointLocations;
- (id)opacityStops;
- (id)colorMidpointLocations;
- (id)colorStops;
// - (struct _psdGradientColor)_smoothedGradientColorAtLocation:(double)arg1;
- (double)_smoothedInterpolationOfLocation:(double)arg1 betweenLower:(double)arg2 upper:(double)arg3 scaledMidpoint:(double)arg4;
- (void)dealloc;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)initWithColorStops:(id)arg1 colorMidpoints:(id)arg2 opacityStops:(id)arg3 opacityMidpoints:(id)arg4 smoothingCoefficient:(double)arg5 fillColor:(struct _psdGradientColor)arg6 dither:(BOOL)arg7;
- (id)initWithColorStops:(id)arg1 colorMidpoints:(id)arg2 opacityStops:(id)arg3 opacityMidpoints:(id)arg4 smoothingCoefficient:(double)arg5 fillCoefficient:(double)arg6;
- (void)_createOrderedStops:(id )arg1 midpoints:(id )arg2 fromStops:(id)arg3 midpoints:(id)arg4 edgePixel:(long long )arg5;
- (id)_cleanedUpMidpointLocationsFromLocations:(id)arg1;

@end

