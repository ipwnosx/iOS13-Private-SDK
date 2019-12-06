//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PXMagazineGrid, PXMagazineRectArray;

@interface PXMagazineLayoutTileMaker : NSObject
{
    PXMagazineGrid *_tileGrid;
    PXMagazineRectArray *_cachedTileRects;
    NSMutableArray *_allFrames;
    double _lastTileWidthPadding;
    double _maxFrameAspectRatio;
    double _minFrameAspectRatio;
    BOOL _startLastPadding;
    NSMutableArray *_sharedTempArray;
    double _normalizedWeights;
    BOOL _layoutFromRightToLeft;
    NSUInteger _numberOfColumns;
    double _tileAspectRatio;
    double _height;
    double _interTileSpacing;
    NSUInteger _maxTilesInFrame;
    CGSize _referenceSize;
    CGSize _defaultTileSize;
}

+ (void)printLayout:(id)arg1 numOfColumns:(NSUInteger)arg2;
+ (void)printInputs:(id)arg1;
+ (void)printPossibleFrames:(NSUInteger)arg1 cellAspectRatio:(double)arg2 maxAspectRatio:(double)arg3 minAspectRato:(double)arg4;
@property(nonatomic) BOOL layoutFromRightToLeft; // @synthesize layoutFromRightToLeft=_layoutFromRightToLeft;
@property(nonatomic) NSUInteger maxTilesInFrame; // @synthesize maxTilesInFrame=_maxTilesInFrame;
@property(nonatomic) double interTileSpacing; // @synthesize interTileSpacing=_interTileSpacing;
@property(readonly, nonatomic) CGSize defaultTileSize; // @synthesize defaultTileSize=_defaultTileSize;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) CGSize referenceSize; // @synthesize referenceSize=_referenceSize;
@property(readonly, nonatomic) double tileAspectRatio; // @synthesize tileAspectRatio=_tileAspectRatio;
// - (void).cxx_destruct;
- (BOOL)checkAndPrintResults:(BOOL)arg1;
- (long long)_availableFrames:(id )arg1 maxReturnCount:(NSUInteger)arg2 forAspectRatio:(double)arg3 weight:(double)arg4 maxWidth:(NSUInteger)arg5;
- (id)_getAllFramesInOrder;
//  (CGRect)_frameFromTileFrame:(struct PXMagazineRect)arg1;
- (BOOL)_findNextTileWithInputs:(id)arg1 atIndex:(NSUInteger)arg2 baseIndex:(NSUInteger)arg3 coordinator:(id)arg4;
- (id)_generateLastTilesWithInputs:(id)arg1 baseIndex:(NSUInteger)arg2 returnFallback:(BOOL)arg3;
- (BOOL)_generateTilesWithInputs:(id)arg1 atIndex:(NSUInteger)arg2 forMaxY:(NSUInteger)arg3 reserveNumberForPadding:(NSUInteger)arg4 outArray:(id)arg5;
- (void)_findNextChunkWithInputs:(id)arg1 fromIndex:(NSUInteger)arg2 outArray:(id)arg3;
- (NSUInteger)_numberOfInputsForLastPadding;
- (id)_generateTilesWithInputs:(id)arg1;
- (void)_resetWithNumberOfAssets:(NSUInteger)arg1;
- (void)_updateDimensionInfos;
- (void)_setRandomSeedWithInputs:(id)arg1;
- (double )_normalizeWeightsByInputs:(id)arg1;
//  (void)_getFrames:(CGRect )arg1 magazineRects:(struct PXMagazineRect )arg2 withInputs:(id)arg3;
- (void)getFrames:(CGRect )arg1 withInputs:(id)arg2;
//  (NSUInteger)getMagazineRects:(struct PXMagazineRect )arg1 withInputs:(id)arg2;
@property(readonly, nonatomic) NSUInteger numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
- (double)_aspectRatioOfInput:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithReferenceSize:(CGSize)arg1 numberOfColumns:(NSUInteger)arg2;

@end

