//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUINamedLookup.h>

@class CUICatalog;

@interface CUINamedVectorGlyph : CUINamedLookup
{
    double _pointSize;
    double _lookedupScaleFactor;
    CGImageRef _cgImageRef;
    double _fontMatchingScaleFactor;
    CUICatalog *_catalog;
    unsigned int _generatedImage:1;
}

// - (void).cxx_destruct;
- (BOOL)generatedImage;
@property(nonatomic) double fontMatchingScaleFactor;
- (CGImageRef)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(CGSize)arg2;
- (CGSVGDocument )referenceGlyph;
@property(readonly, nonatomic) CGRect contentBounds;
@property(readonly, nonatomic) CGRect alignmentRect;
- (CGImageRef)image;
- (id)knownAvailableVectorSizes;
@property(readonly, nonatomic) BOOL isFlippable;
- (double)referencePointSize;
@property(readonly, nonatomic) double capHeight;
@property(readonly, nonatomic) double baselineOffset;
- (double)_requestedPointSizeRatio;
- (double)pointSize;
- (long long)glyphWeight;
- (long long)glyphSize;
- (double)scale;
- (void)dealloc;
- (id)initWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 pointSize:(double)arg4 fromCatalog:(id)arg5 usingRenditionKey:(id)arg6 fromTheme:(NSUInteger)arg7;

@end

